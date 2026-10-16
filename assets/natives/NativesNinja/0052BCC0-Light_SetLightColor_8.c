#include "0052BCC0-Light_SetLightColor_8.h"
/* 0x0052bcc0 Light_SetLightColor_8 full linked: callers=1 callees=4 */
int32_t sub_52bcc0(int32_t a1, int32_t a2, void* a3)

{
    long double x87_r7 = a2;
    double var_a0 = -(x87_r7);
    double var_bc;
    memcpy(&var_bc, a3, 0x18);
    double var_c8 = x87_r7 * 0.5;
    var_bc = var_bc - var_c8;
    int32_t var_d0 = 0;
    int32_t var_94 = a1;
    double var_b4;
    double var_b4_1 = var_b4 - var_c8;
    int32_t eax_2;
    int32_t edx;
    edx = HIGHD(a2);
    eax_2 = LOWD(a2);
    double var_ac = var_c8 + var_ac;
    int32_t ebx_1 = (eax_2 + (edx & 0xfff)) >> 0xc;

    if (ebx_1 > 0)
    {
        bool cond:1_1;

        do
        {
            int32_t var_cc_1 = 0;

            if (ebx_1 > 0)
            {
                bool cond:2_1;

                do
                {
                    void var_78;
                    sub_4cb9f0(g_a44344, &var_78, &var_bc, 1, &var_a0, 0xff, nullptr,
                        0x80000000);
                    int32_t var_20;

                    if (!var_20)
                        return 2;

                    long double x87_r7_9 = -(var_a0);
                    double var_18;
                    long double temp0_1 = var_18;
                    x87_r7_9 - temp0_1;

                    if (*(&((x87_r7_9 < temp0_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_9, temp0_1) ? 1 : 0) << 0xa
                            | (x87_r7_9 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
                        return 2;

                    int32_t edx_2 = g_a44344;
                    double var_90;
                    void var_70;
                    memcpy(&var_90, &var_70, 0x18);
                    double var_60;
                    double var_80_1 = var_60 + 40.960000000000001;
                    void* var_a4;
                    void var_98;
                    sub_4c9750(edx_2, &var_a4, &var_90, 1, 0xc, &var_98, 0xffffffff);
                    long double x87_r7_12 = *(var_a4 + 0xc);
                    long double temp1_1 = 0f;
                    x87_r7_12 - temp1_1;

                    if (*(&((x87_r7_12 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        return 2;

                    cond:2_1 = var_cc_1 + 1 < ebx_1;
                    var_cc_1 += 1;
                    var_b4_1 = var_b4_1 + 4096.0;
                } while (cond:2_1);
            }

            cond:1_1 = var_d0 + 1 < ebx_1;
            var_d0 += 1;
            var_b4_1 = *(a3 + 8) - var_c8;
            var_bc = var_bc + 4096.0;
        } while (cond:1_1);
    }

    return 1;
}
