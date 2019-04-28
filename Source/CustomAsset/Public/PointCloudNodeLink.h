// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointCloudNodeLink.generated.h"

USTRUCT(BlueprintType)
struct FPointCloudNodeData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FVector> points;
};

/**
 * 
 */
UCLASS()
class CUSTOMASSET_API UPointCloudNodeLink : public UObject
{
	GENERATED_BODY()

public:
	void ReadFromJsonString(const FString InJsonString);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FPointCloudNodeData PointCloudData;
	
};
