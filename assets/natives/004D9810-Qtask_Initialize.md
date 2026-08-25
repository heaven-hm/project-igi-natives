# Qtask_Initialize

| Field | Value |
|---|---|
| Address/hash | `0x004D9810` |
| Signature | `void Qtask_Initialize(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Initializes the Qtask runtime: allocates an event slot through FUN_004017C0(0), creates the 0x100-entry Qtask list through FUN_004C1800(0x100), and stores the event/list globals at 0x00548644 and 0x00A54690. Called by the subsystem startup at 0x00531DD0. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## How it was found

Retail evidence: Ghidra: assigns DAT_00548644 = FUN_004017C0(0) and DAT_00A54690 = FUN_004C1800(0x100).; Ghidra caller 0x00531DD0 invokes this immediately after the neighboring task/event setup function; Qtask_GetEventId and Qtask_GetList read these globals.; r2 afij: cdecl, 0 args, size 31, 1 basic block, 0 CFG edges; the eight instructions match Ghidra including the 0x100 allocation argument..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
