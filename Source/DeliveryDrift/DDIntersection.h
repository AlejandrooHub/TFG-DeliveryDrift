// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DDRoadInfo.h"
#include "GameFramework/Actor.h"
#include "DDIntersection.generated.h"

class ADDRoad;
class UBoxComponent;
UCLASS()
class DELIVERYDRIFT_API ADDIntersection : public AActor
{
	GENERATED_BODY()
	
public:	
	ADDIntersection();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UBoxComponent* DetectorBox;

	UFUNCTION(BlueprintCallable)
	FDDRoadInfo SetRoadInfo(ADDRoad* Road, bool RoadDrivesForward)
	{
		return FDDRoadInfo(Road, RoadDrivesForward);
	}

public:
	
};
