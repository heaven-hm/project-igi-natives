# Log_Add

Address: 0x004BBC30
Signature: void Log_Add(char* format, ...)
Data types: scalar/opaque ABI only

## Recovered behavior

Appends a formatted line to the engine log (variadic printf-style, giant 0x400 format buffer at esp+0x404). Only logs when log-enabled globals 0xA43EC8/0xA43ED4 are set. Param: format = printf-style string + substitution args. Gate your spammy logs behind the enable flags.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
