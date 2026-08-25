# Qtask_GetEventId

Address: 0x004D9850
Signature: unsigned char Qtask_GetEventId(void)
Data types: TaskTypeRecord

## Recovered behavior

Returns the Qtask event-slot byte stored at 0x00548644. The result selects the first dimension of the task callback table at 0x00A96AE0. Ghidra/r2: exact 0x004D9850-0x004D9855 boundary, 1 basic block, 0 CFG edges, cdecl no-argument byte getter. At the Gun/GunFlame registration sites, any callback pushed before this call belongs to the following FUN_00401400 registrar call; it is not an argument to this getter.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
