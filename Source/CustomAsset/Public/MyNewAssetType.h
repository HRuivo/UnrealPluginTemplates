// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyNewAssetType.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMASSET_API UMyNewAssetType : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FText Text;
};
