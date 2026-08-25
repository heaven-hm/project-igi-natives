# Qtask_Initialize

Address: 0x004D9810
Signature: void Qtask_Initialize(void)
Data types: TaskTypeRecord

## Recovered behavior

Initializes the Qtask runtime: allocates an event slot through FUN_004017C0(0), creates the 0x100-entry Qtask list through FUN_004C1800(0x100), and stores the event/list globals at 0x00548644 and 0x00A54690. Called by the subsystem startup at 0x00531DD0. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
