[CmdletBinding()]
param([ValidateSet('Debug','Release')][string]$Configuration = 'Debug')
$ErrorActionPreference = 'Stop'
$root = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
$vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio\Installer\vswhere.exe'
$msbuild = if (Test-Path -LiteralPath $vswhere) { & $vswhere -latest -products * -requires Microsoft.Component.MSBuild -find 'MSBuild\**\Bin\MSBuild.exe' | Select-Object -First 1 }
if (-not $msbuild) {
  $fallbacks = @(
    'C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe',
    'C:\Program Files\Microsoft Visual Studio\2022\Professional\MSBuild\Current\Bin\MSBuild.exe',
    'C:\Program Files\Microsoft Visual Studio\2022\Enterprise\MSBuild\Current\Bin\MSBuild.exe',
    'C:\Program Files\Microsoft Visual Studio\2022\BuildTools\MSBuild\Current\Bin\MSBuild.exe'
  )
  $msbuild = $fallbacks | Where-Object { Test-Path -LiteralPath $_ } | Select-Object -First 1
}
if (-not $msbuild) { throw 'MSBuild was not found.' }
if (-not (Test-Path -LiteralPath (Join-Path $root "IGI_Natives\libs\GTLibc-x86-$Configuration.lib"))) { throw "Required GTLibCpp x86 $Configuration library is missing." }
$savedPath = $env:Path
Get-ChildItem Env: | Where-Object Name -ieq Path | Remove-Item
$env:Path = $savedPath
try { & $msbuild (Join-Path $root 'IGI_Natives.sln') /t:Build "/p:Configuration=$Configuration" /p:Platform=x86 /m:1 /v:minimal; if ($LASTEXITCODE) { throw "MSBuild failed with exit code $LASTEXITCODE" } }
finally { $env:Path = $savedPath }
