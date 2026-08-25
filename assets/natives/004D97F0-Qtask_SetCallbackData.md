# Qtask_SetCallbackData

| Field | Value |
|---|---|
| Address/hash | `0x004D97F0` |
| Signature | `void Qtask_SetCallbackData(void* task, unsigned int callbackData)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Stores the raw 32-bit callback payload at task+0x48. Qtask_UpdateList (0x004D27F0) retrieves this field and passes it as the second argument to each registered per-task-type callback. Ghidra/r2: exact 0x004D97F0-0x004D97FB boundary, 1 basic block, 0 CFG edges, cdecl 2-argument store.

## How it was found

Retail evidence: Ghidra: stores the second parameter at task+0x48.; Ghidra caller 0x004C7760 supplies zero while initializing task objects; Qtask_UpdateList 0x004D27F0 retrieves the same field before invoking both callback tables.; r2 afij: cdecl, 2 args, size 12, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
