# AIAction_Idle

Address: 0x0044DA80
Signature: void AIAction_Idle(int param)
Data types: AIContext

## Recovered behavior

Puts the AI into IDLE (stands, resumes idle animation countdown). Param: idle context value (retail scripts pass their idle value). Use in AIEVENT_IDLE handler instead of Patrol for stationary guards.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
