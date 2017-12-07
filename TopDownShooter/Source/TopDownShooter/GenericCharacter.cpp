// Fill out your copyright notice in the Description page of Project Settings.

#include "GenericCharacter.h"


// Sets default values
AGenericCharacter::AGenericCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGenericCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGenericCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGenericCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AGenericCharacter::CalculateHealth(float delta) {
	health += delta;
	CheckIfDead();
}

void AGenericCharacter::CheckIfDead() {
	// if health is below 0 character is dead
	health <= 0 ? isDead = true : isDead = false;
	
}

#if WITH_EDITOR
void AGenericCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {

	isDead = false;
	health = 100;

	Super::PostEditChangeProperty(PropertyChangedEvent);
	CheckIfDead();
	
}
#endif