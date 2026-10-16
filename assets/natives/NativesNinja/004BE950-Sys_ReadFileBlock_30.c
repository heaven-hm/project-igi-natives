#include "004BE950-Sys_ReadFileBlock_30.h"
/* 0x004be950 Sys_ReadFileBlock_30 full linked: callers=1 callees=0 */
int32_t sub_4be950(void* a1, int32_t a2)

{
    int32_t ecx_1 = *(a1 + 0x1c) - 1;
    *(a1 + 0x18) -= 1;
    int32_t edx_2 = *(a1 + 0x28);
    *(a1 + 0x1c) = ecx_1;
    *(edx_2 + (ecx_1 << 2)) = 5;
    *(*(a1 + 0x24) + (*(a1 + 0x18) << 2)) = a2;
    return a2;
}
