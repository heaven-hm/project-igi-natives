# Ammo_TypeOpen

| Field | Value |
|---|---|
| Address/hash | `0x0047CAB0` |
| Signature | `void Ammo_TypeOpen(void)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Open ammo qvm file to memory for all weapons loaded.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
