@echo off
setlocal EnableExtensions
set "ROOT=%~dp0..\.."
if not exist "%ROOT%\Debug\natives-verification-engine.exe" call "%~dp0build.cmd"
if errorlevel 1 exit /b %errorlevel%
if not exist "D:\IGI1\igi.exe" (echo ERROR: D:\IGI1\igi.exe is missing. 1>&2 & exit /b 3)
if not exist "D:\IGI1\Assets\IGINatives.json" (echo ERROR: D:\IGI1\Assets\IGINatives.json is missing. 1>&2 & exit /b 3)
if not exist "D:\IGI1\IGIModels.json" (echo ERROR: D:\IGI1\IGIModels.json is missing. 1>&2 & exit /b 3)
"%ROOT%\Debug\natives-verification-engine.exe" %*
exit /b %errorlevel%
