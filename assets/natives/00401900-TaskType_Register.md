# TaskType_Register

| Field | Value |
|---|---|
| Address/hash | `0x00401900` |
| Signature | `uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t parentType, uint32_t p4)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers and allocates a task type, copies the task handler table, and returns the allocated 16-bit type id. Ghidra/r2 CFG agreement: 18 basic blocks and 23 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `18` basic blocks, `23` edges, end `0x00401A10`.
r2 CFG: `18` basic blocks, `23` edges, end `0x00401A10`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
