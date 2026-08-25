# TaskType_IsDerivedFrom

| Field | Value |
|---|---|
| Address/hash | `0x00401CF0` |
| Signature | `bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Checks equality and walks the task-type parent chain until the sentinel type. Ghidra/r2 CFG agreement: 5 basic blocks and 6 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `5` basic blocks, `6` edges, end `0x00401D20`.
r2 CFG: `5` basic blocks, `6` edges, end `0x00401D20`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
