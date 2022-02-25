// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BrackeyJam/MyCableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCableComponent() {}
// Cross Module References
	BRACKEYJAM_API UClass* Z_Construct_UClass_ULocalCableComponent_NoRegister();
	BRACKEYJAM_API UClass* Z_Construct_UClass_ULocalCableComponent();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent();
	UPackage* Z_Construct_UPackage__Script_BrackeyJam();
// End Cross Module References
	void ULocalCableComponent::StaticRegisterNativesULocalCableComponent()
	{
	}
	UClass* Z_Construct_UClass_ULocalCableComponent_NoRegister()
	{
		return ULocalCableComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULocalCableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalCableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BrackeyJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalCableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object Physics Activation Components|Activation Object Physics Activation Components|Activation Mobility Trigger" },
		{ "IncludePath", "MyCableComponent.h" },
		{ "ModuleRelativePath", "MyCableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalCableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalCableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalCableComponent_Statics::ClassParams = {
		&ULocalCableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalCableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalCableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalCableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalCableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalCableComponent, 2128201808);
	template<> BRACKEYJAM_API UClass* StaticClass<ULocalCableComponent>()
	{
		return ULocalCableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalCableComponent(Z_Construct_UClass_ULocalCableComponent, &ULocalCableComponent::StaticClass, TEXT("/Script/BrackeyJam"), TEXT("ULocalCableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalCableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
