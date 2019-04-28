// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "PointCloudNodeLinkFactory.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMASSET_API UPointCloudNodeLinkFactory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
public:
	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled);

	virtual bool ShouldShowInNewMenu() const override;

};
