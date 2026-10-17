// Original IGI.EXE function: Light_ComputeDirectionalLight_6 (VA 0x005274D0; static CFG gate PASS, CFG score 1.000).
#include "Light_ComputeDirectionalLight_6.h"
int32_t Light_ComputeDirectionalLight_6(float a1)

{
    int32_t result = g_ba1e08;
    int32_t srcS = 0;

    if (result > 0)
    {
        do
        {
            long double x87_r7_1 = a1;
            float objC3 = *(*(g_ba1e04 + (srcS << 2)) * g_ba1e10 + g_ba1e00);
            long double f0_1 = *(objC3 + 0x5c);
            x87_r7_1 - f0_1;

            if (!(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                *(objC3 + 0x5c) = a1;
                Light_CalculateAttenuation_5(objC3);
            }

            result = g_ba1e08;
            srcS += 1;
        } while (srcS < result);
    }

    return result;
}
