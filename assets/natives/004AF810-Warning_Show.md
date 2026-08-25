# Warning_Show

Address: 0x004AF810
Signature: void Warning_Show(char* format, ...)
Data types: scalar/opaque ABI only

## Recovered behavior

Shows a warning dialog - printf-style variadic like ErrorShow (retail: push str."QTasktype \"%s\"..."; push eax; call -> add esp,8). Param: format = printf-style string + substitution args.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
