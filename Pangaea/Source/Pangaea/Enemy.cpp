// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Perception/PawnSensingComponent.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "EnemyController.h"
#include "PangaeaAnimInstance.h"

// Sets default values
AEnemy::AEnemy()
{
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensor"));

	static ConstructorHelpers::FObjectFinder<UBlueprint>blueprint_finder(TEXT("Blueprint'/Game/TopDown/Blueprints/Weapons/Hammer/BP_Hammer.BP_Hammer'"));
	_WeaponClass = (UClass*)blueprint_finder.Object->GeneratedClass;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	_HealthPoints = HealthPoints;

	// 将 _Weapon 修改为 EquippedWeapon
	EquippedWeapon = Cast<AWeapon>(GetWorld()->SpawnActor(_WeaponClass));

	if (EquippedWeapon) // <--- 最好做一个空指针检查
	{
		EquippedWeapon->Holder = this;
		EquippedWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_rSocket"));
	}
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	_AnimInstance->Speed = GetCharacterMovement()->Velocity.Size2D();

	if (_AttackCountingDown == AttackInterval)
	{
		_AnimInstance->State = ECharacterState::Attack;
	}

	if (_AttackCountingDown > 0.0f)
	{
		_AttackCountingDown -= DeltaTime;
	}

	if (_chasedTarget != nullptr && _AnimInstance->State == ECharacterState::Locomotion)
	{
		auto enemyController = Cast<AEnemyController>(GetController());
		enemyController->MakeAttackDecision(_chasedTarget);
	}
}

void AEnemy::Chase(APawn* targetPawn)
{
	if (targetPawn != nullptr && _AnimInstance->State == ECharacterState::Locomotion)
	{
		AEnemyController* enemyController = Cast<AEnemyController>(GetController());
		enemyController->MoveToActor(targetPawn, 90.0f);
	}
	_chasedTarget = targetPawn;
}

void AEnemy::DieProcess()
{
	Super::DieProcess();

	// 将 _Weapon 修改为 EquippedWeapon
	if (EquippedWeapon)
	{
		EquippedWeapon->Destroy();
	}
}

void AEnemy::Attack()
{
	APangaeaCharacter::Attack();

	GetController()->StopMovement();
}