// Fill out your copyright notice in the Description page of Project Settings.


#include "DDIntersection.h"

#include "Components/BoxComponent.h"


ADDIntersection::ADDIntersection()
{

	DetectorBox = CreateDefaultSubobject<UBoxComponent>("BoxStart");
	DetectorBox->SetupAttachment(RootComponent);
}

void ADDIntersection::BeginPlay()
{
	Super::BeginPlay();
	
}


