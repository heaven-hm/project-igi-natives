// Original IGI.EXE function: Physics_ApplyImpulse_13 (VA 0x0050E1E0; static CFG gate FAIL, CFG score 0.750).
#include "Physics_ApplyImpulse_13.h"
void* Physics_ApplyImpulse_13(void* a1)

{
    void* result = a1;
    int32_t v_5c;
    memcpy(&v_5c, result, 0x14);
    int32_t ctxB = 0;
    void v_48;
    void* v_4c = &v_48;
    bool cond_0 = *(result + 0xc) <= 0;
    int32_t v_50 = 2;
    v_5c = 0;
    void* result_1 = nullptr;

    if (!cond_0)
    {
        int32_t v_b4_1 = 0;

        while (true)
        {
            float* tmpD2 = *(result + 0x10) + v_b4_1;
            int32_t flagP1 = ctxB;
            long double x87_r7_1 = *tmpD2;
            long double f0_1 = g_bcabd0;
            x87_r7_1 - f0_1;
            int32_t dstD1;

            dstD1 = !(*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_2 = tmpD2[1];
            long double f1_1 = g_bcabd4;
            x87_r7_2 - f1_1;
            int32_t srcS1;

            srcS1 = !(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_4 = g_bcabd8 + 1f;
            long double f2_1 = *tmpD2;
            x87_r7_4 - f2_1;
            int32_t objC1;

            objC1 = !(*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_6 = g_bcabdc + 1f;
            long double f3_1 = tmpD2[1];
            x87_r7_6 - f3_1;
            int32_t valA2;

            valA2 = !(*(&((x87_r7_6 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            ctxB = (((valA2 * 2) | objC1) << 1 | srcS1) << 1 | dstD1;

            if (v_b4_1 > 0)
            {
                if (!(ctxB | flagP1))
                {
                    memcpy(&v_48, &tmpD2[-9], 0x24);
                    void v_24;
                    memcpy(&v_24, tmpD2, 0x24);
                    v_5c = 1;
                    Physics_InterpolateWaypoint_13(&v_5c);
                }
                else if (!(flagP1 & ctxB))
                {
                    long double x87_r7_8 = 1f / tmpD2[-7];
                    int32_t objC4 = tmpD2[-8];
                    int32_t v_ac = tmpD2[-9];
                    int32_t v_a8_1 = objC4;
                    int32_t objC5 = tmpD2[1];
                    float v_84 = *tmpD2;
                    int32_t valA6 = g_bcadc0;
                    int32_t v_80_1 = objC5;
                    int32_t v_88_1 = flagP1;
                    int32_t v_60_1 = ctxB;
                    float v_a4_1 = x87_r7_8;
                    float v_a0_1 = x87_r7_8 * tmpD2[-6];
                    float v_9c_1 = v_a4_1 * tmpD2[-5];
                    float v_98_1 = v_a4_1 * tmpD2[-4];
                    float v_94_1 = v_a4_1 * tmpD2[-3];
                    float v_90_1 = v_a4_1 * tmpD2[-2];
                    float v_8c_1 = v_a4_1 * tmpD2[-1];
                    long double x87_r7_21 = 1f / tmpD2[2];
                    float v_7c_1 = x87_r7_21;
                    float v_78_1 = x87_r7_21 * tmpD2[3];
                    float v_74_1 = v_7c_1 * tmpD2[4];
                    float v_70 = v_7c_1 * tmpD2[5];
                    float v_6c = v_7c_1 * tmpD2[6];
                    float v_68_1 = v_7c_1 * tmpD2[7];
                    long double x87_r7_32 = v_7c_1 * tmpD2[8];
                    v_5c = 0;
                    int32_t* v_c8_1 = &v_5c;
                    void (* v_cc_1)(int32_t* a1, int32_t* a2) = sub_50e450;
                    int32_t v_d0_1 = valA6;
                    float v_64_1 = x87_r7_32;
                    void v_f8;
                    memcpy(&v_f8, &v_ac, 0x28);
                    void v_120;
                    memcpy(&v_120, &v_84, 0x28);
                    void v_148;
                    memcpy(&v_148, &v_ac, 0x28);
                    Physics_CalculateSplineLength_13();
                }
            }

            result = result_1 + 1;
            v_b4_1 += 0x24;
            result_1 = result;

            if (result >= *(a1 + 0xc))
                break;

            result = a1;
        }
    }

    return result;
}
