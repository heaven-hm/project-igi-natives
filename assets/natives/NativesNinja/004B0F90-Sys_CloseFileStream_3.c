#include "004B0F90-Sys_CloseFileStream_3.h"
/* 0x004b0f90 Sys_CloseFileStream_3 full linked: callers=3 callees=1 */
int32_t sub_4b0f90()

{
    int32_t result = *((g_942304 << 2) + &g_942308);

    if (result == 0xffffffff)
    {
        g_a94a64 = 0xffffffff;
        return 0xffffffff;
    }

    g_942304 += 1;
    sub_4b0f30(result);
    return result;
}
