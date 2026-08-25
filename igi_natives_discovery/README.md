# IGI Native Discovery Exports

This is the branch's only Project I.G.I. 1 native catalog and export bundle, generated from the live retail `D:\IGI1\igi.exe` analysis on `feature/natives-discovery`. `IGINatives.json` is the single source catalog for all 294 address-compatible native symbols, including the newly analyzed Qtask dispatch, camera-reset, and MagicObj helpers.

## Files

| File | Precise contents |
|---|---|
| `IGINatives.json` | The single structured source catalog. Each `Native` object contains the retail address/hash, canonical `Function_Action` name, C-like signature, and an evidence note describing parameters and behavior. |
| `IGINatives.map` | The linker-style x86 symbol map generated from `IGINatives.json`. It records each symbol's segment-relative offset and absolute `igi.exe` address, with duplicate-address aliases preserved where the retail binary exposes more than one name. |
| `igi.pdb` | The official project IGI PDB artifact for this branch: a generated Microsoft CodeView/MSF x86 symbol database containing the same address/name records for debugger or symbol-tool loading. |
| `IGI1-Native-Name-Evidence.json` | The audit manifest. It records, per symbol, whether the name came from a retail string/context match, a mechanical syntax fallback, or parameter/context inference backed by live Ghidra and r2 evidence. |
| `README.md` | This bundle guide, including file meanings, provenance, generation, and the PDB compatibility limitation. |

## Discovery provenance

Heaven completed 80 native discoveries and labels as human reverse-engineering work. The remaining entries were AI-assisted using the live Ghidra Headless MCP and r2 MCP (Radare2 MCP), with names retained from `igi.exe` strings whenever available and behavior-derived names used only where the Ghidra/r2 evidence supported them. The 21 new entries in this update are recorded in the audit manifest with Ghidra/r2 CFG metrics; all accepted entries meet the strict static validation gate used for this pass.

The bundle is an official project export, but `igi.pdb` is not the original vendor-supplied IGI 1 PDB. Retail `igi.exe` was verified with `dumpbin /headers` to have `Debug Directory RVA 0, size 0`; it contains no CodeView/RSDS GUID and age for an exact PDB identity match. Renaming the file cannot make Ghidra report an exact match. The generated PDB is address-compatible with the PE image base `0x00400000`; use the explicit Ghidra importer for reliable analysis labels.

## Ghidra use

Open the retail `D:\IGI1\igi.exe` in Ghidra and run [`ghidra_apply_iginatives.py`](ghidra_apply_iginatives.py) from Script Manager. The script applies the names and evidence comments directly at the verified addresses, independent of the missing PE debug record.

## Regeneration

From the repository root:

```powershell
pwsh -File .\tools\Apply-IGI1NativeNameEvidence.ps1
pwsh -File .\tools\Generate-IGI1NativeExports.ps1
```

The first command regenerates this folder's CSV, IDC, and Ghidra importer from the single catalog. The second regenerates this folder's JSON/MAP/PDB bundle. The PDB is produced with the installed MSVC x86 MASM/linker toolchain.
