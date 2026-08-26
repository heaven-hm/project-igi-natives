# Qtask_GetList

Address: 0x004D9860
Signature: void* Qtask_GetList(void)
Data types: TaskTypeRecord

## Recovered behavior

Returns the Qtask list allocated by Qtask_Initialize at 0x00A54690. Retail callers read the first dword as the current count and walk entries from list+0x08, using each entry's +0x1C task-type field. Ghidra/r2: exact 0x004D9860-0x004D9865 boundary, 1 basic block, 0 CFG edges, cdecl no-argument pointer getter.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
