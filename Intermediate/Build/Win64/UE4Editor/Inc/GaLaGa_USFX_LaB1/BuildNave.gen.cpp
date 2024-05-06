// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaLaGa_USFX_LaB1/BuildNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildNave() {}
// Cross Module References
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UBuildNave_NoRegister();
	GALAGA_USFX_LAB1_API UClass* Z_Construct_UClass_UBuildNave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GaLaGa_USFX_LaB1();
// End Cross Module References
	void UBuildNave::StaticRegisterNativesUBuildNave()
	{
	}
	UClass* Z_Construct_UClass_UBuildNave_NoRegister()
	{
		return UBuildNave::StaticClass();
	}
	struct Z_Construct_UClass_UBuildNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GaLaGa_USFX_LaB1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildNave_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuildNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuildNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuildNave_Statics::ClassParams = {
		&UBuildNave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuildNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuildNave, 3138030855);
	template<> GALAGA_USFX_LAB1_API UClass* StaticClass<UBuildNave>()
	{
		return UBuildNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuildNave(Z_Construct_UClass_UBuildNave, &UBuildNave::StaticClass, TEXT("/Script/GaLaGa_USFX_LaB1"), TEXT("UBuildNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
