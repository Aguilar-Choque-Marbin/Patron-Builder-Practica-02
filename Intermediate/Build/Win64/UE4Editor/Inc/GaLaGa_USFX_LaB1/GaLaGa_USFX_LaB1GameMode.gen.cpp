// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaLaGa_USFX_LaB1/GaLaGa_USFX_LaB1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaLaGa_USFX_LaB1GameMode() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GaLaGa_USFX_LaB1();
// End Cross Module References
	void AGaLaGa_USFX_LaB1GameMode::StaticRegisterNativesAGaLaGa_USFX_LaB1GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_NoRegister()
	{
		return AGaLaGa_USFX_LaB1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GaLaGa_USFX_LaB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GaLaGa_USFX_LaB1GameMode.h" },
		{ "ModuleRelativePath", "GaLaGa_USFX_LaB1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaLaGa_USFX_LaB1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics::ClassParams = {
		&AGaLaGa_USFX_LaB1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaLaGa_USFX_LaB1GameMode, 3340892588);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<AGaLaGa_USFX_LaB1GameMode>()
	{
		return AGaLaGa_USFX_LaB1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaLaGa_USFX_LaB1GameMode(Z_Construct_UClass_AGaLaGa_USFX_LaB1GameMode, &AGaLaGa_USFX_LaB1GameMode::StaticClass, TEXT("/Script/GaLaGa_USFX_LaB1"), TEXT("AGaLaGa_USFX_LaB1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaLaGa_USFX_LaB1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
