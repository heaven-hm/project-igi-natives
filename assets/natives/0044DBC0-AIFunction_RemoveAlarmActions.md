# AIFunction_RemoveAlarmActions

| Field | Value |
|---|---|
| Address/hash | `0x0044DBC0` |
| Signature | `void AIFunction_RemoveAlarmActions()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Removes all queued ALARM-related actions from this AI (calms it down). Takes no args. Use to de-escalate an NPC you control.

## How it was found

Retail evidence: AIFunction_RemoveAlarmActions.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
