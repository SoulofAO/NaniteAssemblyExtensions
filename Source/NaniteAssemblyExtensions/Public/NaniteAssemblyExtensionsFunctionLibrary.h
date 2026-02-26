#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"

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
	static bool OffsetNaniteAssemblyPivot(
		UStaticMesh* AssemblyMesh,
		const FVector& PivotOffset
	);
};
