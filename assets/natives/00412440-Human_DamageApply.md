# Human_DamageApply

| Field | Value |
|---|---|
| Address/hash | `0x00412440` |
| Signature | `void Human_DamageApply(void* human)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Applies DAMAGE/knockback to the human player: reads enable flag byte +0xCF6 and patrol sub-struct +0x254 of the human struct. IGI-MP disables bullet knockback here. Prologue-verified.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
