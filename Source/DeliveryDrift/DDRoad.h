// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DDRoad.generated.h"

class USphereComponent;
class UArrowComponent;
class UBoxComponent;
class USplineComponent;
UCLASS()
class DELIVERYDRIFT_API ADDRoad : public AActor
{
	GENERATED_BODY()
	
public:	
	ADDRoad();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* SphereComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USplineComponent* SplineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxEnd;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UArrowComponent* ArrowStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UArrowComponent* ArrowEnd;


public:	


};
