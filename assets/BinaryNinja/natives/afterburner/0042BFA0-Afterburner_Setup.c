// Original IGI.EXE function: Afterburner_Setup (VA 0x0042BFA0; static CFG gate PASS, CFG score 1.000).
#include "Afterburner_Setup.h"
int32_t Afterburner_Setup(float a1)

{
    float srcS = a1;
    void* objC = *(srcS + 0x130);
    long double fpu7 = *(objC + 0x720);
    long double f1 = 0.810000002f;
    fpu7 - f1;
    long double x87_r7_3;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_3 = 0f;
    else
        x87_r7_3 = (*(objC + 0x720) - 0.810000002f) * 2.27272725f;

    long double f2 = *(srcS + 0x138);
    x87_r7_3 - f2;

    if (!(*(&((x87_r7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2) ? 1 : 0) << 0xa
            | (x87_r7_3 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        *(srcS + 0x138) = *(srcS + 0x138) * 0.980000019f + x87_r7_3 * 0.0199999809f;

    long double x87_r7_8 = *(srcS + 0x138) * 1.39999998f;
    long double x87_r6_5 = 1f;
    x87_r6_5 - x87_r7_8;

    a1 = *(&((x87_r6_5 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? x87_r7_8 : 1f;

    int32_t result;
    long double fp0;
    fp0 = Sys_AllocateMemory_14(&g_57bd00);
    int32_t* i = *(srcS + 8);
    *(srcS + 0x9c) = fp0 * 0.200000003f + a1;

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            result = *((valA5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    return result;
}
