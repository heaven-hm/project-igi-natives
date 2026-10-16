#include "00457430-HumanSoldierRPG_Update.h"
/* 0x00457430 HumanSoldierRPG_Update full linked: callers=0 callees=6 */
uint32_t sub_457430(void* a1, float a2)

{
    void* eax = *(a1 + 0x800);

    if (*(a1 + 0xcf6) && (!eax || !*(eax + 0x3abc)))
    {
        double var_30;
        int32_t ecx_1 = sub_465800(&var_30, *(a1 + 0x4ec));
        double* eax_2 = *(a2 + 4);
        double var_18 = *eax_2 - var_30;
        double var_28;
        double var_10_1 = eax_2[1] - var_28;
        double var_20;
        double var_8_1 = eax_2[2] - var_20;
        long double x87_r7_8 = sub_4b3130(&var_18) - *(a2 + 0xc) * 3f;
        long double temp0_1 = 0f;
        x87_r7_8 - temp0_1;
        long double x87_r7_10;

        if (!(*(&((x87_r7_8 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            x87_r7_10 = 1f - x87_r7_8 / (*(a2 + 0xc) * 6f);
            long double temp1_1 = 0f;
            x87_r7_10 - temp1_1;

            if (!(*(&((x87_r7_10 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double temp2_1 = 0f;
                x87_r7_10 - temp2_1;

                if (!(*(&((x87_r7_10 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_457505;
            }
        }
        else
        {
            x87_r7_10 = 1f;
        label_457505:
            int32_t var_48_2 = ecx_1;
            int32_t var_4c_2 = ecx_1;
            sub_465970(*(a1 + 0x4ec), x87_r7_10 * 204.800003f, x87_r7_10 * 0.0261799395f,
                *(a2 + 0x14));
        }
        *(a1 + 0x2e8) = 0xd;
        int32_t var_44_3 = 1;
        int32_t var_48_5 = sub_489e10(a1 + 0x254, 0xd);
        void* var_50_2 = a1;
        long double st0_2;
        st0_2 = Level_CheckQTaskID_5(a2, a1 + 0x20, *(a1 + 0xa0) * 0.333333343f);
        long double temp3_1 = 0f;
        st0_2 - temp3_1;
        eax = (st0_2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(st0_2, temp3_1) ? 1 : 0) << 0xa
            | (st0_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&eax + 1) & 0x40))
        {
            long double x87_r7_17 = st0_2 * *(a1 + 0x2cc);
            *(a1 + 0x2c8) = x87_r7_17 + *(a1 + 0x2c8);
            long double x87_r7_18 = x87_r7_17 + *(a1 + 0x254);
            *(a1 + 0x254) = x87_r7_18;
            long double temp4 = *(a1 + 0x258);
            x87_r7_18 - temp4;
            int32_t ecx_4 = *(a1 + 0x2f4);

            if (*(&((x87_r7_18 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_18, temp4) ? 1 : 0) << 0xa
                | (x87_r7_18 == temp4 ? 1 : 0) << 0xe) + 1) & 1)
            {
                uint32_t eax_7 = sub_4637c0(a1, "ai_xplhit_", 3);
                *(a1 + 0x2f4) = ecx_4 | 0x10000;
                return eax_7;
            }

            long double x87_r7_19 = *(a1 + 0x20);
            *(a1 + 0xd08) = 0;
            *(a1 + 0xd10) = x87_r7_19 - **(a2 + 4);
            void* eax_8 = *(a2 + 4);
            *(a1 + 0xd18) = *(a1 + 0x28) - *(eax_8 + 8);
            long double x87_r7_24 = *(a1 + 0x30) - *(*(a2 + 4) + 0x10);
            *(a1 + 0xcf5) = 1;
            *(a1 + 0xd20) = x87_r7_24;
            *(a1 + 0x2f4) = ecx_4 | 0x20000;
            return eax_8;
        }
    }

    return eax;
}
