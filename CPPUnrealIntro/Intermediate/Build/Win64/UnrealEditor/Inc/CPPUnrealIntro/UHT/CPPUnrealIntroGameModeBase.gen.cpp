// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPUnrealIntro/CPPUnrealIntroGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPUnrealIntroGameModeBase() {}
// Cross Module References
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_ACPPUnrealIntroGameModeBase();
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_ACPPUnrealIntroGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPPUnrealIntro();
// End Cross Module References
	void ACPPUnrealIntroGameModeBase::StaticRegisterNativesACPPUnrealIntroGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPPUnrealIntroGameModeBase);
	UClass* Z_Construct_UClass_ACPPUnrealIntroGameModeBase_NoRegister()
	{
		return ACPPUnrealIntroGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPUnrealIntro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPPUnrealIntroGameModeBase.h" },
		{ "ModuleRelativePath", "CPPUnrealIntroGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPUnrealIntroGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics::ClassParams = {
		&ACPPUnrealIntroGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPPUnrealIntroGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACPPUnrealIntroGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPPUnrealIntroGameModeBase.OuterSingleton, Z_Construct_UClass_ACPPUnrealIntroGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPPUnrealIntroGameModeBase.OuterSingleton;
	}
	template<> CPPUNREALINTRO_API UClass* StaticClass<ACPPUnrealIntroGameModeBase>()
	{
		return ACPPUnrealIntroGameModeBase::StaticClass();
	}
	ACPPUnrealIntroGameModeBase::ACPPUnrealIntroGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPUnrealIntroGameModeBase);
	ACPPUnrealIntroGameModeBase::~ACPPUnrealIntroGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_CPPUnrealIntroGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_CPPUnrealIntroGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPPUnrealIntroGameModeBase, ACPPUnrealIntroGameModeBase::StaticClass, TEXT("ACPPUnrealIntroGameModeBase"), &Z_Registration_Info_UClass_ACPPUnrealIntroGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPPUnrealIntroGameModeBase), 4250770280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_CPPUnrealIntroGameModeBase_h_499432391(TEXT("/Script/CPPUnrealIntro"),
		Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_CPPUnrealIntroGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_CPPUnrealIntroGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
