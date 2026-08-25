# Human_RunUpdate

Address: 0x004109A0
Signature: void Human_RunUpdate(HumanPlayer* human)
Data types: HumanPlayer

## Recovered behavior

Main HUMAN PLAYER RUN/MOVEMENT UPDATE - large handler; reads human struct field +0x2EC (lea edi,[esi+0x2ec], matching the documented param-ptr slot) and drives movement state. Hooked by IGI-MP as HumanPlayer_RunUpdate.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
