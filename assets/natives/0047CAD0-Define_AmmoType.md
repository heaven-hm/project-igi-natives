# Define_AmmoType

| Field | Value |
|---|---|
| Address/hash | `0x0047CAD0` |
| Signature | `void Define_AmmoType(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines an AMMO TYPE inside an ammo definition block of a .qsc/.cfg script (515-byte parser body; igi.exe embeds str 'DefineAmmoType'). Args follow the Define-ammo grammar (name, damage, range, clip...) - not fully mapped, treat as parser-internal. Do NOT call outside its define block.

## How it was found

Retail evidence: DefineAmmoType.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
