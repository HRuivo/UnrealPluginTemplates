// Fill out your copyright notice in the Description page of Project Settings.


#include "PointCloudNodeLinkFactory.h"
#include "PointCloudNodeLink.h"
#include "Misc/FileHelper.h"


UPointCloudNodeLinkFactory::UPointCloudNodeLinkFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Formats.Add(FString(TEXT("hpc;")) + NSLOCTEXT("UPointCloudNodeLinkFactory", "FormatHoudiniPointCloud", "Houdini Point Cloud").ToString());
	SupportedClass = UPointCloudNodeLink::StaticClass();
	bCreateNew = false;
	bEditorImport = true;
	bEditAfterNew = false;
}

UObject* UPointCloudNodeLinkFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UPointCloudNodeLink* NewPointCloudAsset = nullptr;
	FString FileString;

	if (FFileHelper::LoadFileToString(FileString, *Filename))
	{
		NewPointCloudAsset = NewObject<UPointCloudNodeLink>(InParent, InClass, InName, Flags);
		NewPointCloudAsset->ReadFromJsonString(FileString);
	}

	bOutOperationCanceled = false;

	return NewPointCloudAsset;
}

bool UPointCloudNodeLinkFactory::ShouldShowInNewMenu() const
{
	return false;
}
