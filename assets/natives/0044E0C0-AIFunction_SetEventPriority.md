# AIFunction_SetEventPriority

| Field | Value |
|---|---|
| Address/hash | `0x0044E0C0` |
| Signature | `void AIFunction_SetEventPriority(int priority)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets the priority of the CURRENT event being handled (decides which queued event wins). Param: priority = engine priority number. Use inside an event handler.

## How it was found

Retail evidence: AIFunction_SetEventPriority.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
