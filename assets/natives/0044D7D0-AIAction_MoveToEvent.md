# AIAction_MoveToEvent

Address: 0x0044D7D0
Signature: void AIAction_MoveToEvent(int eventId, int flags)
Data types: AIContext

## Recovered behavior

Moves the AI toward the source position of an EVENT it received. Params: eventId = AIEVENT_* whose position to move to, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1). Use in event handlers (gunshot heard -> move there).

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
