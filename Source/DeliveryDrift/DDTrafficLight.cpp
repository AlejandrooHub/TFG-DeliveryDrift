// Fill out your copyright notice in the Description page of Project Settings.


#include "DDTrafficLight.h"

// Sets default values
ADDTrafficLight::ADDTrafficLight()
{
 	

}


void ADDTrafficLight::StartTrafficLight(UStaticMeshComponent* SM, UMaterialInterface* Green, UMaterialInterface* Yellow, UMaterialInterface* Red)
{
	SMGlobal = SM;
	GreenGlobal = Green;
	YellowGlobal = Yellow;
	RedGlobal = Red;
	ChangeToGreen();
}

void ADDTrafficLight::ChangeToGreen()
{
	Light = LightMode::Green;
	SMGlobal->SetMaterial(0, GreenGlobal);
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ADDTrafficLight::ChangeToYellow, GreenLightTime, false);
}

void ADDTrafficLight::ChangeToYellow()
{
	Light = LightMode::Yellow;
	SMGlobal->SetMaterial(0, YellowGlobal);
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ADDTrafficLight::ChangeToRed, YellowLightTime, false);
}

void ADDTrafficLight::ChangeToRed()
{
	Light = LightMode::Red;
	SMGlobal->SetMaterial(0, RedGlobal);
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ADDTrafficLight::ChangeToGreen, RedLightTime, false);
}


