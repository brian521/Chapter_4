// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/GameMode/DXGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXGameModeBase() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameModeBase();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameModeBase_NoRegister();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXGameModeBase Function OnMainTimerElapsed
struct Z_Construct_UFunction_ADXGameModeBase_OnMainTimerElapsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode/DXGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXGameModeBase_OnMainTimerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXGameModeBase, nullptr, "OnMainTimerElapsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXGameModeBase_OnMainTimerElapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXGameModeBase_OnMainTimerElapsed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXGameModeBase_OnMainTimerElapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXGameModeBase_OnMainTimerElapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXGameModeBase::execOnMainTimerElapsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMainTimerElapsed();
	P_NATIVE_END;
}
// End Class ADXGameModeBase Function OnMainTimerElapsed

// Begin Class ADXGameModeBase
void ADXGameModeBase::StaticRegisterNativesADXGameModeBase()
{
	UClass* Class = ADXGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMainTimerElapsed", &ADXGameModeBase::execOnMainTimerElapsed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXGameModeBase);
UClass* Z_Construct_UClass_ADXGameModeBase_NoRegister()
{
	return ADXGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ADXGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/DXGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/DXGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitingTime_MetaData[] = {
		{ "Category", "DXGameModeBase" },
		{ "ModuleRelativePath", "GameMode/DXGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndingTime_MetaData[] = {
		{ "Category", "DXGameModeBase" },
		{ "ModuleRelativePath", "GameMode/DXGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlivePlayerControllers_MetaData[] = {
		{ "Category", "DXGameModeBase" },
		{ "ModuleRelativePath", "GameMode/DXGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadPlayerControllers_MetaData[] = {
		{ "Category", "DXGameModeBase" },
		{ "ModuleRelativePath", "GameMode/DXGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlivePlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlivePlayerControllers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadPlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DeadPlayerControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADXGameModeBase_OnMainTimerElapsed, "OnMainTimerElapsed" }, // 3110612362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_WaitingTime = { "WaitingTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXGameModeBase, WaitingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitingTime_MetaData), NewProp_WaitingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_EndingTime = { "EndingTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXGameModeBase, EndingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndingTime_MetaData), NewProp_EndingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_AlivePlayerControllers_Inner = { "AlivePlayerControllers", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADXPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_AlivePlayerControllers = { "AlivePlayerControllers", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXGameModeBase, AlivePlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlivePlayerControllers_MetaData), NewProp_AlivePlayerControllers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_DeadPlayerControllers_Inner = { "DeadPlayerControllers", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADXPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_DeadPlayerControllers = { "DeadPlayerControllers", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXGameModeBase, DeadPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadPlayerControllers_MetaData), NewProp_DeadPlayerControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_WaitingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_EndingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_AlivePlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_AlivePlayerControllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_DeadPlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameModeBase_Statics::NewProp_DeadPlayerControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADXGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXGameModeBase_Statics::ClassParams = {
	&ADXGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADXGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXGameModeBase()
{
	if (!Z_Registration_Info_UClass_ADXGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXGameModeBase.OuterSingleton, Z_Construct_UClass_ADXGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXGameModeBase.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXGameModeBase>()
{
	return ADXGameModeBase::StaticClass();
}
ADXGameModeBase::ADXGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXGameModeBase);
ADXGameModeBase::~ADXGameModeBase() {}
// End Class ADXGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXGameModeBase, ADXGameModeBase::StaticClass, TEXT("ADXGameModeBase"), &Z_Registration_Info_UClass_ADXGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXGameModeBase), 1481717164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_1430786397(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
