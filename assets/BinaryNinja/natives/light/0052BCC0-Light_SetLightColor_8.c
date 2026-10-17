// Original IGI.EXE function: Light_SetLightColor_8 (VA 0x0052BCC0; static CFG gate FAIL, CFG score 0.833).
#include "Light_SetLightColor_8.h"
int32_t Light_SetLightColor_8(int32_t a1, int32_t a2, void* a3)

{
    long double fpu7 = a2;
    double v_a0 = -(fpu7);
    double v_bc;
    memcpy(&v_bc, a3, 0x18);
    double v_c8 = fpu7 * 0.5;
    v_bc = v_bc - v_c8;
    int32_t v_d0 = 0;
    int32_t v_94 = a1;
    double v_b4;
    double v_b4_1 = v_b4 - v_c8;
    int32_t valA2;
    int32_t tmpD;
    tmpD = HIGHD(a2);
    valA2 = LOWD(a2);
    double v_ac = v_c8 + v_ac;
    int32_t ctxB1 = (valA2 + (tmpD & 0xfff)) >> 0xc;

    if (ctxB1 > 0)
    {
        bool cond_1_1;

        do
        {
            int32_t v_cc_1 = 0;

            if (ctxB1 > 0)
            {
                bool cond_2_1;

                do
                {
                    void v_78;
                    DynObj_UpdateDynTree_10(g_a44344, &v_78, &v_bc, 1, &v_a0, 0xff, nullptr,
                        0x80000000);
                    int32_t v_20;

                    if (!v_20)
                        return 2;

                    long double x87_r7_9 = -(v_a0);
                    double v_18;
                    long double f0_1 = v_18;
                    x87_r7_9 - f0_1;

                    if (*(&((x87_r7_9 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, f0_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
                        return 2;

                    int32_t tmpD2 = g_a44344;
                    double v_90;
                    void v_70;
                    memcpy(&v_90, &v_70, 0x18);
                    double v_60;
                    double v_80_1 = v_60 + 40.960000000000001;
                    void* v_a4;
                    void v_98;
                    DynObj_RemoveSymbol_9(tmpD2, &v_a4, &v_90, 1, 0xc, &v_98, 0xffffffff);
                    long double x87_r7_12 = *(v_a4 + 0xc);
                    long double f1_1 = 0f;
                    x87_r7_12 - f1_1;

                    if (*(&((x87_r7_12 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, f1_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        return 2;

                    cond_2_1 = v_cc_1 + 1 < ctxB1;
                    v_cc_1 += 1;
                    v_b4_1 = v_b4_1 + 4096.0;
                } while (cond_2_1);
            }

            cond_1_1 = v_d0 + 1 < ctxB1;
            v_d0 += 1;
            v_b4_1 = *(a3 + 8) - v_c8;
            v_bc = v_bc + 4096.0;
        } while (cond_1_1);
    }

    return 1;
}
