// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaPlayerController();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References

// Begin Class APangaeaPlayerController
void APangaeaPlayerController::StaticRegisterNativesAPangaeaPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangaeaPlayerController);
UClass* Z_Construct_UClass_APangaeaPlayerController_NoRegister()
{
	return APangaeaPlayerController::StaticClass();
}
struct Z_Construct_UClass_APangaeaPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PangaeaPlayerController.h" },
		{ "ModuleRelativePath", "PangaeaPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "PangaeaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "PangaeaPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangaeaPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangaeaPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APangaeaPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APangaeaPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaPlayerController_Statics::NewProp_FXCursor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APangaeaPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APangaeaPlayerController_Statics::ClassParams = {
	&APangaeaPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APangaeaPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APangaeaPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APangaeaPlayerController()
{
	if (!Z_Registration_Info_UClass_APangaeaPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangaeaPlayerController.OuterSingleton, Z_Construct_UClass_APangaeaPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APangaeaPlayerController.OuterSingleton;
}
template<> PANGAEA_API UClass* StaticClass<APangaeaPlayerController>()
{
	return APangaeaPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APangaeaPlayerController);
APangaeaPlayerController::~APangaeaPlayerController() {}
// End Class APangaeaPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APangaeaPlayerController, APangaeaPlayerController::StaticClass, TEXT("APangaeaPlayerController"), &Z_Registration_Info_UClass_APangaeaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangaeaPlayerController), 3499338556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_3478406124(TEXT("/Script/Pangaea"),
	Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
