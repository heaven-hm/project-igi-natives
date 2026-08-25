# MagicObj_Shutdown

| Field | Value |
|---|---|
| Address/hash | `0x004D9F60` |
| Signature | `void MagicObj_Shutdown(void)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Shuts down MagicObj: releases the registered type ID and both event slots allocated by MagicObj_Initialize, then restores their sentinel values. Called by the matching subsystem teardown at 0x005315B0. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## How it was found

Retail evidence: Ghidra/r2 show the function releases the type ID at 0x00548648 and both event slots at 0x0054864A/0x0054864B, restoring sentinels.; The paired teardown caller is 0x005315B0, immediately after the MagicObj subsystem work initialized at 0x00531540; the neighboring initializer contains MagicObj/TASKTYPE_MAGICOBJ strings.; r2 afij: cdecl, 0 args, size 63, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
