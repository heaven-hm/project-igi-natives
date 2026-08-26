# TaskType_Register

Address: 0x00401900
Signature: uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t parentType, uint32_t p4)
Data types: TaskTypeRecord

## Recovered behavior

Registers and allocates a task type, copies the task handler table, and returns the allocated 16-bit type id. Ghidra/r2 CFG agreement: 18 basic blocks and 23 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
