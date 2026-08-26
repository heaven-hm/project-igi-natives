# Project I.G.I native assets

This is the only committed artifact directory for the natives-discovery branch.

## Catalog and exports

| File | Purpose |
|---|---|
| IGINatives.json | Single source catalog with 294 natives, typed prototypes, DataTypes, offsets, and native-to-type references. |
| IGI1-Native-Name-Evidence.json | Per-native evidence classification and static validation metadata. |
| IGINatives.map | x86 linker-style address/name map. |
| igi.pdb | Address-compatible x86 CodeView symbol database. |
| iginatives.csv | Flat catalog export. |
| iginatives.idc | IDA naming/comment script. |
| ghidra_apply_iginatives.py | Ghidra naming/comment script. |
| IGI_Structures.hpp | C++ typed views matching the JSON DataTypes. |
| IGI1_Natives_DeepDive.md | Human-readable research summary. |

## Readable views

- natives/ contains one Markdown record per native.
- structures/ contains one Markdown record per typed data structure.

Unknown fields and opaque pointer types are explicitly marked; no unsupported layout is implied. Research-only material remains local and ignored by Git.
