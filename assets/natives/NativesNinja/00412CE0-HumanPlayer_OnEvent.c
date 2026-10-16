#include "00412CE0-HumanPlayer_OnEvent.h"
/* 0x00412ce0 HumanPlayer_OnEvent full linked: callers=0 callees=27 */
int32_t HumanPlayer_OnEvent(float a1, float* a2)

{
    float edi = a1;
    char result = *(edi + 0xcf6);

    if (result)
    {
        int32_t* eax = Config_GetActivePlayerProfileRecord();

        if (!eax)
            return Warning_Show("No active playerprofile found");

        double var_18_1 = *(edi + 0x7c) * 4096.0;
        double var_10_1 = *(edi + 0x88) * 4096.0;
        double var_8_1 = *(edi + 0x94) * 4096.0;
        double* eax_2 = sub_4c3440(edi);
        double* eax_4 = sub_4c3440(a2[1]);
        double var_30 = *eax_2 - *eax_4;
        void* eax_5 = sub_4c3440(edi);
        void* eax_6 = sub_4c3440(a2[1]);
        double var_28_1 = *(eax_5 + 8) - *(eax_6 + 8);
        void* eax_7 = sub_4c3440(edi);
        void* eax_8 = sub_4c3440(a2[1]);
        double var_20_1 = *(eax_7 + 0x10) - *(eax_8 + 0x10);
        sub_4b3100(&var_30);
        int32_t ebx_4 = 0xe;
        long double x87_r7_16 = var_20_1 * var_8_1 + var_28_1 * var_10_1 + var_30 * var_18_1;
        long double temp0_1 = 0.0;
        x87_r7_16 - temp0_1;

        if (*(&((x87_r7_16 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
            ebx_4 = 0xd;

        *(edi + 0x2e8) = ebx_4;
        sub_489e10(edi + 0x254, ebx_4);
        int32_t ecx_3 = *eax;
        a1 = (edi + 0x254)[ebx_4 * 2 + 4] * *a2;

        if (!ecx_3)
            a1 = a1 * 0.75f;
        else if (ecx_3 != 1)
        {
            if (ecx_3 == 2)
                a1 = a1 * 1.25f;
            else
            {
                int32_t var_48_3 = ecx_3;
                Warning_Show("Difficulty level not defined %d");
            }
        }

        if (!Human_HitDamage())
        {
            (edi + 0x254)[ebx_4 * 2 + 3] = a1 + (edi + 0x254)[ebx_4 * 2 + 3];
            *(edi + 0x254) = a1 + *(edi + 0x254);
        }

        if (!*(edi + 0xcf5))
        {
            sub_4637c0(edi, "player_hit_", 4);
            void* __saved_ebp_1;
            char* __saved_ebx_1;

            if (!(sub_4b4740(Level_SetMission_5()) & 1))
            {
                __saved_ebx_1 = "punched_02";
                __saved_ebp_1 = *(edi + 0x4ec);
            }
            else
            {
                __saved_ebx_1 = "punched_01";
                __saved_ebp_1 = *(edi + 0x4ec);
            }

            sub_4e6b00(__saved_ebp_1, __saved_ebx_1);
        }

        int32_t __saved_ebp_4;
        long double st0_1;
        st0_1 = sub_4b4770(Level_SetMission_5());
        long double x87_r7_26 = st0_1;
        long double temp4_1 = 0.25f;
        x87_r7_26 - temp4_1;

        if (!(*(&((x87_r7_26 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double temp5_1 = 1f;
            x87_r7_26 - temp5_1;

            if (!(*(&((x87_r7_26 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                x87_r7_26 = 1f;
        }
        else
            x87_r7_26 = 0.25f;

        int32_t __saved_ebp_2 = __saved_ebp_4;
        int32_t __saved_ebp_5 = __saved_ebp_4;
        sub_465970(*(edi + 0x4ec), x87_r7_26 * 204.800003f, x87_r7_26 * 0.0130899698f, 0xf);
        *(edi + 0xdcc) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        *(edi + 0xdd0) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        *(edi + 0xdd4) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
        long double st0_5;
        st0_5 = sub_4b4770(Level_SetMission_5());
        *(edi + 0xdd8) = (st0_5 + 1.0) * 0.40000000000000002;
    }

    return result;
}
