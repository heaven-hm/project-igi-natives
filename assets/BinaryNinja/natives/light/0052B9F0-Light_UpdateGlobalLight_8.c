// Original IGI.EXE function: Light_UpdateGlobalLight_8 (VA 0x0052B9F0; static CFG gate PASS, CFG score 0.917).
#include "Light_UpdateGlobalLight_8.h"
void* Light_UpdateGlobalLight_8(void* a1, int32_t a2, int32_t a3, void* a4)

{
    void* result = a1;

    if (a2 <= *(result + 0x6c))
    {
        void* srcS1 = a4;

        if (Light_SetLightColor_8(result, a3, srcS1) == 1)
            return Light_RenderLensflare_9(a1, srcS1, a2);

        long double x87_r7_1 = a3;
        int32_t v_90 = 0;
        int32_t valA4;
        int32_t tmpD1;
        tmpD1 = HIGHD(a3);
        valA4 = LOWD(a3);
        double v_10_1 = x87_r7_1;
        int32_t v_8c_1 = 0x3fd00000;
        int32_t valA6 = (valA4 - tmpD1) >> 1;
        int32_t v_88_1 = 0;
        double v_f8_1 = x87_r7_1 * 0.5;
        int32_t v_84_1 = 0x3fe80000;
        int32_t v_80_1 = 0;
        int32_t v_7c_1 = 0x3fd00000;
        int32_t v_78_1 = 0;
        int32_t v_74_1 = 0x3fe80000;
        int32_t v_70_1 = 0;
        int32_t v_6c_1 = 0x3fd00000;
        int32_t v_68_1 = 0;
        int32_t v_64_1 = 0x3fe80000;
        int32_t v_60_1 = 0;
        int32_t v_5c_1 = 0x3fd00000;
        int32_t v_58_1 = 0;
        int32_t v_54_1 = 0x3fe80000;
        int32_t v_50 = 0;
        int32_t v_4c_1 = 0x3fd00000;
        int32_t v_48_1 = 0;
        int32_t v_44_1 = 0x3fd00000;
        int32_t v_40_1 = 0;
        int32_t v_3c_1 = 0x3fe80000;
        int32_t v_38_1 = 0;
        int32_t v_34_1 = 0x3fe80000;
        int32_t v_30_1 = 0;
        int32_t v_2c_1 = 0x3fd00000;
        int32_t v_28_1 = 0;
        int32_t v_24_1 = 0x3fd00000;
        int32_t v_20_1 = 0;
        int32_t v_1c_1 = 0x3fe80000;
        int32_t v_18_1 = 0;
        int32_t v_14_1 = 0x3fe80000;
        int32_t v_d0 = 0;
        int32_t v_cc_1 = 0x3fd00000;
        int32_t v_c8_1 = 0;
        int32_t v_c4_1 = 0x3fd00000;
        int32_t v_c0_1 = 0;
        int32_t v_bc_1 = 0x3fd00000;
        int32_t v_b8_1 = 0;
        int32_t v_b4_1 = 0x3fd00000;
        int32_t v_b0_1 = 0;
        int32_t v_ac_1 = 0x3fe80000;
        int32_t v_a8_1 = 0;
        int32_t v_a4_1 = 0x3fe80000;
        int32_t v_a0_1 = 0;
        int32_t v_9c_1 = 0x3fe80000;
        int32_t v_98_1 = 0;
        int32_t v_94_1 = 0x3fe80000;
        int32_t v_fc_1 = valA6;
        int32_t ctxB2 = 0;

        while (true)
        {
            long double x87_r6_4 = x87_r7_1 * *(&v_90 + ctxB2);
            double v_e8;
            memcpy(&v_e8, srcS1, 0x18);
            v_e8 = x87_r6_4 - v_f8_1 + v_e8;
            double v_e0 = x87_r7_1 * *(&v_50 + ctxB2) - v_f8_1 + v_e0;
            double v_d8 = x87_r7_1 * *(&v_d0 + ctxB2) - v_f8_1 + v_d8;
            result = Light_UpdateGlobalLight_8(a1, a2 + 1, valA6, &v_e8);
            ctxB2 += 8;

            if (ctxB2 >= 0x40)
                break;

            x87_r7_1 = v_10_1;
            valA6 = v_fc_1;
            srcS1 = a4;
        }
    }

    return result;
}
