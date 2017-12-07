// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericCharacter.generated.h"

UCLASS(Blueprintable)
class TOPDOWNSHOOTER_API AGenericCharacter : public ACharacter
{
	GENERATED_BODY()


public:
	// Character properties for health and isDead
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Generic Character")
		float health = 100;
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Generic Character")
		bool isDead = false;


	// Check if Character is dead
	virtual void CheckIfDead();

	// Calculate Health
	UFUNCTION(BlueprintCallable, Category = "Generic Character")
		virtual void CalculateHealth(float delta);


#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif



	// Sets default values for this character's properties
	AGenericCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
