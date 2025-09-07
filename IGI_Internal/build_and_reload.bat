@echo off
setlocal

:: === Config ===
set MSBUILD="C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe"
set PROJECT=IGI_Internal.vcxproj
set CONFIG=Debug
set PLATFORM=x86
set OUTDLL=C:\Users\hasee\source\repos\project-igi-internals\IGI_Internal\Debug\IGI-Internals-Debug.dll
set INJECTOR=C:\Users\hasee\Downloads\Compressed\IGI-Injector-v1.0\IGI-Injector-v1.0\bin\igi-injector-cmd.exe

:: === Step 1: Eject old DLL ===
echo [*] Ejecting old DLL...
%INJECTOR% -n "igi.exe" -e "%OUTDLL%"
echo [*] Waiting 3 seconds after ejection...
timeout /t 3 /nobreak >nul

:: === Step 2: Build DLL ===
echo [*] Building %PROJECT% ...
%MSBUILD% %PROJECT% /p:Configuration=%CONFIG% /p:Platform=%PLATFORM%
if errorlevel 1 (
    echo [!] Build failed!
    exit /b 1
)
echo [*] Waiting 3 seconds after build...
timeout /t 3 /nobreak >nul

:: === Step 3: Inject new DLL ===
echo [*] Injecting new DLL...
%INJECTOR% -n "igi.exe" -i "%OUTDLL%"

echo [*] Done. Hot reload complete!

