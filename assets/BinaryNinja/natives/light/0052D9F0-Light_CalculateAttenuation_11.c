// Original IGI.EXE function: Light_CalculateAttenuation_11 (VA 0x0052D9F0; static CFG gate PASS, CFG score 1.000).
#include "Light_CalculateAttenuation_11.h"
uint32_t Light_CalculateAttenuation_11(int32_t a1)

{
    int32_t srcS = a1;
    int32_t v_18 = 0;
    int32_t valA = *(srcS + 0x4ab0);
    int32_t i = 1;
    void* objC = srcS + 0x48c0;
    int64_t v_8 = valA * 0.703000009f;
    int32_t valA1 = v_8;
    int32_t tmpD3;
    int32_t dstD1;

    do
    {
        a1 = i;
        int32_t j_1 = 5;
        int32_t j;

        do
        {
            dstD1 = *(srcS + 0x4aa8);
            int32_t v_c_1 = 0;
            long double x87_r5_2 = a1 * 0.5f;
            *(&v_8 + 4) = 0;
            objC += 0x10;
            tmpD3 = 0;
            v_8 = COMBINE(tmpD3, dstD1) % valA;
            j = j_1;
            j_1 -= 1;
            a1 += i;
            long double fp0_1;
            bool c1_1;
            bool c2_1;
            fp0_1 = __fsin(v_8 / valA * 6.2831853071795862 + x87_r5_2);
            *(objC - 0x18) = fp0_1 * *(srcS + 0x4a88);
            long double fp0_2;
            bool c1_2;
            bool c2_2;
            fp0_2 =
                __fsin((COMBINE(0, dstD1 + 0xbd) % valA1) / valA1 * 6.2831853071795862 + x87_r5_2);
            *(objC - 0x10) = fp0_2 * *(srcS + 0x4a88);
        } while (j != 1);
        i += 1;
    } while (i <= 5);

    return COMBINE(tmpD3, dstD1) / valA;
}
