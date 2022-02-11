// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Providers/RuntimeMeshProviderPlane.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshProviderPlane() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPlane_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPlane();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshProviderPassthrough();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void URuntimeMeshProviderPlane::StaticRegisterNativesURuntimeMeshProviderPlane()
	{
	}
	UClass* Z_Construct_UClass_URuntimeMeshProviderPlane_NoRegister()
	{
		return URuntimeMeshProviderPlane::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshProviderPlane_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationC;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertsAB_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertsAB_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertsAB;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertsAC_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertsAC_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertsAC;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshProviderPassthrough,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nA - - - - B\x09\x09Supply with A, B and C, D will be computed\n|        /|\x09\x09\n       /  |\n|    /    |\n   /      |\n|/        |\nC - - - - D\n*/" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Providers/RuntimeMeshProviderPlane.h" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
		{ "ToolTip", "A - - - - B            Supply with A, B and C, D will be computed\n|        /|\n       /  |\n|    /    |\n   /      |\n|/        |\nC - - - - D" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationA_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationA = { "LocationA", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderPlane, LocationA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationB_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationB = { "LocationB", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderPlane, LocationB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationC_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationC = { "LocationC", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderPlane, LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationC_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAB_Inner = { "VertsAB", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAB_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAB = { "VertsAB", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderPlane, VertsAB), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAB_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAC_Inner = { "VertsAC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAC_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAC = { "VertsAC", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderPlane, VertsAC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAC_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_ScreenSize_Inner = { "ScreenSize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderPlane, ScreenSize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "RuntimeMesh|Providers|Sphere" },
		{ "ModuleRelativePath", "Public/Providers/RuntimeMeshProviderPlane.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeMeshProviderPlane, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_LocationC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAB_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_VertsAC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_ScreenSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshProviderPlane>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::ClassParams = {
		&URuntimeMeshProviderPlane::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshProviderPlane()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshProviderPlane_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshProviderPlane, 3407684399);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshProviderPlane>()
	{
		return URuntimeMeshProviderPlane::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshProviderPlane(Z_Construct_UClass_URuntimeMeshProviderPlane, &URuntimeMeshProviderPlane::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshProviderPlane"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshProviderPlane);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
