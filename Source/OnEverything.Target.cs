// Copyright 2019 Marc O. R�del. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class OnEverythingTarget : TargetRules
{
	public OnEverythingTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "OnEverything" } );
	}
}
