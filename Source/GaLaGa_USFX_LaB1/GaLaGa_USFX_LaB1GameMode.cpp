// Copyright Epic Games, Inc. All Rights Reserved.

#include "GaLaGa_USFX_LaB1GameMode.h"
#include "GaLaGa_USFX_LaB1Pawn.h"
#include "NaveEnemiga.h"

#include "BuildNaveNodrizaConcreto.h"
#include "DirectorNaveNodriza.h"
#include "NaveNodriza.h"

AGaLaGa_USFX_LaB1GameMode::AGaLaGa_USFX_LaB1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGaLaGa_USFX_LaB1Pawn::StaticClass();
}

void AGaLaGa_USFX_LaB1GameMode::BeginPlay()
{
	Super::BeginPlay();
	//ANaveEnemiga* NaveEnemiga = GetWorld()->SpawnActor<ANaveEnemiga>(FVector(-500.0f, 500.0f, 250.0f), FRotator(0.0f, 0.0f, 0.0f));
	
	NaveNodrizaConcreto = GetWorld()->SpawnActor<ABuildNaveNodrizaConcreto>(ABuildNaveNodrizaConcreto::StaticClass());
	DirectorNaveNodriza = GetWorld()->SpawnActor<ADirectorNaveNodriza>(ADirectorNaveNodriza::StaticClass());

	DirectorNaveNodriza->OrdenarConstruccionNaveNodriza(NaveNodrizaConcreto);
	DirectorNaveNodriza->CrearNaveNodriza();
}

