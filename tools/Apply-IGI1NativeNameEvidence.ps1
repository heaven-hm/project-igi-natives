[CmdletBinding()]
param(
    [string]$CatalogPath = (Join-Path $PSScriptRoot "..\IGI-Natives.json"),
    [string]$EvidencePath = (Join-Path $PSScriptRoot "..\IGI1_Native_Exports\IGI1-Native-Name-Evidence.json"),
    [string]$LegacyCatalogPath = (Join-Path $PSScriptRoot "..\IGI_Internal\IGI-Natives.json"),
    [switch]$SkipLegacyCatalog
)

$ErrorActionPreference = "Stop"

function ConvertTo-JsonString([object]$Value) {
    return ($Value | ConvertTo-Json -Compress)
}

function Update-SignatureName([string]$Signature, [string]$Name) {
    if ([string]::IsNullOrWhiteSpace($Signature)) {
        return $Signature
    }

    $match = [regex]::Match($Signature, '^(?<prefix>.*?)(?<method>[A-Za-z_][A-Za-z0-9_]*)(?<suffix>\s*\()')
    if (-not $match.Success) {
        return $Signature
    }

    return $match.Groups['prefix'].Value + $Name + $match.Groups['suffix'].Value + $Signature.Substring($match.Groups['suffix'].Index + $match.Groups['suffix'].Length)
}

function Get-NameRecordMap([object]$Evidence) {
    $map = @{}
    foreach ($record in @($Evidence.Natives)) {
        $map["$($record.hash)|$($record.catalogName)"] = $record
    }
    return $map
}

function Apply-CanonicalNames([object]$Catalog, [hashtable]$EvidenceMap, [hashtable]$NameByHash) {
    $seen = @{}
    foreach ($wrapper in @($Catalog.Natives)) {
        $native = $wrapper.Native
        $key = "$($native.hash)|$($native.name)"
        if ($EvidenceMap.ContainsKey($key)) {
            $record = $EvidenceMap[$key]
        } else {
            $record = @($EvidenceMap.Values | Where-Object { $_.hash -eq $native.hash -and $_.canonicalName -eq $native.name }) | Select-Object -First 1
        }
        if ($null -eq $record) {
            throw "No Ghidra evidence record exists for $key"
        }
        $canonical = [string]$record.canonicalName
        if ($canonical -notmatch '^[A-Za-z_][A-Za-z0-9_]*$' -or $canonical -notmatch '^[^_]+_[^_]+$') {
            throw "Invalid canonical Function_Action name '$canonical' for $key"
        }
        if ($seen.ContainsKey($canonical)) {
            throw "Canonical name '$canonical' is duplicated by $key and $($seen[$canonical])"
        }
        $seen[$canonical] = $key

        $NameByHash[[string]$native.hash] = $canonical
        $native.name = $canonical
        $native.signature = Update-SignatureName ([string]$native.signature) $canonical
    }
    return $seen
}

function Write-IdaScript([object[]]$Entries, [string]$Path) {
    $lines = [System.Collections.Generic.List[string]]::new()
    $lines.Add('#include <idc.idc>')
    $lines.Add('')
    $lines.Add('static main(void) {')
    $lines.Add('    Message("Applying IGI1 native symbols from IGI.exe evidence...\\n");')
    foreach ($entry in @($Entries | Sort-Object @{ Expression = { [uint32]$_.address } }, name)) {
        $address = ('0x{0:X8}' -f [uint32]$entry.address)
        $name = ConvertTo-JsonString $entry.name
        $note = ConvertTo-JsonString $entry.note
        $lines.Add("    MakeName($address, $name);")
        $lines.Add("    SetFunctionCmt($address, $note, 1);")
    }
    $lines.Add('    Message("Done.\\n");')
    $lines.Add('}')
    Set-Content -LiteralPath $Path -Value ($lines -join "`r`n") -Encoding utf8NoBOM
}

function Write-GhidraScript([object[]]$Entries, [string]$Path) {
    $lines = [System.Collections.Generic.List[string]]::new()
    $lines.Add('# Auto-generated from IGI-Natives.json after live IGI.exe/Ghidra evidence review.')
    $lines.Add('# Run in Ghidra Script Manager with the retail D:\\IGI1\\igi.exe open.')
    $lines.Add('from ghidra.program.model.symbol import SourceType')
    $lines.Add('from ghidra.program.model.listing import CodeUnit')
    $lines.Add('')
    $lines.Add('fm = currentProgram.getFunctionManager()')
    $lines.Add('af = currentProgram.getAddressFactory().getDefaultAddressSpace()')
    $lines.Add('st = currentProgram.getSymbolTable()')
    $lines.Add('NATIVES = [')
    foreach ($entry in @($Entries | Sort-Object hash)) {
        $hash = ConvertTo-JsonString $entry.hash
        $name = ConvertTo-JsonString $entry.name
        $note = ConvertTo-JsonString $entry.note
        $lines.Add("    ($hash, $name, $note),")
    }
    $lines.Add(']')
    $lines.Add('')
    $lines.Add('count = 0')
    $lines.Add('for hexaddr, name, note in NATIVES:')
    $lines.Add('    addr = af.getAddress(hexaddr)')
    $lines.Add('    fn = fm.getFunctionAt(addr)')
    $lines.Add('    if fn is None:')
    $lines.Add('        from ghidra.app.cmd.function import CreateFunctionCmd')
    $lines.Add('        from ghidra.util.task import ConsoleTaskMonitor')
    $lines.Add('        CreateFunctionCmd(addr).applyTo(currentProgram, ConsoleTaskMonitor())')
    $lines.Add('        fn = fm.getFunctionAt(addr)')
    $lines.Add('    if fn:')
    $lines.Add('        st.createLabel(addr, name, currentProgram.getGlobalNamespace(), SourceType.USER_DEFINED)')
    $lines.Add('        cu = currentProgram.getListing().getCodeUnitAt(addr)')
    $lines.Add('        if cu and note:')
    $lines.Add('            cu.setComment(CodeUnit.PRE_COMMENT, note)')
    $lines.Add('        count += 1')
    $lines.Add('print("Applied %d IGI1 native symbols" % count)')
    Set-Content -LiteralPath $Path -Value ($lines -join "`r`n") -Encoding utf8NoBOM
}

$catalogFile = (Resolve-Path -LiteralPath $CatalogPath).Path
$evidenceFile = (Resolve-Path -LiteralPath $EvidencePath).Path
$catalog = Get-Content -Raw -LiteralPath $catalogFile | ConvertFrom-Json
$evidence = Get-Content -Raw -LiteralPath $evidenceFile | ConvertFrom-Json
$evidenceMap = Get-NameRecordMap $evidence
$nameByHash = @{}
$null = Apply-CanonicalNames $catalog $evidenceMap $nameByHash

$catalogJson = $catalog | ConvertTo-Json -Depth 10
Set-Content -LiteralPath $catalogFile -Value $catalogJson -Encoding utf8NoBOM

if ((-not $SkipLegacyCatalog) -and (Test-Path -LiteralPath $LegacyCatalogPath)) {
    $legacyFile = (Resolve-Path -LiteralPath $LegacyCatalogPath).Path
    $legacy = Get-Content -Raw -LiteralPath $legacyFile | ConvertFrom-Json
    foreach ($wrapper in @($legacy.Natives)) {
        $native = $wrapper.Native
        $hash = [string]$native.hash
        if ($nameByHash.ContainsKey($hash)) {
            $native.name = $nameByHash[$hash]
            $native.signature = Update-SignatureName ([string]$native.signature) $native.name
        }
    }
    Set-Content -LiteralPath $legacyFile -Value ($legacy | ConvertTo-Json -Depth 10) -Encoding utf8NoBOM
}

$entries = @($catalog.Natives | ForEach-Object { $_.Native })
$csvPath = Join-Path $PSScriptRoot "..\exports\igi1_natives.csv"
$entries | Select-Object hash, name, signature, note | ConvertTo-Csv -NoTypeInformation | Set-Content -LiteralPath $csvPath -Encoding utf8NoBOM
Write-IdaScript $entries (Join-Path $PSScriptRoot "..\exports\igi1_natives.idc")
Write-GhidraScript $entries (Join-Path $PSScriptRoot "..\exports\ghidra_apply_igi1_natives.py")

$retailCount = $evidence.counts.'retail-string' + $evidence.counts.'retail-string-context' + $evidence.counts.'retail-string-underscore-insensitive'
$fallbackCount = $evidence.counts.'syntax-fallback'
$inferenceCount = $evidence.counts.'parameter-context-inference'
Write-Output ("Applied {0} evidence-backed native names ({1} retail-derived, {2} syntax fallbacks, {3} parameter/context inferences)." -f $entries.Count, $retailCount, $fallbackCount, $inferenceCount)
