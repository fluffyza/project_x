// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class project_x : ModuleRules
{
	public project_x(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
