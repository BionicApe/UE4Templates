git reset --hard
git clean -fd
git submodule update --init
git submodule foreach git clean -fd
git submodule foreach git reset --hard
set /p DUMMY=Hit ENTER to continue...