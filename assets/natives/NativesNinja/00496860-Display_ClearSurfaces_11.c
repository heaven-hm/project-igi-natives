#include "00496860-Display_ClearSurfaces_11.h"
/* 0x00496860 Display_ClearSurfaces_11 full linked: callers=1 callees=11 */
int32_t sub_496860(int32_t a1, int32_t a2, int32_t a3)

{
    if (g_6840e9)
    {
        int32_t* eax_1 = sub_496450(a1, a2);

        if (eax_1)
        {
            int32_t result = g_6840f8;

            if (result)
            {
                sub_4966b0(result, &g_6840f8);
                *(result + 0xc) = eax_1;
                *(result + 8) = a3;
                int32_t eax_2 = eax_1[5];

                if (eax_2 > 3)
                {
                    sub_495620(result, &g_6840f4);
                    return result;
                }

                switch (eax_2)
                {
                    case 0:
                    case 2:
                    {
                        int16_t ecx_3 = eax_1[6];
                        int16_t eax_3 = *(eax_1 + 0x16);
                        int16_t var_36_1 = ecx_3;
                        int16_t var_2a_1 = eax_3;
                        int32_t eax_6;
                        int32_t edx_2;
                        edx_2 = HIGHD(eax_3 * ecx_3);
                        eax_6 = LOWD(eax_3 * ecx_3);
                        int32_t edi_1 = eax_1[7];
                        int32_t var_34_1 = edi_1;
                        int16_t eax_8 = (eax_6 + (edx_2 & 7)) >> 3;
                        int32_t edx_6 = eax_8 * eax_1[7];
                        int32_t var_30_1 = eax_8 * edi_1;
                        int32_t var_24;
                        __builtin_memset(&var_24, 0, 0x24);
                        int16_t var_38;
                        int16_t* var_14_1 = &var_38;
                        int16_t var_28_1 = 0x12;
                        var_38 = 1;
                        var_24 = 0x24;
                        int32_t var_20_1 = 0x100e8;
                        int32_t* eax_16 = g_67a498;
                        int32_t var_1c_1 = edx_6 * 0xfa0 / 0x3e8;

                        if ((*(*eax_16 + 0xc))(eax_16, &var_24, result + 0x10, 0))
                            sub_495620(result, &g_6840f8);
                        else
                        {
                            sub_496420(result + 0x40, eax_1[6]);
                            int32_t* eax_19 = QFile_ReadWrite(eax_1[0xa], "r");
                            *(result + 0x18) = eax_19;

                            if (eax_19)
                            {
                                sub_4b1730(eax_19, 0x14, 0);
                                sub_4b17c0(*(result + 0x18));
                                *(result + 0x3c) = 0;
                                __builtin_memset(result + 0x20, 0, 0x14);
                                *(result + 0x38) = 0;
                                *(result + 0x1c) = g_c28c5c;
                                int32_t eax_25;
                                int32_t edx_12;
                                edx_12 = HIGHD(0x10624dd3 * eax_1[7] * 0xfa0);
                                eax_25 = LOWD(0x10624dd3 * eax_1[7] * 0xfa0);
                                int32_t eax_27 = edx_12 >> 6;
                                int32_t eax_29;
                                int32_t edx_13;
                                edx_13 = HIGHD(eax_27 + (eax_27 >> 0x1f));
                                eax_29 = LOWD(eax_27 + (eax_27 >> 0x1f));
                                *(result + 0x34) = (eax_29 - edx_13) >> 1;
                                int32_t eax_34;
                                int32_t edx_14;
                                edx_14 = HIGHD(0x10624dd3 * eax_1[7] * 0xfa0);
                                eax_34 = LOWD(0x10624dd3 * eax_1[7] * 0xfa0);
                                int32_t edx_15 = edx_14 >> 6;
                                sub_496ab0(result, (edx_15 + (edx_15 >> 0x1f)) * 9 / 0xa);
                                sub_495620(result, &g_6840f4);
                                return result;
                            }

                            int32_t* edi_3 = *(result + 0x10);
                            (*(*edi_3 + 8))(edi_3);
                            sub_495620(result, &g_6840f8);
                        }
                        break;
                    }
                    case 1:
                    case 3:
                    {
                        int32_t* eax_38 = g_67a498;

                        if (!(*(*eax_38 + 0x14))(eax_38, eax_1[9], result + 0x10))
                        {
                            sub_495620(result, &g_6840f4);
                            return result;
                        }

                        sub_495620(result, &g_6840f8);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
