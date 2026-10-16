#include "gi_platform.h"
#include "004B8030-Sys_PushStack_22.h"
void* Sys_PushStack_22(int32_t* a1, int32_t a2, int32_t a3)

{
    return Q_TaskHashTableSet(a1, Sys_PopStack_22, a2, a3, 0, 3, 1);
}
