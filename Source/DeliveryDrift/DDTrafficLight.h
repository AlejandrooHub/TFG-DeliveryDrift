// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DDTrafficLight.generated.h"


UENUM(BlueprintType)
enum class LightMode : uint8 {
	Red = 0		UMETA(DisplayName = "Red"),
	Yellow = 1	UMETA(DisplayName = "Yellow"),
	Green = 2	UMETA(DisplayName = "Green"),
};


UCLASS()
class DELIVERYDRIFT_API ADDTrafficLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADDTrafficLight();

	UPROPERTY(BlueprintReadWrite)
	LightMode Light = LightMode::Red;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GreenLightTime = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YellowLightTime = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RedLightTime = 20.0f;

	UFUNCTION(BlueprintCallable)
	void StartTrafficLight(UStaticMeshComponent* SM, UMaterialInterface* Green, UMaterialInterface* Yellow, UMaterialInterface* Red);

	UStaticMeshComponent* SMGlobal;
	UMaterialInterface* GreenGlobal;
	UMaterialInterface* YellowGlobal;
	UMaterialInterface* RedGlobal;

	UFUNCTION()
	void ChangeToGreen();

	UFUNCTION()
	void ChangeToYellow();

	UFUNCTION()
	void ChangeToRed();
};
