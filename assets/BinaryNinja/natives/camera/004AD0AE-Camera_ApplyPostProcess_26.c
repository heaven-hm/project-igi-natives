// Original IGI.EXE function: Camera_ApplyPostProcess_26 (VA 0x004AD0AE; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_26.h"
int32_t Camera_ApplyPostProcess_26(int32_t context)

{
    if (context >= g_c32540)
        return 0;

    int32_t data_1 = context & 0x1f;
    data_1 = *((&g_c32440)[context >> 5] + (data_1 << 3) + 4);
    return data_1 & 0x40;
}
