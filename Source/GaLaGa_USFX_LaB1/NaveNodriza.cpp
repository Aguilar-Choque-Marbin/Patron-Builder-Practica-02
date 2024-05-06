// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "NaveSpawn.h"
#include "GaLaGa_USFX_LaB1Projectile.h"
#include "Motores.h"
#include "ArmaNave.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TiempoDeDisparo = 0.0f;
	Intervalo = 1.0f;
}

void ANaveNodriza::NodrizaSpawn()
{
	FVector PosicionNave = FVector(-71.0f, 8.0f, 419.0f);
	FRotator RotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	NaveSpawn = GetWorld()->SpawnActor<ANaveSpawn>(ANaveSpawn::StaticClass());
	NaveSpawn->SetActorLocation(PosicionNave);
	NaveSpawn->SetActorRotation(RotacionNave);
}

void ANaveNodriza::NodrizaMotor()
{
	FVector PosicionMotor = FVector(-77.0f, 0.0f, 300.0f);
	FRotator RotacionMotor = FRotator(0.0f, 0.0f, 0.0f);
	NaveMotor = GetWorld()->SpawnActor<AMotores>(AMotores::StaticClass());
	NaveMotor->SetActorLocation(PosicionMotor);
	NaveMotor->SetActorRotation(RotacionMotor);
}

void ANaveNodriza::NodrizaProyectil()
{
	FVector PosicionActualNaveNodriza = NaveArma->GetActorLocation();
	FRotator RotacionActualNaveNodriza = NaveArma->GetActorRotation();

	FVector DireccionDisparo = RotacionActualNaveNodriza.Vector();
	PosicionActualNaveNodriza += DireccionDisparo * 100;
	NaveProyectil = GetWorld()->SpawnActor<AGaLaGa_USFX_LaB1Projectile>(AGaLaGa_USFX_LaB1Projectile::StaticClass());
	NaveProyectil->SetActorLocation(PosicionActualNaveNodriza);
}

void ANaveNodriza::NodrizaArma()
{
	FVector PosicionArma = FVector(-105.0f, 0.0f, 500.0f);
	FRotator RotacionArma = FRotator(0.0f, 0.0f, 0.0f);
	NaveArma = GetWorld()->SpawnActor<AArmaNave>(AArmaNave::StaticClass());
	NaveArma->SetActorLocation(PosicionArma);
	NaveArma->SetActorRotation(RotacionArma);
}

// Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoDeDisparo += DeltaTime;

	// Verificar si ha pasado el tiempo suficiente para disparar
	if (TiempoDeDisparo >= Intervalo)
	{
		// Reiniciar el contador de tiempo
		TiempoDeDisparo = 0.0f;

		// Llamar a la función para disparar
		NodrizaProyectil();
	}
}
