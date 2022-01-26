// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Components/RuntimeMeshComponentStatic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshComponentStatic() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponentStatic_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponentStatic();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderStatic_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierNormals_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execHasTessellationTriangleGenerationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTessellationTriangleGenerationEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execDisableTessellationTrianglesGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableTessellationTrianglesGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execEnabledTessellationTrianglesGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnabledTessellationTrianglesGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execHasNormalTangentGenerationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasNormalTangentGenerationEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execDisableNormalTangentGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableNormalTangentGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execEnableNormalTangentGeneration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableNormalTangentGeneration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetStaticProvider)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeMeshProviderStatic**)Z_Param__Result=P_THIS->GetStaticProvider();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetSectionRenderDataAndClear)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshRenderableMeshData*)Z_Param__Result=P_THIS->GetSectionRenderDataAndClear(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetSectionRenderData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshRenderableMeshData*)Z_Param__Result=P_THIS->GetSectionRenderData(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetSectionProperties)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshSectionProperties*)Z_Param__Result=P_THIS->GetSectionProperties(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetSectionBounds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetSectionBounds(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execRemoveAllSectionsForLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllSectionsForLOD(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execDoesSectionHaveValidMeshData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesSectionHaveValidMeshData(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetLastSectionId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastSectionId(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetSectionIds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetSectionIds(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execSetRenderableSectionAffectsCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_UBOOL(Z_Param_bCollisionEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderableSectionAffectsCollision(Z_Param_SectionId,Z_Param_bCollisionEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetSectionsForMeshCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<int32>*)Z_Param__Result=P_THIS->GetSectionsForMeshCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execSetRenderableLODForCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderableLODForCollision(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetLODForMeshCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLODForMeshCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execSetCollisionMesh)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_NewCollisionMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionMesh(Z_Param_Out_NewCollisionMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetCollisionMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionData*)Z_Param__Result=P_THIS->GetCollisionMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execSetCollisionSettings)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_NewCollisionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionSettings(Z_Param_Out_NewCollisionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execGetCollisionSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionSettings*)Z_Param__Result=P_THIS->GetCollisionSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execClearSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSection(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execUpdateSectionFromComponents)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSectionFromComponents(Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execUpdateSection_Blueprint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_SectionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSection_Blueprint(Z_Param_LODIndex,Z_Param_SectionId,Z_Param_Out_SectionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execCreateSectionFromComponents)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialSlot);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents);
		P_GET_ENUM(ERuntimeMeshUpdateFrequency,Z_Param_UpdateFrequency);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSectionFromComponents(Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_MaterialSlot,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,ERuntimeMeshUpdateFrequency(Z_Param_UpdateFrequency),Z_Param_bCreateCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshComponentStatic::execCreateSection_Blueprint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_STRUCT_REF(FRuntimeMeshSectionProperties,Z_Param_Out_SectionProperties);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_SectionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSection_Blueprint(Z_Param_LODIndex,Z_Param_SectionId,Z_Param_Out_SectionProperties,Z_Param_Out_SectionData);
		P_NATIVE_END;
	}
	void URuntimeMeshComponentStatic::StaticRegisterNativesURuntimeMeshComponentStatic()
	{
		UClass* Class = URuntimeMeshComponentStatic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSection", &URuntimeMeshComponentStatic::execClearSection },
			{ "CreateSection_Blueprint", &URuntimeMeshComponentStatic::execCreateSection_Blueprint },
			{ "CreateSectionFromComponents", &URuntimeMeshComponentStatic::execCreateSectionFromComponents },
			{ "DisableNormalTangentGeneration", &URuntimeMeshComponentStatic::execDisableNormalTangentGeneration },
			{ "DisableTessellationTrianglesGeneration", &URuntimeMeshComponentStatic::execDisableTessellationTrianglesGeneration },
			{ "DoesSectionHaveValidMeshData", &URuntimeMeshComponentStatic::execDoesSectionHaveValidMeshData },
			{ "EnabledTessellationTrianglesGeneration", &URuntimeMeshComponentStatic::execEnabledTessellationTrianglesGeneration },
			{ "EnableNormalTangentGeneration", &URuntimeMeshComponentStatic::execEnableNormalTangentGeneration },
			{ "GetCollisionMesh", &URuntimeMeshComponentStatic::execGetCollisionMesh },
			{ "GetCollisionSettings", &URuntimeMeshComponentStatic::execGetCollisionSettings },
			{ "GetLastSectionId", &URuntimeMeshComponentStatic::execGetLastSectionId },
			{ "GetLODForMeshCollision", &URuntimeMeshComponentStatic::execGetLODForMeshCollision },
			{ "GetSectionBounds", &URuntimeMeshComponentStatic::execGetSectionBounds },
			{ "GetSectionIds", &URuntimeMeshComponentStatic::execGetSectionIds },
			{ "GetSectionProperties", &URuntimeMeshComponentStatic::execGetSectionProperties },
			{ "GetSectionRenderData", &URuntimeMeshComponentStatic::execGetSectionRenderData },
			{ "GetSectionRenderDataAndClear", &URuntimeMeshComponentStatic::execGetSectionRenderDataAndClear },
			{ "GetSectionsForMeshCollision", &URuntimeMeshComponentStatic::execGetSectionsForMeshCollision },
			{ "GetStaticProvider", &URuntimeMeshComponentStatic::execGetStaticProvider },
			{ "HasNormalTangentGenerationEnabled", &URuntimeMeshComponentStatic::execHasNormalTangentGenerationEnabled },
			{ "HasTessellationTriangleGenerationEnabled", &URuntimeMeshComponentStatic::execHasTessellationTriangleGenerationEnabled },
			{ "RemoveAllSectionsForLOD", &URuntimeMeshComponentStatic::execRemoveAllSectionsForLOD },
			{ "SetCollisionMesh", &URuntimeMeshComponentStatic::execSetCollisionMesh },
			{ "SetCollisionSettings", &URuntimeMeshComponentStatic::execSetCollisionSettings },
			{ "SetRenderableLODForCollision", &URuntimeMeshComponentStatic::execSetRenderableLODForCollision },
			{ "SetRenderableSectionAffectsCollision", &URuntimeMeshComponentStatic::execSetRenderableSectionAffectsCollision },
			{ "UpdateSection_Blueprint", &URuntimeMeshComponentStatic::execUpdateSection_Blueprint },
			{ "UpdateSectionFromComponents", &URuntimeMeshComponentStatic::execUpdateSectionFromComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics
	{
		struct RuntimeMeshComponentStatic_eventClearSection_Parms
		{
			int32 LODIndex;
			int32 SectionId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventClearSection_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventClearSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "DisplayName", "Clear Section" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "ClearSection", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventClearSection_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics
	{
		struct RuntimeMeshComponentStatic_eventCreateSection_Blueprint_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshSectionProperties SectionProperties;
			FRuntimeMeshRenderableMeshData SectionData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionProperties;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSection_Blueprint_Parms, SectionData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties = { "SectionProperties", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSection_Blueprint_Parms, SectionProperties), Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSection_Blueprint_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSection_Blueprint_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "DisplayName", "Create Section" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "CreateSection_Blueprint", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventCreateSection_Blueprint_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics
	{
		struct RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms
		{
			int32 LODIndex;
			int32 SectionIndex;
			int32 MaterialSlot;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FVector2D> UV1;
			TArray<FVector2D> UV2;
			TArray<FVector2D> UV3;
			TArray<FLinearColor> VertexColors;
			TArray<FRuntimeMeshTangent> Tangents;
			ERuntimeMeshUpdateFrequency UpdateFrequency;
			bool bCreateCollision;
		};
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateFrequency;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateFrequency_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms*)Obj)->bCreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms), &Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, UpdateFrequency), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV3_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV2_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV1_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV0_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, MaterialSlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV3_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_UV0_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_MaterialSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "Comment", "/**\n\x09*\x09""Create/replace a section for this runtime mesh.\n\x09*\x09@param\x09LODIndex\x09\x09\x09Index of the LOD to create the section in.\n\x09*\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09*\x09@param\x09MaterialSlot\x09\x09Index of the material to use for this section\n\x09*\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09*\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09*\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV1\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV2\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV3\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UpdateFrequency\x09\x09How frequently this section is expected to be updated, Infrequent draws faster than Average/Frequent but updates slower\n\x09*\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09*/" },
		{ "CPP_Default_bCreateCollision", "true" },
		{ "CPP_Default_UpdateFrequency", "Infrequent" },
		{ "DisplayName", "Create Section From Components" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
		{ "ToolTip", "Create/replace a section for this runtime mesh.\n@param  LODIndex                        Index of the LOD to create the section in.\n@param  SectionIndex            Index of the section to create or replace.\n@param  MaterialSlot            Index of the material to use for this section\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV2                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV3                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  UpdateFrequency         How frequently this section is expected to be updated, Infrequent draws faster than Average/Frequent but updates slower\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "CreateSectionFromComponents", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventCreateSectionFromComponents_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Normals" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "DisableNormalTangentGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Tessellation" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "DisableTessellationTrianglesGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics
	{
		struct RuntimeMeshComponentStatic_eventDoesSectionHaveValidMeshData_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshComponentStatic_eventDoesSectionHaveValidMeshData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshComponentStatic_eventDoesSectionHaveValidMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventDoesSectionHaveValidMeshData_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventDoesSectionHaveValidMeshData_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "DoesSectionHaveValidMeshData", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventDoesSectionHaveValidMeshData_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Tessellation" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "EnabledTessellationTrianglesGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Normals" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "EnableNormalTangentGeneration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetCollisionMesh_Parms
		{
			FRuntimeMeshCollisionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetCollisionMesh_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetCollisionMesh", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetCollisionMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetCollisionSettings_Parms
		{
			FRuntimeMeshCollisionSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetCollisionSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetCollisionSettings", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetCollisionSettings_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetLastSectionId_Parms
		{
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetLastSectionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetLastSectionId_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetLastSectionId", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetLastSectionId_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetLODForMeshCollision_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetLODForMeshCollision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetLODForMeshCollision", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetLODForMeshCollision_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetSectionBounds_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionBounds_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionBounds_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetSectionBounds", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetSectionBounds_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetSectionIds_Parms
		{
			int32 LODIndex;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionIds_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetSectionIds", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetSectionIds_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetSectionProperties_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshSectionProperties ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionProperties_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionProperties_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetSectionProperties", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetSectionProperties_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetSectionRenderData_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionRenderData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionRenderData_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionRenderData_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetSectionRenderData", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetSectionRenderData_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetSectionRenderDataAndClear_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionRenderDataAndClear_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionRenderDataAndClear_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionRenderDataAndClear_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetSectionRenderDataAndClear", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetSectionRenderDataAndClear_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetSectionsForMeshCollision_Parms
		{
			TSet<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetSectionsForMeshCollision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue_ElementProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetSectionsForMeshCollision", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetSectionsForMeshCollision_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics
	{
		struct RuntimeMeshComponentStatic_eventGetStaticProvider_Parms
		{
			URuntimeMeshProviderStatic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventGetStaticProvider_Parms, ReturnValue), Z_Construct_UClass_URuntimeMeshProviderStatic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "GetStaticProvider", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventGetStaticProvider_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics
	{
		struct RuntimeMeshComponentStatic_eventHasNormalTangentGenerationEnabled_Parms
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
	void Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshComponentStatic_eventHasNormalTangentGenerationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshComponentStatic_eventHasNormalTangentGenerationEnabled_Parms), &Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Normals" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "HasNormalTangentGenerationEnabled", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventHasNormalTangentGenerationEnabled_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics
	{
		struct RuntimeMeshComponentStatic_eventHasTessellationTriangleGenerationEnabled_Parms
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
	void Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshComponentStatic_eventHasTessellationTriangleGenerationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshComponentStatic_eventHasTessellationTriangleGenerationEnabled_Parms), &Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Tessellation" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "HasTessellationTriangleGenerationEnabled", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventHasTessellationTriangleGenerationEnabled_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics
	{
		struct RuntimeMeshComponentStatic_eventRemoveAllSectionsForLOD_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventRemoveAllSectionsForLOD_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "RemoveAllSectionsForLOD", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventRemoveAllSectionsForLOD_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics
	{
		struct RuntimeMeshComponentStatic_eventSetCollisionMesh_Parms
		{
			FRuntimeMeshCollisionData NewCollisionMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCollisionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCollisionMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh = { "NewCollisionMesh", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventSetCollisionMesh_Parms, NewCollisionMesh), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "SetCollisionMesh", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventSetCollisionMesh_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics
	{
		struct RuntimeMeshComponentStatic_eventSetCollisionSettings_Parms
		{
			FRuntimeMeshCollisionSettings NewCollisionSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCollisionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCollisionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings = { "NewCollisionSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventSetCollisionSettings_Parms, NewCollisionSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "SetCollisionSettings", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventSetCollisionSettings_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics
	{
		struct RuntimeMeshComponentStatic_eventSetRenderableLODForCollision_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventSetRenderableLODForCollision_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "SetRenderableLODForCollision", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventSetRenderableLODForCollision_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics
	{
		struct RuntimeMeshComponentStatic_eventSetRenderableSectionAffectsCollision_Parms
		{
			int32 SectionId;
			bool bCollisionEnabled;
		};
		static void NewProp_bCollisionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollisionEnabled;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled_SetBit(void* Obj)
	{
		((RuntimeMeshComponentStatic_eventSetRenderableSectionAffectsCollision_Parms*)Obj)->bCollisionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled = { "bCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshComponentStatic_eventSetRenderableSectionAffectsCollision_Parms), &Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventSetRenderableSectionAffectsCollision_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_SectionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Collision" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "SetRenderableSectionAffectsCollision", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventSetRenderableSectionAffectsCollision_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics
	{
		struct RuntimeMeshComponentStatic_eventUpdateSection_Blueprint_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData SectionData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSection_Blueprint_Parms, SectionData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSection_Blueprint_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSection_Blueprint_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "DisplayName", "Update Section" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "UpdateSection_Blueprint", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventUpdateSection_Blueprint_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics
	{
		struct RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms
		{
			int32 LODIndex;
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FVector2D> UV1;
			TArray<FVector2D> UV2;
			TArray<FVector2D> UV3;
			TArray<FLinearColor> VertexColors;
			TArray<FRuntimeMeshTangent> Tangents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "RuntimeMeshStatic|Mesh" },
		{ "Comment", "/**\n\x09*\x09Update the mesh data of a section.\n\x09*\x09@param\x09LODIndex\x09\x09\x09Index of the LOD to create the section in.\n\x09*\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09*\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09*\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09*\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV1\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV2\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV3\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09*/" },
		{ "DisplayName", "Update Section From Components" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
		{ "ToolTip", "Update the mesh data of a section.\n@param  LODIndex                        Index of the LOD to create the section in.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV2                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV3                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshComponentStatic, nullptr, "UpdateSectionFromComponents", nullptr, nullptr, sizeof(RuntimeMeshComponentStatic_eventUpdateSectionFromComponents_Parms), Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshComponentStatic_NoRegister()
	{
		return URuntimeMeshComponentStatic::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshComponentStatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjacencyModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdjacencyModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalsModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_ClearSection, "ClearSection" }, // 3148534483
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSection_Blueprint, "CreateSection_Blueprint" }, // 4129814728
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_CreateSectionFromComponents, "CreateSectionFromComponents" }, // 2596977219
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableNormalTangentGeneration, "DisableNormalTangentGeneration" }, // 3065886971
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_DisableTessellationTrianglesGeneration, "DisableTessellationTrianglesGeneration" }, // 66183511
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_DoesSectionHaveValidMeshData, "DoesSectionHaveValidMeshData" }, // 3476414890
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_EnabledTessellationTrianglesGeneration, "EnabledTessellationTrianglesGeneration" }, // 1001284622
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_EnableNormalTangentGeneration, "EnableNormalTangentGeneration" }, // 3880685264
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionMesh, "GetCollisionMesh" }, // 2135803782
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetCollisionSettings, "GetCollisionSettings" }, // 4229833592
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLastSectionId, "GetLastSectionId" }, // 3470388195
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetLODForMeshCollision, "GetLODForMeshCollision" }, // 625557015
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionBounds, "GetSectionBounds" }, // 1970468513
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionIds, "GetSectionIds" }, // 3903710786
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionProperties, "GetSectionProperties" }, // 2972358977
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderData, "GetSectionRenderData" }, // 361128667
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionRenderDataAndClear, "GetSectionRenderDataAndClear" }, // 919989757
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetSectionsForMeshCollision, "GetSectionsForMeshCollision" }, // 975574304
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_GetStaticProvider, "GetStaticProvider" }, // 3485442068
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_HasNormalTangentGenerationEnabled, "HasNormalTangentGenerationEnabled" }, // 1301568921
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_HasTessellationTriangleGenerationEnabled, "HasTessellationTriangleGenerationEnabled" }, // 3497793359
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_RemoveAllSectionsForLOD, "RemoveAllSectionsForLOD" }, // 904307916
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionMesh, "SetCollisionMesh" }, // 532550776
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_SetCollisionSettings, "SetCollisionSettings" }, // 1441647957
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableLODForCollision, "SetRenderableLODForCollision" }, // 1007299290
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_SetRenderableSectionAffectsCollision, "SetRenderableSectionAffectsCollision" }, // 3028321970
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSection_Blueprint, "UpdateSection_Blueprint" }, // 1380281591
		{ &Z_Construct_UFunction_URuntimeMeshComponentStatic_UpdateSectionFromComponents, "UpdateSectionFromComponents" }, // 372748629
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n*\x09RMC but with automatic static provider, to work like PMC or RMC3 and down\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/RuntimeMeshComponentStatic.h" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
		{ "ToolTip", "RMC but with automatic static provider, to work like PMC or RMC3 and down" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_AdjacencyModifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_AdjacencyModifier = { "AdjacencyModifier", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentStatic, AdjacencyModifier), Z_Construct_UClass_URuntimeMeshModifierAdjacency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_AdjacencyModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_AdjacencyModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_NormalsModifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_NormalsModifier = { "NormalsModifier", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentStatic, NormalsModifier), Z_Construct_UClass_URuntimeMeshModifierNormals_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_NormalsModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_NormalsModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_StaticProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_StaticProvider = { "StaticProvider", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentStatic, StaticProvider), Z_Construct_UClass_URuntimeMeshProviderStatic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_StaticProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_StaticProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_RuntimeMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetRuntimeMesh" },
		{ "Category", "Mesh Sharing" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Components/RuntimeMeshComponentStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_RuntimeMesh = { "RuntimeMesh", nullptr, (EPropertyFlags)0x0041000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshComponentStatic, RuntimeMesh), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_RuntimeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_RuntimeMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_AdjacencyModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_NormalsModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_StaticProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::NewProp_RuntimeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshComponentStatic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::ClassParams = {
		&URuntimeMeshComponentStatic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshComponentStatic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshComponentStatic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshComponentStatic, 2408367282);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshComponentStatic>()
	{
		return URuntimeMeshComponentStatic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshComponentStatic(Z_Construct_UClass_URuntimeMeshComponentStatic, &URuntimeMeshComponentStatic::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshComponentStatic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshComponentStatic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
