#include "PangaeaAnimInstance.h"
#include "PangaeaCharacter.h"

void UPangaeaAnimInstance::OnStateAnimationEnds()
{
	if (State == ECharacterState::Attack)
	{
		State = ECharacterState::Locomotion;
	}
	else
	{
		APangaeaCharacter* character = Cast<APangaeaCharacter>(GetOwningActor());

		if (State == ECharacterState::Hit)
		{
			if (character->GetHealthPoints() > 0.0f)
			{
				State = ECharacterState::Locomotion;
			}
			else
			{
				State = ECharacterState::Die;
			}
		}
		else if (State == ECharacterState::Die)
		{
			character->DieProcess();
		}
	}
}