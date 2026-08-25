# MagicObj_Initialize

Address: 0x004D9A00
Signature: void MagicObj_Initialize(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Initializes the MagicObj task subsystem. The function contains the retail strings MagicObj and TASKTYPE_MAGICOBJ, creates the 0x138-byte type, allocates its task/event IDs, registers update/delete/render handlers, and calls TaskType_Set. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## Evidence classification

retail-string-context

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
