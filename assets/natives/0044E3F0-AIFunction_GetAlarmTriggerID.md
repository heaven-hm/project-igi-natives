# AIFunction_GetAlarmTriggerID

| Field | Value |
|---|---|
| Address/hash | `0x0044E3F0` |
| Signature | `int AIFunction_GetAlarmTriggerID()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the id of the alarm trigger bound to this AI (see AIFunction_SetAlarmTriggerID). Takes no args. Use in handlers to check which alarm applies.

## How it was found

Retail evidence: AIFunction_GetAlarmTriggerID.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
