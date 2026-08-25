# AIFunction_GetAlarmControlStatus

| Field | Value |
|---|---|
| Address/hash | `0x0044E4F0` |
| Signature | `int AIFunction_GetAlarmControlStatus()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the status/state of the bound alarm control (raised/used state as tracked by the engine). Takes no args.

## How it was found

Retail evidence: AIFunction_GetAlarmControlStatus.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
