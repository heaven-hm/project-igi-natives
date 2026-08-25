# Qtask_GetCallbackData

| Field | Value |
|---|---|
| Address/hash | `0x004D9800` |
| Signature | `unsigned int Qtask_GetCallbackData(void* task)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the raw 32-bit callback payload from task+0x48. Qtask_UpdateList (0x004D27F0) calls it immediately before invoking both callback tables. Ghidra/r2: exact 0x004D9800-0x004D9807 boundary, 1 basic block, 0 CFG edges, cdecl 1-argument load.

## How it was found

Retail evidence: Ghidra: returns *(unsigned int*)(task+0x48).; Ghidra caller Qtask_UpdateList 0x004D27F0 uses the result as the callback's second argument.; r2 afij: cdecl, 1 arg, size 8, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
