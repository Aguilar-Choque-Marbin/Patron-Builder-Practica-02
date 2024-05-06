// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveNodrizaInterfaz.h"
#include "GaLaGa_USFX_LaB1Projectile.h"
#include "NaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API ANaveNodriza : public AActor ,public INaveNodrizaInterfaz
{
	GENERATED_BODY()

private:

	class AMotores* NaveMotor;
	class AArmaNave* NaveArma;
	class ANaveSpawn* NaveSpawn;
	class AGaLaGa_USFX_LaB1Projectile* NaveProyectil;


public:	
	// Sets default values for this actor's properties
	ANaveNodriza();

	void NodrizaSpawn() override;
	void NodrizaMotor() override;
	void NodrizaProyectil() override;
	void NodrizaArma() override;

	float TiempoDeDisparo;
	float Intervalo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
