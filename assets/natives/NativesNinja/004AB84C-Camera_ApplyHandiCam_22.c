#include "004AB84C-Camera_ApplyHandiCam_22.h"
/* 0x004ab84c Camera_ApplyHandiCam_22 full linked: callers=1 callees=1 */
int32_t* sub_4ab84c(void* a1, int32_t a2, char* a3)

{
    int32_t* result = a1 + ((a2 - *(a1 + 0x10)) >> 0xc << 3) + 0x18;
    *result += *a3;
    *a3 = 0;
    bool cond:0 = *result != 0xf0;
    result[1] = 0xf1;

    if (!cond:0)
    {
        g_936200 += 1;

        if (g_936200 == 0x20)
            result = sub_4ab733(0x10);
    }

    return result;
}
