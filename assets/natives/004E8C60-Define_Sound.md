# Define_Sound

Address: 0x004E8C60
Signature: void Define_Sound(...)
Data types: scalar/opaque ABI only

## Recovered behavior

Defines a SOUND entry (file + attenuation params) inside sound definition blocks - OpenIGI reimplements it as SoundDefinitionRegistry.Define(SoundDefinitionKind.Sound). Call only from sound .qsc define blocks.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
