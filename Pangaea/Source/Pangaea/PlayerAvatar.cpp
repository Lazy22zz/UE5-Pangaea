// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAvatar.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "weapon.h"
#include "PangaeaAnimInstance.h"

// Sets default values
APlayerAvatar::APlayerAvatar()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	auto characterMovement = GetCharacterMovement();
	characterMovement->bOrientRotationToMovement = true; // Rotate character to moving direction
	characterMovement->RotationRate = FRotator(0.f, 640.f, 0.f);
	characterMovement->bConstrainToPlane = true;
	characterMovement->bSnapToPlaneAtStart = true;

	// Create the camera spring arm
	_springArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_springArmComponent->SetupAttachment(RootComponent);		//Attach to the character root
	_springArmComponent->SetUsingAbsoluteRotation(true);		//Don't rotate the arm with the character
	_springArmComponent->TargetArmLength = 800.f;				//Set the arm's length 
	_springArmComponent->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	//Set the arm's rotation (60 degree up)
	_springArmComponent->bDoCollisionTest = false;				//No collision test

	// Create the camera
	_cameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	_cameraComponent->SetupAttachment(_springArmComponent, USpringArmComponent::SocketName);
	//Attach to the spring arm
	_cameraComponent->bUsePawnControlRotation = false;			//Camera rotation is not controllable  
}

// Called when the game starts or when spawned
void APlayerAvatar::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlayerAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	_AnimInstance->Speed = GetCharacterMovement()->Velocity.Size2D();

	/*if (_AttackCountingDown == AttackInterval)
	{
		_AnimInstance->State = ECharacterState::Attack;
	}*/

	if (_AttackCountingDown > 0.0f)
	{
		_AttackCountingDown -= DeltaTime;
	}
}

// Called to bind functionality to input
void APlayerAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerAvatar::AttachWeapon(AWeapon* Weapon)
{
	if (Weapon)
	{
		Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_rSocket"));
		EquippedWeapon = Weapon; // <--- 设置武器引用
	}
}

void APlayerAvatar::DropWeapon()
{
	TArray<AActor*> attachedActors;
	GetAttachedActors(attachedActors, true);
	for (int i = 0; i < attachedActors.Num(); ++i)
	{
		attachedActors[i]->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		attachedActors[i]->SetActorRotation(FQuat::Identity);
		AWeapon* weapon = Cast<AWeapon>(attachedActors[i]);
		if (weapon != nullptr)
		{
			weapon->Holder = nullptr;
		}
	}
	EquippedWeapon = nullptr; // <--- 清空武器引用
}

void APlayerAvatar::Attack()
{
	Super::Attack();

}
