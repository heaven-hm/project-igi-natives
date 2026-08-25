# Weapon_FireUpdate

| Field | Value |
|---|---|
| Address/hash | `0x00478900` |
| Signature | `void Weapon_FireUpdate(void* weaponCtx)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Weapon FIRE update - processes firing state using config byte 0x5407B9 and weapon-table entry ([ctx+0x14] -> +0x1C). IGI-MP hooks this as gunhook.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
