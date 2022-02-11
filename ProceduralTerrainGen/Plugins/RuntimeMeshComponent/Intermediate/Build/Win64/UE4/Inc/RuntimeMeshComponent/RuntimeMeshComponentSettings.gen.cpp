// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshComponentSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshComponentSettings() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponentSettings_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponentSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority();
// End Cross Module References
	void URuntimeMeshComponentSettings::StaticRegisterNativesURuntimeMeshComponentSettings()
	{
	}
	UClass* Z_Construct_UClass_URuntimeMeshComponentSettings_NoRegister()
	{
		return URuntimeMeshComponentSettings::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshComponentSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultUpdateFrequency_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultUpdateFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUse32BitIndicesByDefault_MetaData[];
#endif
		static void NewProp_bUse32BitIndicesByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUse32BitIndicesByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTexCoordsByDefault_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTexCoordsByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTexCoordsByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentsByDefault_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentsByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentsByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookCollisionAsync_MetaData[];
#endif
		static void NewProp_bCookCollisionAsync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookCollisionAsync;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultCookingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCookingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultCookingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMaxThreadPoolThreads_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinMaxThreadPoolThreads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemThreadDivisor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SystemThreadDivisor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThreadPriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreadPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThreadPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreadStackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThreadStackSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedTimePerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedTimePerTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Runtime Mesh Component\n */" },
		{ "DisplayName", "Runtime Mesh Component" },
		{ "IncludePath", "RuntimeMeshComponentSettings.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
		{ "ToolTip", "Settings for Runtime Mesh Component" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultUpdateFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultUpdateFrequency_MetaData[] = {
		{ "Category", "MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultUpdateFrequency = { "DefaultUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentSettings, DefaultUpdateFrequency), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUse32BitIndicesByDefault_MetaData[] = {
		{ "Category", "MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUse32BitIndicesByDefault_SetBit(void* Obj)
	{
		((URuntimeMeshComponentSettings*)Obj)->bUse32BitIndicesByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUse32BitIndicesByDefault = { "bUse32BitIndicesByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeMeshComponentSettings), &Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUse32BitIndicesByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUse32BitIndicesByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUse32BitIndicesByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTexCoordsByDefault_MetaData[] = {
		{ "Category", "MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTexCoordsByDefault_SetBit(void* Obj)
	{
		((URuntimeMeshComponentSettings*)Obj)->bUseHighPrecisionTexCoordsByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTexCoordsByDefault = { "bUseHighPrecisionTexCoordsByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeMeshComponentSettings), &Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTexCoordsByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTexCoordsByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTexCoordsByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTangentsByDefault_MetaData[] = {
		{ "Category", "MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTangentsByDefault_SetBit(void* Obj)
	{
		((URuntimeMeshComponentSettings*)Obj)->bUseHighPrecisionTangentsByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTangentsByDefault = { "bUseHighPrecisionTangentsByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeMeshComponentSettings), &Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTangentsByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTangentsByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTangentsByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bCookCollisionAsync_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bCookCollisionAsync_SetBit(void* Obj)
	{
		((URuntimeMeshComponentSettings*)Obj)->bCookCollisionAsync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bCookCollisionAsync = { "bCookCollisionAsync", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeMeshComponentSettings), &Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bCookCollisionAsync_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bCookCollisionAsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bCookCollisionAsync_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultCookingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultCookingMode_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultCookingMode = { "DefaultCookingMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentSettings, DefaultCookingMode), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultCookingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultCookingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MinMaxThreadPoolThreads_MetaData[] = {
		{ "Category", "Threading" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MinMaxThreadPoolThreads = { "MinMaxThreadPoolThreads", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentSettings, MinMaxThreadPoolThreads), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MinMaxThreadPoolThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MinMaxThreadPoolThreads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_SystemThreadDivisor_MetaData[] = {
		{ "Category", "Threading" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_SystemThreadDivisor = { "SystemThreadDivisor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentSettings, SystemThreadDivisor), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_SystemThreadDivisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_SystemThreadDivisor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadPriority_MetaData[] = {
		{ "Category", "Threading" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadPriority = { "ThreadPriority", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentSettings, ThreadPriority), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadStackSize_MetaData[] = {
		{ "Category", "Threading" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadStackSize = { "ThreadStackSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentSettings, ThreadStackSize), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadStackSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadStackSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MaxAllowedTimePerTick_MetaData[] = {
		{ "Category", "Threading" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MaxAllowedTimePerTick = { "MaxAllowedTimePerTick", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentSettings, MaxAllowedTimePerTick), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MaxAllowedTimePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MaxAllowedTimePerTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultUpdateFrequency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultUpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUse32BitIndicesByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTexCoordsByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bUseHighPrecisionTangentsByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_bCookCollisionAsync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultCookingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_DefaultCookingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MinMaxThreadPoolThreads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_SystemThreadDivisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadPriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_ThreadStackSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::NewProp_MaxAllowedTimePerTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshComponentSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::ClassParams = {
		&URuntimeMeshComponentSettings::StaticClass,
		"RuntimeMeshComponent",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshComponentSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshComponentSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshComponentSettings, 1333471554);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshComponentSettings>()
	{
		return URuntimeMeshComponentSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshComponentSettings(Z_Construct_UClass_URuntimeMeshComponentSettings, &URuntimeMeshComponentSettings::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshComponentSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshComponentSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
