@echo off
setlocal EnableExtensions
set "ROOT=%~dp0..\.."
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0Build-NativeTestCli.ps1" -Configuration Debug
exit /b %errorlevel%
