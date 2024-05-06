// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFX_LAB1_GaLaGa_USFX_LaB1Projectile_generated_h
#error "GaLaGa_USFX_LaB1Projectile.generated.h already included, missing '#pragma once' in GaLaGa_USFX_LaB1Projectile.h"
#endif
#define GALAGA_USFX_LAB1_GaLaGa_USFX_LaB1Projectile_generated_h

#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_SPARSE_DATA
#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGaLaGa_USFX_LaB1Projectile(); \
	friend struct Z_Construct_UClass_AGaLaGa_USFX_LaB1Projectile_Statics; \
public: \
	DECLARE_CLASS(AGaLaGa_USFX_LaB1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GaLaGa_USFX_LaB1"), NO_API) \
	DECLARE_SERIALIZER(AGaLaGa_USFX_LaB1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGaLaGa_USFX_LaB1Projectile(); \
	friend struct Z_Construct_UClass_AGaLaGa_USFX_LaB1Projectile_Statics; \
public: \
	DECLARE_CLASS(AGaLaGa_USFX_LaB1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GaLaGa_USFX_LaB1"), NO_API) \
	DECLARE_SERIALIZER(AGaLaGa_USFX_LaB1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGaLaGa_USFX_LaB1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGaLaGa_USFX_LaB1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaLaGa_USFX_LaB1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaLaGa_USFX_LaB1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaLaGa_USFX_LaB1Projectile(AGaLaGa_USFX_LaB1Projectile&&); \
	NO_API AGaLaGa_USFX_LaB1Projectile(const AGaLaGa_USFX_LaB1Projectile&); \
public:


#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaLaGa_USFX_LaB1Projectile(AGaLaGa_USFX_LaB1Projectile&&); \
	NO_API AGaLaGa_USFX_LaB1Projectile(const AGaLaGa_USFX_LaB1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaLaGa_USFX_LaB1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaLaGa_USFX_LaB1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGaLaGa_USFX_LaB1Projectile)


#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AGaLaGa_USFX_LaB1Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGaLaGa_USFX_LaB1Projectile, ProjectileMovement); }


#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_12_PROLOG
#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_SPARSE_DATA \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_RPC_WRAPPERS \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_INCLASS \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_SPARSE_DATA \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_LAB1_API UClass* StaticClass<class AGaLaGa_USFX_LaB1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GaLaGa_USFX_LaB1_Source_GaLaGa_USFX_LaB1_GaLaGa_USFX_LaB1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
