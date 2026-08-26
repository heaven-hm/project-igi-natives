# Qtask_GetCallbackData

Address: 0x004D9800
Signature: unsigned int Qtask_GetCallbackData(void* task)
Data types: TaskTypeRecord

## Recovered behavior

Returns the raw 32-bit callback payload from task+0x48. Qtask_UpdateList (0x004D27F0) calls it immediately before invoking both callback tables. Ghidra/r2: exact 0x004D9800-0x004D9807 boundary, 1 basic block, 0 CFG edges, cdecl 1-argument load.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
