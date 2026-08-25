# AIFunction_SetAlarmTriggerID

| Field | Value |
|---|---|
| Address/hash | `0x0044E270` |
| Signature | `void AIFunction_SetAlarmTriggerID(int id)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Binds an ALARM trigger object to this AI (which alarm switch it responds to/runs to). Param: id = alarm trigger id from the level. Retail template: AIFunction_SetAlarmTriggerID(xx).

## How it was found

Retail evidence: AIFunction_SetAlarmTriggerID.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
