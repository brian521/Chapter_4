// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Controller/DXPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerController();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerController_NoRegister();
DEDICATEDX_API UClass* Z_Construct_UClass_UUW_GameResult_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXPlayerController Function ClientRPCReturnToTitle
static const FName NAME_ADXPlayerController_ClientRPCReturnToTitle = FName(TEXT("ClientRPCReturnToTitle"));
void ADXPlayerController::ClientRPCReturnToTitle()
{
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerController_ClientRPCReturnToTitle);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADXPlayerController_ClientRPCReturnToTitle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controller/DXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerController_ClientRPCReturnToTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerController, nullptr, "ClientRPCReturnToTitle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerController_ClientRPCReturnToTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerController_ClientRPCReturnToTitle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXPlayerController_ClientRPCReturnToTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerController_ClientRPCReturnToTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerController::execClientRPCReturnToTitle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCReturnToTitle_Implementation();
	P_NATIVE_END;
}
// End Class ADXPlayerController Function ClientRPCReturnToTitle

// Begin Class ADXPlayerController Function ClientRPCShowGameResultWidget
struct DXPlayerController_eventClientRPCShowGameResultWidget_Parms
{
	int32 InRanking;
};
static const FName NAME_ADXPlayerController_ClientRPCShowGameResultWidget = FName(TEXT("ClientRPCShowGameResultWidget"));
void ADXPlayerController::ClientRPCShowGameResultWidget(int32 InRanking)
{
	DXPlayerController_eventClientRPCShowGameResultWidget_Parms Parms;
	Parms.InRanking=InRanking;
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerController_ClientRPCShowGameResultWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Controller/DXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InRanking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::NewProp_InRanking = { "InRanking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXPlayerController_eventClientRPCShowGameResultWidget_Parms, InRanking), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::NewProp_InRanking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerController, nullptr, "ClientRPCShowGameResultWidget", nullptr, nullptr, Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::PropPointers), sizeof(DXPlayerController_eventClientRPCShowGameResultWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(DXPlayerController_eventClientRPCShowGameResultWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerController::execClientRPCShowGameResultWidget)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InRanking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCShowGameResultWidget_Implementation(Z_Param_InRanking);
	P_NATIVE_END;
}
// End Class ADXPlayerController Function ClientRPCShowGameResultWidget

// Begin Class ADXPlayerController
void ADXPlayerController::StaticRegisterNativesADXPlayerController()
{
	UClass* Class = ADXPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCReturnToTitle", &ADXPlayerController::execClientRPCReturnToTitle },
		{ "ClientRPCShowGameResultWidget", &ADXPlayerController::execClientRPCShowGameResultWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXPlayerController);
UClass* Z_Construct_UClass_ADXPlayerController_NoRegister()
{
	return ADXPlayerController::StaticClass();
}
struct Z_Construct_UClass_ADXPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/DXPlayerController.h" },
		{ "ModuleRelativePath", "Controller/DXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "DXPlayerController" },
		{ "ModuleRelativePath", "Controller/DXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextUIClass_MetaData[] = {
		{ "Category", "DXPlayerController" },
		{ "ModuleRelativePath", "Controller/DXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameResultUIClass_MetaData[] = {
		{ "Category", "DXPlayerController" },
		{ "ModuleRelativePath", "Controller/DXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameResultUIClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADXPlayerController_ClientRPCReturnToTitle, "ClientRPCReturnToTitle" }, // 709560869
		{ &Z_Construct_UFunction_ADXPlayerController_ClientRPCShowGameResultWidget, "ClientRPCShowGameResultWidget" }, // 3306324371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ADXPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADXPlayerController_Statics::NewProp_NotificationTextUIClass = { "NotificationTextUIClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerController, NotificationTextUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextUIClass_MetaData), NewProp_NotificationTextUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADXPlayerController_Statics::NewProp_GameResultUIClass = { "GameResultUIClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerController, GameResultUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUW_GameResult_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameResultUIClass_MetaData), NewProp_GameResultUIClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerController_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerController_Statics::NewProp_NotificationTextUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerController_Statics::NewProp_GameResultUIClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADXPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXPlayerController_Statics::ClassParams = {
	&ADXPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADXPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXPlayerController()
{
	if (!Z_Registration_Info_UClass_ADXPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXPlayerController.OuterSingleton, Z_Construct_UClass_ADXPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXPlayerController.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXPlayerController>()
{
	return ADXPlayerController::StaticClass();
}
void ADXPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADXPlayerController"));
}
ADXPlayerController::ADXPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXPlayerController);
ADXPlayerController::~ADXPlayerController() {}
// End Class ADXPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXPlayerController, ADXPlayerController::StaticClass, TEXT("ADXPlayerController"), &Z_Registration_Info_UClass_ADXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXPlayerController), 3967258789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_4156779689(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
