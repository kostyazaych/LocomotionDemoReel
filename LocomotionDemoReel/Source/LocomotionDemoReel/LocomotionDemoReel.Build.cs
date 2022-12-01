// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LocomotionDemoReel : ModuleRules
{
	public LocomotionDemoReel(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
