// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Gimmick/DXBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXBox();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXBox_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXBox Function OnRep_ServerLightColor
struct Z_Construct_UFunction_ADXBox_OnRep_ServerLightColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXBox_OnRep_ServerLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXBox, nullptr, "OnRep_ServerLightColor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXBox_OnRep_ServerLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXBox_OnRep_ServerLightColor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXBox_OnRep_ServerLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXBox_OnRep_ServerLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXBox::execOnRep_ServerLightColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ServerLightColor();
	P_NATIVE_END;
}
// End Class ADXBox Function OnRep_ServerLightColor

// Begin Class ADXBox Function OnRep_ServerRotationYaw
struct Z_Construct_UFunction_ADXBox_OnRep_ServerRotationYaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXBox_OnRep_ServerRotationYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXBox, nullptr, "OnRep_ServerRotationYaw", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXBox_OnRep_ServerRotationYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXBox_OnRep_ServerRotationYaw_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXBox_OnRep_ServerRotationYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXBox_OnRep_ServerRotationYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXBox::execOnRep_ServerRotationYaw)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ServerRotationYaw();
	P_NATIVE_END;
}
// End Class ADXBox Function OnRep_ServerRotationYaw

// Begin Class ADXBox
void ADXBox::StaticRegisterNativesADXBox()
{
	UClass* Class = ADXBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ServerLightColor", &ADXBox::execOnRep_ServerLightColor },
		{ "OnRep_ServerRotationYaw", &ADXBox::execOnRep_ServerRotationYaw },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXBox);
UClass* Z_Construct_UClass_ADXBox_NoRegister()
{
	return ADXBox::StaticClass();
}
struct Z_Construct_UClass_ADXBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick/DXBox.h" },
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "DXBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "DXBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerRotationYaw_MetaData[] = {
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[] = {
		{ "Category", "DXBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerLightColor_MetaData[] = {
		{ "ModuleRelativePath", "Gimmick/DXBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerRotationYaw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerLightColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADXBox_OnRep_ServerLightColor, "OnRep_ServerLightColor" }, // 1962458375
		{ &Z_Construct_UFunction_ADXBox_OnRep_ServerRotationYaw, "OnRep_ServerRotationYaw" }, // 661987067
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXBox_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXBox, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXBox_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXBox, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADXBox_Statics::NewProp_ServerRotationYaw = { "ServerRotationYaw", "OnRep_ServerRotationYaw", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXBox, ServerRotationYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerRotationYaw_MetaData), NewProp_ServerRotationYaw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXBox_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXBox, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_MetaData), NewProp_PointLight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADXBox_Statics::NewProp_ServerLightColor = { "ServerLightColor", "OnRep_ServerLightColor", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXBox, ServerLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerLightColor_MetaData), NewProp_ServerLightColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXBox_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXBox_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXBox_Statics::NewProp_ServerRotationYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXBox_Statics::NewProp_PointLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXBox_Statics::NewProp_ServerLightColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADXBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXBox_Statics::ClassParams = {
	&ADXBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADXBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADXBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXBox()
{
	if (!Z_Registration_Info_UClass_ADXBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXBox.OuterSingleton, Z_Construct_UClass_ADXBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXBox.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXBox>()
{
	return ADXBox::StaticClass();
}
void ADXBox::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ServerRotationYaw(TEXT("ServerRotationYaw"));
	static const FName Name_ServerLightColor(TEXT("ServerLightColor"));
	const bool bIsValid = true
		&& Name_ServerRotationYaw == ClassReps[(int32)ENetFields_Private::ServerRotationYaw].Property->GetFName()
		&& Name_ServerLightColor == ClassReps[(int32)ENetFields_Private::ServerLightColor].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADXBox"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXBox);
ADXBox::~ADXBox() {}
// End Class ADXBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXBox, ADXBox::StaticClass, TEXT("ADXBox"), &Z_Registration_Info_UClass_ADXBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXBox), 665119604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_2113908073(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
