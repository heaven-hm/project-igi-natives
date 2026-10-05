# Project I.G.I native assets

This is the only committed artifact directory for the native catalog and its exports.

## Catalog and exports

| File | Purpose |
|---|---|
| IGINatives.json | Single source catalog with 302 entries across 301 unique addresses; two names alias `0x00403C10`. |
| IGI1-Native-Name-Evidence.json | Per-entry evidence classification; all 302 catalog entries are now represented. |
| IGINatives.map | x86 linker-style address/name map generated from the current catalog. |
| igi.pdb | Unmodified address-compatible x86 CodeView export; string inspection confirms it does not contain the eight reconciled symbols. It is not an exact-match PDB for retail `igi.exe`. |
| iginatives.csv | Flat export of all 302 catalog entries. |
| iginatives.idc | IDA naming/comment script for all 302 catalog entries. |
| ghidra_apply_iginatives.py | Ghidra naming/comment script for all 302 catalog entries. |
| IGI_Structures.hpp | C++ typed views matching the JSON DataTypes. |
| IGI1_Natives_DeepDive.md | Human-readable research summary. |

## Readable views

- natives/ contains one Markdown record per catalog entry.
- structures/ contains one Markdown record per typed data structure.

Unknown fields and opaque pointer types are explicitly marked; no unsupported layout is implied. Eight catalog entries had been omitted from the evidence and generated text exports; their retail registration strings are now cross-checked against the binary. The PDB was left unchanged; use the updated Ghidra/IDA/CSV/MAP artifacts for those eight until it can be rebuilt. Research-only material remains local and ignored by Git.
