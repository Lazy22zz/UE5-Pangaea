// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangaeaPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_PangaeaPlayerController_generated_h
#error "PangaeaPlayerController.generated.h already included, missing '#pragma once' in PangaeaPlayerController.h"
#endif
#define PANGAEA_PangaeaPlayerController_generated_h

#define FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPangaeaPlayerController(); \
	friend struct Z_Construct_UClass_APangaeaPlayerController_Statics; \
public: \
	DECLARE_CLASS(APangaeaPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(APangaeaPlayerController)


#define FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APangaeaPlayerController(APangaeaPlayerController&&); \
	APangaeaPlayerController(const APangaeaPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APangaeaPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APangaeaPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APangaeaPlayerController) \
	NO_API virtual ~APangaeaPlayerController();


#define FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_13_PROLOG
#define FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class APangaeaPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_PangaeaPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
