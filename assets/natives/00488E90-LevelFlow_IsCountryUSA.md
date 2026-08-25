# LevelFlow_IsCountryUSA

| Field | Value |
|---|---|
| Address/hash | `0x00488E90` |
| Signature | `int LevelFlow_IsCountryUSA()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS 1 if the running build is a USA country build, 0 otherwise (affects censorship/content paths like blood). Takes no args. Check before enabling content that country builds gate.

## How it was found

Retail evidence: LevelFlow_IsCountryUSA.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
