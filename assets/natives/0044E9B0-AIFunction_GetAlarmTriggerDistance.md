# AIFunction_GetAlarmTriggerDistance

| Field | Value |
|---|---|
| Address/hash | `0x0044E9B0` |
| Signature | `float AIFunction_GetAlarmTriggerDistance()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the distance between this AI and its bound ALARM TRIGGER (Real). Takes no args. Use to decide running vs fighting for the alarm.

## How it was found

Retail evidence: AIFunction_GetAlarmTriggerDistance.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
