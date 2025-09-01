// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Components/SphereComponent.h"
#include "Weapon.generated.h"


UCLASS()
class PANGAEA_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeapon();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class APangaeaCharacter* Holder = nullptr;

	UPROPERTY(EditAnywhere, Category = "Weapon Params")
	float Strength = 10;

	// 不能放在protected
	UFUNCTION()
	void OnWeaponBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	bool IsWithinAttackRange(float AttackRange, AActor* Target);

	/** Clears the list of actors that have been hit during an attack swing. */
	void ClearHitActors();

	/** Returns the static mesh component of the weapon. */
	FORCEINLINE UStaticMeshComponent* GetStaticMeshComponent() const { return _StaticMesh; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* _StaticMesh;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private: // 
	UPROPERTY()
	TArray<AActor*> HitActors;
};