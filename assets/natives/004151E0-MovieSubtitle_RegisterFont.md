# MovieSubtitle_RegisterFont

Address: 0x004151E0
Signature: void MovieSubtitle_RegisterFont(...)
Data types: scalar/opaque ABI only

## Recovered behavior

Registers a font used by in-game movie subtitles (16 callsites in body; argc unknown - parser context). Call from subtitle/font definition blocks before any MovieSubtitle_RegisterText that uses it.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
