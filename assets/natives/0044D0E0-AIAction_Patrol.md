# AIAction_Patrol

Address: 0x0044D0E0
Signature: void AIAction_Patrol(int target, int mustBeZero, int flags)
Data types: AIContext

## Recovered behavior

Orders the AI into PATROL behaviour. Params: target = patrol goal/node reference from your script, mustBeZero = retail template always passes 0, flags = AIACTIONFLAG enum: NONE=0, PUSHABLE=1 (action may be replaced by higher priority). Use inside AI event handlers e.g. AIEVENT_IDLE branch. Template in igi.exe: AIAction_Patrol(xxxx, 0, AIACTIONFLAG_NONE).

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
