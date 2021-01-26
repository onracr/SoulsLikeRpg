// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SoulsLikeRpg : ModuleRules
{
	public SoulsLikeRpg(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
