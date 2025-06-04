using UnrealBuildTool;
using System.Collections.Generic;

public class BasicMovementEditorTarget : TargetRules
{
    public BasicMovementEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.Add("BasicMovement");
    }
}
