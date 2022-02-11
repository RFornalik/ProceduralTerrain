// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshActor() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARuntimeMeshActor_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARuntimeMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
// End Cross Module References
	DEFINE_FUNCTION(ARuntimeMeshActor::execGetRuntimeMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshComponent**)Z_Param__Result=P_THIS->GetRuntimeMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARuntimeMeshActor::execSetRuntimeMeshMobility)
	{
		P_GET_ENUM(ERuntimeMeshMobility,Z_Param_NewMobility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeMeshMobility(ERuntimeMeshMobility(Z_Param_NewMobility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARuntimeMeshActor::execGetRuntimeMeshMobility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERuntimeMeshMobility*)Z_Param__Result=P_THIS->GetRuntimeMeshMobility();
		P_NATIVE_END;
	}
	void ARuntimeMeshActor::StaticRegisterNativesARuntimeMeshActor()
	{
		UClass* Class = ARuntimeMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRuntimeMeshComponent", &ARuntimeMeshActor::execGetRuntimeMeshComponent },
			{ "GetRuntimeMeshMobility", &ARuntimeMeshActor::execGetRuntimeMeshMobility },
			{ "SetRuntimeMeshMobility", &ARuntimeMeshActor::execSetRuntimeMeshMobility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics
	{
		struct RuntimeMeshActor_eventGetRuntimeMeshComponent_Parms
		{
			URuntimeMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshActor_eventGetRuntimeMeshComponent_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshActor" },
		{ "Comment", "/** Returns RuntimeMeshComponent subobject **/" },
		{ "DisplayName", "Get Runtime Mesh Component" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
		{ "ToolTip", "Returns RuntimeMeshComponent subobject *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, nullptr, "GetRuntimeMeshComponent", nullptr, nullptr, sizeof(RuntimeMeshActor_eventGetRuntimeMeshComponent_Parms), Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms, ReturnValue), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshActor" },
		{ "DisplayName", "Get Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, nullptr, "GetRuntimeMeshMobility", nullptr, nullptr, sizeof(RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms), Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility NewMobility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMobility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMobility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility = { "NewMobility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms, NewMobility), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::NewProp_NewMobility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshActor" },
		{ "DisplayName", "Set Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, nullptr, "SetRuntimeMeshMobility", nullptr, nullptr, sizeof(RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms), Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARuntimeMeshActor_NoRegister()
	{
		return ARuntimeMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ARuntimeMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARuntimeMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARuntimeMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshComponent, "GetRuntimeMeshComponent" }, // 2483533715
		{ &Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility, "GetRuntimeMeshMobility" }, // 668476775
		{ &Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility, "SetRuntimeMeshMobility" }, // 3184928870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "RuntimeMeshActor.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent = { "RuntimeMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARuntimeMeshActor, RuntimeMeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARuntimeMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARuntimeMeshActor_Statics::NewProp_RuntimeMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARuntimeMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARuntimeMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARuntimeMeshActor_Statics::ClassParams = {
		&ARuntimeMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARuntimeMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARuntimeMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARuntimeMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARuntimeMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARuntimeMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARuntimeMeshActor, 3139922480);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<ARuntimeMeshActor>()
	{
		return ARuntimeMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARuntimeMeshActor(Z_Construct_UClass_ARuntimeMeshActor, &ARuntimeMeshActor::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("ARuntimeMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARuntimeMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
