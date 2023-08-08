// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhoneBooth/GearsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGearsManager() {}
// Cross Module References
	PHONEBOOTH_API UClass* Z_Construct_UClass_AGearsManager_NoRegister();
	PHONEBOOTH_API UClass* Z_Construct_UClass_AGearsManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PhoneBooth();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AGearsManager::StaticRegisterNativesAGearsManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGearsManager);
	UClass* Z_Construct_UClass_AGearsManager_NoRegister()
	{
		return AGearsManager::StaticClass();
	}
	struct Z_Construct_UClass_AGearsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GearActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GearActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGearsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PhoneBooth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGearsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GearsManager.h" },
		{ "ModuleRelativePath", "GearsManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGearsManager_Statics::NewProp_GearActors_Inner = { "GearActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGearsManager_Statics::NewProp_GearActors_MetaData[] = {
		{ "Category", "GearActors" },
		{ "ModuleRelativePath", "GearsManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGearsManager_Statics::NewProp_GearActors = { "GearActors", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGearsManager, GearActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGearsManager_Statics::NewProp_GearActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGearsManager_Statics::NewProp_GearActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGearsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGearsManager_Statics::NewProp_GearActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGearsManager_Statics::NewProp_GearActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGearsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGearsManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGearsManager_Statics::ClassParams = {
		&AGearsManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGearsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGearsManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGearsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGearsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGearsManager()
	{
		if (!Z_Registration_Info_UClass_AGearsManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGearsManager.OuterSingleton, Z_Construct_UClass_AGearsManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGearsManager.OuterSingleton;
	}
	template<> PHONEBOOTH_API UClass* StaticClass<AGearsManager>()
	{
		return AGearsManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGearsManager);
	struct Z_CompiledInDeferFile_FID_PhoneBooth_Source_PhoneBooth_GearsManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PhoneBooth_Source_PhoneBooth_GearsManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGearsManager, AGearsManager::StaticClass, TEXT("AGearsManager"), &Z_Registration_Info_UClass_AGearsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGearsManager), 3736842432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PhoneBooth_Source_PhoneBooth_GearsManager_h_2170872722(TEXT("/Script/PhoneBooth"),
		Z_CompiledInDeferFile_FID_PhoneBooth_Source_PhoneBooth_GearsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PhoneBooth_Source_PhoneBooth_GearsManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
