// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NaniteAssemblyExtensionsFunctionLibrary.h"

#ifdef NANITEASSEMBLYEXTENSIONS_NaniteAssemblyExtensionsFunctionLibrary_generated_h
#error "NaniteAssemblyExtensionsFunctionLibrary.generated.h already included, missing '#pragma once' in NaniteAssemblyExtensionsFunctionLibrary.h"
#endif
#define NANITEASSEMBLYEXTENSIONS_NaniteAssemblyExtensionsFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNaniteAssemblyStaticMeshBuilder;
class UStaticMesh;
enum class ENaniteFallbackTarget : uint8;

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary *********************************
#define FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOffsetNaniteAssemblyPivot); \
	DECLARE_FUNCTION(execSetNaniteAssemblyFallbackSettings);


struct Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics;
NANITEASSEMBLYEXTENSIONS_API UClass* Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_NoRegister();

#define FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNaniteAssemblyExtensionsFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NANITEASSEMBLYEXTENSIONS_API UClass* ::Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UNaniteAssemblyExtensionsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NaniteAssemblyExtensions"), Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UNaniteAssemblyExtensionsFunctionLibrary)


#define FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNaniteAssemblyExtensionsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNaniteAssemblyExtensionsFunctionLibrary(UNaniteAssemblyExtensionsFunctionLibrary&&) = delete; \
	UNaniteAssemblyExtensionsFunctionLibrary(const UNaniteAssemblyExtensionsFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNaniteAssemblyExtensionsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaniteAssemblyExtensionsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaniteAssemblyExtensionsFunctionLibrary) \
	NO_API virtual ~UNaniteAssemblyExtensionsFunctionLibrary();


#define FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_12_PROLOG
#define FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNaniteAssemblyExtensionsFunctionLibrary;

// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
