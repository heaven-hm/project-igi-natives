// Original IGI.EXE function: Human_Separation (VA 0x00462BA0; static CFG gate PASS, CFG score 1.000).
#include "Human_Separation.h"
float* Human_Separation(double* a1 @ 0x8, double* a2, float* a3)

{
    int32_t* valA = AI_CombatTarget_18();
    int32_t v_30 = 0;

    if (*valA > 0)
    {
        int32_t* v_34_1 = &valA[2];
        bool cond_1_1;

        do
        {
            void* srcS1 = *v_34_1;
            int16_t valA3;
            valA3 = *(srcS1 + 0xcf6);

            if (valA3)
            {
                valA3 = *(srcS1 + 0xcf5);

                if (!valA3)
                {
                    double v_20 = *a2 - *(srcS1 + 0x20);
                    double v_18_1 = a2[1] - *(srcS1 + 0x28);
                    long double x87_r7_6 = a2[2] - *(srcS1 + 0x30);
                    long double f0_1 = 0.0;
                    x87_r7_6 - f0_1;

                    if (*(&((x87_r7_6 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_6, f0_1) ? 1 : 0) << 0xa
                            | (x87_r7_6 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        x87_r7_6 = -(x87_r7_6);

                    long double f1_1 = 7372.8000000000002;
                    x87_r7_6 - f1_1;
                    valA3 = (x87_r7_6 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe;

                    if (*(&valA3 + 1) & 1)
                    {
                        int32_t v_10_1 = 0;
                        int32_t v_c_1 = 0;
                        long double fp0_1 = Sys_OpenFileStream_11(&v_20);
                        long double f2_1 = 2252.8000000000002;
                        fp0_1 - f2_1;

                        if (*(&((fp0_1 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fp0_1, f2_1) ? 1 : 0) << 0xa
                            | (fp0_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            int32_t v_10_2 = 0;
                            int32_t v_c_2 = 0;
                            v_20 = *a1 - *(srcS1 + 0x20);
                            double v_18_2 = a1[1] - *(srcS1 + 0x28);
                            long double fp0_2 = Sys_OpenFileStream_11(&v_20);
                            long double f3_1 = fp0_1;
                            fp0_2 - f3_1;

                            if (!(*(&((fp0_2 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fp0_2, f3_1) ? 1 : 0) << 0xa
                                | (fp0_2 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                *a2 = *a1;
                                *(a2 + 4) = *(a1 + 4);
                                a2[1] = a1[1];
                                *(a2 + 0xc) = *(a1 + 0xc);
                            }
                        }
                    }
                }
            }

            cond_1_1 = v_30 + 1 < *valA;
            v_30 += 1;
            v_34_1 = &v_34_1[1];
        } while (cond_1_1);
    }

    *a3 = *a2 - *a1;
    a3[1] = a2[1] - a1[1];
    a3[2] = a2[2] - a1[2];
    return a3;
}
