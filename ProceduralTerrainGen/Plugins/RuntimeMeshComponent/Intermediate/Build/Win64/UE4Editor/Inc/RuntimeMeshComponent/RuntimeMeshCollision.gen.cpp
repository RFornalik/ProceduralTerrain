// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshCollision() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
	static UEnum* ERuntimeMeshCollisionFaceSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshCollisionFaceSourceType"));
		}
		return Singleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshCollisionFaceSourceType>()
	{
		return ERuntimeMeshCollisionFaceSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshCollisionFaceSourceType(ERuntimeMeshCollisionFaceSourceType_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshCollisionFaceSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Hash() { return 3639214529U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshCollisionFaceSourceType"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshCollisionFaceSourceType::Collision", (int64)ERuntimeMeshCollisionFaceSourceType::Collision },
				{ "ERuntimeMeshCollisionFaceSourceType::Renderable", (int64)ERuntimeMeshCollisionFaceSourceType::Renderable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collision.Comment", "/* Collision face was created by a collision specific source */" },
				{ "Collision.DisplayName", "Collision" },
				{ "Collision.Name", "ERuntimeMeshCollisionFaceSourceType::Collision" },
				{ "Collision.ToolTip", "Collision face was created by a collision specific source" },
				{ "Comment", "/* Source of a mesh face, whether it was collision or rendering */" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "Renderable.Comment", "/* Collision face was created by a renderable section */" },
				{ "Renderable.DisplayName", "Renderable" },
				{ "Renderable.Name", "ERuntimeMeshCollisionFaceSourceType::Renderable" },
				{ "Renderable.ToolTip", "Collision face was created by a renderable section" },
				{ "ToolTip", "Source of a mesh face, whether it was collision or rendering" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				"ERuntimeMeshCollisionFaceSourceType",
				"ERuntimeMeshCollisionFaceSourceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRuntimeMeshRenderableCollisionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshRenderableCollisionData"), sizeof(FRuntimeMeshRenderableCollisionData), Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshRenderableCollisionData>()
{
	return FRuntimeMeshRenderableCollisionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshRenderableCollisionData(FRuntimeMeshRenderableCollisionData::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshRenderableCollisionData"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshRenderableCollisionData
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshRenderableCollisionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshRenderableCollisionData")),new UScriptStruct::TCppStructOps<FRuntimeMeshRenderableCollisionData>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshRenderableCollisionData;
	struct Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexCoords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshRenderableCollisionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableCollisionData, Vertices), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableCollisionData, Triangles), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords = { "TexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableCollisionData, TexCoords), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::NewProp_TexCoords,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshRenderableCollisionData",
		sizeof(FRuntimeMeshRenderableCollisionData),
		alignof(FRuntimeMeshRenderableCollisionData),
		Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshRenderableCollisionData"), sizeof(FRuntimeMeshRenderableCollisionData), Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableCollisionData_Hash() { return 2795449582U; }
class UScriptStruct* FRuntimeMeshAsyncBodySetupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshAsyncBodySetupData"), sizeof(FRuntimeMeshAsyncBodySetupData), Get_Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshAsyncBodySetupData>()
{
	return FRuntimeMeshAsyncBodySetupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshAsyncBodySetupData(FRuntimeMeshAsyncBodySetupData::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshAsyncBodySetupData"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshAsyncBodySetupData
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshAsyncBodySetupData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshAsyncBodySetupData")),new UScriptStruct::TCppStructOps<FRuntimeMeshAsyncBodySetupData>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshAsyncBodySetupData;
	struct Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionSources;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshAsyncBodySetupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshAsyncBodySetupData, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_Inner = { "CollisionSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_MetaData[] = {
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources = { "CollisionSources", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshAsyncBodySetupData, CollisionSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::NewProp_CollisionSources,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshAsyncBodySetupData",
		sizeof(FRuntimeMeshAsyncBodySetupData),
		alignof(FRuntimeMeshAsyncBodySetupData),
		Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshAsyncBodySetupData"), sizeof(FRuntimeMeshAsyncBodySetupData), Get_Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshAsyncBodySetupData_Hash() { return 3820996354U; }
class UScriptStruct* FRuntimeMeshCollisionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionData"), sizeof(FRuntimeMeshCollisionData), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionData>()
{
	return FRuntimeMeshCollisionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionData(FRuntimeMeshCollisionData::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionData"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionData
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionData")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionData>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionData;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionSources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipNormals_MetaData[];
#endif
		static void NewProp_bFlipNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeformableMesh_MetaData[];
#endif
		static void NewProp_bDeformableMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeformableMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFastCook_MetaData[];
#endif
		static void NewProp_bFastCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFastCook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableActiveEdgePrecompute_MetaData[];
#endif
		static void NewProp_bDisableActiveEdgePrecompute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableActiveEdgePrecompute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionData, Vertices), Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionData, Triangles), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords = { "TexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionData, TexCoords), Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices = { "MaterialIndices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionData, MaterialIndices), Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_Inner = { "CollisionSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources = { "CollisionSources", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionData, CollisionSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bFlipNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals = { "bFlipNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bDeformableMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh = { "bDeformableMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bFastCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook = { "bFastCook", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionData*)Obj)->bDisableActiveEdgePrecompute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute = { "bDisableActiveEdgePrecompute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshCollisionData), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_TexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_MaterialIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_CollisionSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFlipNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDeformableMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bFastCook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::NewProp_bDisableActiveEdgePrecompute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionData",
		sizeof(FRuntimeMeshCollisionData),
		alignof(FRuntimeMeshCollisionData),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionData"), sizeof(FRuntimeMeshCollisionData), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionData_Hash() { return 3989106470U; }
class UScriptStruct* FRuntimeMeshCollisionHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionHitInfo"), sizeof(FRuntimeMeshCollisionHitInfo), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionHitInfo>()
{
	return FRuntimeMeshCollisionHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionHitInfo(FRuntimeMeshCollisionHitInfo::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionHitInfo
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionHitInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionHitInfo")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionHitInfo>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionHitInfo;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceProvider;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionHitInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider = { "SourceProvider", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, SourceProvider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, SourceType), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, SectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, FaceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionHitInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_FaceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionHitInfo",
		sizeof(FRuntimeMeshCollisionHitInfo),
		alignof(FRuntimeMeshCollisionHitInfo),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionHitInfo"), sizeof(FRuntimeMeshCollisionHitInfo), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionHitInfo_Hash() { return 5089068U; }
class UScriptStruct* FRuntimeMeshCollisionSourceSectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSourceSectionInfo"), sizeof(FRuntimeMeshCollisionSourceSectionInfo), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionSourceSectionInfo>()
{
	return FRuntimeMeshCollisionSourceSectionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo(FRuntimeMeshCollisionSourceSectionInfo::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionSourceSectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSourceSectionInfo
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSourceSectionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionSourceSectionInfo")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSourceSectionInfo>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSourceSectionInfo;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSourceSectionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, StartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, EndIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider = { "SourceProvider", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, SourceProvider), Z_Construct_UClass_URuntimeMeshProvider_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId = { "SectionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, SectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|CollisionMesh" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSourceSectionInfo, SourceType), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionFaceSourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SectionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::NewProp_SourceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionSourceSectionInfo",
		sizeof(FRuntimeMeshCollisionSourceSectionInfo),
		alignof(FRuntimeMeshCollisionSourceSectionInfo),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionSourceSectionInfo"), sizeof(FRuntimeMeshCollisionSourceSectionInfo), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSourceSectionInfo_Hash() { return 1501614410U; }
class UScriptStruct* FRuntimeMeshCollisionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSettings"), sizeof(FRuntimeMeshCollisionSettings), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionSettings>()
{
	return FRuntimeMeshCollisionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionSettings(FRuntimeMeshCollisionSettings::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSettings
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionSettings")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSettings>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSettings;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimple_MetaData[];
#endif
		static void NewProp_bUseComplexAsSimple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[];
#endif
		static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CookingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CookingMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvexElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvexElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConvexElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Boxes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Capsules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Capsules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionSettings*)Obj)->bUseComplexAsSimple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple = { "bUseComplexAsSimple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshCollisionSettings), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
	{
		((FRuntimeMeshCollisionSettings*)Obj)->bUseAsyncCooking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshCollisionSettings), &Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode = { "CookingMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, CookingMode), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_Inner = { "ConvexElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements = { "ConvexElements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, ConvexElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_Inner = { "Capsules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Settings" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules = { "Capsules", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSettings, Capsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseComplexAsSimple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_bUseAsyncCooking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_CookingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_ConvexElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Spheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Boxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::NewProp_Capsules,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionSettings",
		sizeof(FRuntimeMeshCollisionSettings),
		alignof(FRuntimeMeshCollisionSettings),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionSettings"), sizeof(FRuntimeMeshCollisionSettings), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSettings_Hash() { return 1835786083U; }
class UScriptStruct* FRuntimeMeshCollisionMaterialIndexStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionMaterialIndexStream"), sizeof(FRuntimeMeshCollisionMaterialIndexStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionMaterialIndexStream>()
{
	return FRuntimeMeshCollisionMaterialIndexStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream(FRuntimeMeshCollisionMaterialIndexStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionMaterialIndexStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionMaterialIndexStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionMaterialIndexStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionMaterialIndexStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionMaterialIndexStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionMaterialIndexStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionMaterialIndexStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionMaterialIndexStream",
		sizeof(FRuntimeMeshCollisionMaterialIndexStream),
		alignof(FRuntimeMeshCollisionMaterialIndexStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionMaterialIndexStream"), sizeof(FRuntimeMeshCollisionMaterialIndexStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionMaterialIndexStream_Hash() { return 1554142115U; }
class UScriptStruct* FRuntimeMeshCollisionTexCoordStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionTexCoordStream"), sizeof(FRuntimeMeshCollisionTexCoordStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionTexCoordStream>()
{
	return FRuntimeMeshCollisionTexCoordStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream(FRuntimeMeshCollisionTexCoordStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionTexCoordStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionTexCoordStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionTexCoordStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionTexCoordStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionTexCoordStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionTexCoordStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionTexCoordStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionTexCoordStream",
		sizeof(FRuntimeMeshCollisionTexCoordStream),
		alignof(FRuntimeMeshCollisionTexCoordStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionTexCoordStream"), sizeof(FRuntimeMeshCollisionTexCoordStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTexCoordStream_Hash() { return 1684874656U; }
class UScriptStruct* FRuntimeMeshCollisionTriangleStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionTriangleStream"), sizeof(FRuntimeMeshCollisionTriangleStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionTriangleStream>()
{
	return FRuntimeMeshCollisionTriangleStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionTriangleStream(FRuntimeMeshCollisionTriangleStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionTriangleStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionTriangleStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionTriangleStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionTriangleStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionTriangleStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionTriangleStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionTriangleStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionTriangleStream",
		sizeof(FRuntimeMeshCollisionTriangleStream),
		alignof(FRuntimeMeshCollisionTriangleStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionTriangleStream"), sizeof(FRuntimeMeshCollisionTriangleStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionTriangleStream_Hash() { return 474334769U; }
class UScriptStruct* FRuntimeMeshCollisionVertexStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionVertexStream"), sizeof(FRuntimeMeshCollisionVertexStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionVertexStream>()
{
	return FRuntimeMeshCollisionVertexStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionVertexStream(FRuntimeMeshCollisionVertexStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionVertexStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionVertexStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionVertexStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionVertexStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionVertexStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionVertexStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionVertexStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionVertexStream",
		sizeof(FRuntimeMeshCollisionVertexStream),
		alignof(FRuntimeMeshCollisionVertexStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionVertexStream"), sizeof(FRuntimeMeshCollisionVertexStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionVertexStream_Hash() { return 3365968948U; }
class UScriptStruct* FRuntimeMeshCollisionCapsule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionCapsule"), sizeof(FRuntimeMeshCollisionCapsule), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionCapsule>()
{
	return FRuntimeMeshCollisionCapsule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionCapsule(FRuntimeMeshCollisionCapsule::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionCapsule"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionCapsule
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionCapsule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionCapsule")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionCapsule>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionCapsule;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionCapsule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** Position of the capsule's origin */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Position of the capsule's origin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** Rotation of the capsule */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Rotation of the capsule" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** Radius of the capsule */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Radius of the capsule" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Capsule" },
		{ "Comment", "/** This is of line-segment ie. add Radius to both ends to find total length. */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "This is of line-segment ie. add Radius to both ends to find total length." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::NewProp_Length,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionCapsule",
		sizeof(FRuntimeMeshCollisionCapsule),
		alignof(FRuntimeMeshCollisionCapsule),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionCapsule"), sizeof(FRuntimeMeshCollisionCapsule), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_Hash() { return 2803837152U; }
class UScriptStruct* FRuntimeMeshCollisionBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionBox"), sizeof(FRuntimeMeshCollisionBox), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionBox>()
{
	return FRuntimeMeshCollisionBox::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionBox(FRuntimeMeshCollisionBox::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionBox"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionBox
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionBox")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionBox>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionBox;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionBox>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Box" },
		{ "Comment", "/** Position of the box's origin */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Position of the box's origin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Box" },
		{ "Comment", "/** Rotation of the box */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Rotation of the box" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Box" },
		{ "Comment", "/** Extents of the box */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Extents of the box" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::NewProp_Extents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionBox",
		sizeof(FRuntimeMeshCollisionBox),
		alignof(FRuntimeMeshCollisionBox),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionBox"), sizeof(FRuntimeMeshCollisionBox), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_Hash() { return 2719741910U; }
class UScriptStruct* FRuntimeMeshCollisionSphere::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSphere"), sizeof(FRuntimeMeshCollisionSphere), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionSphere>()
{
	return FRuntimeMeshCollisionSphere::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionSphere(FRuntimeMeshCollisionSphere::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionSphere"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSphere
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSphere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionSphere")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSphere>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSphere;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSphere>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Sphere" },
		{ "Comment", "/** Position of the sphere's origin */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Position of the sphere's origin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSphere, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Sphere" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionSphere, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionSphere",
		sizeof(FRuntimeMeshCollisionSphere),
		alignof(FRuntimeMeshCollisionSphere),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionSphere"), sizeof(FRuntimeMeshCollisionSphere), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_Hash() { return 2874964244U; }
class UScriptStruct* FRuntimeMeshCollisionConvexMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionConvexMesh"), sizeof(FRuntimeMeshCollisionConvexMesh), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshCollisionConvexMesh>()
{
	return FRuntimeMeshCollisionConvexMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionConvexMesh(FRuntimeMeshCollisionConvexMesh::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionConvexMesh"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionConvexMesh
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionConvexMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionConvexMesh")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionConvexMesh>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionConvexMesh;
	struct Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionConvexMesh>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_Inner = { "VertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Convex" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer = { "VertexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionConvexMesh, VertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "RuntimeMesh|Collision|Convex" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshCollisionConvexMesh, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_VertexBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::NewProp_BoundingBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshCollisionConvexMesh",
		sizeof(FRuntimeMeshCollisionConvexMesh),
		alignof(FRuntimeMeshCollisionConvexMesh),
		Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionConvexMesh"), sizeof(FRuntimeMeshCollisionConvexMesh), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionConvexMesh_Hash() { return 213135127U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
