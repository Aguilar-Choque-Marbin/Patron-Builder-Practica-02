// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildNave.h"
#include "DirectorNaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API ADirectorNaveNodriza : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorNaveNodriza();

	IBuildNave* GeneradorNaveNodriza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void OrdenarConstruccionNaveNodriza(AActor* Generador);
	void CrearNaveNodriza();
	class ANaveNodriza* CreacionNaveNodriza();
};
