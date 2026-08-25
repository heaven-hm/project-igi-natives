# MagicObj_Shutdown

Address: 0x004D9F60
Signature: void MagicObj_Shutdown(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Shuts down MagicObj: releases the registered type ID and both event slots allocated by MagicObj_Initialize, then restores their sentinel values. Called by the matching subsystem teardown at 0x005315B0. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## Evidence classification

retail-string-context

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
