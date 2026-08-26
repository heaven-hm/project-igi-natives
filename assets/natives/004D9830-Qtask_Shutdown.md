# Qtask_Shutdown

Address: 0x004D9830
Signature: void Qtask_Shutdown(void)
Data types: TaskTypeRecord

## Recovered behavior

Shuts down the Qtask runtime: releases the event slot at 0x00548644 through FUN_004018C0 and releases the list at 0x00A54690 through FUN_004C1830. Called by the subsystem shutdown at 0x00531DF0. Ghidra/r2: exact boundary, 1 basic block, 0 CFG edges, cdecl no-argument function.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
