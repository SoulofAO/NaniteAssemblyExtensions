// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaniteAssemblyExtensionsFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNaniteAssemblyExtensionsFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENaniteFallbackTarget();
NANITEASSEMBLYEDITORUTILS_API UClass* Z_Construct_UClass_UNaniteAssemblyStaticMeshBuilder_NoRegister();
NANITEASSEMBLYEXTENSIONS_API UClass* Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary();
NANITEASSEMBLYEXTENSIONS_API UClass* Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NaniteAssemblyExtensions();
// ********** End Cross Module References **********************************************************

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
		{ .NameUTF8 = UTF8TEXT("OffsetNaniteAssemblyPivot"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execOffsetNaniteAssemblyPivot },
		{ .NameUTF8 = UTF8TEXT("SetNaniteAssemblyFallbackSettings"), .Pointer = &UNaniteAssemblyExtensionsFunctionLibrary::execSetNaniteAssemblyFallbackSettings },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_OffsetNaniteAssemblyPivot, "OffsetNaniteAssemblyPivot" }, // 2983757160
		{ &Z_Construct_UFunction_UNaniteAssemblyExtensionsFunctionLibrary_SetNaniteAssemblyFallbackSettings, "SetNaniteAssemblyFallbackSettings" }, // 2360014871
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
		{ Z_Construct_UClass_UNaniteAssemblyExtensionsFunctionLibrary, UNaniteAssemblyExtensionsFunctionLibrary::StaticClass, TEXT("UNaniteAssemblyExtensionsFunctionLibrary"), &Z_Registration_Info_UClass_UNaniteAssemblyExtensionsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteAssemblyExtensionsFunctionLibrary), 876143067U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_3079349295{
	TEXT("/Script/NaniteAssemblyExtensions"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NaniteAssemblyExtensions_Source_NaniteAssemblyExtensions_Public_NaniteAssemblyExtensionsFunctionLibrary_h__Script_NaniteAssemblyExtensions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
