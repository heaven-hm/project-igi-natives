[CmdletBinding()]
param(
    [ValidateSet('Release', 'Debug')]
    [string]$Configuration = 'Release',
    [string]$GameDirectory = 'D:\IGI1',
    [string]$GameShortcut = 'D:\IGI-Ghidra-AI\igi_window.lnk',
    [string]$Injector = 'D:\IGI-Ghidra-AI\bin\mini_injector.exe',
    [int]$InjectionDelaySeconds = 10
)

$ErrorActionPreference = 'Stop'
$repo = Split-Path $PSScriptRoot -Parent
$project = Join-Path $repo 'IGI_Natives\IGI_Natives.vcxproj'
$msbuild = 'C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe'
$dllName = "IGI-Natives-$Configuration.dll"
$builtDll = Join-Path $repo "IGI_Natives\$Configuration\$dllName"
$deployedDll = Join-Path $GameDirectory $dllName
$igiLog = Join-Path $GameDirectory 'igi.log'
$nativesLog = Join-Path $GameDirectory 'IGI-Natives.log'

foreach ($required in @($project, $msbuild, $GameShortcut, $Injector)) {
    if (-not (Test-Path -LiteralPath $required)) { throw "Required path not found: $required" }
}
if (Get-Process igi -ErrorAction SilentlyContinue) { throw 'igi.exe is already running; exit it before testing.' }

& $msbuild $project /t:Rebuild "/p:Configuration=$Configuration" /p:Platform=Win32 /p:MultiProcessorCompilation=false /m:1 /v:minimal
if ($LASTEXITCODE -ne 0 -or -not (Test-Path -LiteralPath $builtDll)) { throw "$Configuration build failed" }
Copy-Item -LiteralPath $builtDll -Destination $deployedDll -Force

$stamp = Get-Date -Format 'yyyyMMdd-HHmmss'
foreach ($log in @($igiLog, $nativesLog)) {
    if (Test-Path -LiteralPath $log) { Move-Item -LiteralPath $log -Destination "$log.before-$Configuration-$stamp" }
}

Add-Type @"
using System;
using System.Runtime.InteropServices;
using System.Threading;
public static class IgiRuntimeTestKeys {
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr window);
    [DllImport("user32.dll")] static extern void keybd_event(byte key, byte scan, uint flags, UIntPtr extra);
    public static void Tap(byte key) {
        keybd_event(key, 0, 0, UIntPtr.Zero); Thread.Sleep(180);
        keybd_event(key, 0, 2, UIntPtr.Zero);
    }
    public static void Combo(byte key) {
        keybd_event(0x11, 0, 0, UIntPtr.Zero); keybd_event(key, 0, 0, UIntPtr.Zero);
        Thread.Sleep(300);
        keybd_event(key, 0, 2, UIntPtr.Zero); keybd_event(0x11, 0, 2, UIntPtr.Zero);
    }
}
"@

$testStarted = Get-Date
Start-Process -FilePath $GameShortcut
$deadline = (Get-Date).AddSeconds(30)
do {
    Start-Sleep -Milliseconds 250
    $game = Get-Process igi -ErrorAction SilentlyContinue | Select-Object -First 1
} until ($game -or (Get-Date) -gt $deadline)
if (-not $game) { throw 'igi.exe did not start within 30 seconds' }
$game.WaitForInputIdle(10000) | Out-Null
$windowReady = Get-Date
Start-Sleep -Seconds $InjectionDelaySeconds
$injectedAt = Get-Date
& $Injector $game.Id $deployedDll
if ($LASTEXITCODE -ne 0) { throw "$Configuration DLL injection failed" }
Start-Sleep -Seconds 3

[IgiRuntimeTestKeys]::SetForegroundWindow($game.MainWindowHandle) | Out-Null
Start-Sleep -Seconds 1
[IgiRuntimeTestKeys]::Combo(0x70); Start-Sleep -Seconds 2 # Ctrl+F1 OFF
[IgiRuntimeTestKeys]::Combo(0x70); Start-Sleep -Seconds 2 # Ctrl+F1 ON
[IgiRuntimeTestKeys]::Combo(0x71); Start-Sleep -Seconds 2 # Ctrl+F2 VERBOSE
[IgiRuntimeTestKeys]::Combo(0x71); Start-Sleep -Seconds 2 # Ctrl+F2 NORMAL

foreach ($log in @($igiLog, $nativesLog)) {
    if (-not (Test-Path -LiteralPath $log) -or (Get-Item -LiteralPath $log).Length -eq 0) {
        throw "Expected non-empty log was not created: $log"
    }
}
$nativesText = Get-Content -LiteralPath $nativesLog -Raw
foreach ($state in @('Runtime Log: OFF', 'Runtime Log: ON', 'Runtime Log: VERBOSE', 'Runtime Log: NORMAL')) {
    if ($nativesText -notmatch [regex]::Escape($state)) { throw "Missing hotkey evidence: $state" }
}

# Pause menu: Escape, Up, Enter. Main menu: Up x3, Enter, Enter on Yes.
[IgiRuntimeTestKeys]::SetForegroundWindow($game.MainWindowHandle) | Out-Null
[IgiRuntimeTestKeys]::Tap(0x1B); Start-Sleep -Seconds 1
[IgiRuntimeTestKeys]::Tap(0x26); Start-Sleep -Milliseconds 500
[IgiRuntimeTestKeys]::Tap(0x0D); Start-Sleep -Seconds 3
1..3 | ForEach-Object { [IgiRuntimeTestKeys]::Tap(0x26); Start-Sleep -Milliseconds 350 }
[IgiRuntimeTestKeys]::Tap(0x0D); Start-Sleep -Seconds 1
[IgiRuntimeTestKeys]::Tap(0x0D)
$exited = $game.WaitForExit(15000)
if (-not $exited) {
    # Some menu transitions retain selection; retry only the confirmed main-menu tail.
    [IgiRuntimeTestKeys]::SetForegroundWindow($game.MainWindowHandle) | Out-Null
    1..3 | ForEach-Object { [IgiRuntimeTestKeys]::Tap(0x26); Start-Sleep -Milliseconds 350 }
    [IgiRuntimeTestKeys]::Tap(0x0D); Start-Sleep -Seconds 1
    [IgiRuntimeTestKeys]::Tap(0x0D)
    $exited = $game.WaitForExit(15000)
}
if (-not $exited) { throw 'igi.exe did not exit through the requested menu flow' }
Start-Sleep -Seconds 2

$crashes = Get-WinEvent -FilterHashtable @{ LogName = 'Application'; StartTime = $testStarted } -MaxEvents 50 -ErrorAction SilentlyContinue |
    Where-Object { $_.Id -in 1000, 1001 -and $_.Message -match 'igi\.exe' }
if ($crashes) { throw "Windows recorded $(@($crashes).Count) IGI crash event(s)" }

[pscustomobject]@{
    Configuration = $Configuration
    ProcessExited = $exited
    CrashEvents = @($crashes).Count
    InjectionDelaySeconds = [math]::Round(($injectedAt - $windowReady).TotalSeconds, 2)
    IgiLogBytes = (Get-Item -LiteralPath $igiLog).Length
    NativesLogBytes = (Get-Item -LiteralPath $nativesLog).Length
    DllSha256 = (Get-FileHash -LiteralPath $deployedDll -Algorithm SHA256).Hash
}