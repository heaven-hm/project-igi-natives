# Throwable_Create

| Field | Value |
|---|---|
| Address/hash | `0x00477040` |
| Signature | `void Throwable_Create(void)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Creates a GRENADE/THROWABLE projectile: checks+registers it in the hash table via QHash_ValueGet(0x4B0DB0)/QHash_ValueSet(0x4B0D40). IGI-MP hooks for network throwable sync.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
