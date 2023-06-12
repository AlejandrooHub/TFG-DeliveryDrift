// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "DDChaosVehicleCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class DELIVERYDRIFT_API ADDChaosVehicleCharacter : public AWheeledVehiclePawn
{
	GENERATED_BODY()

	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* CharacterMeshComponent;

	
public:	
	
	ADDChaosVehicleCharacter();
};
