// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PlayerAvatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAvatar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaCharacter();
PANGAEA_API UClass* Z_Construct_UClass_APlayerAvatar();
PANGAEA_API UClass* Z_Construct_UClass_APlayerAvatar_NoRegister();
PANGAEA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References

// Begin Class APlayerAvatar Function AttachWeapon
struct Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics
{
	struct PlayerAvatar_eventAttachWeapon_Parms
	{
		AWeapon* Weapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|PlayerAvatar" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAvatar_eventAttachWeapon_Parms, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "AttachWeapon", nullptr, nullptr, Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::PlayerAvatar_eventAttachWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::PlayerAvatar_eventAttachWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerAvatar_AttachWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_AttachWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerAvatar::execAttachWeapon)
{
	P_GET_OBJECT(AWeapon,Z_Param_Weapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachWeapon(Z_Param_Weapon);
	P_NATIVE_END;
}
// End Class APlayerAvatar Function AttachWeapon

// Begin Class APlayerAvatar Function DropWeapon
struct Z_Construct_UFunction_APlayerAvatar_DropWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|PlayerAvatar" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatar_DropWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatar, nullptr, "DropWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatar_DropWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerAvatar_DropWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerAvatar_DropWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatar_DropWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerAvatar::execDropWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropWeapon();
	P_NATIVE_END;
}
// End Class APlayerAvatar Function DropWeapon

// Begin Class APlayerAvatar
void APlayerAvatar::StaticRegisterNativesAPlayerAvatar()
{
	UClass* Class = APlayerAvatar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachWeapon", &APlayerAvatar::execAttachWeapon },
		{ "DropWeapon", &APlayerAvatar::execDropWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerAvatar);
UClass* Z_Construct_UClass_APlayerAvatar_NoRegister()
{
	return APlayerAvatar::StaticClass();
}
struct Z_Construct_UClass_APlayerAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerAvatar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__springArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__cameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__springArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__cameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerAvatar_AttachWeapon, "AttachWeapon" }, // 622053375
		{ &Z_Construct_UFunction_APlayerAvatar_DropWeapon, "DropWeapon" }, // 3376491584
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp__springArmComponent = { "_springArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerAvatar, _springArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__springArmComponent_MetaData), NewProp__springArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatar_Statics::NewProp__cameraComponent = { "_cameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerAvatar, _cameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__cameraComponent_MetaData), NewProp__cameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp__springArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatar_Statics::NewProp__cameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APangaeaCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAvatar_Statics::ClassParams = {
	&APlayerAvatar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerAvatar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerAvatar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerAvatar()
{
	if (!Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton, Z_Construct_UClass_APlayerAvatar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerAvatar.OuterSingleton;
}
template<> PANGAEA_API UClass* StaticClass<APlayerAvatar>()
{
	return APlayerAvatar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAvatar);
APlayerAvatar::~APlayerAvatar() {}
// End Class APlayerAvatar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAvatar, APlayerAvatar::StaticClass, TEXT("APlayerAvatar"), &Z_Registration_Info_UClass_APlayerAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAvatar), 4027540677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_3892863083(TEXT("/Script/Pangaea"),
	Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PlayerAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
