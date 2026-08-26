# TaskType_Set

Address: 0x004B8810
Signature: void TaskType_Set(int** taskDef, int taskTypeId)
Data types: TaskTypeRecord

## Recovered behavior

Stores the TYPE ID onto a task definition structure (simple field write, verified 2-arg store). Params: taskDef = task definition object, taskTypeId = TASKTYPE_* enum value (TASKTYPE_GUN, TASKTYPE_BUILDING, etc. - full enum embedded in igi.exe .data).

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
