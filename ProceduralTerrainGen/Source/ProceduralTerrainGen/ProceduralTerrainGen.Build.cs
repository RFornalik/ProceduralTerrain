// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProceduralTerrainGen : ModuleRules
{
	public ProceduralTerrainGen(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay","SimplexNoise" });
		PrivateDependencyModuleNames.AddRange(new string[] {
		"ProceduralMeshComponent","RuntimeMeshComponent"
		});
	}
}
