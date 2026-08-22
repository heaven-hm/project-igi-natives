@echo off
setlocal

:: === Parse command line arguments ===
set CONFIG=Debug
set PLATFORM=Win32

if "%~1"=="" goto skipArgs
set CONFIG=%~1
if "%~2"=="" goto skipArgs
set PLATFORM=%~2
:skipArgs

if /I "%PLATFORM%"=="x86" set PLATFORM=Win32

:: === Config ===
set MSBUILD="C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe"
set ROOT=%~dp0..
set "PROJECT=%~dp0IGI_Internal.vcxproj"
set "OUTDLL=%ROOT%\%CONFIG%\%PLATFORM%\IGI-Internals-%CONFIG%.dll"
if not defined IGI_INJECTOR set IGI_INJECTOR=D:\IGI-Ghidra-AI\bin\IGI-Injector.exe
set "INJECTOR=%IGI_INJECTOR%"
if not exist "%INJECTOR%" (
    echo [!] IGI_INJECTOR not found: "%INJECTOR%"
    echo [!] Set IGI_INJECTOR to your injector executable path first.
    exit /b 1
)

echo [*] Using Configuration: %CONFIG%
echo [*] Using Platform: %PLATFORM%

:: === Step 1: Eject old DLL ===
echo [*] Ejecting old DLL...
%INJECTOR% -n "igi.exe" -e "%OUTDLL%"
echo [*] Waiting 3 seconds after ejection...
timeout /t 3 /nobreak >nul

:: === Step 2: Build DLL ===
echo [*] Building "%PROJECT%" ...
%MSBUILD% "%PROJECT%" /p:Configuration=%CONFIG% /p:Platform=%PLATFORM%
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
