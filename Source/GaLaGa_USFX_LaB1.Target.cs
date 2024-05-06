// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GaLaGa_USFX_LaB1Target : TargetRules
{
	public GaLaGa_USFX_LaB1Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GaLaGa_USFX_LaB1");
	}
}
