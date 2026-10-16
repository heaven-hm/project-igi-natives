#include "004BDA00-Sys_PushStack_29.h"
/* 0x004bda00 Sys_PushStack_29 full linked: callers=42 callees=0 */
int32_t sub_4bda00(void* a1, int32_t a2)

{
    int32_t ecx_1 = *(a1 + 0x1c) - 1;
    *(a1 + 0x18) -= 1;
    int32_t edx_2 = *(a1 + 0x28);
    *(a1 + 0x1c) = ecx_1;
    *(edx_2 + (ecx_1 << 2)) = 1;
    *(*(a1 + 0x24) + (*(a1 + 0x18) << 2)) = a2;
    return a2;
}
