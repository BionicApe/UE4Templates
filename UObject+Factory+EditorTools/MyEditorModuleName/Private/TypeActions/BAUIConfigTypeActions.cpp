// Created by Bionic Ape. All Rights Reserved.

#include "TypeActions/BAUIConfigTypeActions.h"
#include "BAUIConfig.h"

#define LOCTEXT_NAMESPACE "BAUIConfig_TypeActions"

FBAUIConfigTypeActions::FBAUIConfigTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FBAUIConfigTypeActions::GetName() const
{
	return LOCTEXT("FBAUIConfigTypeActionsName", "BAUIConfig");
}

FColor FBAUIConfigTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* FBAUIConfigTypeActions::GetSupportedClass() const
{
	return UBAUIConfig::StaticClass();
}

uint32 FBAUIConfigTypeActions::GetCategories()
{
	return AssetCategory;
}

#undef LOCTEXT_NAMESPACE