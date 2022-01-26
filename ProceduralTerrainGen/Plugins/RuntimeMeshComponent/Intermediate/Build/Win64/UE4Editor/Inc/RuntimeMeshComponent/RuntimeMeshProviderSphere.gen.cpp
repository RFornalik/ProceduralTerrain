// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderSphere() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderSphere_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderSphere();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execSetSphereMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InSphereMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSphereMaterial(Z_Param_InSphereMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execGetSphereMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetSphereMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execSetLODMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLODMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLODMultiplier(Z_Param_InLODMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execGetLODMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLODMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execSetMinLongitudeSegments)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinLongitudeSegments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinLongitudeSegments(Z_Param_InMinLongitudeSegments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execGetMinLongitudeSegments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinLongitudeSegments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execSetMaxLongitudeSegments)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxLongitudeSegments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxLongitudeSegments(Z_Param_InMaxLongitudeSegments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execGetMaxLongitudeSegments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxLongitudeSegments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execSetMinLatitudeSegments)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinLatitudeSegments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinLatitudeSegments(Z_Param_InMinLatitudeSegments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execGetMinLatitudeSegments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinLatitudeSegments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execSetMaxLatitudeSegments)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxLatitudeSegments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxLatitudeSegments(Z_Param_InMaxLatitudeSegments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execGetMaxLatitudeSegments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxLatitudeSegments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execSetSphereRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSphereRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSphereRadius(Z_Param_InSphereRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderSphere::execGetSphereRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSphereRadius();
		P_NATIVE_END;
	}
	void URuntimeMeshProviderSphere::StaticRegisterNativesURuntimeMeshProviderSphere()
	{
		UClass* Class = URuntimeMeshProviderSphere::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLODMultiplier", &URuntimeMeshProviderSphere::execGetLODMultiplier },
			{ "GetMaxLatitudeSegments", &URuntimeMeshProviderSphere::execGetMaxLatitudeSegments },
			{ "GetMaxLongitudeSegments", &URuntimeMeshProviderSphere::execGetMaxLongitudeSegments },
			{ "GetMinLatitudeSegments", &URuntimeMeshProviderSphere::execGetMinLatitudeSegments },
			{ "GetMinLongitudeSegments", &URuntimeMeshProviderSphere::execGetMinLongitudeSegments },
			{ "GetSphereMaterial", &URuntimeMeshProviderSphere::execGetSphereMaterial },
			{ "GetSphereRadius", &URuntimeMeshProviderSphere::execGetSphereRadius },
			{ "SetLODMultiplier", &URuntimeMeshProviderSphere::execSetLODMultiplier },
			{ "SetMaxLatitudeSegments", &URuntimeMeshProviderSphere::execSetMaxLatitudeSegments },
			{ "SetMaxLongitudeSegments", &URuntimeMeshProviderSphere::execSetMaxLongitudeSegments },
			{ "SetMinLatitudeSegments", &URuntimeMeshProviderSphere::execSetMinLatitudeSegments },
			{ "SetMinLongitudeSegments", &URuntimeMeshProviderSphere::execSetMinLongitudeSegments },
			{ "SetSphereMaterial", &URuntimeMeshProviderSphere::execSetSphereMaterial },
			{ "SetSphereRadius", &URuntimeMeshProviderSphere::execSetSphereRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics
	{
		struct RuntimeMeshProviderSphere_eventGetLODMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventGetLODMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "GetLODMultiplier", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventGetLODMultiplier_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventGetMaxLatitudeSegments_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventGetMaxLatitudeSegments_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "GetMaxLatitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventGetMaxLatitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventGetMaxLongitudeSegments_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventGetMaxLongitudeSegments_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "GetMaxLongitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventGetMaxLongitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventGetMinLatitudeSegments_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventGetMinLatitudeSegments_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "GetMinLatitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventGetMinLatitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventGetMinLongitudeSegments_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventGetMinLongitudeSegments_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "GetMinLongitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventGetMinLongitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics
	{
		struct RuntimeMeshProviderSphere_eventGetSphereMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventGetSphereMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "GetSphereMaterial", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventGetSphereMaterial_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics
	{
		struct RuntimeMeshProviderSphere_eventGetSphereRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventGetSphereRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "GetSphereRadius", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventGetSphereRadius_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics
	{
		struct RuntimeMeshProviderSphere_eventSetLODMultiplier_Parms
		{
			float InLODMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLODMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::NewProp_InLODMultiplier = { "InLODMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventSetLODMultiplier_Parms, InLODMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::NewProp_InLODMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "SetLODMultiplier", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventSetLODMultiplier_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventSetMaxLatitudeSegments_Parms
		{
			int32 InMaxLatitudeSegments;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxLatitudeSegments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::NewProp_InMaxLatitudeSegments = { "InMaxLatitudeSegments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventSetMaxLatitudeSegments_Parms, InMaxLatitudeSegments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::NewProp_InMaxLatitudeSegments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "SetMaxLatitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventSetMaxLatitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventSetMaxLongitudeSegments_Parms
		{
			int32 InMaxLongitudeSegments;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxLongitudeSegments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::NewProp_InMaxLongitudeSegments = { "InMaxLongitudeSegments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventSetMaxLongitudeSegments_Parms, InMaxLongitudeSegments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::NewProp_InMaxLongitudeSegments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "SetMaxLongitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventSetMaxLongitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventSetMinLatitudeSegments_Parms
		{
			int32 InMinLatitudeSegments;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMinLatitudeSegments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::NewProp_InMinLatitudeSegments = { "InMinLatitudeSegments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventSetMinLatitudeSegments_Parms, InMinLatitudeSegments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::NewProp_InMinLatitudeSegments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "SetMinLatitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventSetMinLatitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics
	{
		struct RuntimeMeshProviderSphere_eventSetMinLongitudeSegments_Parms
		{
			int32 InMinLongitudeSegments;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMinLongitudeSegments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::NewProp_InMinLongitudeSegments = { "InMinLongitudeSegments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventSetMinLongitudeSegments_Parms, InMinLongitudeSegments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::NewProp_InMinLongitudeSegments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "SetMinLongitudeSegments", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventSetMinLongitudeSegments_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics
	{
		struct RuntimeMeshProviderSphere_eventSetSphereMaterial_Parms
		{
			UMaterialInterface* InSphereMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSphereMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::NewProp_InSphereMaterial = { "InSphereMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventSetSphereMaterial_Parms, InSphereMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::NewProp_InSphereMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "SetSphereMaterial", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventSetSphereMaterial_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics
	{
		struct RuntimeMeshProviderSphere_eventSetSphereRadius_Parms
		{
			float InSphereRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSphereRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::NewProp_InSphereRadius = { "InSphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderSphere_eventSetSphereRadius_Parms, InSphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::NewProp_InSphereRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderSphere, nullptr, "SetSphereRadius", nullptr, nullptr, sizeof(RuntimeMeshProviderSphere_eventSetSphereRadius_Parms), Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshProviderSphere_NoRegister()
	{
		return URuntimeMeshProviderSphere::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLatitudeSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLatitudeSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLatitudeSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLatitudeSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLongitudeSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLongitudeSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLongitudeSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLongitudeSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_GetLODMultiplier, "GetLODMultiplier" }, // 2308004593
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLatitudeSegments, "GetMaxLatitudeSegments" }, // 1220050173
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMaxLongitudeSegments, "GetMaxLongitudeSegments" }, // 252419393
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLatitudeSegments, "GetMinLatitudeSegments" }, // 4069396318
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_GetMinLongitudeSegments, "GetMinLongitudeSegments" }, // 479300106
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereMaterial, "GetSphereMaterial" }, // 248743
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_GetSphereRadius, "GetSphereRadius" }, // 2932603286
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_SetLODMultiplier, "SetLODMultiplier" }, // 841488356
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLatitudeSegments, "SetMaxLatitudeSegments" }, // 42822464
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMaxLongitudeSegments, "SetMaxLongitudeSegments" }, // 4234321617
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLatitudeSegments, "SetMinLatitudeSegments" }, // 4290531331
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_SetMinLongitudeSegments, "SetMinLongitudeSegments" }, // 2671016770
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereMaterial, "SetSphereMaterial" }, // 277274244
		{ &Z_Construct_UFunction_URuntimeMeshProviderSphere_SetSphereRadius, "SetSphereRadius" }, // 4215138452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderSphere.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, MaxLOD), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "BlueprintGetter", "GetSphereRadius" },
		{ "BlueprintSetter", "SetSphereRadius" },
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLatitudeSegments_MetaData[] = {
		{ "BlueprintGetter", "GetMaxLatitudeSegments" },
		{ "BlueprintSetter", "SetMaxLatitudeSegments" },
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLatitudeSegments = { "MaxLatitudeSegments", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, MaxLatitudeSegments), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLatitudeSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLatitudeSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLatitudeSegments_MetaData[] = {
		{ "BlueprintGetter", "GetMinLatitudeSegments" },
		{ "BlueprintSetter", "SetMinLatitudeSegments" },
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLatitudeSegments = { "MinLatitudeSegments", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, MinLatitudeSegments), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLatitudeSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLatitudeSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLongitudeSegments_MetaData[] = {
		{ "BlueprintGetter", "GetMaxLongitudeSegments" },
		{ "BlueprintSetter", "SetMaxLongitudeSegments" },
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLongitudeSegments = { "MaxLongitudeSegments", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, MaxLongitudeSegments), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLongitudeSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLongitudeSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLongitudeSegments_MetaData[] = {
		{ "BlueprintGetter", "GetMinLongitudeSegments" },
		{ "BlueprintSetter", "SetMinLongitudeSegments" },
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLongitudeSegments = { "MinLongitudeSegments", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, MinLongitudeSegments), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLongitudeSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLongitudeSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_LODMultiplier_MetaData[] = {
		{ "BlueprintGetter", "GetLODMultiplier" },
		{ "BlueprintSetter", "SetLODMultiplier" },
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_LODMultiplier = { "LODMultiplier", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, LODMultiplier), METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_LODMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_LODMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereMaterial_MetaData[] = {
		{ "BlueprintGetter", "GetSphereMaterial" },
		{ "BlueprintSetter", "SetSphereMaterial" },
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereMaterial = { "SphereMaterial", nullptr, (EPropertyFlags)0x0040000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderSphere, SphereMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLatitudeSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLatitudeSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MaxLongitudeSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_MinLongitudeSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_LODMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::NewProp_SphereMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::ClassParams = {
		&URuntimeMeshProviderSphere::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshProviderSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshProviderSphere, 1940378177);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderSphere>()
	{
		return URuntimeMeshProviderSphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshProviderSphere(Z_Construct_UClass_URuntimeMeshProviderSphere, &URuntimeMeshProviderSphere::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshProviderSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
