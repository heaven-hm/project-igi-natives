// Original IGI.EXE function: Display_ClearSurfaces_11 (VA 0x00496860; static CFG gate PASS, CFG score 0.939).
#include "Display_ClearSurfaces_11.h"
int32_t Display_ClearSurfaces_11(int32_t context, int32_t param_2, int32_t param_3)

{
    if (g_6840e9)
    {
        int32_t* data_1 = Display_RestoreDevice_10(context, param_2);

        if (data_1)
        {
            int32_t result = g_6840f8;

            if (result)
            {
                Display_SetDisplayMode_11(result, &g_6840f8);
                *(result + 0xc) = data_1;
                *(result + 8) = param_3;
                int32_t data_2 = data_1[5];

                if (data_2 > 3)
                {
                    Display_SetGammaRamp_8(result, &g_6840f4);
                    return result;
                }

                switch (data_2)
                {
                    case 0:
                    case 2:
                    {
                        int16_t entity_3 = data_1[6];
                        int16_t data_3 = *(data_1 + 0x16);
                        int16_t item_36_1 = entity_3;
                        int16_t item_2a_1 = data_3;
                        int32_t data_6;
                        int32_t temp_2;
                        temp_2 = HIGHD(data_3 * entity_3);
                        data_6 = LOWD(data_3 * entity_3);
                        int32_t dest_1 = data_1[7];
                        int32_t item_34_1 = dest_1;
                        int16_t data_8 = (data_6 + (temp_2 & 7)) >> 3;
                        int32_t temp_6 = data_8 * data_1[7];
                        int32_t item_30_1 = data_8 * dest_1;
                        int32_t item_24;
                        memset(&item_24, 0, 0x24);
                        int16_t item_38;
                        int16_t* item_14_1 = &item_38;
                        int16_t item_28_1 = 0x12;
                        item_38 = 1;
                        item_24 = 0x24;
                        int32_t item_20_1 = 0x100e8;
                        int32_t* data_16 = g_67a498;
                        int32_t item_1c_1 = temp_6 * 0xfa0 / 0x3e8;

                        if ((*(*data_16 + 0xc))(data_16, &item_24, result + 0x10, 0))
                            Display_SetGammaRamp_8(result, &g_6840f8);
                        else
                        {
                            Display_ClearSurfaces_10(result + 0x40, data_1[6]);
                            int32_t* data_19 = QFile_ReadWrite(data_1[0xa], "r");
                            *(result + 0x18) = data_19;

                            if (data_19)
                            {
                                Sys_ExecuteBytecode_4(data_19, 0x14, 0);
                                Sys_ResolveSymbol_4(*(result + 0x18));
                                *(result + 0x3c) = 0;
                                memset(result + 0x20, 0, 0x14);
                                *(result + 0x38) = 0;
                                *(result + 0x1c) = g_c28c5c;
                                int32_t data_25;
                                int32_t temp_12;
                                temp_12 = HIGHD(0x10624dd3 * data_1[7] * 0xfa0);
                                data_25 = LOWD(0x10624dd3 * data_1[7] * 0xfa0);
                                int32_t data_27 = temp_12 >> 6;
                                int32_t data_29;
                                int32_t temp_13;
                                temp_13 = HIGHD(data_27 + (data_27 >> 0x1f));
                                data_29 = LOWD(data_27 + (data_27 >> 0x1f));
                                *(result + 0x34) = (data_29 - temp_13) >> 1;
                                int32_t data_34;
                                int32_t temp_14;
                                temp_14 = HIGHD(0x10624dd3 * data_1[7] * 0xfa0);
                                data_34 = LOWD(0x10624dd3 * data_1[7] * 0xfa0);
                                int32_t temp_15 = temp_14 >> 6;
                                Display_RestoreDevice_11(result, (temp_15 + (temp_15 >> 0x1f)) * 9 / 0xa);
                                Display_SetGammaRamp_8(result, &g_6840f4);
                                return result;
                            }

                            int32_t* dest_3 = *(result + 0x10);
                            (*(*dest_3 + 8))(dest_3);
                            Display_SetGammaRamp_8(result, &g_6840f8);
                        }
                        break;
                    }
                    case 1:
                    case 3:
                    {
                        int32_t* data_38 = g_67a498;

                        if (!(*(*data_38 + 0x14))(data_38, data_1[9], result + 0x10))
                        {
                            Display_SetGammaRamp_8(result, &g_6840f4);
                            return result;
                        }

                        Display_SetGammaRamp_8(result, &g_6840f8);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
