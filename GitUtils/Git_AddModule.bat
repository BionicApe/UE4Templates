@echo off

set /p ModName="Enter Module Name: "

git submodule add https://github.com/BionicApe/%ModName% Plugins/%ModName%
git submodule update --init --recursive
git commit -m "Added new Plugin %ModName%"

@echo off
set /p DUMMY=Hit ENTER to continue...