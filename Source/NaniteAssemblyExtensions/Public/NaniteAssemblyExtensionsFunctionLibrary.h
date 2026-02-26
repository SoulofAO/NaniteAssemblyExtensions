#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "MeshReductionSettings.h"

#include "NaniteAssemblyExtensionsFunctionLibrary.generated.h"

class UNaniteAssemblyStaticMeshBuilder;
class UStaticMesh;

UCLASS()
class UNaniteAssemblyExtensionsFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool SetNaniteAssemblyFallbackSettings(
		UNaniteAssemblyStaticMeshBuilder* AssemblyBuilder,
		ENaniteFallbackTarget FallbackTarget,
		float FallbackPercentTriangles,
		float FallbackRelativeError
	);
	
	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool GetStaticMeshFromAssemblyBuilder(UNaniteAssemblyStaticMeshBuilder* AssemblyBuilder, UStaticMesh*& OutStaticMesh);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool GetStaticMeshNaniteSettings(
		UStaticMesh* StaticMesh,
		FMeshNaniteSettings& NaniteSettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool SetStaticMeshNaniteSettings(
		UStaticMesh* StaticMesh,
		const FMeshNaniteSettings& NaniteSettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool GetStaticMeshRayTracingProxySettings(
		UStaticMesh* StaticMesh,
		FMeshRayTracingProxySettings& RayTracingProxySettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool SetStaticMeshRayTracingProxySettings(
		UStaticMesh* StaticMesh,
		const FMeshRayTracingProxySettings& RayTracingProxySettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool GetStaticMeshLodBuildSettings(
		UStaticMesh* StaticMesh,
		int32 LodIndex,
		FMeshBuildSettings& BuildSettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool SetStaticMeshLodBuildSettings(
		UStaticMesh* StaticMesh,
		int32 LodIndex,
		const FMeshBuildSettings& BuildSettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool GetStaticMeshLodReductionSettings(
		UStaticMesh* StaticMesh,
		int32 LodIndex,
		FMeshReductionSettings& ReductionSettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool SetStaticMeshLodReductionSettings(
		UStaticMesh* StaticMesh,
		int32 LodIndex,
		const FMeshReductionSettings& ReductionSettings
	);

	UFUNCTION(BlueprintCallable, Category = "Nanite Assembly Extensions", meta = (ReturnDisplayName = "Success"))
	static bool OffsetNaniteAssemblyPivot(
		UStaticMesh* AssemblyMesh,
		const FVector& PivotOffset
	);
};
