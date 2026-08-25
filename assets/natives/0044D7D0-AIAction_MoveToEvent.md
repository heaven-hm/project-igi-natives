# AIAction_MoveToEvent

| Field | Value |
|---|---|
| Address/hash | `0x0044D7D0` |
| Signature | `void AIAction_MoveToEvent(int eventId, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Moves the AI toward the source position of an EVENT it received. Params: eventId = AIEVENT_* whose position to move to, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1). Use in event handlers (gunshot heard -> move there).

## How it was found

Retail evidence: AIAction_MoveToEvent.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
