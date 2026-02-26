using UnrealBuildTool;

public class NaniteAssemblyExtensions : ModuleRules
{
	public NaniteAssemblyExtensions(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"NaniteAssemblyEditorUtils",
		});
	}
}
