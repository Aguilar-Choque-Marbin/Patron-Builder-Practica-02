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
	//a�adir texto de construcci�n de nave nodriza
}

void ABuildNaveNodrizaConcreto::ConstruirArmas()
{
	GenerarNave->NodrizaArma();
	//a�adir texto de construcci�n de armas
}

void ABuildNaveNodrizaConcreto::ConstruirMotores()
{
	GenerarNave->NodrizaMotor();
	//a�adir texto de construcci�n de motores
}

void ABuildNaveNodrizaConcreto::ConstruirProyectiles()
{
	GenerarNave->NodrizaProyectil();
	//a�adir texto de construcci�n de proyectiles
}

ANaveNodriza* ABuildNaveNodrizaConcreto::NaveNodriza()
{
	return GenerarNave;
}

