// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNewAssetTypeFactory.h"
#include "MyNewAssetType.h"


UMyNewAssetTypeFactory::UMyNewAssetTypeFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UMyNewAssetType::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UMyNewAssetTypeFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UMyNewAssetType>(InParent, InClass, InName, Flags);
}

bool UMyNewAssetTypeFactory::ShouldShowInNewMenu() const
{
	return true;
}
