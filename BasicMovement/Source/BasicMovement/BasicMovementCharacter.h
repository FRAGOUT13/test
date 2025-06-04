#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BasicMovementCharacter.generated.h"

UCLASS(config=Game)
class ABasicMovementCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    ABasicMovementCharacter();

protected:
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void MoveForward(float Value);
    void MoveRight(float Value);
};
