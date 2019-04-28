// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "MyNewAssetTypeFactory.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, hideCategories = (Object))
class CUSTOMASSET_API UMyNewAssetTypeFactory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
public:
	UMyNewAssetTypeFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	virtual bool ShouldShowInNewMenu() const override;

};
