# MagicObj_GetTypeId

Address: 0x004D9FA0
Signature: unsigned short MagicObj_GetTypeId(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Returns the 16-bit MagicObj task-type ID stored at 0x00548648, allocated by MagicObj_Initialize and reset by MagicObj_Shutdown. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument getter.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
