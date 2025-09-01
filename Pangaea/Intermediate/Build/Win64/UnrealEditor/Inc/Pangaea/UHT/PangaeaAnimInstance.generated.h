// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangaeaAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_PangaeaAnimInstance_generated_h
#error "PangaeaAnimInstance.generated.h already included, missing '#pragma once' in PangaeaAnimInstance.h"
#endif
#define PANGAEA_PangaeaAnimInstance_generated_h

#define FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStateAnimationEnds);


#define FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPangaeaAnimInstance(); \
	friend struct Z_Construct_UClass_UPangaeaAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPangaeaAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(UPangaeaAnimInstance)


#define FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPangaeaAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPangaeaAnimInstance(UPangaeaAnimInstance&&); \
	UPangaeaAnimInstance(const UPangaeaAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPangaeaAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPangaeaAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPangaeaAnimInstance) \
	NO_API virtual ~UPangaeaAnimInstance();


#define FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_17_PROLOG
#define FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class UPangaeaAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_PangaeaAnimInstance_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::Locomotion) \
	op(ECharacterState::Attack) \
	op(ECharacterState::Hit) \
	op(ECharacterState::Die) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> PANGAEA_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
