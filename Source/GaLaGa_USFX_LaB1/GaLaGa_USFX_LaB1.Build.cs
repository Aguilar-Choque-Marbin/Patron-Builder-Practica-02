// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GaLaGa_USFX_LaB1 : ModuleRules
{
	public GaLaGa_USFX_LaB1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
