# CutScene_TaskUpdate

Address: 0x004F51D0
Signature: int CutScene_TaskUpdate(void* cutsceneTask)
Data types: CutsceneTask

## Recovered behavior

Per-frame UPDATE of the running CutScene task. Alternative cutscene-kill point: force an immediate completion return here and any created cutscene ends on frame one. Verified: referenced as update cb inside CutScene_TaskCreate 0x4F4B00.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
