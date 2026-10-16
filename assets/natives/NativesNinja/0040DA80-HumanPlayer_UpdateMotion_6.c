#include "0040DA80-HumanPlayer_UpdateMotion_6.h"
/* 0x0040da80 HumanPlayer_UpdateMotion_6 full linked: callers=0 callees=6 */
int32_t* HumanPlayer_UpdateMotion_6(void* a1, void* a2)

{
    int32_t* result = *(a2 + 0x538);
    int32_t ebx = *(a1 + 8);

    if (result == 8)
    {
        long double x87_r7_1 = *(a2 + 0x540);
        long double temp3_1 = *(a2 + 0xd88);
        x87_r7_1 - temp3_1;
        result = (x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            *(a2 + 0xd88) = *(a2 + 0x540);
            int32_t var_50_1 = *((*(a2 + 0xd8c) << 2) + &g_538c18) + 1;
            int32_t eax_1;
            *(a2 + 0xd8c) = COMBINE(0, eax_1 + 1) % 0xc;
            char var_20[0x20];
            Game_DataSymbolLoad(&var_20, "walk_ladder_%d");
            struct status_msg* eax_5 = sub_4e6b00(sub_4f0ee0(), &var_20);

            if (eax_5)
                sub_4e6c30(eax_5, a2 + 0x20);

            int32_t edx_3 = *(a2 + 0xfc);
            int32_t var_3c = 0xe;
            int32_t var_38_1 = edx_3;
            int32_t var_34_1 = 0x46;
            int32_t var_30_1 = 0x46a00000;
            int32_t var_2c_1 = sub_4c3440(a2);
            void* var_28_1 = a2;
            void* var_24_1 = a2;
            result = sub_450ce0(&var_3c);
        }
    }

    result = 1;

    if (!(1 & ebx))
    {
        if (ebx & 0x20000)
            *(a2 + 0xd7a) = 1;

        return result;
    }

    *(a2 + 0xd7a) = 1;
    int32_t* edx_4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_7 = *edx_4;
    *(a1 + 0x14) = eax_7;
    return eax_7(a1, a2);
}
