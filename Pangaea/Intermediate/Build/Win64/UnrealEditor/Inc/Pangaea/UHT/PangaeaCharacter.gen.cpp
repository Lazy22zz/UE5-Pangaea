// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaCharacter();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaCharacter_NoRegister();
PANGAEA_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References

// Begin Class APangaeaCharacter Function CanAttack
struct Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics
{
	struct PangaeaCharacter_eventCanAttack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//check if the character has been killed\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "check if the character has been killed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PangaeaCharacter_eventCanAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PangaeaCharacter_eventCanAttack_Parms), &Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangaeaCharacter, nullptr, "CanAttack", nullptr, nullptr, Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::PangaeaCharacter_eventCanAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::PangaeaCharacter_eventCanAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APangaeaCharacter_CanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangaeaCharacter_CanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangaeaCharacter::execCanAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAttack();
	P_NATIVE_END;
}
// End Class APangaeaCharacter Function CanAttack

// Begin Class APangaeaCharacter Function DisableWeaponCollision
struct Z_Construct_UFunction_APangaeaCharacter_DisableWeaponCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Combat" },
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangaeaCharacter_DisableWeaponCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangaeaCharacter, nullptr, "DisableWeaponCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_DisableWeaponCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangaeaCharacter_DisableWeaponCollision_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APangaeaCharacter_DisableWeaponCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangaeaCharacter_DisableWeaponCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangaeaCharacter::execDisableWeaponCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableWeaponCollision();
	P_NATIVE_END;
}
// End Class APangaeaCharacter Function DisableWeaponCollision

// Begin Class APangaeaCharacter Function EnableWeaponCollision
struct Z_Construct_UFunction_APangaeaCharacter_EnableWeaponCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions to be called by AnimNotifies\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions to be called by AnimNotifies" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangaeaCharacter_EnableWeaponCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangaeaCharacter, nullptr, "EnableWeaponCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_EnableWeaponCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangaeaCharacter_EnableWeaponCollision_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APangaeaCharacter_EnableWeaponCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangaeaCharacter_EnableWeaponCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangaeaCharacter::execEnableWeaponCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableWeaponCollision();
	P_NATIVE_END;
}
// End Class APangaeaCharacter Function EnableWeaponCollision

// Begin Class APangaeaCharacter Function GetHealthPoints
struct Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics
{
	struct PangaeaCharacter_eventGetHealthPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Character" },
		{ "DisplayName", "Get HP" },
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PangaeaCharacter_eventGetHealthPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangaeaCharacter, nullptr, "GetHealthPoints", nullptr, nullptr, Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::PangaeaCharacter_eventGetHealthPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::PangaeaCharacter_eventGetHealthPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangaeaCharacter::execGetHealthPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealthPoints();
	P_NATIVE_END;
}
// End Class APangaeaCharacter Function GetHealthPoints

// Begin Class APangaeaCharacter Function IsKilled
struct Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics
{
	struct PangaeaCharacter_eventIsKilled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//get current health points\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get current health points" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PangaeaCharacter_eventIsKilled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PangaeaCharacter_eventIsKilled_Parms), &Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangaeaCharacter, nullptr, "IsKilled", nullptr, nullptr, Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::PangaeaCharacter_eventIsKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::PangaeaCharacter_eventIsKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APangaeaCharacter_IsKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangaeaCharacter_IsKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangaeaCharacter::execIsKilled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsKilled();
	P_NATIVE_END;
}
// End Class APangaeaCharacter Function IsKilled

// Begin Class APangaeaCharacter
void APangaeaCharacter::StaticRegisterNativesAPangaeaCharacter()
{
	UClass* Class = APangaeaCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAttack", &APangaeaCharacter::execCanAttack },
		{ "DisableWeaponCollision", &APangaeaCharacter::execDisableWeaponCollision },
		{ "EnableWeaponCollision", &APangaeaCharacter::execEnableWeaponCollision },
		{ "GetHealthPoints", &APangaeaCharacter::execGetHealthPoints },
		{ "IsKilled", &APangaeaCharacter::execIsKilled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangaeaCharacter);
UClass* Z_Construct_UClass_APangaeaCharacter_NoRegister()
{
	return APangaeaCharacter::StaticClass();
}
struct Z_Construct_UClass_APangaeaCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PangaeaCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the character's max health points\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the character's max health points" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the character's attack strength\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the character's attack strength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the character's defense armor\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the character's defense armor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterval_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the character's attack range\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the character's attack range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Pangaea|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// <--- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "PangaeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<--- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HealthPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APangaeaCharacter_CanAttack, "CanAttack" }, // 2967080217
		{ &Z_Construct_UFunction_APangaeaCharacter_DisableWeaponCollision, "DisableWeaponCollision" }, // 740924040
		{ &Z_Construct_UFunction_APangaeaCharacter_EnableWeaponCollision, "EnableWeaponCollision" }, // 3615542764
		{ &Z_Construct_UFunction_APangaeaCharacter_GetHealthPoints, "GetHealthPoints" }, // 2453992784
		{ &Z_Construct_UFunction_APangaeaCharacter_IsKilled, "IsKilled" }, // 283528236
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangaeaCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaCharacter, HealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPoints_MetaData), NewProp_HealthPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaCharacter, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaCharacter, Armor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_AttackInterval = { "AttackInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaCharacter, AttackInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterval_MetaData), NewProp_AttackInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangaeaCharacter, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APangaeaCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_HealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_AttackInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangaeaCharacter_Statics::NewProp_EquippedWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APangaeaCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APangaeaCharacter_Statics::ClassParams = {
	&APangaeaCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APangaeaCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APangaeaCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APangaeaCharacter()
{
	if (!Z_Registration_Info_UClass_APangaeaCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangaeaCharacter.OuterSingleton, Z_Construct_UClass_APangaeaCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APangaeaCharacter.OuterSingleton;
}
template<> PANGAEA_API UClass* StaticClass<APangaeaCharacter>()
{
	return APangaeaCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APangaeaCharacter);
APangaeaCharacter::~APangaeaCharacter() {}
// End Class APangaeaCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APangaeaCharacter, APangaeaCharacter::StaticClass, TEXT("APangaeaCharacter"), &Z_Registration_Info_UClass_APangaeaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangaeaCharacter), 459994008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_10593847(TEXT("/Script/Pangaea"),
	Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
