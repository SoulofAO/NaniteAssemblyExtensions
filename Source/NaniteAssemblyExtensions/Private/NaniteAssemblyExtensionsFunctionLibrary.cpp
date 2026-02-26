#include "NaniteAssemblyExtensionsFunctionLibrary.h"

#include "NaniteAssemblyStaticMeshBuilder.h"
#include "Engine/StaticMesh.h"
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
