# Qsc_Compile

Address: 0x004B8410
Signature: int Qsc_Compile(char* qscPath)
Data types: scalar/opaque ABI only

## Recovered behavior

Compiles a .qsc SCRIPT SOURCE into a .qvm binary: resolves the path (fcn_004B5B60), pulls the source through ResourceLoad (0x4B5F00), allocates a 0x94-byte compiler context via Mem_Alloc, emits ".qvm" output. Param: qscPath = script source path. RETURNS result object/flag.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
