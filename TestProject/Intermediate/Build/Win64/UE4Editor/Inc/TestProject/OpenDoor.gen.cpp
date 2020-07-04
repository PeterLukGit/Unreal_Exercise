// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoor() {}
// Cross Module References
	TESTPROJECT_API UFunction* Z_Construct_UDelegateFunction_TestProject_DoorEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TestProject();
	TESTPROJECT_API UClass* Z_Construct_UClass_UOpenDoor_NoRegister();
	TESTPROJECT_API UClass* Z_Construct_UClass_UOpenDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_TestProject_DoorEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestProject, "DoorEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UOpenDoor::StaticRegisterNativesUOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenDoor_NoRegister()
	{
		return UOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "OpenDoor.h" },
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerVolume_MetaData[] = {
				{ "Category", "OpenDoor" },
				{ "ModuleRelativePath", "OpenDoor.h" },
				{ "ToolTip", "Trigger\xe7\xb5\x84\xe4\xbb\xb6\nUPROPERTY(EditAnywhere)\xe7\x9a\x84\xe6\xa6\x82\xe5\xbf\xb5\xef\xbc\x8c\xe8\xb7\x9fUnity serializable\xe6\xa6\x82\xe5\xbf\xb5\xe5\xb7\xae\xe4\xb8\x8d\xe5\xa4\x9a\n\xe5\xb0\xb1\xe6\x98\xaf\xe8\xae\x93\xe8\xae\x8a\xe6\x95\xb8\xe9\xa1\xaf\xe7\xa4\xba\xe5\x9c\xa8\xe7\xb7\xa8\xe8\xbc\xaf\xe9\x9d\xa2\xe6\x9d\xbf\xe4\xb8\x8a" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerVolume = { UE4CodeGen_Private::EPropertyClass::Object, "TriggerVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOpenDoor, TriggerVolume), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(NewProp_TriggerVolume_MetaData, ARRAY_COUNT(NewProp_TriggerVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClose_MetaData[] = {
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClose = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnClose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOpenDoor, OnClose), Z_Construct_UDelegateFunction_TestProject_DoorEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnClose_MetaData, ARRAY_COUNT(NewProp_OnClose_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpen_MetaData[] = {
				{ "ModuleRelativePath", "OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpen = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnOpen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOpenDoor, OnOpen), Z_Construct_UDelegateFunction_TestProject_DoorEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnOpen_MetaData, ARRAY_COUNT(NewProp_OnOpen_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriggerVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnClose,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnOpen,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOpenDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOpenDoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenDoor, 3868482223);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenDoor(Z_Construct_UClass_UOpenDoor, &UOpenDoor::StaticClass, TEXT("/Script/TestProject"), TEXT("UOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
