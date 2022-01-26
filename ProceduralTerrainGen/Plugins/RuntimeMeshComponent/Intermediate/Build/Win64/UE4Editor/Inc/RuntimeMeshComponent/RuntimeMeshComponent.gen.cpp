// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshComponent() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMesh_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetHitSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FaceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionHitInfo*)Z_Param__Result=P_THIS->GetHitSource(Z_Param_FaceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execSetupMaterialSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialSlot);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMaterialSlot(Z_Param_MaterialSlot,Z_Param_SlotName,Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetMaterialSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRuntimeMeshMaterialSlot>*)Z_Param__Result=P_THIS->GetMaterialSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetProvider)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshProvider**)Z_Param__Result=P_THIS->GetProvider();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execSetRuntimeMeshMobility)
	{
		P_GET_ENUM(ERuntimeMeshMobility,Z_Param_NewMobility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeMeshMobility(ERuntimeMeshMobility(Z_Param_NewMobility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetRuntimeMeshMobility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERuntimeMeshMobility*)Z_Param__Result=P_THIS->GetRuntimeMeshMobility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetOrCreateRuntimeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMesh**)Z_Param__Result=P_THIS->GetOrCreateRuntimeMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execGetRuntimeMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMesh**)Z_Param__Result=P_THIS->GetRuntimeMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execSetRuntimeMesh)
	{
		P_GET_OBJECT(URuntimeMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRuntimeMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponent::execInitialize)
	{
		P_GET_OBJECT(URuntimeMeshProvider,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Provider);
		P_NATIVE_END;
	}
	void URuntimeMeshComponent::StaticRegisterNativesURuntimeMeshComponent()
	{
		UClass* Class = URuntimeMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHitSource", &URuntimeMeshComponent::execGetHitSource },
			{ "GetMaterialSlots", &URuntimeMeshComponent::execGetMaterialSlots },
			{ "GetOrCreateRuntimeMesh", &URuntimeMeshComponent::execGetOrCreateRuntimeMesh },
			{ "GetProvider", &URuntimeMeshComponent::execGetProvider },
			{ "GetRuntimeMesh", &URuntimeMeshComponent::execGetRuntimeMesh },
			{ "GetRuntimeMeshMobility", &URuntimeMeshComponent::execGetRuntimeMeshMobility },
			{ "Initialize", &URuntimeMeshComponent::execInitialize },
			{ "SetRuntimeMesh", &URuntimeMeshComponent::execSetRuntimeMesh },
			{ "SetRuntimeMeshMobility", &URuntimeMeshComponent::execSetRuntimeMeshMobility },
			{ "SetupMaterialSlot", &URuntimeMeshComponent::execSetupMaterialSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics
	{
		struct RuntimeMeshComponent_eventGetHitSource_Parms
		{
			int32 FaceIndex;
			FRuntimeMeshCollisionHitInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventGetHitSource_Parms, FaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventGetHitSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_FaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetHitSource", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventGetHitSource_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics
	{
		struct RuntimeMeshComponent_eventGetMaterialSlots_Parms
		{
			TArray<FRuntimeMeshMaterialSlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventGetMaterialSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetMaterialSlots", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventGetMaterialSlots_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics
	{
		struct RuntimeMeshComponent_eventGetOrCreateRuntimeMesh_Parms
		{
			URuntimeMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventGetOrCreateRuntimeMesh_Parms, ReturnValue), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "Comment", "/** Clears the geometry for ALL collision only sections */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
		{ "ToolTip", "Clears the geometry for ALL collision only sections" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetOrCreateRuntimeMesh", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventGetOrCreateRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics
	{
		struct RuntimeMeshComponent_eventGetProvider_Parms
		{
			URuntimeMeshProvider* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventGetProvider_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetProvider", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventGetProvider_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics
	{
		struct RuntimeMeshComponent_eventGetRuntimeMesh_Parms
		{
			URuntimeMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventGetRuntimeMesh_Parms, ReturnValue), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "Comment", "/** Clears the geometry for ALL collision only sections */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
		{ "ToolTip", "Clears the geometry for ALL collision only sections" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetRuntimeMesh", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventGetRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshComponent_eventGetRuntimeMeshMobility_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventGetRuntimeMeshMobility_Parms, ReturnValue), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "DisplayName", "Get Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "GetRuntimeMeshMobility", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventGetRuntimeMeshMobility_Parms), Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics
	{
		struct RuntimeMeshComponent_eventInitialize_Parms
		{
			URuntimeMeshProvider* Provider;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Provider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventInitialize_Parms, Provider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::NewProp_Provider,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "Initialize", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventInitialize_Parms), Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics
	{
		struct RuntimeMeshComponent_eventSetRuntimeMesh_Parms
		{
			URuntimeMesh* NewMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventSetRuntimeMesh_Parms, NewMesh), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "SetRuntimeMesh", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventSetRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics
	{
		struct RuntimeMeshComponent_eventSetRuntimeMeshMobility_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility = { "NewMobility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventSetRuntimeMeshMobility_Parms, NewMobility), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::NewProp_NewMobility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "DisplayName", "Set Mobility" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "SetRuntimeMeshMobility", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventSetRuntimeMeshMobility_Parms), Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics
	{
		struct RuntimeMeshComponent_eventSetupMaterialSlot_Parms
		{
			int32 MaterialSlot;
			FName SlotName;
			UMaterialInterface* InMaterial;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventSetupMaterialSlot_Parms, MaterialSlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventSetupMaterialSlot_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponent_eventSetupMaterialSlot_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_MaterialSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMeshComponent" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponent, nullptr, "SetupMaterialSlot", nullptr, nullptr, sizeof(RuntimeMeshComponent_eventSetupMaterialSlot_Parms), Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister()
	{
		return URuntimeMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetHitSource, "GetHitSource" }, // 374393334
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetMaterialSlots, "GetMaterialSlots" }, // 1030811210
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetOrCreateRuntimeMesh, "GetOrCreateRuntimeMesh" }, // 2928243956
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetProvider, "GetProvider" }, // 3411234894
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMesh, "GetRuntimeMesh" }, // 2610664513
		{ &Z_Construct_UFunction_URuntimeMeshComponent_GetRuntimeMeshMobility, "GetRuntimeMeshMobility" }, // 709967043
		{ &Z_Construct_UFunction_URuntimeMeshComponent_Initialize, "Initialize" }, // 3524365323
		{ &Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMesh, "SetRuntimeMesh" }, // 2694788291
		{ &Z_Construct_UFunction_URuntimeMeshComponent_SetRuntimeMeshMobility, "SetRuntimeMeshMobility" }, // 4155265428
		{ &Z_Construct_UFunction_URuntimeMeshComponent_SetupMaterialSlot, "SetupMaterialSlot" }, // 1670545847
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n*\x09""Component that allows you to specify custom triangle mesh geometry for rendering and collision.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "RuntimeMeshComponent.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry for rendering and collision." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeMesh" },
		{ "DisplayName", "Runtime Mesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference = { "RuntimeMeshReference", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponent, RuntimeMeshReference), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponent_Statics::NewProp_RuntimeMeshReference,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URuntimeMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(URuntimeMeshComponent, IInterface_CollisionDataProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshComponent_Statics::ClassParams = {
		&URuntimeMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshComponent, 2658514628);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshComponent>()
	{
		return URuntimeMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshComponent(Z_Construct_UClass_URuntimeMeshComponent, &URuntimeMeshComponent::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
