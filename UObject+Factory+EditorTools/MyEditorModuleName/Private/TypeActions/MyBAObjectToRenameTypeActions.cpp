// Created by Bionic Ape. All Rights Reserved.

#include "TypeActions/MyBAObjectToRenameTypeActions.h"
#include "MyBAObjectToRename.h"

#define LOCTEXT_NAMESPACE "MyBAObjectToRename_TypeActions"

FMyBAObjectToRenameTypeActions::FMyBAObjectToRenameTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FMyBAObjectToRenameTypeActions::GetName() const
{
	return LOCTEXT("FMyBAObjectToRenameTypeActionsName", "MyBAObjectToRename");
}

FColor FMyBAObjectToRenameTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* FMyBAObjectToRenameTypeActions::GetSupportedClass() const
{
	return UMyBAObjectToRename::StaticClass();
}

uint32 FMyBAObjectToRenameTypeActions::GetCategories()
{
	return AssetCategory;
}

#undef LOCTEXT_NAMESPACE