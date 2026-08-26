# Flow_SetState

Address: 0x004028A0
Signature: void Flow_SetState(int stateId)
Data types: scalar/opaque ABI only

## Recovered behavior

Stores a pending flow state in game-context field +0x2C. The main loop consumes it, copies it to +0x28, clears the pending field, and dispatches state IDs 1 through 8. Flow_RequestEvent reaches this setter after converting its event ID.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
