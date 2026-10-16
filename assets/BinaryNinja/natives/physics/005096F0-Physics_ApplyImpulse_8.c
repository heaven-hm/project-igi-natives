#include "Physics_ApplyImpulse_8.h"
int32_t Physics_ApplyImpulse_8(int32_t* a1, void* a2, double* a3)

{
    int32_t dstD = 0;
    int32_t v_34 = 0x41838800;
    *a1 = 0;
    void* valA1 = a2;
    bool cond_0 = *(valA1 + 0x58) <= 0;
    int32_t v_30 = 0;
    int32_t v_2c = 0x41838800;
    int32_t v_28 = 0;
    int32_t v_24 = 0x41838800;
    int32_t v_48_1;
    __builtin_memset(&v_48_1, 0, 0x14);

    if (!cond_0)
    {
        void* v_44;
        int32_t v_38;
        double v_20[0x3];

        while (true)
        {
            void* valA2 = Script_ExecuteLevelScript_23(valA1, dstD);

            if (valA2)
            {
                int32_t valA3 = Physics_SolveConstraints_8();

                if (!(*(valA2 + 0x30) & valA3))
                {
                    Script_CallNativeHandler_23(&v_20, valA2);
                    int32_t tmpD2 = 0;
                    int32_t* srcS1 = &v_38;
                    int32_t* objC1 = &v_44;
                    long double x87_r7_2 = Sys_DispatchOpcode_11(&v_20, a3) - *(valA2 + 0x24) * 4096f;

                    while (true)
                    {
                        if (*objC1)
                        {
                            long double f1_1 = *srcS1;
                            x87_r7_2 - f1_1;

                            if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                            {
                                int32_t saved_dst;
                                memcpy(&(&saved_dst)[tmpD2 + 6],
                                    &(&saved_dst)[tmpD2 + 5], (2 - tmpD2) << 2);
                                int32_t objC3 = (2 - tmpD2) << 3;
                                int32_t srcS5;
                                int32_t dstD3;
                                dstD3 = memcpy(&(&saved_dst)[tmpD2 * 2 + 0xa],
                                    &(&saved_dst)[tmpD2 * 2 + 8], objC3 & 0xfffffffc);
                                memcpy(dstD3, srcS5, objC3 & 3);
                                dstD = v_48_1;
                            }
                            else
                            {
                                tmpD2 += 1;
                                objC1 = &objC1[1];
                                srcS1 = &srcS1[2];

                                if (tmpD2 >= 3)
                                    break;

                                continue;
                            }
                        }

                        if (tmpD2 >= 3)
                            break;

                        *(&v_38 + (tmpD2 << 3)) = x87_r7_2;
                        (&v_44)[tmpD2] = valA2;
                        break;
                    }
                }
            }

            valA1 = a2;
            dstD += 1;
            v_48_1 = dstD;

            if (dstD >= *(valA1 + 0x58))
                break;
        }

        void* srcS2 = v_44;

        if (srcS2)
        {
            Script_CallNativeHandler_23(&v_20, srcS2);
            long double x87_r7_4 = v_38;
            long double f0 = 0.0;
            x87_r7_4 - f0;

            if (!(*(&((x87_r7_4 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0) ? 1 : 0) << 0xa
                | (x87_r7_4 == f0 ? 1 : 0) << 0xe) + 1) & 1))
            {
                *a1 = srcS2;
                return 1;
            }

            *a1 = srcS2;
            return 2;
        }
    }

    return 0;
}
