#include "Display_SetGammaRamp_3.h"
int32_t Display_SetGammaRamp_3(void* a1, char a2, int32_t a3)

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t result = 0;
    int32_t i = 0;
    int32_t result_1 = 0;

    if (g_c10384 <= 0)
        return 0;

    int32_t* srcS = &g_bcae28;

    do
    {
        int32_t valA1 = 1;

        if (!a1)
        {
        label_4919f2:

            if (a3)
            {
                a3(&srcS[-2]);
                result = result_1;
            }

            result += 1;
            result_1 = result;
        }
        else
        {
            if (1 & a2 && *(a1 + 4) != srcS[-1])
                valA1 = 0;

            if (a2 & 2 && *(a1 + 8) != *srcS)
                valA1 = 0;

            if (a2 & 4 && *(a1 + 0x10) != srcS[2])
                valA1 = 0;

            if ((!(a2 & 8) || *(a1 + 0x18) == srcS[4]) && valA1)
                goto label_4919f2;
        }

        i += 1;
        srcS = &srcS[0x47];
    } while (i < g_c10384);

    return result;
}
