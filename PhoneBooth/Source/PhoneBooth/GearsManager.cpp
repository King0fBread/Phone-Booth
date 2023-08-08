// Fill out your copyright notice in the Description page of Project Settings.


#include "GearsManager.h"

// Sets default values
AGearsManager::AGearsManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGearsManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGearsManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGearsManager::CallGearsStateCheckFunction()
{
	
}

