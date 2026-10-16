#include "gi_platform.h"
#include "004B8810-TaskType_Set.h"
void* TaskType_Set(int32_t* a1, int32_t a2)

// Sig: void TaskType_Set(int** taskDef, int taskTypeId)
// Note: Stores the TYPE ID onto a task definition structure (simple field
// write, verified 2-arg store). Params: taskDef = task definition object,
// taskTypeId = TASKTYPE_* enum value (TASKTYPE_GUN, TASKTYPE_BUILDING, etc. -
// full enum embedded in igi.exe .data).
{
    return Q_TaskHashTableSet(a1, Sys_AllocateMemory_23, a2, 4, 2, 1, 0);
}
