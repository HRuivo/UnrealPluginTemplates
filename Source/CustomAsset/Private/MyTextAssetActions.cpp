// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyTextAssetActions.h"

#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "MyNewAssetType.h"


#define LOCTEXT_NAMESPACE "AssetTypeActions"


/* FTextAssetActions constructors
 *****************************************************************************/


/* FAssetTypeActions_Base overrides
 *****************************************************************************/

bool FMyTextAssetActions::CanFilter()
{
	return true;
}


void FMyTextAssetActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	
}


uint32 FMyTextAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}


FText FMyTextAssetActions::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "MyTextAssetActions", "My New Asset Type");
}


UClass* FMyTextAssetActions::GetSupportedClass() const
{
	return UMyNewAssetType::StaticClass();
}


FColor FMyTextAssetActions::GetTypeColor() const
{
	return FColor::White;
}


bool FMyTextAssetActions::HasActions(const TArray<UObject*>& InObjects) const
{
	return true;
}


#undef LOCTEXT_NAMESPACE
