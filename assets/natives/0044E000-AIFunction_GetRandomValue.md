# AIFunction_GetRandomValue

| Field | Value |
|---|---|
| Address/hash | `0x0044E000` |
| Signature | `float AIFunction_GetRandomValue(float max)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS a random value below 'max' (returns Real per retail table). Param: max = upper bound. Use for randomized behaviour delays/targets in AI scripts.

## How it was found

Retail evidence: AIFunction_GetRandomValue.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
