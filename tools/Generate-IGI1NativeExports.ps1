[CmdletBinding()]
param(
    [string]$CatalogPath = (Join-Path $PSScriptRoot "..\IGI-Natives.json"),
    [string]$OutputDirectory = (Join-Path $PSScriptRoot "..\IGI1_Native_Exports")
)

$ErrorActionPreference = "Stop"

$catalogFile = (Resolve-Path -LiteralPath $CatalogPath).Path
$outputDirectory = [System.IO.Path]::GetFullPath($OutputDirectory)
$catalog = Get-Content -Raw -LiteralPath $catalogFile | ConvertFrom-Json
$entries = @($catalog.Natives | ForEach-Object { $_.Native })

if ($entries.Count -eq 0) {
    throw "The native catalog is empty: $catalogFile"
}

$duplicateNames = @($entries | Group-Object -Property name | Where-Object Count -gt 1)
if ($duplicateNames.Count -gt 0) {
    throw "The native catalog contains duplicate symbol names: $($duplicateNames.Name -join ', ')"
}

$invalidNames = @($entries | Where-Object { $_.name -notmatch '^[A-Za-z_][A-Za-z0-9_]*$' })
if ($invalidNames.Count -gt 0) {
    throw "The native catalog contains MASM-incompatible names: $($invalidNames.name -join ', ')"
}

$loadAddress = [uint32]0x00400000
$textAddress = [uint32]0x00401000
$textLength = [uint32]0x00131510
$textEnd = [uint64]$textAddress + [uint64]$textLength
$orderedEntries = @($entries | Sort-Object @{ Expression = { [uint32]$_.address } }, name)

foreach ($entry in $orderedEntries) {
    $address = [uint64]$entry.address
    if ($address -lt $textAddress -or $address -ge $textEnd) {
        throw ("Native {0} at 0x{1:X8} is outside the verified IGI 1 .text range." -f $entry.name, $address)
    }
}

New-Item -ItemType Directory -Force -Path $outputDirectory | Out-Null
$outputCatalog = Join-Path $outputDirectory "IGI1-Natives.json"
$outputMap = Join-Path $outputDirectory "IGI1-Natives.map"
$outputPdb = Join-Path $outputDirectory "igi.pdb"
Copy-Item -LiteralPath $catalogFile -Destination $outputCatalog -Force

$mapBuilder = [System.Text.StringBuilder]::new()
[void]$mapBuilder.AppendLine(" IGI1 Native Symbols - Project I.G.I (igi.exe) verified native addresses")
[void]$mapBuilder.AppendLine((" Generated from {0} ({1} catalog entries; duplicate-address aliases retained)" -f (Split-Path -Leaf $catalogFile), $entries.Count))
[void]$mapBuilder.AppendLine(" Preferred load address is 00400000")
[void]$mapBuilder.AppendLine("")
[void]$mapBuilder.AppendLine(" Start         Length     Name                   Class")
[void]$mapBuilder.AppendLine((" 0001:00000000 {0:X8}H .text                   CODE" -f $textLength))
[void]$mapBuilder.AppendLine("")
[void]$mapBuilder.AppendLine(" Exports by module 'igi1natives'")
[void]$mapBuilder.AppendLine("")

foreach ($group in @($orderedEntries | Group-Object -Property address)) {
    $address = [uint32]$group.Group[0].address
    $offset = [uint32]($address - $textAddress)
    foreach ($entry in @($group.Group | Sort-Object name)) {
        [void]$mapBuilder.AppendLine((" 0001:{0:X8}  _{1,-40} {2:X8} f   igi1natives.obj" -f $offset, $entry.name, $address))
    }
}
Set-Content -LiteralPath $outputMap -Value $mapBuilder.ToString() -Encoding ascii -NoNewline
$legacyMap = Join-Path $PSScriptRoot "..\exports\igi1_natives.map"
Set-Content -LiteralPath $legacyMap -Value $mapBuilder.ToString() -Encoding ascii -NoNewline

$msvcRoot = "D:\Software\Microsoft Visual Studio\2022\BuildTools\VC\Tools\MSVC"
$msvcVersion = Get-ChildItem -LiteralPath $msvcRoot -Directory | Sort-Object Name -Descending | Select-Object -First 1
if ($null -eq $msvcVersion) {
    throw "MSVC installation was not found under $msvcRoot"
}
$x86ToolDirectory = Join-Path $msvcVersion.FullName "bin\Hostx64\x86"
$ml = Join-Path $x86ToolDirectory "ml.exe"
$link = Join-Path $x86ToolDirectory "link.exe"
if (-not (Test-Path -LiteralPath $ml) -or -not (Test-Path -LiteralPath $link)) {
    throw "MSVC x86 MASM/linker tools were not found under $x86ToolDirectory"
}

$tempDirectory = Join-Path ([System.IO.Path]::GetTempPath()) ("igi1-native-pdb-" + [Guid]::NewGuid().ToString("N"))
New-Item -ItemType Directory -Force -Path $tempDirectory | Out-Null
$asmPath = Join-Path $tempDirectory "igi1_natives.asm"
$objPath = Join-Path $tempDirectory "igi1_natives.obj"
$exePath = Join-Path $tempDirectory "igi.exe"
$linkMapPath = Join-Path $tempDirectory "igi1_natives.link.map"

try {
    $asmBuilder = [System.Text.StringBuilder]::new()
    [void]$asmBuilder.AppendLine(".386")
    [void]$asmBuilder.AppendLine(".model flat")
    [void]$asmBuilder.AppendLine(".code")
    [void]$asmBuilder.AppendLine("PUBLIC _start")
    [void]$asmBuilder.AppendLine("_start LABEL NEAR")

    [uint64]$currentOffset = 0
    foreach ($group in @($orderedEntries | Group-Object -Property address)) {
        [uint64]$targetOffset = [uint64]([uint32]$group.Group[0].address) - [uint64]$textAddress
        [uint64]$padding = $targetOffset - $currentOffset
        if ($padding -gt 0) {
            [void]$asmBuilder.AppendLine(("db {0} dup (90h)" -f $padding))
        }

        foreach ($entry in @($group.Group | Sort-Object name)) {
            [void]$asmBuilder.AppendLine(("PUBLIC {0}" -f $entry.name))
            [void]$asmBuilder.AppendLine(("{0} LABEL NEAR" -f $entry.name))
        }
        [void]$asmBuilder.AppendLine("db 0C3h")
        $currentOffset = $targetOffset + 1
    }
    [void]$asmBuilder.AppendLine("END")
    Set-Content -LiteralPath $asmPath -Value $asmBuilder.ToString() -Encoding ascii

    & $ml /nologo /c /coff "/Fo$objPath" $asmPath
    if ($LASTEXITCODE -ne 0) {
        throw "MASM failed with exit code $LASTEXITCODE"
    }

    & $link /nologo /machine:x86 /subsystem:console /entry:start /base:0x400000 /fixed /debug:full "/pdb:$outputPdb" "/map:$linkMapPath" "/out:$exePath" $objPath
    if ($LASTEXITCODE -ne 0) {
        throw "LINK failed with exit code $LASTEXITCODE"
    }

    $linkMap = Get-Content -Raw -LiteralPath $linkMapPath
    foreach ($entry in $orderedEntries) {
        $addressText = "{0:X8}" -f [uint32]$entry.address
        $symbolText = [regex]::Escape($entry.name)
        $symbolPattern = "(?m)^\s+\S+\s+$symbolText\s+$addressText\s+igi1_natives\.obj\s*$"
        if ($linkMap -notmatch $symbolPattern) {
            $matchingLines = (($linkMap -split "`r?`n") | Where-Object { $_ -match [regex]::Escape($entry.name) } | Select-Object -First 2) -join " | "
            throw ("The linker map did not place {0} at 0x{1}. Matching lines: {2}" -f $entry.name, $addressText, $matchingLines)
        }
    }

    if (-not (Test-Path -LiteralPath $outputPdb)) {
        throw "LINK completed without producing $outputPdb"
    }
    $pdbPrefix = [System.Text.Encoding]::ASCII.GetString([System.IO.File]::ReadAllBytes($outputPdb)[0..31])
    if (-not $pdbPrefix.StartsWith("Microsoft C/C++ MSF 7.00")) {
        throw "The generated file does not have the Microsoft MSF PDB signature"
    }
}
finally {
    if (Test-Path -LiteralPath $tempDirectory) {
        Remove-Item -LiteralPath $tempDirectory -Recurse -Force
    }
}

Write-Output ("Generated {0} native symbols in {1}" -f $entries.Count, $outputDirectory)
Write-Output ("JSON: {0}" -f $outputCatalog)
Write-Output ("MAP:  {0}" -f $outputMap)
Write-Output ("PDB:  {0}" -f $outputPdb)
Write-Output ("Legacy MAP: {0}" -f $legacyMap)
