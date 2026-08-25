# Qtask_GetEventId

| Field | Value |
|---|---|
| Address/hash | `0x004D9850` |
| Signature | `unsigned char Qtask_GetEventId(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the Qtask event-slot byte stored at 0x00548644. The result selects the first dimension of the task callback table at 0x00A96AE0. Ghidra/r2: exact 0x004D9850-0x004D9855 boundary, 1 basic block, 0 CFG edges, cdecl no-argument byte getter. At the Gun/GunFlame registration sites, any callback pushed before this call belongs to the following FUN_00401400 registrar call; it is not an argument to this getter.

## How it was found

Retail evidence: Ghidra/r2: returns the byte at DAT_00548644 and takes no arguments.; The return is masked and multiplied into the first dimension of DAT_00A96AE0 in Camera_SubmitFrame; registration sites use the getter result for the following FUN_00401400 call.; r2 afij: cdecl, 0 args, size 6, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges. Stack attribution was checked at 0x00477220 and 0x00477E30..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
