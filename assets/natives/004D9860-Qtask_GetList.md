# Qtask_GetList

| Field | Value |
|---|---|
| Address/hash | `0x004D9860` |
| Signature | `void* Qtask_GetList(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the Qtask list allocated by Qtask_Initialize at 0x00A54690. Retail callers read the first dword as the current count and walk entries from list+0x08, using each entry's +0x1C task-type field. Ghidra/r2: exact 0x004D9860-0x004D9865 boundary, 1 basic block, 0 CFG edges, cdecl no-argument pointer getter.

## How it was found

Retail evidence: Ghidra/r2: returns DAT_00A54690 with no arguments.; Callers 0x00477600, 0x00478840, and Camera_SubmitFrame read the returned list's count and walk task entries whose +0x1C field selects callback-table rows.; r2 afij: cdecl, 0 args, size 6, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
