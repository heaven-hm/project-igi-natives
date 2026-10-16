#include "004B7330-Sys_FreeMemory_19.h"
/* 0x004b7330 Sys_FreeMemory_19 full linked: callers=1 callees=1 */
int32_t* sub_4b7330(int32_t a1)

{
    int32_t* result = Mem_Alloc(a1 * 0xc + 8, 4);
    result[1] = a1;
    *result = 0;
    return result;
}
