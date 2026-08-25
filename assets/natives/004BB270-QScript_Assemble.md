# QScript_Assemble

Address: 0x004BB270
Signature: int QScript_Assemble(char* srcText, int srcLen2)
Data types: scalar/opaque ABI only

## Recovered behavior

ASSEMBLER stage of the script pipeline: strips comments via regex "{.*:(.*//)*}.*", initialises the parser ("Initialising parser."), generates assembly code and WRITES IT TO "LOCAL:qvmbin.tmp" (also referenced as /0qvmbin.tmp). Params: srcText = script source buffer, srcLen2 = secondary length/context arg. Returns assembly result.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
