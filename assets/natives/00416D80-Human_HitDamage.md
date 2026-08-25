# Human_HitDamage

| Field | Value |
|---|---|
| Address/hash | `0x00416D80` |
| Signature | `uint Human_HitDamage(void)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Reads the player XP/hit byte: returns byte [PlayerPtr+0xE1]. Takes no args. Documented alias of HUMAN_HIT_DAMAGE - same address.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
