// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshProviderTargetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderTargetInterface() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderTargetInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderTargetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshLODProperties();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execGetMaterial)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetMaterial(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execGetMaterialSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRuntimeMeshMaterialSlot>*)Z_Param__Result=P_THIS->GetMaterialSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execGetMaterialSlotNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMaterialSlotNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execGetNumMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execGetMaterialSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshMaterialSlot*)Z_Param__Result=P_THIS->GetMaterialSlot(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execIsMaterialSlotNameValid)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaterialSlotNameValid(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execGetMaterialIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execSetupMaterialSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialSlot);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMaterialSlot(Z_Param_MaterialSlot,Z_Param_SlotName,Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execMarkCollisionDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkCollisionDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execRemoveSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSection(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execClearSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSection(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execMarkSectionDirty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkSectionDirty(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execSetSectionCastsShadow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_UBOOL(Z_Param_bCastsShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSectionCastsShadow(Z_Param_LODIndex,Z_Param_SectionId,Z_Param_bCastsShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execSetSectionVisibility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSectionVisibility(Z_Param_LODIndex,Z_Param_SectionId,Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execCreateSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_STRUCT_REF(FRuntimeMeshSectionProperties,Z_Param_Out_SectionProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSection(Z_Param_LODIndex,Z_Param_SectionId,Z_Param_Out_SectionProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execMarkAllLODsDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkAllLODsDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execMarkLODDirty)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkLODDirty(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execSetLODScreenSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLODScreenSize(Z_Param_LODIndex,Z_Param_ScreenSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderTargetInterface::execConfigureLODs)
	{
		P_GET_TARRAY_REF(FRuntimeMeshLODProperties,Z_Param_Out_InLODs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfigureLODs(Z_Param_Out_InLODs);
		P_NATIVE_END;
	}
	void URuntimeMeshProviderTargetInterface::StaticRegisterNativesURuntimeMeshProviderTargetInterface()
	{
		UClass* Class = URuntimeMeshProviderTargetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSection", &URuntimeMeshProviderTargetInterface::execClearSection },
			{ "ConfigureLODs", &URuntimeMeshProviderTargetInterface::execConfigureLODs },
			{ "CreateSection", &URuntimeMeshProviderTargetInterface::execCreateSection },
			{ "GetMaterial", &URuntimeMeshProviderTargetInterface::execGetMaterial },
			{ "GetMaterialIndex", &URuntimeMeshProviderTargetInterface::execGetMaterialIndex },
			{ "GetMaterialSlot", &URuntimeMeshProviderTargetInterface::execGetMaterialSlot },
			{ "GetMaterialSlotNames", &URuntimeMeshProviderTargetInterface::execGetMaterialSlotNames },
			{ "GetMaterialSlots", &URuntimeMeshProviderTargetInterface::execGetMaterialSlots },
			{ "GetNumMaterials", &URuntimeMeshProviderTargetInterface::execGetNumMaterials },
			{ "IsMaterialSlotNameValid", &URuntimeMeshProviderTargetInterface::execIsMaterialSlotNameValid },
			{ "MarkAllLODsDirty", &URuntimeMeshProviderTargetInterface::execMarkAllLODsDirty },
			{ "MarkCollisionDirty", &URuntimeMeshProviderTargetInterface::execMarkCollisionDirty },
			{ "MarkLODDirty", &URuntimeMeshProviderTargetInterface::execMarkLODDirty },
			{ "MarkSectionDirty", &URuntimeMeshProviderTargetInterface::execMarkSectionDirty },
			{ "RemoveSection", &URuntimeMeshProviderTargetInterface::execRemoveSection },
			{ "SetLODScreenSize", &URuntimeMeshProviderTargetInterface::execSetLODScreenSize },
			{ "SetSectionCastsShadow", &URuntimeMeshProviderTargetInterface::execSetSectionCastsShadow },
			{ "SetSectionVisibility", &URuntimeMeshProviderTargetInterface::execSetSectionVisibility },
			{ "SetupMaterialSlot", &URuntimeMeshProviderTargetInterface::execSetupMaterialSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventClearSection_Parms
		{
			int32 LODIndex;
			int32 SectionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventClearSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventClearSection_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::NewProp_SectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "ClearSection", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventClearSection_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventConfigureLODs_Parms
		{
			TArray<FRuntimeMeshLODProperties> InLODs;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLODs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InLODs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::NewProp_InLODs_Inner = { "InLODs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshLODProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::NewProp_InLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::NewProp_InLODs = { "InLODs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventConfigureLODs_Parms, InLODs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::NewProp_InLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::NewProp_InLODs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::NewProp_InLODs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::NewProp_InLODs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "ConfigureLODs", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventConfigureLODs_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventCreateSection_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshSectionProperties SectionProperties;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventCreateSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventCreateSection_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_SectionProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_SectionProperties = { "SectionProperties", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventCreateSection_Parms, SectionProperties), Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_SectionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_SectionProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::NewProp_SectionProperties,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "CreateSection", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventCreateSection_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventGetMaterial_Parms
		{
			int32 SlotIndex;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterial_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "GetMaterial", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventGetMaterial_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::NewProp_MaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventGetMaterialIndex_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventGetMaterialSlot_Parms
		{
			int32 SlotIndex;
			FRuntimeMeshMaterialSlot ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterialSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterialSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "GetMaterialSlot", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventGetMaterialSlot_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventGetMaterialSlotNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterialSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "GetMaterialSlotNames", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventGetMaterialSlotNames_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventGetMaterialSlots_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetMaterialSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "GetMaterialSlots", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventGetMaterialSlots_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventGetNumMaterials_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventGetNumMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "GetNumMaterials", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventGetNumMaterials_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventIsMaterialSlotNameValid_Parms
		{
			FName MaterialSlotName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventIsMaterialSlotNameValid_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProviderTargetInterface_eventIsMaterialSlotNameValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshProviderTargetInterface_eventIsMaterialSlotNameValid_Parms), &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "IsMaterialSlotNameValid", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventIsMaterialSlotNameValid_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "MarkAllLODsDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "MarkCollisionDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventMarkLODDirty_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventMarkLODDirty_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "MarkLODDirty", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventMarkLODDirty_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventMarkSectionDirty_Parms
		{
			int32 LODIndex;
			int32 SectionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventMarkSectionDirty_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventMarkSectionDirty_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::NewProp_SectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "MarkSectionDirty", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventMarkSectionDirty_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventRemoveSection_Parms
		{
			int32 LODIndex;
			int32 SectionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventRemoveSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventRemoveSection_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::NewProp_SectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "RemoveSection", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventRemoveSection_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventSetLODScreenSize_Parms
		{
			int32 LODIndex;
			float ScreenSize;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetLODScreenSize_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetLODScreenSize_Parms, ScreenSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::NewProp_ScreenSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "SetLODScreenSize", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventSetLODScreenSize_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventSetSectionCastsShadow_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			bool bCastsShadow;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static void NewProp_bCastsShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastsShadow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetSectionCastsShadow_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetSectionCastsShadow_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_bCastsShadow_SetBit(void* Obj)
	{
		((RuntimeMeshProviderTargetInterface_eventSetSectionCastsShadow_Parms*)Obj)->bCastsShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_bCastsShadow = { "bCastsShadow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshProviderTargetInterface_eventSetSectionCastsShadow_Parms), &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_bCastsShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::NewProp_bCastsShadow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "SetSectionCastsShadow", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventSetSectionCastsShadow_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventSetSectionVisibility_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			bool bIsVisible;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetSectionVisibility_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetSectionVisibility_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((RuntimeMeshProviderTargetInterface_eventSetSectionVisibility_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshProviderTargetInterface_eventSetSectionVisibility_Parms), &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "SetSectionVisibility", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventSetSectionVisibility_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics
	{
		struct RuntimeMeshProviderTargetInterface_eventSetupMaterialSlot_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetupMaterialSlot_Parms, MaterialSlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetupMaterialSlot_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderTargetInterface_eventSetupMaterialSlot_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::NewProp_MaterialSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshInterface|ConfigureLODs" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderTargetInterface, nullptr, "SetupMaterialSlot", nullptr, nullptr, sizeof(RuntimeMeshProviderTargetInterface_eventSetupMaterialSlot_Parms), Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshProviderTargetInterface_NoRegister()
	{
		return URuntimeMeshProviderTargetInterface::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ClearSection, "ClearSection" }, // 3658733827
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_ConfigureLODs, "ConfigureLODs" }, // 1072296973
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_CreateSection, "CreateSection" }, // 1339482308
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterial, "GetMaterial" }, // 4202484910
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialIndex, "GetMaterialIndex" }, // 3753385018
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlot, "GetMaterialSlot" }, // 115330369
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlotNames, "GetMaterialSlotNames" }, // 1633898947
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetMaterialSlots, "GetMaterialSlots" }, // 3499401747
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_GetNumMaterials, "GetNumMaterials" }, // 3965308031
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_IsMaterialSlotNameValid, "IsMaterialSlotNameValid" }, // 4169599266
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkAllLODsDirty, "MarkAllLODsDirty" }, // 759874462
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkCollisionDirty, "MarkCollisionDirty" }, // 3508492193
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkLODDirty, "MarkLODDirty" }, // 4274675122
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_MarkSectionDirty, "MarkSectionDirty" }, // 587625192
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_RemoveSection, "RemoveSection" }, // 3307275042
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetLODScreenSize, "SetLODScreenSize" }, // 3824580754
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionCastsShadow, "SetSectionCastsShadow" }, // 3392818859
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetSectionVisibility, "SetSectionVisibility" }, // 2531551615
		{ &Z_Construct_UFunction_URuntimeMeshProviderTargetInterface_SetupMaterialSlot, "SetupMaterialSlot" }, // 1596767631
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RuntimeMeshProviderTargetInterface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshProviderTargetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderTargetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::ClassParams = {
		&URuntimeMeshProviderTargetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderTargetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshProviderTargetInterface, 3809272137);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderTargetInterface>()
	{
		return URuntimeMeshProviderTargetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshProviderTargetInterface(Z_Construct_UClass_URuntimeMeshProviderTargetInterface, &URuntimeMeshProviderTargetInterface::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshProviderTargetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderTargetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
