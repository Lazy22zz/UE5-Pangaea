// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangaeaCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_PangaeaCharacter_generated_h
#error "PangaeaCharacter.generated.h already included, missing '#pragma once' in PangaeaCharacter.h"
#endif
#define PANGAEA_PangaeaCharacter_generated_h

#define FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableWeaponCollision); \
	DECLARE_FUNCTION(execEnableWeaponCollision); \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execIsKilled); \
	DECLARE_FUNCTION(execGetHealthPoints);


#define FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPangaeaCharacter(); \
	friend struct Z_Construct_UClass_APangaeaCharacter_Statics; \
public: \
	DECLARE_CLASS(APangaeaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(APangaeaCharacter)


#define FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APangaeaCharacter(APangaeaCharacter&&); \
	APangaeaCharacter(const APangaeaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APangaeaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APangaeaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APangaeaCharacter) \
	NO_API virtual ~APangaeaCharacter();


#define FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_11_PROLOG
#define FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class APangaeaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_PangaeaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
