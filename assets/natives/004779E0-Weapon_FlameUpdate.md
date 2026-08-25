# Weapon_FlameUpdate

| Field | Value |
|---|---|
| Address/hash | `0x004779E0` |
| Signature | `void Weapon_FlameUpdate(void* weaponCtx)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

FLAME-weapon effect update: resolves effect object via [ctx+0x14]+0x20 then updates through 0x477C10. IGI-MP hooks this as flamehook.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
