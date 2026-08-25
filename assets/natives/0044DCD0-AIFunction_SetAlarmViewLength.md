# AIFunction_SetAlarmViewLength

| Field | Value |
|---|---|
| Address/hash | `0x0044DCD0` |
| Signature | `void AIFunction_SetAlarmViewLength(int length)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets view length WHILE AN ALARM IS ON (separate stat from normal vision). Param: length = distance in engine units. Use in AI init.

## How it was found

Retail evidence: AIFunction_SetAlarmViewLength.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
