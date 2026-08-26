# Qtask_SetCallbackData

Address: 0x004D97F0
Signature: void Qtask_SetCallbackData(void* task, unsigned int callbackData)
Data types: TaskTypeRecord

## Recovered behavior

Stores the raw 32-bit callback payload at task+0x48. Qtask_UpdateList (0x004D27F0) retrieves this field and passes it as the second argument to each registered per-task-type callback. Ghidra/r2: exact 0x004D97F0-0x004D97FB boundary, 1 basic block, 0 CFG edges, cdecl 2-argument store.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
