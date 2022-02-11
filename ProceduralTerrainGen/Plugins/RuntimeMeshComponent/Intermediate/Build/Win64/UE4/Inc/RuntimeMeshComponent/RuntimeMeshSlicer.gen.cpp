// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshSlicer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshSlicer() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshSlicer();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
// End Cross Module References
	static UEnum* ERuntimeMeshSliceCapOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshSliceCapOption"));
		}
		return Singleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshSliceCapOption>()
	{
		return ERuntimeMeshSliceCapOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshSliceCapOption(ERuntimeMeshSliceCapOption_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshSliceCapOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Hash() { return 1479084390U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshSliceCapOption"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshSliceCapOption::NoCap", (int64)ERuntimeMeshSliceCapOption::NoCap },
				{ "ERuntimeMeshSliceCapOption::CreateNewSectionForCap", (int64)ERuntimeMeshSliceCapOption::CreateNewSectionForCap },
				{ "ERuntimeMeshSliceCapOption::UseLastSectionForCap", (int64)ERuntimeMeshSliceCapOption::UseLastSectionForCap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Options for creating cap geometry when slicing */" },
				{ "CreateNewSectionForCap.Comment", "/** Add a new section to RuntimeMesh for cap */" },
				{ "CreateNewSectionForCap.Name", "ERuntimeMeshSliceCapOption::CreateNewSectionForCap" },
				{ "CreateNewSectionForCap.ToolTip", "Add a new section to RuntimeMesh for cap" },
				{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
				{ "NoCap.Comment", "/** Do not create cap geometry */" },
				{ "NoCap.Name", "ERuntimeMeshSliceCapOption::NoCap" },
				{ "NoCap.ToolTip", "Do not create cap geometry" },
				{ "ToolTip", "Options for creating cap geometry when slicing" },
				{ "UseLastSectionForCap.Comment", "/** Add cap geometry to existing last section */" },
				{ "UseLastSectionForCap.Name", "ERuntimeMeshSliceCapOption::UseLastSectionForCap" },
				{ "UseLastSectionForCap.ToolTip", "Add cap geometry to existing last section" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				"ERuntimeMeshSliceCapOption",
				"ERuntimeMeshSliceCapOption",
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
	DEFINE_FUNCTION(URuntimeMeshSlicer::execSliceRuntimeMeshData)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_SourceSection);
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_SlicePlane);
		P_GET_ENUM(ERuntimeMeshSliceCapOption,Z_Param_CapOption);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_NewSourceSection);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_NewSourceSectionCap);
		P_GET_UBOOL(Z_Param_bCreateDestination);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_DestinationSection);
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_NewDestinationSectionCap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URuntimeMeshSlicer::SliceRuntimeMeshData(Z_Param_Out_SourceSection,Z_Param_Out_SlicePlane,ERuntimeMeshSliceCapOption(Z_Param_CapOption),Z_Param_Out_NewSourceSection,Z_Param_Out_NewSourceSectionCap,Z_Param_bCreateDestination,Z_Param_Out_DestinationSection,Z_Param_Out_NewDestinationSectionCap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeMeshSlicer::execSliceRuntimeMesh)
	{
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_InRuntimeMesh);
		P_GET_STRUCT(FVector,Z_Param_PlanePosition);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_UBOOL(Z_Param_bCreateOtherHalf);
		P_GET_OBJECT_REF(URuntimeMeshComponent,Z_Param_Out_OutOtherHalfRuntimeMesh);
		P_GET_ENUM(ERuntimeMeshSliceCapOption,Z_Param_CapOption);
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshSlicer::SliceRuntimeMesh(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfRuntimeMesh,ERuntimeMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial);
		P_NATIVE_END;
	}
	void URuntimeMeshSlicer::StaticRegisterNativesURuntimeMeshSlicer()
	{
		UClass* Class = URuntimeMeshSlicer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SliceRuntimeMesh", &URuntimeMeshSlicer::execSliceRuntimeMesh },
			{ "SliceRuntimeMeshData", &URuntimeMeshSlicer::execSliceRuntimeMeshData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics
	{
		struct RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms
		{
			URuntimeMeshComponent* InRuntimeMesh;
			FVector PlanePosition;
			FVector PlaneNormal;
			bool bCreateOtherHalf;
			URuntimeMeshComponent* OutOtherHalfRuntimeMesh;
			ERuntimeMeshSliceCapOption CapOption;
			UMaterialInterface* CapMaterial;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRuntimeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRuntimeMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanePosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static void NewProp_bCreateOtherHalf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateOtherHalf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOtherHalfRuntimeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOtherHalfRuntimeMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CapOption;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh = { "InRuntimeMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, InRuntimeMesh), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlanePosition = { "PlanePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, PlanePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf_SetBit(void* Obj)
	{
		((RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms*)Obj)->bCreateOtherHalf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf = { "bCreateOtherHalf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh = { "OutOtherHalfRuntimeMesh", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, OutOtherHalfRuntimeMesh), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption = { "CapOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, CapOption), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapMaterial = { "CapMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, CapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_InRuntimeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlanePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_PlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_bCreateOtherHalf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_OutOtherHalfRuntimeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::NewProp_CapMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "Comment", "/**\n\x09*\x09Slice the RuntimeMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.\n\x09*\x09@param\x09InRuntimeMesh\x09\x09\x09RuntimeMeshComponent to slice\n\x09*\x09@param\x09PlanePosition\x09\x09\x09Point on the plane to use for slicing, in world space\n\x09*\x09@param\x09PlaneNormal\x09\x09\x09\x09Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n\x09*\x09@param\x09""bCreateOtherHalf\x09\x09If true, an additional RuntimeMeshComponent (OutOtherHalfRuntimeMesh) will be created using the other half of the sliced geometry\n\x09*\x09@param\x09OutOtherHalfRuntimeMesh\x09If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InRuntimeMesh.\n\x09*\x09@param\x09""CapOption\x09\x09\x09\x09If and how to create 'cap' geometry on the slicing plane\n\x09*\x09@param\x09""CapMaterial\x09\x09\x09\x09If creating a new section for the cap, assign this material to that section\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
		{ "ToolTip", "Slice the RuntimeMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.\n@param  InRuntimeMesh                   RuntimeMeshComponent to slice\n@param  PlanePosition                   Point on the plane to use for slicing, in world space\n@param  PlaneNormal                             Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n@param  bCreateOtherHalf                If true, an additional RuntimeMeshComponent (OutOtherHalfRuntimeMesh) will be created using the other half of the sliced geometry\n@param  OutOtherHalfRuntimeMesh If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InRuntimeMesh.\n@param  CapOption                               If and how to create 'cap' geometry on the slicing plane\n@param  CapMaterial                             If creating a new section for the cap, assign this material to that section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshSlicer, nullptr, "SliceRuntimeMesh", nullptr, nullptr, sizeof(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics
	{
		struct RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms
		{
			FRuntimeMeshRenderableMeshData SourceSection;
			FPlane SlicePlane;
			ERuntimeMeshSliceCapOption CapOption;
			FRuntimeMeshRenderableMeshData NewSourceSection;
			FRuntimeMeshRenderableMeshData NewSourceSectionCap;
			bool bCreateDestination;
			FRuntimeMeshRenderableMeshData DestinationSection;
			FRuntimeMeshRenderableMeshData NewDestinationSectionCap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlicePlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlicePlane;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CapOption;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSourceSection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSourceSectionCap;
		static void NewProp_bCreateDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateDestination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationSection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewDestinationSectionCap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SourceSection = { "SourceSection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, SourceSection), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane = { "SlicePlane", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, SlicePlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption = { "CapOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, CapOption), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSliceCapOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSection = { "NewSourceSection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, NewSourceSection), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSectionCap = { "NewSourceSectionCap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, NewSourceSectionCap), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination_SetBit(void* Obj)
	{
		((RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms*)Obj)->bCreateDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination = { "bCreateDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_DestinationSection = { "DestinationSection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, DestinationSection), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewDestinationSectionCap = { "NewDestinationSectionCap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms, NewDestinationSectionCap), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms), &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SourceSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_SlicePlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_CapOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewSourceSectionCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_bCreateDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_DestinationSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_NewDestinationSectionCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|RuntimeMesh" },
		{ "Comment", "/**\n\x09*\x09Slice the RuntimeMeshData using a plane. Optionally create 'cap' geometry.\n\x09*\x09@param\x09SourceSection\x09\x09\x09RuntimeMeshData to slice\n\x09*\x09@param\x09PlanePosition\x09\x09\x09Point on the plane to use for slicing, in world space\n\x09*\x09@param\x09PlaneNormal\x09\x09\x09\x09Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n\x09*\x09@param\x09""CapOption\x09\x09\x09\x09If and how to create 'cap' geometry on the slicing plane\n\x09*\x09@param\x09NewSourceSection\x09\x09Resulting mesh data for origin section\n\x09*\x09@param\x09""DestinationSection\x09\x09Mesh data sliced from source\n\x09*/" },
		{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
		{ "ToolTip", "Slice the RuntimeMeshData using a plane. Optionally create 'cap' geometry.\n@param  SourceSection                   RuntimeMeshData to slice\n@param  PlanePosition                   Point on the plane to use for slicing, in world space\n@param  PlaneNormal                             Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n@param  CapOption                               If and how to create 'cap' geometry on the slicing plane\n@param  NewSourceSection                Resulting mesh data for origin section\n@param  DestinationSection              Mesh data sliced from source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshSlicer, nullptr, "SliceRuntimeMeshData", nullptr, nullptr, sizeof(RuntimeMeshSlicer_eventSliceRuntimeMeshData_Parms), Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister()
	{
		return URuntimeMeshSlicer::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshSlicer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshSlicer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshSlicer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh, "SliceRuntimeMesh" }, // 1659701338
		{ &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshData, "SliceRuntimeMeshData" }, // 2189070839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshSlicer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RuntimeMeshSlicer.h" },
		{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshSlicer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshSlicer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshSlicer_Statics::ClassParams = {
		&URuntimeMeshSlicer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshSlicer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshSlicer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshSlicer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshSlicer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshSlicer, 2002348243);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshSlicer>()
	{
		return URuntimeMeshSlicer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshSlicer(Z_Construct_UClass_URuntimeMeshSlicer, &URuntimeMeshSlicer::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshSlicer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshSlicer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
