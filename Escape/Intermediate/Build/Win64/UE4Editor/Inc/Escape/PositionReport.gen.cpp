// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escape/PositionReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePositionReport() {}
// Cross Module References
	ESCAPE_API UClass* Z_Construct_UClass_UPositionReport_NoRegister();
	ESCAPE_API UClass* Z_Construct_UClass_UPositionReport();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Escape();
// End Cross Module References
	void UPositionReport::StaticRegisterNativesUPositionReport()
	{
	}
	UClass* Z_Construct_UClass_UPositionReport_NoRegister()
	{
		return UPositionReport::StaticClass();
	}
	struct Z_Construct_UClass_UPositionReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPositionReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Escape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionReport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PositionReport.h" },
		{ "ModuleRelativePath", "PositionReport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPositionReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPositionReport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPositionReport_Statics::ClassParams = {
		&UPositionReport::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPositionReport_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPositionReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPositionReport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPositionReport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPositionReport, 1397130626);
	template<> ESCAPE_API UClass* StaticClass<UPositionReport>()
	{
		return UPositionReport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPositionReport(Z_Construct_UClass_UPositionReport, &UPositionReport::StaticClass, TEXT("/Script/Escape"), TEXT("UPositionReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionReport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
