# CutScene_TaskCreate

Address: 0x004F4B00
Signature: void* CutScene_TaskCreate(void)
Data types: CutsceneTask

## Recovered behavior

CREATES the CutScene task during level load: allocates 632-byte "CutScene" object via class factory 0x401900, attaches vtable 0x4F4EE0 + update cb 0x4F51D0, registers TASKTYPE_CUTSCENE (@0x4F4EB8). TO DELETE CUTSCENES: early-return from this function so no CutScene task is ever instantiated - flow continues without them. Verified: prologue sub esp,0x278; string refs "1721_01_1","CutScene"; corroborated by IGI-MP plugin.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
