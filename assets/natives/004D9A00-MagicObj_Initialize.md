# MagicObj_Initialize

| Field | Value |
|---|---|
| Address/hash | `0x004D9A00` |
| Signature | `void MagicObj_Initialize(void)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Initializes the MagicObj task subsystem. The function contains the retail strings MagicObj and TASKTYPE_MAGICOBJ, creates the 0x138-byte type, allocates its task/event IDs, registers update/delete/render handlers, and calls TaskType_Set. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## How it was found

Retail evidence: Ghidra and r2 string references inside the function include the exact retail string MagicObj at 0x00548660 and TASKTYPE_MAGICOBJ at 0x0054864C.; The function creates a 0x138-byte task type, allocates the type/event IDs, registers handlers, and calls TaskType_Set; startup caller is 0x00531540.; r2 afij: cdecl, 0 args, size 257, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
