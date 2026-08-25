# MagicObj_GetTypeId

| Field | Value |
|---|---|
| Address/hash | `0x004D9FA0` |
| Signature | `unsigned short MagicObj_GetTypeId(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the 16-bit MagicObj task-type ID stored at 0x00548648, allocated by MagicObj_Initialize and reset by MagicObj_Shutdown. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument getter.

## How it was found

Retail evidence: Ghidra/r2: returns the 16-bit global DAT_00548648 with no arguments.; MagicObj_Initialize writes this global from the MagicObj type factory and MagicObj_Shutdown resets it; 29 callers use the getter in task/object registration and dispatch paths.; r2 afij: cdecl, 0 args, size 7, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
