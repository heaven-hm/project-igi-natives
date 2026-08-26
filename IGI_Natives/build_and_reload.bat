@echo off
setlocal

:: === Parse command line arguments ===
set CONFIG=Debug
set PLATFORM=Win32

if "%~1"=="" goto skipArgs
set CONFIG=%~1
if "%~2"=="" goto skipArgs
set PLATFORM=%~2
if /I "%PLATFORM%"=="x86" set PLATFORM=Win32
:skipArgs

:: === Config ===
if defined MSBUILD_PATH (
    set "MSBUILD=%MSBUILD_PATH:"=%"
) else (
    set "MSBUILD=msbuild.exe"
)
set "PROJECT=%~dp0IGI_Natives.vcxproj"
set "OUTDIR=%~dp0%CONFIG%"
set "OUTDLL=%OUTDIR%\IGI-Natives-%CONFIG%.dll"
if defined IGI_INJECTOR (
    set "INJECTOR=%IGI_INJECTOR:"=%"
) else (
    set "INJECTOR=%~dp0..\tools\igi-injector-cmd.exe"
)

if not defined MSBUILD_PATH where msbuild.exe >nul 2>&1
if not defined MSBUILD_PATH if errorlevel 1 (
    echo [!] MSBuild was not found. Run from a Visual Studio Developer Command Prompt or set MSBUILD_PATH.
    exit /b 1
)
if not exist "%INJECTOR%" (
    echo [!] Injector was not found at "%INJECTOR%". Set IGI_INJECTOR to its path.
    exit /b 1
)

echo [*] Using Configuration: %CONFIG%
echo [*] Using Platform: %PLATFORM%

:: === Step 1: Gracefully unload old DLL ===
echo [*] Requesting graceful shutdown of old DLL...
powershell.exe -NoProfile -NonInteractive -ExecutionPolicy Bypass -Command "$event = [System.Threading.EventWaitHandle]::OpenExisting('Local\IGI_Natives_ShutdownRequest'); if (-not $event.Set()) { exit 1 }; $event.Dispose()"
if errorlevel 1 (
    echo [!] Old DLL does not expose the graceful shutdown protocol. Refusing unsafe ejection.
    exit /b 1
)
echo [*] Waiting for old DLL cleanup and unload...
powershell.exe -NoProfile -NonInteractive -ExecutionPolicy Bypass -Command "$event = [System.Threading.EventWaitHandle]::OpenExisting('Local\IGI_Natives_ShutdownComplete'); if (-not $event.WaitOne(15000)) { exit 1 }; $event.Dispose()"
if errorlevel 1 (
    echo [!] Old DLL did not complete graceful shutdown. Refusing unsafe ejection.
    exit /b 1
)
echo [*] Old DLL shutdown completed. Waiting 3 seconds before rebuild...
timeout /t 3 /nobreak >nul

:: === Step 2: Build DLL ===
echo [*] Building %PROJECT% ...
"%MSBUILD%" "%PROJECT%" /p:Configuration=%CONFIG% /p:Platform=%PLATFORM% "/p:OutDir=%OUTDIR%\\"
if errorlevel 1 (
    echo [!] Build failed!
    exit /b 1
)
echo [*] Waiting 3 seconds after build...
timeout /t 3 /nobreak >nul

:: === Step 3: Inject new DLL ===
echo [*] Injecting new DLL...
"%INJECTOR%" -n "igi.exe" -i "%OUTDLL%"

echo [*] Done. Hot reload complete!
