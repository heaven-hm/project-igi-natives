# AIFunction_SetAlarmControlID

| Field | Value |
|---|---|
| Address/hash | `0x0044E2D0` |
| Signature | `void AIFunction_SetAlarmControlID(int id)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Binds the ALARM CONTROL (the raised-alarm device) this AI uses. Param: id = alarm control id from the level. Retail template: AIFunction_SetAlarmControlID(xx).

## How it was found

Retail evidence: AIFunction_SetAlarmControlID.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
