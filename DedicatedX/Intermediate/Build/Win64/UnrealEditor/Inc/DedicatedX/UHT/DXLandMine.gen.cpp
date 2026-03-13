// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Gimmick/DXLandMine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXLandMine() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_ADXLandMine();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXLandMine_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXLandMine Function MulticastRPCSpawnEffect
static const FName NAME_ADXLandMine_MulticastRPCSpawnEffect = FName(TEXT("MulticastRPCSpawnEffect"));
void ADXLandMine::MulticastRPCSpawnEffect()
{
	UFunction* Func = FindFunctionChecked(NAME_ADXLandMine_MulticastRPCSpawnEffect);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADXLandMine_MulticastRPCSpawnEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXLandMine_MulticastRPCSpawnEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXLandMine, nullptr, "MulticastRPCSpawnEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXLandMine_MulticastRPCSpawnEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXLandMine_MulticastRPCSpawnEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXLandMine_MulticastRPCSpawnEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXLandMine_MulticastRPCSpawnEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXLandMine::execMulticastRPCSpawnEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCSpawnEffect_Implementation();
	P_NATIVE_END;
}
// End Class ADXLandMine Function MulticastRPCSpawnEffect

// Begin Class ADXLandMine Function OnLandMineBeginOverlap
struct Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics
{
	struct DXLandMine_eventOnLandMineBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXLandMine_eventOnLandMineBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXLandMine_eventOnLandMineBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXLandMine, nullptr, "OnLandMineBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::DXLandMine_eventOnLandMineBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::DXLandMine_eventOnLandMineBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXLandMine::execOnLandMineBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLandMineBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ADXLandMine Function OnLandMineBeginOverlap

// Begin Class ADXLandMine Function OnRep_IsExploded
struct Z_Construct_UFunction_ADXLandMine_OnRep_IsExploded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXLandMine_OnRep_IsExploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXLandMine, nullptr, "OnRep_IsExploded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXLandMine_OnRep_IsExploded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXLandMine_OnRep_IsExploded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXLandMine_OnRep_IsExploded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXLandMine_OnRep_IsExploded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXLandMine::execOnRep_IsExploded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsExploded();
	P_NATIVE_END;
}
// End Class ADXLandMine Function OnRep_IsExploded

// Begin Class ADXLandMine
void ADXLandMine::StaticRegisterNativesADXLandMine()
{
	UClass* Class = ADXLandMine::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastRPCSpawnEffect", &ADXLandMine::execMulticastRPCSpawnEffect },
		{ "OnLandMineBeginOverlap", &ADXLandMine::execOnLandMineBeginOverlap },
		{ "OnRep_IsExploded", &ADXLandMine::execOnRep_IsExploded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXLandMine);
UClass* Z_Construct_UClass_ADXLandMine_NoRegister()
{
	return ADXLandMine::StaticClass();
}
struct Z_Construct_UClass_ADXLandMine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick/DXLandMine.h" },
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "DXLandMine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "DXLandMine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "DXLandMine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "DXLandMine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExploded_MetaData[] = {
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetCullDistance_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "DXLandMine" },
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplodedMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "DXLandMine" },
		{ "ModuleRelativePath", "Gimmick/DXLandMine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static void NewProp_bIsExploded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExploded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetCullDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplodedMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADXLandMine_MulticastRPCSpawnEffect, "MulticastRPCSpawnEffect" }, // 826064855
		{ &Z_Construct_UFunction_ADXLandMine_OnLandMineBeginOverlap, "OnLandMineBeginOverlap" }, // 108650316
		{ &Z_Construct_UFunction_ADXLandMine_OnRep_IsExploded, "OnRep_IsExploded" }, // 3324099502
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXLandMine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXLandMine_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXLandMine, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXLandMine_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXLandMine, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXLandMine_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXLandMine, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXLandMine_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXLandMine, Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
void Z_Construct_UClass_ADXLandMine_Statics::NewProp_bIsExploded_SetBit(void* Obj)
{
	((ADXLandMine*)Obj)->bIsExploded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADXLandMine_Statics::NewProp_bIsExploded = { "bIsExploded", "OnRep_IsExploded", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ADXLandMine), &Z_Construct_UClass_ADXLandMine_Statics::NewProp_bIsExploded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExploded_MetaData), NewProp_bIsExploded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADXLandMine_Statics::NewProp_NetCullDistance = { "NetCullDistance", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXLandMine, NetCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetCullDistance_MetaData), NewProp_NetCullDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXLandMine_Statics::NewProp_ExplodedMaterial = { "ExplodedMaterial", nullptr, (EPropertyFlags)0x0144000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXLandMine, ExplodedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplodedMaterial_MetaData), NewProp_ExplodedMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXLandMine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXLandMine_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXLandMine_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXLandMine_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXLandMine_Statics::NewProp_Particle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXLandMine_Statics::NewProp_bIsExploded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXLandMine_Statics::NewProp_NetCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXLandMine_Statics::NewProp_ExplodedMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXLandMine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADXLandMine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXLandMine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXLandMine_Statics::ClassParams = {
	&ADXLandMine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADXLandMine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADXLandMine_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXLandMine_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXLandMine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXLandMine()
{
	if (!Z_Registration_Info_UClass_ADXLandMine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXLandMine.OuterSingleton, Z_Construct_UClass_ADXLandMine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXLandMine.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXLandMine>()
{
	return ADXLandMine::StaticClass();
}
void ADXLandMine::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsExploded(TEXT("bIsExploded"));
	const bool bIsValid = true
		&& Name_bIsExploded == ClassReps[(int32)ENetFields_Private::bIsExploded].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADXLandMine"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXLandMine);
ADXLandMine::~ADXLandMine() {}
// End Class ADXLandMine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXLandMine, ADXLandMine::StaticClass, TEXT("ADXLandMine"), &Z_Registration_Info_UClass_ADXLandMine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXLandMine), 3809944043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_929204150(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
