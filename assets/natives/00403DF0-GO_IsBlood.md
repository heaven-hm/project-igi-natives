# GO_IsBlood

| Field | Value |
|---|---|
| Address/hash | `0x00403DF0` |
| Signature | `int GO_IsBlood(int blood)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Toggles blood effects for the current profile. Param: blood = 1 on, 0 off. Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOIsBlood.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
