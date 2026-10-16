#include "gi_platform.h"
#include "004AC323-Camera_ResetMatrix_23.h"
int32_t Camera_ResetMatrix_23(int32_t* a1)

{
    g_936210 += 1;
    void* valA = Camera_ApplyHandiCam_20(0x1000);
    a1[2] = valA;

    if (!valA)
    {
        a1[3] |= 4;
        a1[2] = &a1[5];
        a1[6] = 2;
    }
    else
    {
        a1[3] |= 8;
        a1[6] = 0x1000;
    }

    int32_t result = a1[2];
    a1[1] = 0;
    *a1 = result;
    return result;
}
