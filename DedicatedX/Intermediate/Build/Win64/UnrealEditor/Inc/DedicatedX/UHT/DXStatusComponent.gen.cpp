// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Component/DXStatusComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXStatusComponent() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_UDXStatusComponent();
DEDICATEDX_API UClass* Z_Construct_UClass_UDXStatusComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class UDXStatusComponent Function OnRep_CurrentHP
struct Z_Construct_UFunction_UDXStatusComponent_OnRep_CurrentHP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/DXStatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDXStatusComponent_OnRep_CurrentHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDXStatusComponent, nullptr, "OnRep_CurrentHP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDXStatusComponent_OnRep_CurrentHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDXStatusComponent_OnRep_CurrentHP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDXStatusComponent_OnRep_CurrentHP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDXStatusComponent_OnRep_CurrentHP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDXStatusComponent::execOnRep_CurrentHP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHP();
	P_NATIVE_END;
}
// End Class UDXStatusComponent Function OnRep_CurrentHP

// Begin Class UDXStatusComponent Function OnRep_MaxHP
struct Z_Construct_UFunction_UDXStatusComponent_OnRep_MaxHP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Component/DXStatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDXStatusComponent_OnRep_MaxHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDXStatusComponent, nullptr, "OnRep_MaxHP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDXStatusComponent_OnRep_MaxHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDXStatusComponent_OnRep_MaxHP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDXStatusComponent_OnRep_MaxHP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDXStatusComponent_OnRep_MaxHP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDXStatusComponent::execOnRep_MaxHP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHP();
	P_NATIVE_END;
}
// End Class UDXStatusComponent Function OnRep_MaxHP

// Begin Class UDXStatusComponent
void UDXStatusComponent::StaticRegisterNativesUDXStatusComponent()
{
	UClass* Class = UDXStatusComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentHP", &UDXStatusComponent::execOnRep_CurrentHP },
		{ "OnRep_MaxHP", &UDXStatusComponent::execOnRep_MaxHP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDXStatusComponent);
UClass* Z_Construct_UClass_UDXStatusComponent_NoRegister()
{
	return UDXStatusComponent::StaticClass();
}
struct Z_Construct_UClass_UDXStatusComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/DXStatusComponent.h" },
		{ "ModuleRelativePath", "Component/DXStatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "ModuleRelativePath", "Component/DXStatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "ModuleRelativePath", "Component/DXStatusComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDXStatusComponent_OnRep_CurrentHP, "OnRep_CurrentHP" }, // 3161991667
		{ &Z_Construct_UFunction_UDXStatusComponent_OnRep_MaxHP, "OnRep_MaxHP" }, // 24837166
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDXStatusComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDXStatusComponent_Statics::NewProp_CurrentHP = { "CurrentHP", "OnRep_CurrentHP", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDXStatusComponent, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDXStatusComponent_Statics::NewProp_MaxHP = { "MaxHP", "OnRep_MaxHP", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDXStatusComponent, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDXStatusComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXStatusComponent_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXStatusComponent_Statics::NewProp_MaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDXStatusComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDXStatusComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDXStatusComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDXStatusComponent_Statics::ClassParams = {
	&UDXStatusComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDXStatusComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDXStatusComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDXStatusComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDXStatusComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDXStatusComponent()
{
	if (!Z_Registration_Info_UClass_UDXStatusComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDXStatusComponent.OuterSingleton, Z_Construct_UClass_UDXStatusComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDXStatusComponent.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<UDXStatusComponent>()
{
	return UDXStatusComponent::StaticClass();
}
void UDXStatusComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentHP(TEXT("CurrentHP"));
	static const FName Name_MaxHP(TEXT("MaxHP"));
	const bool bIsValid = true
		&& Name_CurrentHP == ClassReps[(int32)ENetFields_Private::CurrentHP].Property->GetFName()
		&& Name_MaxHP == ClassReps[(int32)ENetFields_Private::MaxHP].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDXStatusComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDXStatusComponent);
UDXStatusComponent::~UDXStatusComponent() {}
// End Class UDXStatusComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXStatusComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDXStatusComponent, UDXStatusComponent::StaticClass, TEXT("UDXStatusComponent"), &Z_Registration_Info_UClass_UDXStatusComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDXStatusComponent), 1732871400U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXStatusComponent_h_4277806733(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXStatusComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXStatusComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
