// Original IGI.EXE function: FX_ErrorInHumancameraHu_2 (VA 0x00482930; static CFG gate PASS, CFG score 1.000).
#include "FX_ErrorInHumancameraHu_2.h"
int32_t FX_ErrorInHumancameraHu_2(void* a1)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;
    int32_t valA1 = *(a1 + 0x118) + 1;
    int32_t srcS = 0;
    *(a1 + 0x118) = valA1;
    int32_t objC = valA1;
    int32_t result;

    while (true)
    {
        result = objC & 0x8000007f;

        if (result < 0)
            result = ((result - 1) | 0xffffff80) + 1;

        if (*((result << 3) + &g_5c118d))
            break;

        srcS += 1;
        objC += 1;

        if (srcS >= 0x80)
        {
            *(a1 + 0x118) = valA1 - 1;
            return result;
        }
    }

    int32_t* objC1 = *((result << 3) + &g_5c1188);

    if (*objC1)
    {
        *(a1 + 0x68) = objC1;
        *(a1 + 0x118) = result;
        return result;
    }

    Error_Show("ERROR IN HUMANCAMERA HUMANLIST");

    while (true)
        /* nop */
}
