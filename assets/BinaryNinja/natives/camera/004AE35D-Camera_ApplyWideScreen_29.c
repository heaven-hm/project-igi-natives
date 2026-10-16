#include "Camera_ApplyWideScreen_29.h"
int32_t Camera_ApplyWideScreen_29(int32_t a1, int32_t a2)

{
    int32_t valA;
    char objC4;
    char* tmpD1;

    if (a1 < g_c32540)
    {
        valA = a1 & 0x1f;
        int32_t objC3 = (&g_c32440)[a1 >> 5];
        tmpD1 = objC3 + (valA << 3) + 4;
        objC4 = *(objC3 + (valA << 3) + 4);
    }

    if (a1 >= g_c32540 || !(objC4 & 1))
        g_936064 = 9;
    else
    {
        valA = objC4;
        int32_t valA1 = valA & 0x80;

        if (a2 == 0x8000)
        {
            objC4 &= 0x7f;
        label_4ae3aa:
            int32_t valA2 = -(valA1);
            int32_t valA3 = valA2 - valA2;
            *tmpD1 = objC4;
            valA3 &= 0xc000;
            return valA3 + 0x8000;
        }

        if (a2 == 0x4000)
        {
            objC4 |= 0x80;
            goto label_4ae3aa;
        }

        g_936064 = 0x16;
    }

    return 0xffffffff;
}
