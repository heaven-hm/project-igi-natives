# App_ContextSetDebugtextState

Address: 0x0048F1E0
Signature: void App_ContextSetDebugtextState(int8_t state)
Data types: scalar/opaque ABI only

## Recovered behavior

Toggles on-screen DEBUG TEXT output (global 0x5C8BF4). Param: state = 1 show engine debug text, 0 hide. Handy while reverse-engineering other systems.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
