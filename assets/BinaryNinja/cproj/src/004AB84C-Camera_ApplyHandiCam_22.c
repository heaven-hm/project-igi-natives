#include "gi_platform.h"
#include "004AB84C-Camera_ApplyHandiCam_22.h"
int32_t* Camera_ApplyHandiCam_22(void* a1, int32_t a2, char* a3)

{
    int32_t* result = a1 + ((a2 - (*(int32_t*)(uintptr_t)(a1 + 0x10))) >> 0xc << 3) + 0x18;
    *result += *a3;
    *a3 = 0;
    bool cond_0 = *result != 0xf0;
    result[1] = 0xf1;

    if (!cond_0)
    {
        g_936200 += 1;

        if (g_936200 == 0x20)
            result = Camera_ApplyLineFilter_22(0x10);
    }

    return result;
}
