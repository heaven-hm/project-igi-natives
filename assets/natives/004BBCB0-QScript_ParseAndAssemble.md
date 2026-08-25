# QScript_ParseAndAssemble

Address: 0x004BBCB0
Signature: int QScript_ParseAndAssemble(char* srcText, int options)
Data types: scalar/opaque ABI only

## Recovered behavior

PARSE+CODEGEN driver: logs "Parsing script and generating assembly code.", runs parser state globals (0xA442D0..), writes output ("Failed to open file '%s' for writing."). Params: srcText = script source, options = parser option word. Part of the QscCompile pipeline feeding QScript_Assemble.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
