@echo off
set /p Message="Enter Message: "

git submodule foreach git add -A .
git submodule foreach git commit -am "%Message%"

git add -A .
git commit -am "%Message%"
git push --recurse-submodules=on-demand

set /p DUMMY=Hit ENTER to continue...