// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "DDRoad.h"

#include "DDRoadInfo.generated.h"

USTRUCT(BlueprintType)
struct FDDRoadInfo
{
	GENERATED_BODY()

	FDDRoadInfo()
	{
		Road = nullptr;
		bOneWeyRoad = false;
		bRoadDrivesForward = true;
	}
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Road Variables")
	ADDRoad* Road;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Road Variables")
	bool bOneWeyRoad;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Road Variables")
	bool bRoadDrivesForward;

	//FDDRoadInfo();
	
	FDDRoadInfo(ADDRoad* NewRoad, bool newbRoadDrivesForward)
	{
		Road = NewRoad;
		bOneWeyRoad = false;
		bRoadDrivesForward = newbRoadDrivesForward;
	}
};