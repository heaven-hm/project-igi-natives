# MagicObj_GetEventId

| Field | Value |
|---|---|
| Address/hash | `0x004D9FB0` |
| Signature | `unsigned char MagicObj_GetEventId(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the MagicObj event-slot byte stored at 0x0054864A, allocated by MagicObj_Initialize and released by MagicObj_Shutdown. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument getter.

## How it was found

Retail evidence: Ghidra/r2: returns the byte global DAT_0054864A with no arguments.; MagicObj_Initialize allocates this event slot through FUN_004017C0(0) and MagicObj_Shutdown releases it through FUN_004018C0; 25 callers use the getter in task registration/dispatch paths.; r2 afij: cdecl, 0 args, size 6, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
