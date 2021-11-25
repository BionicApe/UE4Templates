// Created by Bionic Ape. All Rights Reserved.

#include "BionicApeUIEditor.h"
#include "TypeActions/MyBAObjectToRenameTypeActions.h"
#include "IAssetTools.h"

#define LOCTEXT_NAMESPACE "FBionicApeUIEditorModule"

void FBionicApeUIEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	EAssetTypeCategories::Type AssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("BionicApeUIEditor")), LOCTEXT("BionicApeUI", "BionicApeUI"));
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FMyBAObjectToRenameTypeActions(AssetCategoryBit)));
}

void FBionicApeUIEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FBionicApeUIEditorModule, BionicApeUIEditor)