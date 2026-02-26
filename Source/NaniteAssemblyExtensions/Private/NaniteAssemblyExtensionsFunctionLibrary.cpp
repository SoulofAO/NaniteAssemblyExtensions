#include "NaniteAssemblyExtensionsFunctionLibrary.h"

#include "NaniteAssemblyStaticMeshBuilder.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshSourceData.h"
#include "Engine/NaniteAssemblyData.h"

bool UNaniteAssemblyExtensionsFunctionLibrary::SetNaniteAssemblyFallbackSettings(
	UNaniteAssemblyStaticMeshBuilder* AssemblyBuilder,
	ENaniteFallbackTarget FallbackTarget,
	float FallbackPercentTriangles,
	float FallbackRelativeError
)
{
	if (!AssemblyBuilder || !AssemblyBuilder->IsBuildingAssembly())
	{
		return false;
	}

	UStaticMesh* TargetMesh = Cast<UStaticMesh>(AssemblyBuilder->GetTargetMeshObject());
	if (!TargetMesh)
	{
		return false;
	}

	FMeshNaniteSettings& NaniteSettings = TargetMesh->GetNaniteSettings();
	NaniteSettings.FallbackTarget = FallbackTarget;
	NaniteSettings.FallbackPercentTriangles = FMath::Clamp(FallbackPercentTriangles/100, 0.0f, 1.0f);
	NaniteSettings.FallbackRelativeError = FMath::Max(FallbackRelativeError, 0.0f);

	return true;
}

bool UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshFromAssemblyBuilder(
	UNaniteAssemblyStaticMeshBuilder* AssemblyBuilder, UStaticMesh*& OutStaticMesh)
{
	if (!AssemblyBuilder || !AssemblyBuilder->IsBuildingAssembly())
	{
		return false;
	}

	OutStaticMesh = Cast<UStaticMesh>(AssemblyBuilder->GetTargetMeshObject());
	return true;
}

bool UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshNaniteSettings(
	UStaticMesh* StaticMesh,
	FMeshNaniteSettings& NaniteSettings
)
{
	if (!StaticMesh)
	{
		return false;
	}

	NaniteSettings = StaticMesh->GetNaniteSettings();
	return true;
}

bool UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshNaniteSettings(
	UStaticMesh* StaticMesh,
	const FMeshNaniteSettings& NaniteSettings
)
{
	if (!StaticMesh)
	{
		return false;
	}

	StaticMesh->SetNaniteSettings(NaniteSettings);

#if WITH_EDITOR
	StaticMesh->PostEditChange();
#endif

	return true;
}

bool UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshRayTracingProxySettings(
	UStaticMesh* StaticMesh,
	FMeshRayTracingProxySettings& RayTracingProxySettings
)
{
#if WITH_EDITORONLY_DATA
	if (!StaticMesh)
	{
		return false;
	}

	RayTracingProxySettings = StaticMesh->GetRayTracingProxySettings();
	return true;
#else
	return false;
#endif
}

bool UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshRayTracingProxySettings(
	UStaticMesh* StaticMesh,
	const FMeshRayTracingProxySettings& RayTracingProxySettings
)
{
#if WITH_EDITORONLY_DATA
	if (!StaticMesh)
	{
		return false;
	}

	StaticMesh->SetRayTracingProxySettings(RayTracingProxySettings);

#if WITH_EDITOR
	StaticMesh->NotifyRayTracingProxySettingsChanged();
#endif

	return true;
#else
	return false;
#endif
}

bool UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshLodBuildSettings(
	UStaticMesh* StaticMesh,
	int32 LodIndex,
	FMeshBuildSettings& BuildSettings
)
{
#if WITH_EDITOR
	if (!StaticMesh)
	{
		return false;
	}

	if (LodIndex < 0 || LodIndex >= StaticMesh->GetNumSourceModels())
	{
		return false;
	}

	const FStaticMeshSourceModel& SourceModel = StaticMesh->GetSourceModel(LodIndex);
	BuildSettings = SourceModel.BuildSettings;
	return true;
#else
	return false;
#endif
}

bool UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshLodBuildSettings(
	UStaticMesh* StaticMesh,
	int32 LodIndex,
	const FMeshBuildSettings& BuildSettings
)
{
#if WITH_EDITOR
	if (!StaticMesh)
	{
		return false;
	}

	if (LodIndex < 0 || LodIndex >= StaticMesh->GetNumSourceModels())
	{
		return false;
	}

	FStaticMeshSourceModel& SourceModel = StaticMesh->GetSourceModel(LodIndex);
	SourceModel.BuildSettings = BuildSettings;
	StaticMesh->PostEditChange();
	return true;
#else
	return false;
#endif
}

bool UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshLodReductionSettings(
	UStaticMesh* StaticMesh,
	int32 LodIndex,
	FMeshReductionSettings& ReductionSettings
)
{
#if WITH_EDITOR
	if (!StaticMesh)
	{
		return false;
	}

	if (LodIndex < 0 || LodIndex >= StaticMesh->GetNumSourceModels())
	{
		return false;
	}

	const FStaticMeshSourceModel& SourceModel = StaticMesh->GetSourceModel(LodIndex);
	ReductionSettings = SourceModel.ReductionSettings;
	return true;
#else
	return false;
#endif
}

bool UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshLodReductionSettings(
	UStaticMesh* StaticMesh,
	int32 LodIndex,
	const FMeshReductionSettings& ReductionSettings
)
{
#if WITH_EDITOR
	if (!StaticMesh)
	{
		return false;
	}

	if (LodIndex < 0 || LodIndex >= StaticMesh->GetNumSourceModels())
	{
		return false;
	}

	FStaticMeshSourceModel& SourceModel = StaticMesh->GetSourceModel(LodIndex);
	SourceModel.ReductionSettings = ReductionSettings;
	StaticMesh->PostEditChange();
	return true;
#else
	return false;
#endif
}

bool UNaniteAssemblyExtensionsFunctionLibrary::OffsetNaniteAssemblyPivot(
	UStaticMesh* AssemblyMesh,
	const FVector& PivotOffset
)
{
	if (!AssemblyMesh)
	{
		return false;
	}

	FMeshNaniteSettings& NaniteSettings = AssemblyMesh->GetNaniteSettings();
	FNaniteAssemblyData& AssemblyData = NaniteSettings.NaniteAssemblyData;

	if (!AssemblyData.IsValid())
	{
		return false;
	}

	const FVector3f Offset(PivotOffset);

	for (FNaniteAssemblyNode& Node : AssemblyData.Nodes)
	{
		FVector3f CurrentTranslation = Node.Transform.GetTranslation();
		Node.Transform.SetTranslation(CurrentTranslation - Offset);
	}

	AssemblyMesh->PostEditChange();

	return true;
}
