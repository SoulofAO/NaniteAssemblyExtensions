// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaniteAssemblyExtensionsFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/StaticMesh.h"
#include "MeshReductionSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNaniteAssemblyExtensionsFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENaniteFallbackTarget();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshRayTracingProxySettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
NANITEASSEMBLYEDITORUTILS_API UClass* Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_NoRegister();
NANITEASSEMBLYEXTENSIONS_API UClass* Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary();
NANITEASSEMBLYEXTENSIONS_API UClass* Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NaniteAssemblyExtensions();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshFromAssemblyBuilder 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshFromAssemblyBuilder_Parms
	{
		UNaniteAssemblyStaticMeshBuilder* AssemblyBuilder;
		UStaticMesh* OutStaticMesh;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaticMeshFromAssemblyBuilder constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssemblyBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutStaticMesh;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaticMeshFromAssemblyBuilder constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaticMeshFromAssemblyBuilder Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_AssemblyBuilder = { "AssemblyBuilder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshFromAssemblyBuilder_Parms, AssemblyBuilder), Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_OutStaticMesh = { "OutStaticMesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshFromAssemblyBuilder_Parms, OutStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshFromAssemblyBuilder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshFromAssemblyBuilder_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_AssemblyBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_OutStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::PropPointers) < 2048);
// ********** End Function GetStaticMeshFromAssemblyBuilder Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "GetStaticMeshFromAssemblyBuilder", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshFromAssemblyBuilder_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshFromAssemblyBuilder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshFromAssemblyBuilder)
{
	P_GET_OBJECT(UNaniteAssemblyStaticMeshBuilder,Z_Param_AssemblyBuilder);
	P_GET_OBJECT_REF(UStaticMesh,Z_Param_Out_OutStaticMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshFromAssemblyBuilder(Z_Param_AssemblyBuilder,P_ARG_GC_BARRIER(Z_Param_Out_OutStaticMesh));
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshFromAssemblyBuilder 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshLodBuildSettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms
	{
		UStaticMesh* StaticMesh;
		int32 LodIndex;
		FMeshBuildSettings BuildSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaticMeshLodBuildSettings constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaticMeshLodBuildSettings constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaticMeshLodBuildSettings Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms, BuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(0, nullptr) }; // 307813221
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_LodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_BuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::PropPointers) < 2048);
// ********** End Function GetStaticMeshLodBuildSettings Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "GetStaticMeshLodBuildSettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodBuildSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshLodBuildSettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
	P_GET_STRUCT_REF(FMeshBuildSettings,Z_Param_Out_BuildSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshLodBuildSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_BuildSettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshLodBuildSettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshLodReductionSettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms
	{
		UStaticMesh* StaticMesh;
		int32 LodIndex;
		FMeshReductionSettings ReductionSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaticMeshLodReductionSettings constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaticMeshLodReductionSettings constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaticMeshLodReductionSettings Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms, LodIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms, ReductionSettings), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(0, nullptr) }; // 1579255841
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_LodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_ReductionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::PropPointers) < 2048);
// ********** End Function GetStaticMeshLodReductionSettings Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "GetStaticMeshLodReductionSettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshLodReductionSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshLodReductionSettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
	P_GET_STRUCT_REF(FMeshReductionSettings,Z_Param_Out_ReductionSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshLodReductionSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_ReductionSettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshLodReductionSettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshNaniteSettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshNaniteSettings_Parms
	{
		UStaticMesh* StaticMesh;
		FMeshNaniteSettings NaniteSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaticMeshNaniteSettings constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaticMeshNaniteSettings constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaticMeshNaniteSettings Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshNaniteSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshNaniteSettings_Parms, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(0, nullptr) }; // 103052851
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshNaniteSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshNaniteSettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_NaniteSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::PropPointers) < 2048);
// ********** End Function GetStaticMeshNaniteSettings Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "GetStaticMeshNaniteSettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshNaniteSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshNaniteSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshNaniteSettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT_REF(FMeshNaniteSettings,Z_Param_Out_NaniteSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshNaniteSettings(Z_Param_StaticMesh,Z_Param_Out_NaniteSettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshNaniteSettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshRayTracingProxySettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshRayTracingProxySettings_Parms
	{
		UStaticMesh* StaticMesh;
		FMeshRayTracingProxySettings RayTracingProxySettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaticMeshRayTracingProxySettings constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayTracingProxySettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaticMeshRayTracingProxySettings constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaticMeshRayTracingProxySettings Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshRayTracingProxySettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_RayTracingProxySettings = { "RayTracingProxySettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshRayTracingProxySettings_Parms, RayTracingProxySettings), Z_Construct_UScriptStruct_FMeshRayTracingProxySettings, METADATA_PARAMS(0, nullptr) }; // 3835420000
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshRayTracingProxySettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshRayTracingProxySettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_RayTracingProxySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::PropPointers) < 2048);
// ********** End Function GetStaticMeshRayTracingProxySettings Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "GetStaticMeshRayTracingProxySettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshRayTracingProxySettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventGetStaticMeshRayTracingProxySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshRayTracingProxySettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT_REF(FMeshRayTracingProxySettings,Z_Param_Out_RayTracingProxySettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::GetStaticMeshRayTracingProxySettings(Z_Param_StaticMesh,Z_Param_Out_RayTracingProxySettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function GetStaticMeshRayTracingProxySettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function OffsetNaniteAssemblyPivot 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventOffsetNaniteAssemblyPivot_Parms
	{
		UStaticMesh* AssemblyMesh;
		FVector PivotOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OffsetNaniteAssemblyPivot constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssemblyMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OffsetNaniteAssemblyPivot constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OffsetNaniteAssemblyPivot Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_AssemblyMesh = { "AssemblyMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventOffsetNaniteAssemblyPivot_Parms, AssemblyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventOffsetNaniteAssemblyPivot_Parms, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotOffset_MetaData), NewProp_PivotOffset_MetaData) };
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventOffsetNaniteAssemblyPivot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventOffsetNaniteAssemblyPivot_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_AssemblyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_PivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::PropPointers) < 2048);
// ********** End Function OffsetNaniteAssemblyPivot Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "OffsetNaniteAssemblyPivot", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventOffsetNaniteAssemblyPivot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventOffsetNaniteAssemblyPivot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execOffsetNaniteAssemblyPivot)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_AssemblyMesh);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PivotOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::OffsetNaniteAssemblyPivot(Z_Param_AssemblyMesh,Z_Param_Out_PivotOffset);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function OffsetNaniteAssemblyPivot 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function SetNaniteAssemblyFallbackSettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms
	{
		UNaniteAssemblyStaticMeshBuilder* AssemblyBuilder;
		ENaniteFallbackTarget FallbackTarget;
		float FallbackPercentTriangles;
		float FallbackRelativeError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNaniteAssemblyFallbackSettings constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssemblyBuilder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FallbackTarget_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FallbackTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackPercentTriangles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackRelativeError;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNaniteAssemblyFallbackSettings constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNaniteAssemblyFallbackSettings Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_AssemblyBuilder = { "AssemblyBuilder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms, AssemblyBuilder), Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackTarget = { "FallbackTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms, FallbackTarget), Z_Construct_UEnum_Engine_ENaniteFallbackTarget, METADATA_PARAMS(0, nullptr) }; // 3043361384
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackPercentTriangles = { "FallbackPercentTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms, FallbackPercentTriangles), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackRelativeError = { "FallbackRelativeError", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms, FallbackRelativeError), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_AssemblyBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackTarget_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackPercentTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_FallbackRelativeError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::PropPointers) < 2048);
// ********** End Function SetNaniteAssemblyFallbackSettings Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "SetNaniteAssemblyFallbackSettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetNaniteAssemblyFallbackSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execSetNaniteAssemblyFallbackSettings)
{
	P_GET_OBJECT(UNaniteAssemblyStaticMeshBuilder,Z_Param_AssemblyBuilder);
	P_GET_ENUM(ENaniteFallbackTarget,Z_Param_FallbackTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FallbackPercentTriangles);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FallbackRelativeError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::SetNaniteAssemblyFallbackSettings(Z_Param_AssemblyBuilder,ENaniteFallbackTarget(Z_Param_FallbackTarget),Z_Param_FallbackPercentTriangles,Z_Param_FallbackRelativeError);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function SetNaniteAssemblyFallbackSettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshLodBuildSettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms
	{
		UStaticMesh* StaticMesh;
		int32 LodIndex;
		FMeshBuildSettings BuildSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStaticMeshLodBuildSettings constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStaticMeshLodBuildSettings constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStaticMeshLodBuildSettings Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms, LodIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms, BuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildSettings_MetaData), NewProp_BuildSettings_MetaData) }; // 307813221
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_LodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_BuildSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::PropPointers) < 2048);
// ********** End Function SetStaticMeshLodBuildSettings Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "SetStaticMeshLodBuildSettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodBuildSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshLodBuildSettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
	P_GET_STRUCT_REF(FMeshBuildSettings,Z_Param_Out_BuildSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshLodBuildSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_BuildSettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshLodBuildSettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshLodReductionSettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms
	{
		UStaticMesh* StaticMesh;
		int32 LodIndex;
		FMeshReductionSettings ReductionSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStaticMeshLodReductionSettings constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStaticMeshLodReductionSettings constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStaticMeshLodReductionSettings Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms, LodIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms, ReductionSettings), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReductionSettings_MetaData), NewProp_ReductionSettings_MetaData) }; // 1579255841
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_LodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_ReductionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::PropPointers) < 2048);
// ********** End Function SetStaticMeshLodReductionSettings Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "SetStaticMeshLodReductionSettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshLodReductionSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshLodReductionSettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
	P_GET_STRUCT_REF(FMeshReductionSettings,Z_Param_Out_ReductionSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshLodReductionSettings(Z_Param_StaticMesh,Z_Param_LodIndex,Z_Param_Out_ReductionSettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshLodReductionSettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshNaniteSettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshNaniteSettings_Parms
	{
		UStaticMesh* StaticMesh;
		FMeshNaniteSettings NaniteSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStaticMeshNaniteSettings constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStaticMeshNaniteSettings constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStaticMeshNaniteSettings Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshNaniteSettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshNaniteSettings_Parms, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteSettings_MetaData), NewProp_NaniteSettings_MetaData) }; // 103052851
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshNaniteSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshNaniteSettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_NaniteSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::PropPointers) < 2048);
// ********** End Function SetStaticMeshNaniteSettings Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "SetStaticMeshNaniteSettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshNaniteSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshNaniteSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshNaniteSettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT_REF(FMeshNaniteSettings,Z_Param_Out_NaniteSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshNaniteSettings(Z_Param_StaticMesh,Z_Param_Out_NaniteSettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshNaniteSettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshRayTracingProxySettings 
struct Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics
{
	struct NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshRayTracingProxySettings_Parms
	{
		UStaticMesh* StaticMesh;
		FMeshRayTracingProxySettings RayTracingProxySettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Nanite Assembly Extensions" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ReturnDisplayName", "Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingProxySettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStaticMeshRayTracingProxySettings constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayTracingProxySettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStaticMeshRayTracingProxySettings constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStaticMeshRayTracingProxySettings Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshRayTracingProxySettings_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_RayTracingProxySettings = { "RayTracingProxySettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshRayTracingProxySettings_Parms, RayTracingProxySettings), Z_Construct_UScriptStruct_FMeshRayTracingProxySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingProxySettings_MetaData), NewProp_RayTracingProxySettings_MetaData) }; // 3835420000
void Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshRayTracingProxySettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshRayTracingProxySettings_Parms), &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_RayTracingProxySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::PropPointers) < 2048);
// ********** End Function SetStaticMeshRayTracingProxySettings Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, nullptr, "SetStaticMeshRayTracingProxySettings", 	Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshRayTracingProxySettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::NaniteAssemblyExtensionsFunctionLibrary_eventSetStaticMeshRayTracingProxySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshRayTracingProxySettings)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_GET_STRUCT_REF(FMeshRayTracingProxySettings,Z_Param_Out_RayTracingProxySettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNaniteAssemblyExtensionsFunctionLibrary::SetStaticMeshRayTracingProxySettings(Z_Param_StaticMesh,Z_Param_Out_RayTracingProxySettings);
	P_NATIVE_END;
}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary Function SetStaticMeshRayTracingProxySettings 

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary;
UClass* UNaniteAssemblyExtensionsFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UNaniteAssemblyExtensionsFunctionLibrary;
	if (!Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NaniteAssemblyExtensionsFunctionLibrary"),
			Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUNaniteAssemblyExtensionsFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_NoRegister()
{
	return UNaniteAssemblyExtensionsFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NaniteAssemblyExtensionsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NaniteAssemblyExtensionsFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNaniteAssemblyExtensionsFunctionLibrary constinit property declarations *
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary constinit property declarations ***
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetStaticMeshFromAssemblyBuilder"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshFromAssemblyBuilder },
		{ .NameUTF8 = UTF8TEXT("GetStaticMeshLodBuildSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshLodBuildSettings },
		{ .NameUTF8 = UTF8TEXT("GetStaticMeshLodReductionSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshLodReductionSettings },
		{ .NameUTF8 = UTF8TEXT("GetStaticMeshNaniteSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshNaniteSettings },
		{ .NameUTF8 = UTF8TEXT("GetStaticMeshRayTracingProxySettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execGetStaticMeshRayTracingProxySettings },
		{ .NameUTF8 = UTF8TEXT("OffsetNaniteAssemblyPivot"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execOffsetNaniteAssemblyPivot },
		{ .NameUTF8 = UTF8TEXT("SetNaniteAssemblyFallbackSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execSetNaniteAssemblyFallbackSettings },
		{ .NameUTF8 = UTF8TEXT("SetStaticMeshLodBuildSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshLodBuildSettings },
		{ .NameUTF8 = UTF8TEXT("SetStaticMeshLodReductionSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshLodReductionSettings },
		{ .NameUTF8 = UTF8TEXT("SetStaticMeshNaniteSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshNaniteSettings },
		{ .NameUTF8 = UTF8TEXT("SetStaticMeshRayTracingProxySettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execSetStaticMeshRayTracingProxySettings },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshFromAssemblyBuilder, "GetStaticMeshFromAssemblyBuilder" }, // 4178996687
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodBuildSettings, "GetStaticMeshLodBuildSettings" }, // 2850835860
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshLodReductionSettings, "GetStaticMeshLodReductionSettings" }, // 448460497
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshNaniteSettings, "GetStaticMeshNaniteSettings" }, // 3424343543
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_GetStaticMeshRayTracingProxySettings, "GetStaticMeshRayTracingProxySettings" }, // 3781838344
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot, "OffsetNaniteAssemblyPivot" }, // 2983757160
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings, "SetNaniteAssemblyFallbackSettings" }, // 2360014871
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodBuildSettings, "SetStaticMeshLodBuildSettings" }, // 274722693
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshLodReductionSettings, "SetStaticMeshLodReductionSettings" }, // 1532067715
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshNaniteSettings, "SetStaticMeshNaniteSettings" }, // 169673052
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetStaticMeshRayTracingProxySettings, "SetStaticMeshRayTracingProxySettings" }, // 2509930926
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteAssemblyExtensionsFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NaniteAssemblyExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics::ClassParams = {
	&UNaniteAssemblyExtensionsFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics::Class_MetaDataParams)
};
void UNaniteAssemblyExtensionsFunctionLibrary::StaticRegisterNativesUNaniteAssemblyExtensionsFunctionLibrary()
{
	UClass* Class = UNaniteAssemblyExtensionsFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary.OuterSingleton;
}
UNaniteAssemblyExtensionsFunctionLibrary::UNaniteAssemblyExtensionsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNaniteAssemblyExtensionsFunctionLibrary);
UNaniteAssemblyExtensionsFunctionLibrary::~UNaniteAssemblyExtensionsFunctionLibrary() {}
// ********** End Class UNaniteAssemblyExtensionsFunctionLibrary ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, UNaniteAssemblyExtensionsFunctionLibrary::StaticClass, TEXT("UNaniteAssemblyExtensionsFunctionLibrary"), &Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteAssemblyExtensionsFunctionLibrary), 2086486269U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_2466641671{
	TEXT("/Script/NaniteAssemblyExtensions"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
