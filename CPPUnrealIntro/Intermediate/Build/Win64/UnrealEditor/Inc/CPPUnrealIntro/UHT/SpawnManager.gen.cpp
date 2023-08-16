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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_USpawnManager();
	CPPUNREALINTRO_API UClass* Z_Construct_UClass_USpawnManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_CPPUnrealIntro();
// End Cross Module References
	DEFINE_FUNCTION(USpawnManager::execSpawn)
	{
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_OBJECT(UClass,Z_Param_LoadedObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn(Z_Param_SpawnLocation,Z_Param_LoadedObject);
		P_NATIVE_END;
	}
	void USpawnManager::StaticRegisterNativesUSpawnManager()
	{
		UClass* Class = USpawnManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &USpawnManager::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpawnManager_Spawn_Statics
	{
		struct SpawnManager_eventSpawn_Parms
		{
			FVector SpawnLocation;
			UClass* LoadedObject;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoadedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpawnManager_Spawn_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnManager_eventSpawn_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USpawnManager_Spawn_Statics::NewProp_LoadedObject = { "LoadedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnManager_eventSpawn_Parms, LoadedObject), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnManager_Spawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManager_Spawn_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnManager_Spawn_Statics::NewProp_LoadedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnManager_Spawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpawnManager" },
		{ "ModuleRelativePath", "SpawnManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnManager_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnManager, nullptr, "Spawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpawnManager_Spawn_Statics::SpawnManager_eventSpawn_Parms), Z_Construct_UFunction_USpawnManager_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManager_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpawnManager_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnManager_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpawnManager_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnManager_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnManager);
	UClass* Z_Construct_UClass_USpawnManager_NoRegister()
	{
		return USpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_USpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_USpawnManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpawnManager_Spawn, "Spawn" }, // 679055468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpawnManager.h" },
		{ "IsBlueprintBase", "true" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_USpawnManager, USpawnManager::StaticClass, TEXT("USpawnManager"), &Z_Registration_Info_UClass_USpawnManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnManager), 2335444955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_3096531537(TEXT("/Script/CPPUnrealIntro"),
		Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sofie_Documents_Projects_CPP_Unreal_CPPUnrealIntro_Source_CPPUnrealIntro_SpawnManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
