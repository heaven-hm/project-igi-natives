# Script_SetSymbolContext

Address: 0x004B8930
Signature: void Script_SetSymbolContext(byte *symbol_name,int** symbol_buf)
Data types: scalar/opaque ABI only

## Recovered behavior

Name from igi.exe error string inside function: "Script_SetSymbolContext(): Symbol not found: %s". Sets the symbol context for subsequent script operations.

## Evidence classification

retail-string-context

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
