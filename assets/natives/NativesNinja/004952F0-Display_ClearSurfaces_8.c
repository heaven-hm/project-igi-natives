#include "004952F0-Display_ClearSurfaces_8.h"
/* 0x004952f0 Display_ClearSurfaces_8 full linked: callers=1 callees=9 */
int32_t sub_4952f0()

{
    g_6840e9 = 0;
    sub_4955f0(0x5ca1b8);
    g_67a4a0 = 0xffffd8f0;
    int32_t var_b8 = 0x2710;

    for (int32_t* i = &g_6840e0; i > &g_67a4a0; )
    {
        long double st1_1;
        bool c1_1;
        st1_1 = __fyl2x(var_b8 * 0.0001, 0.69314718048553914 + 7.4406171098029793e-11);
        int32_t eax_1 = st1_1 * 1442.6950408888495;

        if (eax_1 < 0xffffd8f0)
            eax_1 = 0xffffd8f0;
        else if (eax_1 > 0)
            eax_1 = 0;

        *i = eax_1;
        i -= 4;
        var_b8 -= 1;
    }

    int32_t eax_2 = Ordinal_DSOUND_1(0, &g_67a498, 0);

    if (!eax_2)
    {
        int32_t esi_3 = **&g_67a498;
        int32_t eax_4 = sub_48f0a0();

        if (!(*(esi_3 + 0x18))(g_67a498, eax_4, 3))
        {
            int32_t* eax_6 = g_67a498;
            int32_t var_60 = 0x60;

            if ((*(*eax_6 + 0x10))(eax_6, &var_60))
            {
                int32_t* eax_8 = g_67a498;
                int32_t eax_9 = (*(*eax_8 + 8))(eax_8);
                g_67a498 = 0;
                return eax_9;
            }

            int32_t var_84;
            __builtin_memset(&var_84, 0, 0x24);
            g_6840ea = 0;
            __builtin_memset(&var_84, 0, 0x24);
            int32_t* eax_10 = g_67a498;
            int32_t var_5c;
            g_543900 = var_5c >> 1 & 1;
            var_84 = 0x24;
            int32_t var_80_1 = 9;

            if ((*(*eax_10 + 0xc))(eax_10, &var_84, &g_5ca154, 0))
            {
                int32_t* eax_12 = g_67a498;
                int32_t eax_13 = (*(*eax_12 + 8))(eax_12);
                g_67a498 = 0;
                return eax_13;
            }

            int32_t* eax_14 = g_5ca154;
            int32_t var_a0 = 0;
            var_a0 = 0x14;
            int32_t var_9c_1 = 0;
            int32_t var_98_1 = 0;
            int32_t var_94_1 = 0;
            int32_t var_90_1 = 0;
            int32_t eax_15 = (*(*eax_14 + 0xc))(eax_14, &var_a0);

            if (!eax_15)
            {
                int32_t var_b0_1 = 0x5622;
                eax_15 = g_543900;
                g_676e50 = 1;
                int32_t eax_17 = var_5c;
                eax_17 &= 8;
                g_5ca134 = 0x20;
                char temp1_1 = eax_17;
                eax_17 = -(eax_17);
                int16_t var_a4_1 = 0x12;
                int16_t var_b4 = 1;
                uint16_t var_a6_1 = ((eax_17 - eax_17) & 8) + 8;
                int16_t var_a8 = ((((eax_17 - eax_17) & 8) + 8) >> 3) * (eax_15 + 1);
                int32_t* eax_26 = g_5ca154;
                uint32_t var_ac_1 = var_a8 * 0x5622;
                bool cond:1_1 = !(*(*eax_26 + 0x38))(eax_26, &var_b4);
                int32_t* eax_28 = g_5ca154;
                int32_t edx_5 = *eax_28;

                if (!cond:1_1)
                {
                    (*(edx_5 + 8))(eax_28);
                    int32_t* eax_29 = g_67a498;
                    int32_t eax_30 = (*(*eax_29 + 8))(eax_29);
                    g_67a498 = 0;
                    return eax_30;
                }

                if (!(*(edx_5 + 0x30))(eax_28, 0, 0, 1))
                {
                    void* eax_35 = Mem_Alloc(g_5ca134 * 0x4c, 4);
                    int32_t eax_36 = g_5ca134;
                    g_6840f0 = eax_35;
                    int32_t esi_4 = 0;
                    int32_t eax_37 = 0;
                    int32_t ecx_18 = eax_36 * 0x4c;
                    __builtin_memset(__builtin_memset(eax_35, 0, ecx_18 & 0xfffffffc), 0,
                        ecx_18 & 3);

                    if (g_5ca134 > 0)
                    {
                        void* edi_2 = nullptr;

                        do
                        {
                            sub_495620(edi_2 + g_6840f0, &g_6840f8);
                            eax_37 = g_5ca134;
                            esi_4 += 1;
                            edi_2 += 0x4c;
                        } while (esi_4 < eax_37);
                    }

                    g_6840f4 = 0;
                    g_6840e9 = 1;
                    return eax_37;
                }
            }

            int32_t* eax_32 = g_5ca154;
            (*(*eax_32 + 8))(eax_32);
        }

        int32_t* eax_33 = g_67a498;
        eax_2 = (*(*eax_33 + 8))(eax_33);
    }

    g_67a498 = 0;
    return eax_2;
}
