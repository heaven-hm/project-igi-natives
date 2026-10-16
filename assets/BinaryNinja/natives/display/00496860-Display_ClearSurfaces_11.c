#include "Display_ClearSurfaces_11.h"
int32_t Display_ClearSurfaces_11(int32_t a1, int32_t a2, int32_t a3)

{
    if (g_6840e9)
    {
        int32_t* valA1 = Display_RestoreDevice_10(a1, a2);

        if (valA1)
        {
            int32_t result = g_6840f8;

            if (result)
            {
                Display_SetDisplayMode_11(result, &g_6840f8);
                *(result + 0xc) = valA1;
                *(result + 8) = a3;
                int32_t valA2 = valA1[5];

                if (valA2 > 3)
                {
                    Display_SetGammaRamp_8(result, &g_6840f4);
                    return result;
                }

                switch (valA2)
                {
                    case 0:
                    case 2:
                    {
                        int16_t objC3 = valA1[6];
                        int16_t valA3 = *(valA1 + 0x16);
                        int16_t v_36_1 = objC3;
                        int16_t v_2a_1 = valA3;
                        int32_t valA6;
                        int32_t tmpD2;
                        tmpD2 = HIGHD(valA3 * objC3);
                        valA6 = LOWD(valA3 * objC3);
                        int32_t dstD1 = valA1[7];
                        int32_t v_34_1 = dstD1;
                        int16_t valA8 = (valA6 + (tmpD2 & 7)) >> 3;
                        int32_t tmpD6 = valA8 * valA1[7];
                        int32_t v_30_1 = valA8 * dstD1;
                        int32_t v_24;
                        __builtin_memset(&v_24, 0, 0x24);
                        int16_t v_38;
                        int16_t* v_14_1 = &v_38;
                        int16_t v_28_1 = 0x12;
                        v_38 = 1;
                        v_24 = 0x24;
                        int32_t v_20_1 = 0x100e8;
                        int32_t* valA16 = g_67a498;
                        int32_t v_1c_1 = tmpD6 * 0xfa0 / 0x3e8;

                        if ((*(*valA16 + 0xc))(valA16, &v_24, result + 0x10, 0))
                            Display_SetGammaRamp_8(result, &g_6840f8);
                        else
                        {
                            Display_ClearSurfaces_10(result + 0x40, valA1[6]);
                            int32_t* valA19 = QFile_ReadWrite(valA1[0xa], "r");
                            *(result + 0x18) = valA19;

                            if (valA19)
                            {
                                Sys_ExecuteBytecode_4(valA19, 0x14, 0);
                                Sys_ResolveSymbol_4(*(result + 0x18));
                                *(result + 0x3c) = 0;
                                __builtin_memset(result + 0x20, 0, 0x14);
                                *(result + 0x38) = 0;
                                *(result + 0x1c) = g_c28c5c;
                                int32_t valA25;
                                int32_t tmpD12;
                                tmpD12 = HIGHD(0x10624dd3 * valA1[7] * 0xfa0);
                                valA25 = LOWD(0x10624dd3 * valA1[7] * 0xfa0);
                                int32_t valA27 = tmpD12 >> 6;
                                int32_t valA29;
                                int32_t tmpD13;
                                tmpD13 = HIGHD(valA27 + (valA27 >> 0x1f));
                                valA29 = LOWD(valA27 + (valA27 >> 0x1f));
                                *(result + 0x34) = (valA29 - tmpD13) >> 1;
                                int32_t valA34;
                                int32_t tmpD14;
                                tmpD14 = HIGHD(0x10624dd3 * valA1[7] * 0xfa0);
                                valA34 = LOWD(0x10624dd3 * valA1[7] * 0xfa0);
                                int32_t tmpD15 = tmpD14 >> 6;
                                Display_RestoreDevice_11(result, (tmpD15 + (tmpD15 >> 0x1f)) * 9 / 0xa);
                                Display_SetGammaRamp_8(result, &g_6840f4);
                                return result;
                            }

                            int32_t* dstD3 = *(result + 0x10);
                            (*(*dstD3 + 8))(dstD3);
                            Display_SetGammaRamp_8(result, &g_6840f8);
                        }
                        break;
                    }
                    case 1:
                    case 3:
                    {
                        int32_t* valA38 = g_67a498;

                        if (!(*(*valA38 + 0x14))(valA38, valA1[9], result + 0x10))
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
