#include "BasicMovement.h"
#include "UObject/ConstructorHelpers.h"
#include "BasicMovementCharacter.h"

ABasicMovementGameMode::ABasicMovementGameMode()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Script/BasicMovement.BasicMovementCharacter"));
    if (PlayerPawnClassFinder.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnClassFinder.Class;
    }
}
