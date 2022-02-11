// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMesh() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMesh_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMesh();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderTargetInterface();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""Delegate for when the collision was updated.\n*/" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "Delegate for when the collision was updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent, nullptr, "RuntimeMeshCollisionUpdatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URuntimeMesh::execGetBodySetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBodySetup**)Z_Param__Result=P_THIS->GetBodySetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMesh::execGetLocalBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetLocalBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMesh::execGetHitSource)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FaceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionHitInfo*)Z_Param__Result=P_THIS->GetHitSource(Z_Param_FaceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMesh::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMesh::execGetProviderPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshProvider**)Z_Param__Result=P_THIS->GetProviderPtr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMesh::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMesh::execInitialize)
	{
		P_GET_OBJECT(URuntimeMeshProvider,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Provider);
		P_NATIVE_END;
	}
	void URuntimeMesh::StaticRegisterNativesURuntimeMesh()
	{
		UClass* Class = URuntimeMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBodySetup", &URuntimeMesh::execGetBodySetup },
			{ "GetHitSource", &URuntimeMesh::execGetHitSource },
			{ "GetLocalBounds", &URuntimeMesh::execGetLocalBounds },
			{ "GetProviderPtr", &URuntimeMesh::execGetProviderPtr },
			{ "Initialize", &URuntimeMesh::execInitialize },
			{ "IsInitialized", &URuntimeMesh::execIsInitialized },
			{ "Reset", &URuntimeMesh::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics
	{
		struct RuntimeMesh_eventGetBodySetup_Parms
		{
			UBodySetup* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMesh_eventGetBodySetup_Parms, ReturnValue), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMesh, nullptr, "GetBodySetup", nullptr, nullptr, sizeof(RuntimeMesh_eventGetBodySetup_Parms), Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMesh_GetBodySetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMesh_GetBodySetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics
	{
		struct RuntimeMesh_eventGetHitSource_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMesh_eventGetHitSource_Parms, FaceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMesh_eventGetHitSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::NewProp_FaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMesh, nullptr, "GetHitSource", nullptr, nullptr, sizeof(RuntimeMesh_eventGetHitSource_Parms), Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMesh_GetHitSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMesh_GetHitSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics
	{
		struct RuntimeMesh_eventGetLocalBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMesh_eventGetLocalBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMesh, nullptr, "GetLocalBounds", nullptr, nullptr, sizeof(RuntimeMesh_eventGetLocalBounds_Parms), Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMesh_GetLocalBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMesh_GetLocalBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics
	{
		struct RuntimeMesh_eventGetProviderPtr_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMesh_eventGetProviderPtr_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMesh, nullptr, "GetProviderPtr", nullptr, nullptr, sizeof(RuntimeMesh_eventGetProviderPtr_Parms), Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMesh_GetProviderPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMesh_GetProviderPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMesh_Initialize_Statics
	{
		struct RuntimeMesh_eventInitialize_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMesh_eventInitialize_Parms, Provider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::NewProp_Provider,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMesh, nullptr, "Initialize", nullptr, nullptr, sizeof(RuntimeMesh_eventInitialize_Parms), Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMesh_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMesh_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics
	{
		struct RuntimeMesh_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMesh_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMesh_eventIsInitialized_Parms), &Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMesh, nullptr, "IsInitialized", nullptr, nullptr, sizeof(RuntimeMesh_eventIsInitialized_Parms), Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMesh_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMesh_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMesh_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMesh_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMesh_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMesh, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMesh_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMesh_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMesh_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMesh_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMesh_NoRegister()
	{
		return URuntimeMesh::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshProviderPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshProviderPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionSource_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionSource;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsyncBodySetupQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialSlots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNameLookup_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotNameLookup_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotNameLookup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SlotNameLookup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CollisionUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMesh_GetBodySetup, "GetBodySetup" }, // 2315321139
		{ &Z_Construct_UFunction_URuntimeMesh_GetHitSource, "GetHitSource" }, // 1135102154
		{ &Z_Construct_UFunction_URuntimeMesh_GetLocalBounds, "GetLocalBounds" }, // 3605191104
		{ &Z_Construct_UFunction_URuntimeMesh_GetProviderPtr, "GetProviderPtr" }, // 3697121478
		{ &Z_Construct_UFunction_URuntimeMesh_Initialize, "Initialize" }, // 404949215
		{ &Z_Construct_UFunction_URuntimeMesh_IsInitialized, "IsInitialized" }, // 1686882021
		{ &Z_Construct_UFunction_URuntimeMesh_Reset, "Reset" }, // 2058382134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RuntimeMesh.h" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MeshProviderPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MeshProviderPtr = { "MeshProviderPtr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMesh, MeshProviderPtr), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MeshProviderPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MeshProviderPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_BodySetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionSource_Inner = { "CollisionSource", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionSource = { "CollisionSource", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMesh, CollisionSource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionSource_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "// Queue of pending collision cooks\n" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "Queue of pending collision cooks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMesh, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MaterialSlots_Inner = { "MaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MaterialSlots_MetaData[] = {
		{ "Comment", "// We track all registered material slots and a lookup table to quickly index them\n" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "We track all registered material slots and a lookup table to quickly index them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MaterialSlots = { "MaterialSlots", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMesh, MaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MaterialSlots_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup_ValueProp = { "SlotNameLookup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup_Key_KeyProp = { "SlotNameLookup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup = { "SlotNameLookup", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMesh, SlotNameLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionUpdated_MetaData[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "Comment", "/** Event called when the collision has finished updated, this works both with standard following frame synchronous updates, as well as async updates */" },
		{ "ModuleRelativePath", "Public/RuntimeMesh.h" },
		{ "ToolTip", "Event called when the collision has finished updated, this works both with standard following frame synchronous updates, as well as async updates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionUpdated = { "CollisionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMesh, CollisionUpdated), Z_Construct_UDelegateFunction_RuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MeshProviderPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionSource_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_AsyncBodySetupQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_AsyncBodySetupQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MaterialSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_MaterialSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_SlotNameLookup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMesh_Statics::NewProp_CollisionUpdated,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URuntimeMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(URuntimeMesh, IInterface_CollisionDataProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMesh_Statics::ClassParams = {
		&URuntimeMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMesh, 211364632);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMesh>()
	{
		return URuntimeMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMesh(Z_Construct_UClass_URuntimeMesh, &URuntimeMesh::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
