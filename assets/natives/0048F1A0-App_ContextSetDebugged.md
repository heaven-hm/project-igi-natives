# App_ContextSetDebugged

Address: 0x0048F1A0
Signature: void App_ContextSetDebugged(int8_t state)
Data types: scalar/opaque ABI only

## Recovered behavior

Sets the app-level DEBUGGED flag (global 0x5C8BF8). Param: state = 1 mark debugger attached/debug mode, 0 clear. BlankName's IGIPatch calls this by name. Use to toggle engine debug paths.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
