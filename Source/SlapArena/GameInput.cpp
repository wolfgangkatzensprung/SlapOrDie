#include "GameInput.h"

// Sets default values
AGameInput::AGameInput()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameInput::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameInput::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

enum class EInputDeviceType
{
    None,
    KeyboardAndMouse,
    Gamepad
};
