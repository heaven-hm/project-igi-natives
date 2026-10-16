#include "Camera_ApplyWideScreen_23.h"
int32_t Camera_ApplyWideScreen_23()

{
    uint32_t valA = g_c321e0;

    if (!valA)
    {
        valA = 0x200;
        g_c321e0 = valA;
    }
    else if (valA < 0x14)
    {
        valA = 0x14;
        g_c321e0 = valA;
    }

    char* valA1 = Camera_ApplyPostProcess_28(valA, 4);
    g_c311dc = valA1;

    if (!valA1)
    {
        g_c321e0 = 0x14;
        char* valA2 = Camera_ApplyPostProcess_28(0x14, 4);
        g_c311dc = valA2;

        if (!valA2)
            Camera_UpdateViewCone_3(0x1a);
    }

    int32_t* objC3 = nullptr;

    for (int32_t i = 0x546840; i < 0x546ac0; )
    {
        *(objC3 + g_c311dc) = i;
        i += 0x20;
        objC3 = &objC3[1];
    }

    int32_t tmpD2 = 0;
    int32_t result;

    for (int32_t* i_1 = &g_546850; i_1 < 0x5468b0; )
    {
        result = *((&g_c32440)[tmpD2 >> 5] + ((tmpD2 & 0x1f) << 3));

        if (result == 0xffffffff || !result)
            *i_1 = 0xffffffff;

        i_1 = &i_1[8];
        tmpD2 += 1;
    }

    return result;
}
