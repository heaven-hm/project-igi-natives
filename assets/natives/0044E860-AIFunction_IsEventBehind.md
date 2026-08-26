# AIFunction_IsEventBehind

Address: 0x0044E860
Signature: int AIFunction_IsEventBehind()
Data types: AIContext

## Recovered behavior

RETURNS non-zero if the current event came from BEHIND the AI (direction test used for reaction animations). Takes no script args per retail table (engine reads an internal slot via ebp+8). Use in alert/detection handlers.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
