// Copyright 2019 Marc O. Rüdel. All Rights Reserved.


using UnrealBuildTool;
using System.Collections.Generic;

public class OnEverythingEditorTarget : TargetRules
{
	public OnEverythingEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "OnEverything" } );
	}
}
