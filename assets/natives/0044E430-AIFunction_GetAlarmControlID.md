# AIFunction_GetAlarmControlID

| Field | Value |
|---|---|
| Address/hash | `0x0044E430` |
| Signature | `int AIFunction_GetAlarmControlID()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the bound alarm-control id. Takes no args.

## How it was found

Retail evidence: AIFunction_GetAlarmControlID.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
