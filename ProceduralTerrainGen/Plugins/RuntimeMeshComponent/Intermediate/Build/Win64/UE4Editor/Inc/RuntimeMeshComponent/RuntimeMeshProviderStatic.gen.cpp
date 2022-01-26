// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderStatic.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderStatic() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderStatic_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderStatic();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetSectionRenderDataAndClear)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshRenderableMeshData*)Z_Param__Result=P_THIS->GetSectionRenderDataAndClear(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetSectionRenderData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshRenderableMeshData*)Z_Param__Result=P_THIS->GetSectionRenderData(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetSectionProperties)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshSectionProperties*)Z_Param__Result=P_THIS->GetSectionProperties(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetSectionBounds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetSectionBounds(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execRemoveAllSectionsForLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllSectionsForLOD(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execDoesSectionHaveValidMeshData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesSectionHaveValidMeshData(Z_Param_LODIndex,Z_Param_SectionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetLastSectionId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastSectionId(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetSectionIds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetSectionIds(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execSetRenderableSectionAffectsCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_UBOOL(Z_Param_bCollisionEnabled);
		P_GET_UBOOL(Z_Param_bForceUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderableSectionAffectsCollision(Z_Param_SectionId,Z_Param_bCollisionEnabled,Z_Param_bForceUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetSectionsForMeshCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<int32>*)Z_Param__Result=P_THIS->GetSectionsForMeshCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execSetRenderableLODForCollision)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderableLODForCollision(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetLODForMeshCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLODForMeshCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execSetCollisionMesh)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionData,Z_Param_Out_NewCollisionMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionMesh(Z_Param_Out_NewCollisionMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetCollisionMeshStatic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionData*)Z_Param__Result=P_THIS->GetCollisionMeshStatic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execSetCollisionSettings)
	{
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSettings,Z_Param_Out_NewCollisionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionSettings(Z_Param_Out_NewCollisionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execGetCollisionSettingsStatic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRuntimeMeshCollisionSettings*)Z_Param__Result=P_THIS->GetCollisionSettingsStatic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execUpdateSectionFromComponents)
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
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execCreateSectionFromComponents)
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
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execUpdateSection_Blueprint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionId);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_SectionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSection_Blueprint(Z_Param_LODIndex,Z_Param_SectionId,Z_Param_Out_SectionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execCreateSection_Blueprint)
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
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execUnRegisterModifier)
	{
		P_GET_OBJECT(URuntimeMeshModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegisterModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshProviderStatic::execRegisterModifier)
	{
		P_GET_OBJECT(URuntimeMeshModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	void URuntimeMeshProviderStatic::StaticRegisterNativesURuntimeMeshProviderStatic()
	{
		UClass* Class = URuntimeMeshProviderStatic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSection_Blueprint", &URuntimeMeshProviderStatic::execCreateSection_Blueprint },
			{ "CreateSectionFromComponents", &URuntimeMeshProviderStatic::execCreateSectionFromComponents },
			{ "DoesSectionHaveValidMeshData", &URuntimeMeshProviderStatic::execDoesSectionHaveValidMeshData },
			{ "GetCollisionMeshStatic", &URuntimeMeshProviderStatic::execGetCollisionMeshStatic },
			{ "GetCollisionSettingsStatic", &URuntimeMeshProviderStatic::execGetCollisionSettingsStatic },
			{ "GetLastSectionId", &URuntimeMeshProviderStatic::execGetLastSectionId },
			{ "GetLODForMeshCollision", &URuntimeMeshProviderStatic::execGetLODForMeshCollision },
			{ "GetSectionBounds", &URuntimeMeshProviderStatic::execGetSectionBounds },
			{ "GetSectionIds", &URuntimeMeshProviderStatic::execGetSectionIds },
			{ "GetSectionProperties", &URuntimeMeshProviderStatic::execGetSectionProperties },
			{ "GetSectionRenderData", &URuntimeMeshProviderStatic::execGetSectionRenderData },
			{ "GetSectionRenderDataAndClear", &URuntimeMeshProviderStatic::execGetSectionRenderDataAndClear },
			{ "GetSectionsForMeshCollision", &URuntimeMeshProviderStatic::execGetSectionsForMeshCollision },
			{ "RegisterModifier", &URuntimeMeshProviderStatic::execRegisterModifier },
			{ "RemoveAllSectionsForLOD", &URuntimeMeshProviderStatic::execRemoveAllSectionsForLOD },
			{ "SetCollisionMesh", &URuntimeMeshProviderStatic::execSetCollisionMesh },
			{ "SetCollisionSettings", &URuntimeMeshProviderStatic::execSetCollisionSettings },
			{ "SetRenderableLODForCollision", &URuntimeMeshProviderStatic::execSetRenderableLODForCollision },
			{ "SetRenderableSectionAffectsCollision", &URuntimeMeshProviderStatic::execSetRenderableSectionAffectsCollision },
			{ "UnRegisterModifier", &URuntimeMeshProviderStatic::execUnRegisterModifier },
			{ "UpdateSection_Blueprint", &URuntimeMeshProviderStatic::execUpdateSection_Blueprint },
			{ "UpdateSectionFromComponents", &URuntimeMeshProviderStatic::execUpdateSectionFromComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics
	{
		struct RuntimeMeshProviderStatic_eventCreateSection_Blueprint_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshSectionProperties SectionProperties;
			FRuntimeMeshRenderableMeshData SectionData;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSection_Blueprint_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSection_Blueprint_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties = { "SectionProperties", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSection_Blueprint_Parms, SectionProperties), Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSection_Blueprint_Parms, SectionData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::NewProp_SectionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "DisplayName", "Create Section" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "CreateSection_Blueprint", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventCreateSection_Blueprint_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics
	{
		struct RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateFrequency_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateFrequency;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, MaterialSlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV0_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV1_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV2_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV3_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms, UpdateFrequency), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms*)Obj)->bCreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms), &Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_MaterialSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV0_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV3_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_UpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::NewProp_bCreateCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "Comment", "/**\n\x09*\x09""Create/replace a section for this runtime mesh.\n\x09*\x09@param\x09LODIndex\x09\x09\x09Index of the LOD to create the section in.\n\x09*\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09*\x09@param\x09MaterialSlot\x09\x09Index of the material to use for this section\n\x09*\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09*\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09*\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV1\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV2\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV3\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UpdateFrequency\x09\x09How frequently this section is expected to be updated, Infrequent draws faster than Average/Frequent but updates slower\n\x09*\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09*/" },
		{ "CPP_Default_bCreateCollision", "true" },
		{ "CPP_Default_UpdateFrequency", "Infrequent" },
		{ "DisplayName", "Create Section From Components" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
		{ "ToolTip", "Create/replace a section for this runtime mesh.\n@param  LODIndex                        Index of the LOD to create the section in.\n@param  SectionIndex            Index of the section to create or replace.\n@param  MaterialSlot            Index of the material to use for this section\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV2                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV3                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  UpdateFrequency         How frequently this section is expected to be updated, Infrequent draws faster than Average/Frequent but updates slower\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "CreateSectionFromComponents", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventCreateSectionFromComponents_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics
	{
		struct RuntimeMeshProviderStatic_eventDoesSectionHaveValidMeshData_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventDoesSectionHaveValidMeshData_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventDoesSectionHaveValidMeshData_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshProviderStatic_eventDoesSectionHaveValidMeshData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshProviderStatic_eventDoesSectionHaveValidMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "DoesSectionHaveValidMeshData", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventDoesSectionHaveValidMeshData_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetCollisionMeshStatic_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetCollisionMeshStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetCollisionMeshStatic", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetCollisionMeshStatic_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetCollisionSettingsStatic_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetCollisionSettingsStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetCollisionSettingsStatic", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetCollisionSettingsStatic_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetLastSectionId_Parms
		{
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetLastSectionId_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetLastSectionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetLastSectionId", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetLastSectionId_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetLODForMeshCollision_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetLODForMeshCollision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetLODForMeshCollision", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetLODForMeshCollision_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetSectionBounds_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionBounds_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionBounds_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetSectionBounds", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetSectionBounds_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetSectionIds_Parms
		{
			int32 LODIndex;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionIds_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetSectionIds", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetSectionIds_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetSectionProperties_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshSectionProperties ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionProperties_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionProperties_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetSectionProperties", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetSectionProperties_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetSectionRenderData_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionRenderData_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionRenderData_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionRenderData_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetSectionRenderData", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetSectionRenderData_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetSectionRenderDataAndClear_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionRenderDataAndClear_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionRenderDataAndClear_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionRenderDataAndClear_Parms, ReturnValue), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetSectionRenderDataAndClear", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetSectionRenderDataAndClear_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics
	{
		struct RuntimeMeshProviderStatic_eventGetSectionsForMeshCollision_Parms
		{
			TSet<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventGetSectionsForMeshCollision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "GetSectionsForMeshCollision", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventGetSectionsForMeshCollision_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics
	{
		struct RuntimeMeshProviderStatic_eventRegisterModifier_Parms
		{
			URuntimeMeshModifier* Modifier;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventRegisterModifier_Parms, Modifier), Z_Construct_UClass_URuntimeMeshModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "RegisterModifier", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventRegisterModifier_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics
	{
		struct RuntimeMeshProviderStatic_eventRemoveAllSectionsForLOD_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventRemoveAllSectionsForLOD_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "RemoveAllSectionsForLOD", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventRemoveAllSectionsForLOD_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics
	{
		struct RuntimeMeshProviderStatic_eventSetCollisionMesh_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh = { "NewCollisionMesh", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventSetCollisionMesh_Parms, NewCollisionMesh), Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::NewProp_NewCollisionMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "SetCollisionMesh", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventSetCollisionMesh_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics
	{
		struct RuntimeMeshProviderStatic_eventSetCollisionSettings_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings = { "NewCollisionSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventSetCollisionSettings_Parms, NewCollisionSettings), Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::NewProp_NewCollisionSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "SetCollisionSettings", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventSetCollisionSettings_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics
	{
		struct RuntimeMeshProviderStatic_eventSetRenderableLODForCollision_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventSetRenderableLODForCollision_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "SetRenderableLODForCollision", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventSetRenderableLODForCollision_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics
	{
		struct RuntimeMeshProviderStatic_eventSetRenderableSectionAffectsCollision_Parms
		{
			int32 SectionId;
			bool bCollisionEnabled;
			bool bForceUpdate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static void NewProp_bCollisionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollisionEnabled;
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventSetRenderableSectionAffectsCollision_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled_SetBit(void* Obj)
	{
		((RuntimeMeshProviderStatic_eventSetRenderableSectionAffectsCollision_Parms*)Obj)->bCollisionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled = { "bCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshProviderStatic_eventSetRenderableSectionAffectsCollision_Parms), &Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((RuntimeMeshProviderStatic_eventSetRenderableSectionAffectsCollision_Parms*)Obj)->bForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshProviderStatic_eventSetRenderableSectionAffectsCollision_Parms), &Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bCollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::NewProp_bForceUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "SetRenderableSectionAffectsCollision", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventSetRenderableSectionAffectsCollision_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics
	{
		struct RuntimeMeshProviderStatic_eventUnRegisterModifier_Parms
		{
			URuntimeMeshModifier* Modifier;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUnRegisterModifier_Parms, Modifier), Z_Construct_UClass_URuntimeMeshModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "UnRegisterModifier", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventUnRegisterModifier_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics
	{
		struct RuntimeMeshProviderStatic_eventUpdateSection_Blueprint_Parms
		{
			int32 LODIndex;
			int32 SectionId;
			FRuntimeMeshRenderableMeshData SectionData;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSection_Blueprint_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSection_Blueprint_Parms, SectionId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSection_Blueprint_Parms, SectionData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::NewProp_SectionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "DisplayName", "Update Section" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "UpdateSection_Blueprint", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventUpdateSection_Blueprint_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics
	{
		struct RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV0_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV3_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_UV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "Comment", "/**\n\x09*\x09Update the mesh data of a section.\n\x09*\x09@param\x09LODIndex\x09\x09\x09Index of the LOD to create the section in.\n\x09*\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09*\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09*\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09*\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV1\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV2\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09UV3\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09*\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09*/" },
		{ "DisplayName", "Update Section From Components" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
		{ "ToolTip", "Update the mesh data of a section.\n@param  LODIndex                        Index of the LOD to create the section in.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV1                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV2                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  UV3                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshProviderStatic, nullptr, "UpdateSectionFromComponents", nullptr, nullptr, sizeof(RuntimeMeshProviderStatic_eventUpdateSectionFromComponents_Parms), Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshProviderStatic_NoRegister()
	{
		return URuntimeMeshProviderStatic::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderStatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreEditorGeneratedDataForGame_MetaData[];
#endif
		static void NewProp_StoreEditorGeneratedDataForGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StoreEditorGeneratedDataForGame;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMeshModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMeshModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentMeshModifiers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSection_Blueprint, "CreateSection_Blueprint" }, // 1213112522
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_CreateSectionFromComponents, "CreateSectionFromComponents" }, // 3190983091
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_DoesSectionHaveValidMeshData, "DoesSectionHaveValidMeshData" }, // 1440893612
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionMeshStatic, "GetCollisionMeshStatic" }, // 735260148
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetCollisionSettingsStatic, "GetCollisionSettingsStatic" }, // 1054423983
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLastSectionId, "GetLastSectionId" }, // 320065647
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetLODForMeshCollision, "GetLODForMeshCollision" }, // 3231061464
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionBounds, "GetSectionBounds" }, // 2243524251
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionIds, "GetSectionIds" }, // 3955952867
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionProperties, "GetSectionProperties" }, // 76021511
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderData, "GetSectionRenderData" }, // 864783298
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionRenderDataAndClear, "GetSectionRenderDataAndClear" }, // 485977334
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_GetSectionsForMeshCollision, "GetSectionsForMeshCollision" }, // 1398828353
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_RegisterModifier, "RegisterModifier" }, // 2326332833
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_RemoveAllSectionsForLOD, "RemoveAllSectionsForLOD" }, // 1184895478
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionMesh, "SetCollisionMesh" }, // 3113909510
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_SetCollisionSettings, "SetCollisionSettings" }, // 394885820
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableLODForCollision, "SetRenderableLODForCollision" }, // 2616421520
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_SetRenderableSectionAffectsCollision, "SetRenderableSectionAffectsCollision" }, // 3711592984
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_UnRegisterModifier, "UnRegisterModifier" }, // 4042886880
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSection_Blueprint, "UpdateSection_Blueprint" }, // 1446877811
		{ &Z_Construct_UFunction_URuntimeMeshProviderStatic_UpdateSectionFromComponents, "UpdateSectionFromComponents" }, // 338197298
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderStatic.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_StoreEditorGeneratedDataForGame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeMeshActor" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_StoreEditorGeneratedDataForGame_SetBit(void* Obj)
	{
		((URuntimeMeshProviderStatic*)Obj)->StoreEditorGeneratedDataForGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_StoreEditorGeneratedDataForGame = { "StoreEditorGeneratedDataForGame", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeMeshProviderStatic), &Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_StoreEditorGeneratedDataForGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_StoreEditorGeneratedDataForGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_StoreEditorGeneratedDataForGame_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_CurrentMeshModifiers_Inner = { "CurrentMeshModifiers", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URuntimeMeshModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_CurrentMeshModifiers_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Static" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_CurrentMeshModifiers = { "CurrentMeshModifiers", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderStatic, CurrentMeshModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_CurrentMeshModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_CurrentMeshModifiers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_StoreEditorGeneratedDataForGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_CurrentMeshModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::NewProp_CurrentMeshModifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderStatic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::ClassParams = {
		&URuntimeMeshProviderStatic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderStatic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshProviderStatic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshProviderStatic, 4023378305);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderStatic>()
	{
		return URuntimeMeshProviderStatic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshProviderStatic(Z_Construct_UClass_URuntimeMeshProviderStatic, &URuntimeMeshProviderStatic::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshProviderStatic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderStatic);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URuntimeMeshProviderStatic)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
