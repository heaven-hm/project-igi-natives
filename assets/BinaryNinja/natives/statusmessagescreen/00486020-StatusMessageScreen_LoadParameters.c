// Original IGI.EXE function: StatusMessageScreen_LoadParameters (VA 0x00486020; static CFG gate PASS, CFG score 1.000).
#include "StatusMessageScreen_LoadParameters.h"
int32_t StatusMessageScreen_LoadParameters(void* a1)

{
    Level_LoadLevel_6();
    Level_LoadLevel_6();
    int32_t result = Display_GetActiveMode();
    int32_t i = 0;
    long double x87_r7_1 = g_c28b44 * 0.015625f;
    char* ctxB = a1 + 0x40;
    long double x87_r7_2 = g_c28b48;
    float v_10_1 = x87_r7_2 * 0.020833334f;

    do
    {
        if (*ctxB)
        {
            void* valA1;
            int32_t objC1;
            valA1 = FX_FragmentSimulate_6(a1, i);
            objC1 = *(valA1 + 0x1c6);

            if (!objC1)
                result = FX_TrailUpdate_6(a1, i, x87_r7_1, v_10_1);
            else
            {
                int32_t v_24_2 = objC1;
                result = FX_FireBallUpdate_7(a1, i, x87_r7_1, x87_r7_2 * 0.864583313f);
            }

            v_10_1 = v_10_1 + 42.0;
        }

        i += 1;
        ctxB = &ctxB[0x102c];
    } while (i < 0x18);

    return result;
}
