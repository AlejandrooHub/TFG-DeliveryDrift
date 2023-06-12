// Fill out your copyright notice in the Description page of Project Settings.


#include "DDChaosVehicleCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"



ADDChaosVehicleCharacter::ADDChaosVehicleCharacter()
{
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	CharacterMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("MeshComponent");
	CharacterMeshComponent->SetupAttachment(GetMesh());
}


void ADDChaosVehicleCharacter::BeginPlay()
{
	Super::BeginPlay();
}

