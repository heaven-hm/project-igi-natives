#include "004BEC40-Sys_DispatchOpcode_30.h"
/* 0x004bec40 Sys_DispatchOpcode_30 full linked: callers=3 callees=0 */
int32_t sub_4bec40(void* a1, int32_t a2)

{
    if (a2 < *(a1 + 8))
    {
        int32_t ecx_2 = *(*(a1 + 0x10) + (a2 << 2));

        if (ecx_2 < *(a1 + 0xc))
            return *(a1 + 0x14) + ecx_2;
    }

    return 0;
}
