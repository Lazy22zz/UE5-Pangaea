// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "Enemy.h"

void AEnemyController::MakeAttackDecision(APawn* targetPawn)
{
	AEnemy* controlledCharacter = Cast<AEnemy>(GetPawn());
	if (targetPawn)
	{
		double dist = FVector::Dist2D(targetPawn->GetActorLocation(), GetPawn()->GetTargetLocation());
		
		if (dist <= controlledCharacter->AttackRange && controlledCharacter->CanAttack())
		{
			controlledCharacter->Attack();
		}
	}
	
}