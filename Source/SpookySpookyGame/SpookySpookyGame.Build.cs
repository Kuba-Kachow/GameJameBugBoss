// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SpookySpookyGame : ModuleRules
{
	public SpookySpookyGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
