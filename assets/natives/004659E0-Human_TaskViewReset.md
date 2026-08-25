# Human_TaskViewReset

Address: 0x004659E0
Signature: void Human_TaskViewReset(HumanPlayer* human)
Data types: HumanPlayer

## Recovered behavior

Resets the human's VIEW TANGENT fields to retail defaults: computes tan() of the half-FOV globals 0x5335E8/0x5339C0 (the same globals ENHANCER::FOV_SET writes) and stores them into human+0x1E4 and human+0x1E8, clearing human+0x1EC. Param: human = Human/soldier struct ptr. This is THE retail restore path - call after custom FOV/binocular zoom to return to normal view.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
