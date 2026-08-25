# Weapon_EntityCreate

| Field | Value |
|---|---|
| Address/hash | `0x00477C50` |
| Signature | `void* Weapon_EntityCreate(uint32_t p1, uint16_t objectType, uint32_t weaponType, uint32_t p4, uint8_t p5)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Validates the weapon type, allocates/configures the weapon entity, initializes object fields, and dispatches the type handler. Ghidra/r2 CFG agreement: 6 basic blocks and 7 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `6` basic blocks, `7` edges, end `0x00477D08`.
r2 CFG: `6` basic blocks, `7` edges, end `0x00477D08`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
