# AIAction_Activate

Address: 0x0044D420
Signature: void AIAction_Activate(int target, int param2, int flags)
Data types: AIContext

## Recovered behavior

Generic ACTIVATE action: sends the AI to activate/use an object (switch, door, alarm...). Params: target = object/task reference, param2 = secondary value (retail passes 0), flags = AIACTIONFLAG (NONE=0/PUSHABLE=1). Use in AI handlers for alarm/objective responses.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
