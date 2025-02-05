// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Sparta_Homework_06 : ModuleRules
{
	public Sparta_Homework_06(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
