# AIFunction_GetAnimationToPlay

Address: 0x0044ECB0
Signature: int AIFunction_GetAnimationToPlay()
Data types: AIContext

## Recovered behavior

RETURNS which animation entry the engine decided to play for the current event/action (useful to log or override reactions). Per retail table takes no script args; machine code also touches an [ebp+8] slot (internal context).

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
