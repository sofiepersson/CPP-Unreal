// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPUnrealIntro/SpawnManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnManager() {}
// Cross Module References
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_USpawnManager();
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_USpawnManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_CPPUnrealIntro();
// End Cross Module References
	void USpawnManager::StaticRegisterNativesUSpawnManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnManager);
	UClass* Z_Construct_UClass_USpawnManager_NoRegister()
	{
		return USpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_USpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPUnrealIntro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpawnManager.h" },
		{ "ModuleRelativePath", "SpawnManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnManager_Statics::ClassParams = {
		&USpawnManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpawnManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnManager()
	{
		if (!Z_Registration_Info_UClass_USpawnManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnManager.OuterSingleton, Z_Construct_UClass_USpawnManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnManager.OuterSingleton;
	}
	template<> CPPUNREALINTRO_API UClass* StaticClass<USpawnManager>()
	{
		return USpawnManager::StaticClass();
	}
	USpawnManager::USpawnManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnManager);
	USpawnManager::~USpawnManager() {}
	struct Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnManager, USpawnManager::StaticClass, TEXT("USpawnManager"), &Z_Registration_Info_UClass_USpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnManager), 2472935081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_3139060671(TEXT("/Script/CPPUnrealIntro"),
		Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
