#include "Sys_FreeMemory_23.h"
void* Sys_FreeMemory_23(int32_t* a1, int32_t a2)

{
    return Q_TaskHashTableSet(a1, Sys_DispatchOpcode_22, a2, 8, 0, 2, 0);
}
