# AIFunction_GetEventDistance

| Field | Value |
|---|---|
| Address/hash | `0x0044E930` |
| Signature | `float AIFunction_GetEventDistance()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the DISTANCE to the source of the current event (Real). Takes no args. Use inside event handlers e.g. 'if gunshot closer than X then investigate'.

## How it was found

Retail evidence: AIFunction_GetEventDistance.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
