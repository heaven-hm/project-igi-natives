# AIFunction_GetAlarmAccess

| Field | Value |
|---|---|
| Address/hash | `0x0044E470` |
| Signature | `int AIFunction_GetAlarmAccess()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the current AIALARMACCESS mode: BEFORECOMBAT=0, AFTERCOMBAT=1. Takes no args.

## How it was found

Retail evidence: AIFunction_GetAlarmAccess.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
