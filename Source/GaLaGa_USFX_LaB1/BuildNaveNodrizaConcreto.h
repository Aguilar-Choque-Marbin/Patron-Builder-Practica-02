// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildNave.h"
#include "BuildNaveNodrizaConcreto.generated.h"

UCLASS()
class GALAGA_USFX_LAB1_API ABuildNaveNodrizaConcreto : public AActor , public IBuildNave
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildNaveNodrizaConcreto();

	class ANaveNodriza* GenerarNave;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void ConstruirNuevaNave() override;
	void ConstruirArmas() override;
	void ConstruirMotores() override;
	void ConstruirProyectiles() override;

	class ANaveNodriza* NaveNodriza();
};
