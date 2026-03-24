// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/GameState/DXGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXGameStateBase() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameStateBase();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameStateBase_NoRegister();
DEDICATEDX_API UEnum* Z_Construct_UEnum_DedicatedX_EMatchState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Enum EMatchState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMatchState;
static UEnum* EMatchState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMatchState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMatchState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DedicatedX_EMatchState, (UObject*)Z_Construct_UPackage__Script_DedicatedX(), TEXT("EMatchState"));
	}
	return Z_Registration_Info_UEnum_EMatchState.OuterSingleton;
}
template<> DEDICATEDX_API UEnum* StaticEnum<EMatchState>()
{
	return EMatchState_StaticEnum();
}
struct Z_Construct_UEnum_DedicatedX_EMatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "End.Name", "EMatchState::End" },
		{ "Ending.Name", "EMatchState::Ending" },
		{ "ModuleRelativePath", "GameState/DXGameStateBase.h" },
		{ "None.Name", "EMatchState::None" },
		{ "Playing.Name", "EMatchState::Playing" },
		{ "Waiting.Name", "EMatchState::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMatchState::None", (int64)EMatchState::None },
		{ "EMatchState::Waiting", (int64)EMatchState::Waiting },
		{ "EMatchState::Playing", (int64)EMatchState::Playing },
		{ "EMatchState::Ending", (int64)EMatchState::Ending },
		{ "EMatchState::End", (int64)EMatchState::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DedicatedX_EMatchState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DedicatedX,
	nullptr,
	"EMatchState",
	"EMatchState",
	Z_Construct_UEnum_DedicatedX_EMatchState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DedicatedX_EMatchState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DedicatedX_EMatchState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DedicatedX_EMatchState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DedicatedX_EMatchState()
{
	if (!Z_Registration_Info_UEnum_EMatchState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMatchState.InnerSingleton, Z_Construct_UEnum_DedicatedX_EMatchState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMatchState.InnerSingleton;
}
// End Enum EMatchState

// Begin Class ADXGameStateBase
void ADXGameStateBase::StaticRegisterNativesADXGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXGameStateBase);
UClass* Z_Construct_UClass_ADXGameStateBase_NoRegister()
{
	return ADXGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ADXGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/DXGameStateBase.h" },
		{ "ModuleRelativePath", "GameState/DXGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlivePlayerControllerCount_MetaData[] = {
		{ "Category", "DXGameStateBase" },
		{ "ModuleRelativePath", "GameState/DXGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
		{ "Category", "DXGameStateBase" },
		{ "ModuleRelativePath", "GameState/DXGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlivePlayerControllerCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADXGameStateBase_Statics::NewProp_AlivePlayerControllerCount = { "AlivePlayerControllerCount", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXGameStateBase, AlivePlayerControllerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlivePlayerControllerCount_MetaData), NewProp_AlivePlayerControllerCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADXGameStateBase_Statics::NewProp_MatchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADXGameStateBase_Statics::NewProp_MatchState = { "MatchState", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXGameStateBase, MatchState), Z_Construct_UEnum_DedicatedX_EMatchState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchState_MetaData), NewProp_MatchState_MetaData) }; // 789439991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameStateBase_Statics::NewProp_AlivePlayerControllerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameStateBase_Statics::NewProp_MatchState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXGameStateBase_Statics::NewProp_MatchState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADXGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXGameStateBase_Statics::ClassParams = {
	&ADXGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADXGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXGameStateBase()
{
	if (!Z_Registration_Info_UClass_ADXGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXGameStateBase.OuterSingleton, Z_Construct_UClass_ADXGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXGameStateBase.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXGameStateBase>()
{
	return ADXGameStateBase::StaticClass();
}
void ADXGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AlivePlayerControllerCount(TEXT("AlivePlayerControllerCount"));
	static const FName Name_MatchState(TEXT("MatchState"));
	const bool bIsValid = true
		&& Name_AlivePlayerControllerCount == ClassReps[(int32)ENetFields_Private::AlivePlayerControllerCount].Property->GetFName()
		&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADXGameStateBase"));
}
ADXGameStateBase::ADXGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXGameStateBase);
ADXGameStateBase::~ADXGameStateBase() {}
// End Class ADXGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMatchState_StaticEnum, TEXT("EMatchState"), &Z_Registration_Info_UEnum_EMatchState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 789439991U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXGameStateBase, ADXGameStateBase::StaticClass, TEXT("ADXGameStateBase"), &Z_Registration_Info_UClass_ADXGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXGameStateBase), 1118736030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_1756507254(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
