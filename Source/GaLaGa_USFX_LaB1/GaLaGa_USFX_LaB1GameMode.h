// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GaLaGa_USFX_LaB1GameMode.generated.h"

UCLASS(MinimalAPI)
class AGaLaGa_USFX_LaB1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGaLaGa_USFX_LaB1GameMode();

	class ABuildNaveNodrizaConcreto* NaveNodrizaConcreto;
	class ADirectorNaveNodriza* DirectorNaveNodriza;

public:
	virtual void BeginPlay() override;
};



