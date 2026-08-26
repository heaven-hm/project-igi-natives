# MagicObj_GetEventId

Address: 0x004D9FB0
Signature: unsigned char MagicObj_GetEventId(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Returns the MagicObj event-slot byte stored at 0x0054864A, allocated by MagicObj_Initialize and released by MagicObj_Shutdown. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument getter.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
