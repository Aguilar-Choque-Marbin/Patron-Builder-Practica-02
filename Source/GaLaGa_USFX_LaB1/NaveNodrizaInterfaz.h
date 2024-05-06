// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GaLaGa_USFX_LaB1Projectile.h"
#include "NaveNodrizaInterfaz.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UNaveNodrizaInterfaz : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_LAB1_API INaveNodrizaInterfaz
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void NodrizaSpawn() = 0;
	virtual void NodrizaMotor() = 0;
	virtual void NodrizaProyectil() = 0;
	virtual void NodrizaArma() = 0;

};
