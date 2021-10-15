@echo off

set /p ModName="Enter Plugin Name: "

git submodule add https://github.com/BionicApe/%ModName% Plugins/%ModName%
git submodule update --init --recursive
git submodule foreach --recursive git checkout master
git commit -m "Added new Plugin %ModName%"

@echo off
set /p DUMMY=Hit ENTER to continue...