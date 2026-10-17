// Original IGI.EXE function: Physics_UpdateForces_13 (VA 0x0050E520; static CFG gate FAIL, CFG score 0.733).
#include "Physics_UpdateForces_13.h"
void* Physics_UpdateForces_13(void* a1)

{
    void* result = a1;
    void v_f8;
    memcpy(&v_f8, result, 0x14);
    int32_t ctxB = 0;
    void v_6c;
    void* v_e8 = &v_6c;
    int32_t v_ec = 3;
    void* result_1 = nullptr;

    if (*(result + 0xc) > 0)
    {
        float* v_114_1 = nullptr;

        while (true)
        {
            int32_t valA = *(result + 0x10);
            int32_t tmpD1 = 0;
            long double x87_r7_1 = *(v_114_1 + valA);
            long double f0_1 = g_bcabd0;
            x87_r7_1 - f0_1;
            tmpD1 = ctxB > 2;
            float* objC2 = v_114_1 + valA;
            int32_t ctxB1 = ctxB & (tmpD1 - 1);
            int32_t flagP1;

            flagP1 = !(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_2 = objC2[1];
            long double f1_1 = g_bcabd4;
            x87_r7_2 - f1_1;
            int32_t dstD1;

            dstD1 = !(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_4 = g_bcabd8 + 1f;
            long double f2_1 = *objC2;
            x87_r7_4 - f2_1;
            int32_t srcS1;

            srcS1 = !(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_6 = g_bcabdc + 1f;
            long double f3_1 = objC2[1];
            x87_r7_6 - f3_1;
            int32_t tmpD3;

            tmpD3 = !(*(&((x87_r7_6 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_8 = 1f / objC2[2];
            int32_t valA3 = ctxB1 * 0x28;
            v_c0;
            *(&v_c0 + valA3) = (((tmpD3 * 2) | srcS1) << 1 | dstD1) << 1 | flagP1;
            int32_t v_e4[0x1e];
            v_e4[ctxB1 * 0xa] = *objC2;
            v_e0;
            *(&v_e0 + valA3) = objC2[1];
            v_dc;
            *(&v_dc + valA3) = x87_r7_8;
            v_d8;
            *(&v_d8 + valA3) = x87_r7_8 * objC2[3];
            v_d4;
            *(&v_d4 + valA3) = objC2[4] * *(&v_dc + valA3);
            v_d0;
            *(&v_d0 + valA3) = objC2[5] * *(&v_dc + valA3);
            v_cc;
            *(&v_cc + valA3) = objC2[6] * *(&v_dc + valA3);
            v_c8;
            *(&v_c8 + valA3) = objC2[7] * *(&v_dc + valA3);
            v_c4;
            *(&v_c4 + valA3) = objC2[8] * *(&v_dc + valA3);

            if (v_114_1 > 0x24)
            {
                int32_t v_108 = 2;
                int32_t v_fc_1 = 2;
                int32_t v_10c = 1;
                int32_t v_104 = 0;
                int32_t v_100_1 = 1;
                void* v_128_1 = &v_f8;
                int32_t** (* v_12c_1)(int32_t* a1, int32_t* a2) = sub_50e730;
                int32_t v_130_1 = g_bcadc0;
                int32_t valA5 = (&v_108)[ctxB1];
                void v_158;
                memcpy(&v_158, &v_158 + (&v_104)[ctxB1] * 0x28 + 0x74, 0x28);
                int32_t valA7 = (&v_10c)[ctxB1];
                void v_180;
                memcpy(&v_180, &v_180 + valA5 * 0x28 + 0x9c, 0x28);
                void v_1a8;
                memcpy(&v_1a8, &v_1a8 + valA7 * 0x28 + 0xc4, 0x28);
                Physics_CalculateSplineLength_13();
            }

            result = result_1 + 1;
            ctxB = ctxB1 + 1;
            result_1 = result;
            v_114_1 = &v_114_1[9];

            if (result >= *(a1 + 0xc))
                break;

            result = a1;
        }
    }

    return result;
}
