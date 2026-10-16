#include "Sys_DispatchOpcode_30.h"
int32_t Sys_DispatchOpcode_30(void* a1, int32_t a2)

{
    if (a2 < *(a1 + 8))
    {
        int32_t objC2 = *(*(a1 + 0x10) + (a2 << 2));

        if (objC2 < *(a1 + 0xc))
            return *(a1 + 0x14) + objC2;
    }

    return 0;
}
