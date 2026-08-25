# AIFunction_SetAlarmAccess

| Field | Value |
|---|---|
| Address/hash | `0x0044E330` |
| Signature | `void AIFunction_SetAlarmAccess(int access)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets HOW the AI treats the alarm route. Param: access = AIALARMACCESS enum: BEFORECOMBAT=0 (run for the alarm first), AFTERCOMBAT=1 (fight first, raise alarm after). Retail template: AIFunction_SetAlarmAccess(AIALARMACCESS_BEFORECOMBAT).

## How it was found

Retail evidence: AIFunction_SetAlarmAccess.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
