# Weapon_ReloadStart

| Field | Value |
|---|---|
| Address/hash | `0x00479990` |
| Signature | `void Weapon_ReloadStart(void* soldierCtx)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Starts weapon RELOAD: uses soldier object ref +0x4C4 with spawner 0x4F2060 (arg 0x4C3). IGI-MP hooks this as reloadhook.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
