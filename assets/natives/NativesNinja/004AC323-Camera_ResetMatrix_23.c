#include "004AC323-Camera_ResetMatrix_23.h"
/* 0x004ac323 Camera_ResetMatrix_23 full linked: callers=2 callees=1 */
int32_t sub_4ac323(int32_t* a1)

{
    g_936210 += 1;
    void* eax = sub_4aa670(0x1000);
    a1[2] = eax;

    if (!eax)
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
