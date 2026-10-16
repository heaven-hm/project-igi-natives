#include "0040FBE0-HumanPlayer_ApplyRecoil_8.h"
/* 0x0040fbe0 HumanPlayer_ApplyRecoil_8 full linked: callers=0 callees=10 */
int32_t* HumanPlayer_ApplyRecoil_8(void* a1, struct collision_set* a2)

{
    int32_t ebx = *(a2 + 0x4ec);
    struct collision_set* eax_1 = HumanPlayer_LoadParameters_13(Table_GetAt(a2 + 0x4c4, 0));
    long double x87_r7 = *(a2 + 0x1c8);
    long double temp1 = 0f;
    x87_r7 - temp1;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        sub_4d61d0(ebx + 0x68, 0,
            *(HumanPlayer_LoadParameters_13(Table_GetAt(a2 + 0x4c4, 0)) + 0x68c), 0, 0f);
        *(a1 + 0x14) = sub_40fd70;
    }

    int32_t eax_6 = *(a2 + 0xd6c);
    int32_t* eax_8;

    if (eax_6)
    {
        eax_8 = eax_6 - 1;
        *(a2 + 0xd6c) = eax_8;
    }
    else
    {
        eax_8 = sub_47cee0(&a2[0x10], sub_47cda0("AMMO_ID_MEDIPACK"));

        if (eax_8)
        {
            int32_t edx_2 = eax_8[1];

            if (edx_2)
            {
                long double x87_r7_1 = *(a2 + 0x254);
                long double temp2_1 = 0f;
                x87_r7_1 - temp2_1;

                if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                    float* eax_10 = *(eax_1 + 0x6e4);
                    eax_8[1] = edx_2 - 1;
                    long double x87_r7_4 = *(a2 + 0x254) - *(a2 + 0x258) * *eax_10;
                    long double temp3 = 0f;
                    x87_r7_4 - temp3;
                    *(a2 + 0x254) = x87_r7_4;
                    bool c1 = /* bool c1 = unknown  {fst dword [esi+0x254], st0} */;

                    if (!(*(&((x87_r7_4 < temp3 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                        | (FCMP_UO(x87_r7_4, temp3) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double x87_r6_1 = *(a2 + 0x258);
                        x87_r7_4 - x87_r6_1;

                        if (!(*(&((x87_r7_4 < x87_r6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_4, x87_r6_1) ? 1 : 0) << 0xa
                                | (x87_r7_4 == x87_r6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                            *(a2 + 0x254) = *(a2 + 0x258);
                    }
                    else
                        *(a2 + 0x254) = 0;

                    int32_t var_8 = 60.0 / *(eax_1 + 0x644) * 30.0;
                    *(a2 + 0xd6c) = var_8;
                    return var_8;
                }
            }

            int32_t eax_15 = sub_4d61d0(ebx + 0x68, 0,
                *(HumanPlayer_LoadParameters_13(Table_GetAt(a2 + 0x4c4, 0)) + 0x68c), 0, 0f);
            *(a1 + 0x14) = sub_40fd70;
            return eax_15;
        }
    }

    return eax_8;
}
