// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNewAssetTypeFactory.h"
#include "MyNewAssetType.h"
#include "Misc/FileHelper.h"


UMyNewAssetTypeFactory::UMyNewAssetTypeFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//Formats.Add(FString(TEXT("txt;")) + NSLOCTEXT("UMyNewAssetTypeFactory", "FormatTxt", "Text File").ToString());
	SupportedClass = UMyNewAssetType::StaticClass();
	bCreateNew = false;
	bEditorImport = true;
}

UObject* UMyNewAssetTypeFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UMyNewAssetType>(InParent, InClass, InName, Flags);
}

bool UMyNewAssetTypeFactory::ShouldShowInNewMenu() const
{
	return false;
}
