#include "0041ED70-ListBox_Setup.h"
/* 0x0041ed70 ListBox_Setup full linked: callers=0 callees=18 */
int32_t ListBox_Setup(void* a1)

{
    void* esi = *(a1 + 0xd4);
    void* edi = *(a1 + 0xd8);
    long double x87_r7_1 = (Menu_FormatScreen_4(*(a1 + 0x44)) - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;
    float var_8c_1;

    var_8c_1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(a1);
    int32_t edx = *(esi + 0x28);
    int32_t eax_8 = *(a1 + 0x20) + 2;
    int32_t ecx_3 = *(a1 + 0x24) + 2;
    *(esi + 0x20) = eax_8;
    *(esi + 0x24) = ecx_3;
    int32_t eax_9 = *(a1 + 0xbec);
    *(edi + 0x24) = ecx_3;
    *(edi + 0x20) = edx + eax_8 + eax_9 + 2;
    void* esi_1 = *(a1 + 0xd4);
    int32_t eax_10 = sub_4e7530();
    int32_t ecx_4 = 0;
    ecx_4 = *(esi_1 + 0x1c);
    (*(((eax_10 * 0x180 + ecx_4) << 2) + &g_a96ae0))(esi_1);
    void* esi_2 = *(a1 + 0xd8);
    int32_t eax_15 = sub_4e7530();
    int32_t eax_16 = 0;
    eax_16 = *(esi_2 + 0x1c);
    (*(((eax_15 * 0x180 + eax_16) << 2) + &g_a96ae0))(esi_2);

    if (*(a1 + 0xbe0))
    {
        int32_t* ebx_3 = *(a1 + 0xbf4);

        if (ebx_3)
        {
            int32_t eax_21 = sub_4b7050(*(*ebx_3 + 8), a1 + *(a1 + 0xbe4) * 0x2c + 0xe4);
            int32_t eax_22 = *(a1 + 0xbe4);
            char (* eax_27)[0x80];

            if (eax_21 <= *(a1 + 0xbec) - 4)
                eax_27 = a1 + eax_22 * 0x2c + 0xe4;
            else
            {
                int32_t i = 0xffffffff;
                void* edi_1 = a1 + eax_22 * 0x2c + 0xe4;

                while (i)
                {
                    bool cond:1_1 = 0 != *edi_1;
                    edi_1 += 1;
                    i -= 1;

                    if (!cond:1_1)
                        break;
                }

                int32_t ecx_9 = ~i;
                char var_80[0x80];
                int32_t esi_4;
                int32_t edi_3;
                edi_3 = memcpy(&var_80, edi_1 - ecx_9, ecx_9 & 0xfffffffc);
                memcpy(edi_3, esi_4, ecx_9 & 3);
                char (* edi_4)[0x80] = &var_80;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond:2_1 = 0 != *edi_4;
                    edi_4 = &(*edi_4)[1];
                    i_1 -= 1;

                    if (!cond:2_1)
                        break;
                }

                int32_t ecx_13 = ~i_1;
                int32_t i_5 = ecx_13 - 1;

                if (ecx_13 != 1)
                {
                    int32_t i_2;

                    do
                    {
                        if (sub_4b7050(*(*ebx_3 + 8), &var_80) <= *(a1 + 0xbec) - 0xc)
                            break;

                        i_2 = i_5;
                        i_5 -= 1;
                        var_80[i_5] = 0;
                    } while (i_2 != 1);
                }

                void* edi_5 = &g_53b6b8;
                int32_t i_3 = 0xffffffff;

                while (i_3)
                {
                    bool cond:4_1 = 0 != *edi_5;
                    edi_5 += 1;
                    i_3 -= 1;

                    if (!cond:4_1)
                        break;
                }

                int32_t ecx_17 = ~i_3;
                char (* edi_7)[0x80] = &var_80;
                int32_t i_4 = 0xffffffff;

                while (i_4)
                {
                    bool cond:5_1 = 0 != *edi_7;
                    edi_7 = &(*edi_7)[1];
                    i_4 -= 1;

                    if (!cond:5_1)
                        break;
                }

                int32_t esi_6;
                int32_t edi_9;
                edi_9 = memcpy(edi_7 - 1, edi_5 - ecx_17, ecx_17 & 0xfffffffc);
                eax_27 = &var_80;
                memcpy(edi_9, esi_6, ecx_17 & 3);
            }

            sub_4b6e90(ebx_3, eax_27);
            int32_t eax_28 = sub_4b7e00(ebx_3);
            int32_t eax_30;
            int32_t edx_12;
            edx_12 = HIGHD(*(a1 + 0x2c) - eax_28);
            eax_30 = LOWD(*(a1 + 0x2c) - eax_28);
            int32_t edi_10 = ((eax_30 - edx_12) >> 1) + *(a1 + 0x24) + 1;
            int32_t eax_33 = sub_4b7df0(ebx_3);
            int32_t eax_35;
            int32_t edx_14;
            edx_14 = HIGHD(*(a1 + 0x28) - eax_33);
            eax_35 = LOWD(*(a1 + 0x28) - eax_33);
            int32_t eax_37 = ((eax_35 - edx_14) >> 1) + *(a1 + 0x20) + (g_c28b44 >> 1) - 0x140;
            int32_t ecx_29 = g_c28b48 >> 1;
            ebx_3[5] = 0;
            ebx_3[7] = 0;
            ebx_3[1] = eax_37;
            int32_t edx_19 = ebx_3[9] | 0x80000;
            ebx_3[6] = 0x43000000;
            ebx_3[9] = edx_19;
            ebx_3[2] = edi_10 + ecx_29 - 0xf0;
            ebx_3[4] = var_8c_1;
            sub_4b6f50(ebx_3);
        }
    }

    return Menu_DrawWidget_14(a1, 0.5f, var_8c_1, *(a1 + 0x4d));
}
