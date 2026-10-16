#include "004942A0-Display_Display.h"
/* 0x004942a0 Display_Display full linked: callers=4 callees=13 */
int32_t sub_4942a0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, void* a5, int32_t* a6)

{
    int32_t ebx = a3;

    if (ebx == 0xffffffff)
        ebx = *(a5 + 4);

    int32_t edi = a4;

    if (edi == 0xffffffff)
        edi = *(a5 + 8);

    int32_t eax_2;

    if (sub_48f130())
    {
        ShowCursor(0);
        int32_t ecx_1 = a1;

        if (ecx_1 == 0xffffffff)
            ecx_1 = *(a5 + 0x10);

        int32_t* eax_1 = g_5ca10c;
        eax_2 = (*(*eax_1 + 0x54))(eax_1, ebx, edi, ecx_1, 0, 0);

        if (!eax_2)
            goto label_494336;
    }
    else
    {
        ShowCursor(1);
        HDC hdc = CreateICA("Display", nullptr, nullptr, nullptr);
        GetDeviceCaps(hdc, 0xc);
        DeleteDC(hdc);
    label_494336:
        g_5ca0d8 = ebx;
        g_5ca044 = edi;
        int32_t var_a0;

        if (!sub_48f130())
        {
            __builtin_memset(&var_a0, 0, 0x7c);
            int32_t* eax_10 = g_5ca10c;
            int32_t var_c8_9 = 0;
            var_a0 = 0x7c;
            int32_t var_9c_2 = 1;
            int32_t var_38_2 = 0x80200;
            eax_2 = (*(*eax_10 + 0x18))(eax_10, &var_a0, &g_5ca0fc, var_c8_9);

            if (!eax_2)
            {
                int32_t var_94_1 = g_5ca0d8;
                int32_t* eax_12 = g_5ca0fc;
                int32_t var_98_1 = g_5ca044;
                int32_t var_9c_3 = 7;
                int32_t var_38_3 = 0x82000;
                int32_t var_58 = 0x20;
                int32_t var_54_1 = 0x40;
                int32_t esi_3 = (*(*eax_12 + 0x54))(eax_12, &var_58);

                if (esi_3)
                {
                label_494662:
                    int32_t* eax_36 = g_5ca0fc;
                    (*(*eax_36 + 8))(eax_36);
                    return esi_3;
                }

                int32_t* eax_14 = g_5ca10c;
                int32_t eax_15 = (*(*eax_14 + 0x18))(eax_14, &var_a0, &g_5ca100, esi_3);

                if (eax_15)
                {
                    int32_t* eax_16 = g_5ca0fc;
                    (*(*eax_16 + 8))(eax_16);
                    return eax_15;
                }

            label_4944c4:
                __builtin_memset(&var_a0, 0, 0x7c);
                int32_t i = 4;
                int32_t* edi_1 = &g_534a10;
                int32_t* esi_5 = a6;
                bool cond:3_1 = true;

                while (i)
                {
                    int32_t temp0_1 = *esi_5;
                    int32_t temp1_1 = *edi_1;
                    cond:3_1 = temp0_1 == temp1_1;
                    esi_5 = &esi_5[1];
                    edi_1 = &edi_1[1];
                    i -= 1;

                    if (temp0_1 != temp1_1)
                        break;
                }

                int32_t var_9c_4 = 0x1007;
                bool cond:5_1;

                if (!cond:3_1)
                {
                    int32_t i_1 = 4;
                    int32_t* edi_2 = &g_5349f0;
                    int32_t* esi_6 = a6;
                    cond:5_1 = false;

                    while (i_1)
                    {
                        int32_t temp2_1 = *esi_6;
                        int32_t temp3_1 = *edi_2;
                        cond:5_1 = temp2_1 != temp3_1;
                        esi_6 = &esi_6[1];
                        edi_2 = &edi_2[1];
                        i_1 -= 1;

                        if (temp2_1 != temp3_1)
                            break;
                    }

                    int32_t var_38_4 = 0x24000;
                }

                if (cond:3_1 || !cond:5_1)
                    int32_t var_38_5 = 0x20800;

                int32_t var_98_2 = g_5ca044;
                int32_t var_94_2 = g_5ca0d8;
                void var_24;
                __builtin_memset(&var_24, 0, 0x20);
                int32_t* eax_19 = g_5ca110;
                int32_t var_4_1 = a2;
                var_a0 = 0x7c;
                int32_t eax_20;
                int32_t edx_7;
                eax_20 = (*(*eax_19 + 0x18))(eax_19, a6, sub_494690, &var_24);
                int32_t var_18;

                if (var_18)
                {
                    if (eax_20)
                    {
                        int32_t* eax_22 = g_5ca100;
                        (*(*eax_22 + 8))(eax_22);
                        int32_t* eax_23 = g_5ca0fc;
                        (*(*eax_23 + 8))(eax_23);
                        return eax_20;
                    }

                    int32_t* eax_25 = g_5ca10c;
                    g_bcada4 = edx_7 - edx_7 + 1;
                    int32_t var_c8_17 = 0;
                    memcpy(&var_58, &var_24, 0x20);
                    int32_t eax_26 = (*(*eax_25 + 0x18))(eax_25, &var_a0, &g_5ca104, var_c8_17);
                    int32_t* eax_27 = g_5ca100;
                    int32_t ecx_10 = *eax_27;

                    if (eax_26)
                    {
                        (*(ecx_10 + 8))(eax_27);
                        int32_t* eax_28 = g_5ca0fc;
                        (*(*eax_28 + 8))(eax_28);
                        return eax_26;
                    }

                    esi_3 = (*(ecx_10 + 0xc))(eax_27, g_5ca104);

                    if (!esi_3)
                    {
                        int32_t* eax_31 = g_5ca110;
                        int32_t var_b4;
                        esi_3 = (*(*eax_31 + 0x10))(eax_31, a6, g_5ca100, &var_b4);
                        g_5ca114 = var_b4;

                        if (!esi_3)
                            return 0;

                        int32_t* eax_33 = g_5ca100;
                        (*(*eax_33 + 0x20))(eax_33, 0, g_5ca104);
                    }

                    int32_t* eax_34 = g_5ca104;
                    (*(*eax_34 + 8))(eax_34);
                    int32_t* eax_35 = g_5ca100;
                    (*(*eax_35 + 8))(eax_35);
                }
                else
                {
                    Error_Show("Couldn't find zbuffer format");

                    while (true)
                        /* nop */
                }

                goto label_494662;
            }
        }
        else
        {
            __builtin_memset(&var_a0, 0, 0x7c);
            int32_t var_c8_6 = 0;
            int32_t var_8c_1 = *(a5 + 0xc);
            int32_t* eax_5 = g_5ca10c;
            var_a0 = 0x7c;
            int32_t var_9c_1 = 0x21;
            int32_t var_38_1 = 0x82218;
            eax_2 = (*(*eax_5 + 0x18))(eax_5, &var_a0, &g_5ca0fc, var_c8_6);

            if (!eax_2)
            {
                int32_t var_b0 = eax_2;
                int32_t var_ac_1 = eax_2;
                var_b0 = 0x82004;
                int32_t var_a8_1 = eax_2;
                int32_t var_a4_1 = eax_2;
                int32_t* eax_6 = g_5ca0fc;
                int32_t eax_7 = (*(*eax_6 + 0x30))(eax_6, &var_b0, &g_5ca100);

                if (!eax_7)
                    goto label_4944c4;

                int32_t* eax_8 = g_5ca0fc;
                (*(*eax_8 + 8))(eax_8);
                return eax_7;
            }
        }
    }

    return eax_2;
}
