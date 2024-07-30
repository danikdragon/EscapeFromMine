#include "CreateLevel.h"

UCreateLevel::UCreateLevel()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UCreateLevel::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCreateLevel::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

