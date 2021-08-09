// Created by Bionic Ape. All Rights Reserved.

#include "TemplateModuleNameModule.h"

#define LOCTEXT_NAMESPACE "FTemplateModuleNameModule"

DEFINE_LOG_CATEGORY(LogTemplateModuleName);

void FTemplateModuleNameModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FTemplateModuleNameModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTemplateModuleNameModule, TemplateModuleName)