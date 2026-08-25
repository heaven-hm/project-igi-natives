# AIAction_LookAtEvent

| Field | Value |
|---|---|
| Address/hash | `0x0044D870` |
| Signature | `void AIAction_LookAtEvent(int eventId, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Turns the AI to LOOK toward an event's source without moving. Params: eventId = AIEVENT_* value, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).

## How it was found

Retail evidence: AIAction_LookAtEvent.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
