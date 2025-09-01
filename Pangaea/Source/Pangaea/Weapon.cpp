// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "PlayerAvatar.h"
#include "PangaeaCharacter.h"
#include "DefenseTower.h"

// Sets default values
AWeapon::AWeapon()
{
	_StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	SetRootComponent(_StaticMesh);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	OnActorBeginOverlap.AddDynamic(this, &AWeapon::OnWeaponBeginOverlap);
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Holder == nullptr)
	{
		FQuat rotQuat = FQuat(FRotator(0.0f, 300.0f * DeltaTime, 0.0f));
		AddActorLocalRotation(rotQuat);
	}
}

void AWeapon::ClearHitActors()
{
	HitActors.Empty();
}


void AWeapon::OnWeaponBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	
	APangaeaCharacter* character = Cast<APangaeaCharacter>(OtherActor);

	if (character != nullptr)
	{
		if (Holder == nullptr)
		{
			auto playerAvatar = Cast<APlayerAvatar>(character);

			if (playerAvatar != nullptr)
			{
				Holder = character;
				playerAvatar->DropWeapon();
				playerAvatar->AttachWeapon(this);
			}

		}
		else if (character != Holder &&
			Holder->IsAttacking() &&
			character->CanBeDamaged() &&
			!HitActors.Contains(character))
		{
			HitActors.Add(character); // Add the character to the list of hit actors
			character->Hit(Holder->Strength);

			if (character->IsA(APlayerAvatar::StaticClass()))
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("Hit PlayerAvatar"));
				UE_LOG(LogTemp, Warning, TEXT("Hit PlayerAvatar"));
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Cyan, TEXT("Hit Enemy"));
				UE_LOG(LogTemp, Warning, TEXT("Hit Enemy"));
			}
		}
	}
	else if (Holder != nullptr && Holder->IsA(APangaeaCharacter::StaticClass()) && Holder->IsAttacking())
	{
		auto tower = Cast<ADefenseTower>(OtherActor);

		if (tower != nullptr && 
			tower->CanBeDamaged() && 
			!HitActors.Contains(tower) &&
			IsWithinAttackRange(0.0f, tower))
		{
			HitActors.Add(tower);
			tower->Hit(Strength);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Cyan, TEXT("Hit Tower"));
		}
	}
}

bool AWeapon::IsWithinAttackRange(float AttackRange, AActor* Target)
{
	return (AttackRange <= 0.0f || FVector::Distance(Target->GetActorLocation(), GetActorLocation()) <= AttackRange);
}


