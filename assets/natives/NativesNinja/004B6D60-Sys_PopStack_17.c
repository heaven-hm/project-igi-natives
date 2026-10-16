#include "004B6D60-Sys_PopStack_17.h"
/* 0x004b6d60 Sys_PopStack_17 full linked: callers=1 callees=0 */
int32_t* sub_4b6d60(void* a1, int32_t a2)

{
    if (a2)
    {
        int32_t eax = 0;
        eax = *(a1 + 0x14);
        int32_t* result = *(a1 + 8) + eax * 0x24 + 4;
        *result |= 0x10000;
        return result;
    }

    int32_t eax_2 = 0;
    eax_2 = *(a1 + 0x14);
    int32_t edx = eax_2 * 9;
    int32_t eax_3 = *(a1 + 8);
    *(eax_3 + (edx << 2) + 4) &= 0xfffeffff;
    return eax_3 + (edx << 2) + 4;
}
