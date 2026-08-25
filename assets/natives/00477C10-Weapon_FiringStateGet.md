# Weapon_FiringStateGet

| Field | Value |
|---|---|
| Address/hash | `0x00477C10` |
| Signature | `uint8_t Weapon_FiringStateGet(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the byte at the retail weapon firing-state configuration global 0x005407B9. Ghidra/r2 CFG agreement: 1 basic block and 0 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `1` basic blocks, `0` edges, end `0x00477C15`.
r2 CFG: `1` basic blocks, `0` edges, end `0x00477C15`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
