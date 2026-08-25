# Mine_ProximityCreate

| Field | Value |
|---|---|
| Address/hash | `0x00476040` |
| Signature | `void Mine_ProximityCreate(void)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Creates a PROXIMITY MINE entity: initializes hash state via QHash_Init(0x4B0D60), reads mine id word 0x5BE3A0. IGI-MP hooks for network mine sync.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
