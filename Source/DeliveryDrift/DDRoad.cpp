// Fill out your copyright notice in the Description page of Project Settings.


#include "DDRoad.h"

#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"

// Sets default values
ADDRoad::ADDRoad()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>("Sphere");
	SphereComponent->SetupAttachment(RootComponent);
	
	SplineComponent = CreateDefaultSubobject<USplineComponent>("Spline");
	SplineComponent->SetupAttachment(SphereComponent);

	BoxStart = CreateDefaultSubobject<UBoxComponent>("BoxStart");
	BoxStart->SetupAttachment(SphereComponent);

	BoxEnd = CreateDefaultSubobject<UBoxComponent>("BoxEnd");
	BoxEnd->SetupAttachment(SphereComponent);

	ArrowStart = CreateDefaultSubobject<UArrowComponent>("ArrowStart");
	ArrowStart->SetupAttachment(SphereComponent);

	ArrowEnd = CreateDefaultSubobject<UArrowComponent>("ArrowEnd");
	ArrowEnd->SetupAttachment(SphereComponent);

/*
	FVector StartSplinePosition = SplineComponent->GetLocationAtDistanceAlongSpline(0.0, ESplineCoordinateSpace::Local);

	FRotator StartSplineRaotation = SplineComponent->GetRotationAtDistanceAlongSpline(0.0, ESplineCoordinateSpace::Local);
	
	FVector EndSplinePosition = SplineComponent->GetLocationAtDistanceAlongSpline(SplineComponent->GetSplineLength(), ESplineCoordinateSpace::Local);

	FRotator EndSplineRaotation = SplineComponent->GetRotationAtDistanceAlongSpline(SplineComponent->GetSplineLength(), ESplineCoordinateSpace::Local);
	
	
	BoxStart->SetRelativeLocationAndRotation(StartSplinePosition + FVector(0.0f, 0.0f, 100.0f), StartSplineRaotation);
	
	BoxEnd->SetRelativeLocationAndRotation(EndSplinePosition + FVector(0.0f, 0.0f, 100.0f), EndSplineRaotation);

	ArrowStart->SetRelativeLocationAndRotation(StartSplinePosition + FVector(0.0f, 0.0f, 100.0f), StartSplineRaotation + FRotator(0.0f, 90.0f, 0.0f));
	
	ArrowEnd->SetRelativeLocationAndRotation(EndSplinePosition + FVector(0.0f, 0.0f, 100.0f), EndSplineRaotation + FRotator(0.0f, 90.0f, 0.0f));
*/
	
}

// Called when the game starts or when spawned
void ADDRoad::BeginPlay()
{
	Super::BeginPlay();
	
}

