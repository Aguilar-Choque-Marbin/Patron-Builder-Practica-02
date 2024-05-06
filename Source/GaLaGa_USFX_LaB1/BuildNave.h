// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NaveNodriza.h"
#include "BuildNave.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuildNave : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_LAB1_API IBuildNave
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ConstruirNuevaNave() = 0;
	virtual void ConstruirArmas() = 0;
	virtual void ConstruirMotores() = 0;
	virtual void ConstruirProyectiles() = 0;

	virtual class ANaveNodriza* NaveNodriza() =0;
};
