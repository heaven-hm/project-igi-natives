#include "gi_platform.h"
#include "004BADC0-Sys_AllocateMemory_26.h"
int32_t* Sys_AllocateMemory_26(void* a1, int32_t a2)

{
    int32_t* result = Mem_Alloc(0x10, 4);
    result[2] = a2;
    result[1] = 0;
    *result = 0;
    Camera_SetFieldOfView_33(a1 + 0x44, result);
    return result;
}
