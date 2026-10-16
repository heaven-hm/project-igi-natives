#include "gi_platform.h"
#include "004B0F90-Sys_CloseFileStream_3.h"
int32_t Sys_CloseFileStream_3()

{
    int32_t result = *((g_942304 << 2) + &g_942308);

    if (result == 0xffffffff)
    {
        g_a94a64 = 0xffffffff;
        return 0xffffffff;
    }

    g_942304 += 1;
    Sys_FreeMemory_3(result);
    return result;
}
