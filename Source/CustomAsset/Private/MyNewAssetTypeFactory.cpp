// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNewAssetTypeFactory.h"
#include "MyNewAssetType.h"
#include "Misc/FileHelper.h"


UMyNewAssetTypeFactory::UMyNewAssetTypeFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//SupportedClass = UMyNewAssetType::StaticClass();
	//bCreateNew = true;
	//bEditAfterNew = true;

	Formats.Add(FString(TEXT("txt;")) + NSLOCTEXT("UMyNewAssetTypeFactory", "FormatTxt", "Text File").ToString());
	SupportedClass = UMyNewAssetType::StaticClass();
	bCreateNew = false;
	bEditorImport = true;
}

UObject* UMyNewAssetTypeFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UMyNewAssetType>(InParent, InClass, InName, Flags);
}

UObject* UMyNewAssetTypeFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UMyNewAssetType* MyNewAsset = nullptr;
	FString TextString;

	if (FFileHelper::LoadFileToString(TextString, *Filename))
	{
		MyNewAsset = NewObject<UMyNewAssetType>(InParent, InClass, InName, Flags);
		MyNewAsset->Text = FText::FromString(TextString);
	}

	bOutOperationCanceled = false;

	return MyNewAsset;
}

bool UMyNewAssetTypeFactory::ShouldShowInNewMenu() const
{
	return true;
}
