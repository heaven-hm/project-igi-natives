// Original IGI.EXE function: Render_BindTexture_8 (VA 0x004D4F60; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_8.h"
int32_t* Render_BindTexture_8(int32_t* a1, int32_t* a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t valA1 = a4 * 0x28;
    int32_t* result;

    if (!*(valA1 + 0xa53910))
    {
        result = a1;
        result[0xc] = 0;
    }
    else
    {
        int32_t srcS1 = *(valA1 + 0xa53900);
        void* objC4 =
            *(*(valA1 + &g_a538fc) + (srcS1 << 2)) * *(valA1 + 0xa53908) + *(valA1 + 0xa538f8);
        *(*(valA1 + &g_a5390c) + objC4) = srcS1;
        *(valA1 + 0xa53900) += 1;
        result = a1;
        result[0xc] = objC4;
        *(objC4 + 0xc) = objC4 + 0x10;
        *result[0xc] = a4;
        *(result[0xc] + 4) = 0;
        *(result[0xc] + 8) = 0;
        int32_t tmpD1 = *(a4 * 0xc + &g_a542f0);
        int32_t objC8 = 0;

        if (tmpD1 > 0)
        {
            do
            {
                objC8 += 1;
                *(*(result[0xc] + 0xc) + (objC8 << 2) - 4) = 0;
            } while (objC8 < tmpD1);
        }
    }

    *result = a5;
    result[1] = a6;
    result[3] = a2;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[2] = a3;
    int32_t* tmpD4 = a2[2];

    if (!(a3 & 2))
    {
        int32_t* tmpD8 = tmpD4[1];
        result[4] = *tmpD8;
        result[5] = tmpD8[1];
        result[6] = tmpD8[2];
        int32_t objC13 = g_a54658;
        result[0xb] = 0;
        result[0xa] = objC13;
        return result;
    }

    int32_t* tmpD6 = tmpD4[1] + *tmpD4 * 0x28 - 0x28;
    result[4] = *tmpD6;
    result[5] = tmpD6[1];
    result[6] = tmpD6[2];
    result[0xa] = -(g_a54658);
    result[0xb] = *a2;
    return result;
}
