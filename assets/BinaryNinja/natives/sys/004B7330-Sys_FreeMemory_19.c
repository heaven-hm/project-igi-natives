#include "Sys_FreeMemory_19.h"
int32_t* Sys_FreeMemory_19(int32_t a1)

{
    int32_t* result = Mem_Alloc(a1 * 0xc + 8, 4);
    result[1] = a1;
    *result = 0;
    return result;
}
