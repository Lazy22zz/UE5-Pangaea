// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PangaeaCharacter.generated.h"

class AWeapon;

UCLASS(Blueprintable)
class APangaeaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APangaeaCharacter();

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	int HealthPoints = 100;			//the character's max health points

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float Strength = 5;			//the character's attack strength

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float Armor = 1;				//the character's defense armor

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float AttackRange = 200.0f;		//the character's attack range

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float AttackInterval = 0.5f;	//the character's attack invertval

public:
	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, Category = "Pangaea|Character", meta = (DisplayName = "Get HP"))
	int GetHealthPoints();			//get current health points

	UFUNCTION(BlueprintCallable, Category = "Pangaea|Character")
	bool IsKilled();				//check if the character has been killed

	UFUNCTION(BlueprintCallable, Category = "Pangaea|Character")
	bool CanAttack();

	// Functions to be called by AnimNotifies
	UFUNCTION(BlueprintCallable, Category = "Pangaea|Combat")
	void EnableWeaponCollision();

	UFUNCTION(BlueprintCallable, Category = "Pangaea|Combat")
	void DisableWeaponCollision();

	bool IsAttacking();

	virtual void Attack();
	virtual void Hit(int damage);
	virtual void DieProcess();

protected:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Pangaea|Combat") // <--- Ìí¼ÓÎäÆ÷ÒýÓÃ
	AWeapon* EquippedWeapon;

	virtual void BeginPlay() override;

	class UPangaeaAnimInstance* _AnimInstance;
	int _HealthPoints;
	float _AttackCountingDown;
};

