# Qtask_Shutdown

| Field | Value |
|---|---|
| Address/hash | `0x004D9830` |
| Signature | `void Qtask_Shutdown(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Shuts down the Qtask runtime: releases the event slot at 0x00548644 through FUN_004018C0 and releases the list at 0x00A54690 through FUN_004C1830. Called by the subsystem shutdown at 0x00531DF0. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## How it was found

Retail evidence: Ghidra: calls FUN_004018C0(DAT_00548644) and FUN_004C1830(DAT_00A54690).; Ghidra caller 0x00531DF0 invokes this during the matching subsystem teardown after the task-specific shutdown helpers.; r2 afij: cdecl, 0 args, size 27, 1 basic block, 0 CFG edges; Ghidra graph_cfg_edges also reports 0 edges..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
