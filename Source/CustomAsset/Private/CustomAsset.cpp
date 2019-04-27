// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CustomAsset.h"
#include "MyTextAssetActions.h"
#include "Modules/ModuleManager.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "Modules/ModuleInterface.h"

#define LOCTEXT_NAMESPACE "FCustomAssetModule"

void FCustomAssetModule::StartupModule()
{
	// Register asset types
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	{
		TSharedRef<IAssetTypeActions> Action = MakeShareable(new FMyTextAssetActions);
		AssetTools.RegisterAssetTypeActions(Action);
	}
}

void FCustomAssetModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCustomAssetModule, CustomAsset)