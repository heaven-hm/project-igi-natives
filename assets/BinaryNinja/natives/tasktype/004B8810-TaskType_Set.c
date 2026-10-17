// Original IGI.EXE function: TaskType_Set (VA 0x004B8810; static CFG gate PASS, CFG score 1.000).
#include "TaskType_Set.h"
void* TaskType_Set(int32_t* context, int32_t param_2)

// Sig: void TaskType_Set(int** taskDef, int taskTypeId)
// Note: Stores the TYPE ID onto a task definition structure (simple field
// write, verified 2-arg store). Params: taskDef = task definition object,
// taskTypeId = TASKTYPE_* enum value (TASKTYPE_GUN, TASKTYPE_BUILDING, etc. -
// full enum embedded in igi.exe .data).
{
    return Q_TaskHashTableSet(context, Sys_AllocateMemory_23, param_2, 4, 2, 1, 0);
}
