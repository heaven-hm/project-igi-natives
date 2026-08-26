# Error_Show

Address: 0x004AF7B0
Signature: void Error_Show(char* format, ...)
Data types: scalar/opaque ABI only

## Recovered behavior

Shows a fatal-error dialog: printf-style FORMAT STRING + variadic args (e.g. push "Level_Load(): Couldn't load script: %s"; push scriptPath; call). Param: format = printf-style string, followed by substitution args. Variadic - proven by retail call sites (add esp,8 cleanup) and vsprintf helper fcn.004A5702.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
