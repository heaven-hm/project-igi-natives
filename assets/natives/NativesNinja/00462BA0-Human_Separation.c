#include "00462BA0-Human_Separation.h"
/* 0x00462ba0 Human_Separation full linked: callers=1 callees=3 */
float* sub_462ba0(double* a1 @ 0x8, double* a2, float* a3)

{
    int32_t* eax = sub_460c60();
    int32_t var_30 = 0;

    if (*eax > 0)
    {
        int32_t* var_34_1 = &eax[2];
        bool cond:1_1;

        do
        {
            void* esi_1 = *var_34_1;
            int16_t eax_3;
            eax_3 = *(esi_1 + 0xcf6);

            if (eax_3)
            {
                eax_3 = *(esi_1 + 0xcf5);

                if (!eax_3)
                {
                    double var_20 = *a2 - *(esi_1 + 0x20);
                    double var_18_1 = a2[1] - *(esi_1 + 0x28);
                    long double x87_r7_6 = a2[2] - *(esi_1 + 0x30);
                    long double temp0_1 = 0.0;
                    x87_r7_6 - temp0_1;

                    if (*(&((x87_r7_6 < temp0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_6, temp0_1) ? 1 : 0) << 0xa
                            | (x87_r7_6 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        x87_r7_6 = -(x87_r7_6);

                    long double temp1_1 = 7372.8000000000002;
                    x87_r7_6 - temp1_1;
                    eax_3 = (x87_r7_6 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe;

                    if (*(&eax_3 + 1) & 1)
                    {
                        int32_t var_10_1 = 0;
                        int32_t var_c_1 = 0;
                        long double st0_1 = sub_4b3130(&var_20);
                        long double temp2_1 = 2252.8000000000002;
                        st0_1 - temp2_1;

                        if (*(&((st0_1 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(st0_1, temp2_1) ? 1 : 0) << 0xa
                            | (st0_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            int32_t var_10_2 = 0;
                            int32_t var_c_2 = 0;
                            var_20 = *a1 - *(esi_1 + 0x20);
                            double var_18_2 = a1[1] - *(esi_1 + 0x28);
                            long double st0_2 = sub_4b3130(&var_20);
                            long double temp3_1 = st0_1;
                            st0_2 - temp3_1;

                            if (!(*(&((st0_2 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(st0_2, temp3_1) ? 1 : 0) << 0xa
                                | (st0_2 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
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

            cond:1_1 = var_30 + 1 < *eax;
            var_30 += 1;
            var_34_1 = &var_34_1[1];
        } while (cond:1_1);
    }

    *a3 = *a2 - *a1;
    a3[1] = a2[1] - a1[1];
    a3[2] = a2[2] - a1[2];
    return a3;
}
