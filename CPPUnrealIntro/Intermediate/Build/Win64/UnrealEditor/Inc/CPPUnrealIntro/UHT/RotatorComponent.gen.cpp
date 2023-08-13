// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPUnrealIntro/RotatorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatorComponent() {}
// Cross Module References
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_URotatorComponent();
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_URotatorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CPPUnrealIntro();
// End Cross Module References
	void URotatorComponent::StaticRegisterNativesURotatorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotatorComponent);
	UClass* Z_Construct_UClass_URotatorComponent_NoRegister()
	{
		return URotatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_URotatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPUnrealIntro,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RotatorComponent.h" },
		{ "ModuleRelativePath", "RotatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotatorComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "RotatorComponent" },
		{ "ModuleRelativePath", "RotatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URotatorComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URotatorComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_URotatorComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URotatorComponent_Statics::NewProp_RotationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotatorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatorComponent_Statics::NewProp_RotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotatorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URotatorComponent_Statics::ClassParams = {
		&URotatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URotatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URotatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URotatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URotatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URotatorComponent()
	{
		if (!Z_Registration_Info_UClass_URotatorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotatorComponent.OuterSingleton, Z_Construct_UClass_URotatorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URotatorComponent.OuterSingleton;
	}
	template<> CPPUNREALINTRO_API UClass* StaticClass<URotatorComponent>()
	{
		return URotatorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotatorComponent);
	URotatorComponent::~URotatorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_RotatorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_RotatorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URotatorComponent, URotatorComponent::StaticClass, TEXT("URotatorComponent"), &Z_Registration_Info_UClass_URotatorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotatorComponent), 619548413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_RotatorComponent_h_1617227570(TEXT("/Script/CPPUnrealIntro"),
		Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_RotatorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_RotatorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
