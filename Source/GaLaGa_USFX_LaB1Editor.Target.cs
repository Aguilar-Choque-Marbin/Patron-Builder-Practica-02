// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GaLaGa_USFX_LaB1EditorTarget : TargetRules
{
	public GaLaGa_USFX_LaB1EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GaLaGa_USFX_LaB1");
	}
}
