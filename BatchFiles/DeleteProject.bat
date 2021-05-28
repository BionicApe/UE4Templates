del "*.sln" /s /f /q
@RD /S /Q ".vs"
@RD /S /Q "Binaries"
@RD /S /Q "Build"
@RD /S /Q "Intermediate"
@RD /S /Q "DerivedDataCache"

for /f "delims=" %%b in ('dir /b /ad Plugins') do rmdir /s /q "Plugins\%%b\Intermediate"
for /f "delims=" %%b in ('dir /b /ad Plugins') do rmdir /s /q "Plugins\%%b\Binaries"
