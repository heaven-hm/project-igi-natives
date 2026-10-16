#include "004BB240-Sys_PushStack_26.h"
/* 0x004bb240 Sys_PushStack_26 full linked: callers=8 callees=1 */
int32_t sub_4bb240(void* a1, int32_t* a2)

{
    do
    {
        int32_t eax;
        int32_t ecx;
        int32_t edx;
        eax = sub_4c0780(eax, edx, ecx, a1, a2);

        if (!eax)
            return 0;
    } while (*(a1 + 0x2c4) == 1);

    return 1;
}
