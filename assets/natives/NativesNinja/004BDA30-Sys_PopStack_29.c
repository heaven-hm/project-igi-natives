#include "004BDA30-Sys_PopStack_29.h"
/* 0x004bda30 Sys_PopStack_29 full linked: callers=11 callees=0 */
void* sub_4bda30(void* a1, float a2)

{
    int32_t ecx_1 = *(a1 + 0x1c) - 1;
    *(a1 + 0x18) -= 1;
    int32_t edx_2 = *(a1 + 0x28);
    *(a1 + 0x1c) = ecx_1;
    *(edx_2 + (ecx_1 << 2)) = 2;
    *(*(a1 + 0x24) + (*(a1 + 0x18) << 2)) = a2;
    return a1;
}
