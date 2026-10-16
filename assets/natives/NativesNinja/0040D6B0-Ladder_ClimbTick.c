#include "0040D6B0-Ladder_ClimbTick.h"
/* 0x0040d6b0 Ladder_ClimbTick full linked: callers=0 callees=9 */
int32_t Ladder_ClimbTick(void* a1, void* a2)

{
    void* ebx = *(a1 + 8);

    if (*(a2 + 0x538) == 8)
    {
        long double x87_r7_1 = *(a2 + 0x540);
        long double temp3_1 = *(a2 + 0xd88);
        x87_r7_1 - temp3_1;

        if (!(*(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            sub_4d6580(a2 + 0x68, 0, 0f);
            int32_t edx_1 = *(a2 + 0xd84);
            int32_t eax_3 = *(a2 + 0xd8c);
            *(a2 + 0xd88) = *(a2 + 0x540);
            int32_t ecx_2 = *(a2 + 0xd80);
            *(a2 + 0xd84) = 0;
            *(a2 + 0xd80) = ecx_2 + edx_1;
            int32_t var_58_1 = *(((eax_3 + 1) << 2) + &g_538c14) + 1;
            *(a2 + 0xd8c) = COMBINE(0, eax_3 + 1) % 0xc;
            char var_20[0x20];
            Game_DataSymbolLoad(&var_20, "walk_ladder_%d");
            struct status_msg* eax_6 = sub_4e6b00(sub_4f0ee0(), &var_20);

            if (eax_6)
                sub_4e6c30(eax_6, a2 + 0x20);

            int32_t eax_7 = *(a2 + 0xfc);
            int32_t var_3c = 0xe;
            int32_t var_38_1 = eax_7;
            int32_t var_34_1 = 0x46;
            int32_t var_30_1 = 0x46a00000;
            int32_t var_2c_1 = sub_4c3440(a2);
            void* var_28_1 = a2;
            void* var_24_1 = a2;
            sub_450ce0(&var_3c);
        }
    }

    int32_t result = *(a2 + 0xd84);

    if (!result)
    {
        if (ebx & 0x80)
        {
            if (*(a2 + 0xd80) == *(a2 + 0xd7c) - 6)
            {
                void* ecx_6 = *(a1 + 4);
                *(a1 + 0xc) = *(a1 + 0x10);
                *(a1 + 0x10) = 0x27;
                int32_t eax_11 = *(ecx_6 + 0x9c);
                *(a1 + 0x14) = eax_11;
                return eax_11(a1, a2);
            }

            *(a2 + 0xd84) = 1;
            result = sub_4d6580(a2 + 0x68, 0, 1f);
        }

        if (*(&ebx + 1) & 1)
        {
            if (!*(a2 + 0xd80))
            {
                *(a2 + 0xd7a) = 1;
                int32_t* ecx_7 = *(a1 + 4);
                *(a1 + 0xc) = *(a1 + 0x10);
                *(a1 + 0x10) = 0;
                int32_t eax_15 = *ecx_7;
                *(a1 + 0x14) = eax_15;
                return eax_15(a1, a2);
            }

            *(a2 + 0xd84) = 0xffffffff;
            result = sub_4d6580(a2 + 0x68, 0, -1f);
        }
    }

    long double x87_r7_2 = *(a2 + 0x1d4);
    long double temp4 = 0f;
    x87_r7_2 - temp4;
    result = (x87_r7_2 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp4) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double x87_r7_3 = *(a2 + 0x134);
        long double temp5_1 = 0f;
        x87_r7_3 - temp5_1;
        result = (x87_r7_3 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp5_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            void* ecx_8 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0x28;
            int32_t eax_18 = *(ecx_8 + 0xa0);
            *(a1 + 0x14) = eax_18;
            return eax_18(a1, a2);
        }
    }

    if (ebx & 0x20000)
        *(a2 + 0xd7a) = 1;

    return result;
}
