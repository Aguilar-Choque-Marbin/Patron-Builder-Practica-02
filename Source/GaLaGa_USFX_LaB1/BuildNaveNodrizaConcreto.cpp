// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildNaveNodrizaConcreto.h"

// Sets default values
ABuildNaveNodrizaConcreto::ABuildNaveNodrizaConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuildNaveNodrizaConcreto::BeginPlay()
{
	Super::BeginPlay();
	
	GenerarNave = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());
	GenerarNave->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABuildNaveNodrizaConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuildNaveNodrizaConcreto::ConstruirNuevaNave()
{
	GenerarNave->NodrizaSpawn();
	//añadir texto de construcción de nave nodriza
}

void ABuildNaveNodrizaConcreto::ConstruirArmas()
{
	GenerarNave->NodrizaArma();
	//añadir texto de construcción de armas
}

void ABuildNaveNodrizaConcreto::ConstruirMotores()
{
	GenerarNave->NodrizaMotor();
	//añadir texto de construcción de motores
}

void ABuildNaveNodrizaConcreto::ConstruirProyectiles()
{
	GenerarNave->NodrizaProyectil();
	//añadir texto de construcción de proyectiles
}

ANaveNodriza* ABuildNaveNodrizaConcreto::NaveNodriza()
{
	return GenerarNave;
}

