#include "Terrain_BuildMipMaps_2.h"
uint32_t Terrain_BuildMipMaps_2(char a1 @ 0x24, char a2 @ 0x64, int32_t a3 @ 0xa4, int32_t* a4 @ 0xc4)

{
    void arg_44;
    void* v_40 = &arg_44;
    g_a7e070 += 1;
    char objC2 = a1;
    void arg_4;
    void* v_44 = &arg_4;
    void arg_84;
    void* v_3c = &arg_84;
    int32_t tmpD = a3;
    uint32_t valA1 = objC2;
    uint32_t dstD1 = a2;
    uint32_t srcS1 = tmpD;
    uint32_t ctxB2 = valA1 | dstD1 | srcS1;
    uint32_t flagP2 = valA1 & dstD1 & srcS1;
    uint32_t v_a0 = flagP2;

    if (flagP2)
    {
        g_a7e070 -= 1;
        return valA1;
    }

    void v_174;
    void v_134;
    void v_f4;
    float v_90;
    float v_8c;
    float v_88;
    float v_68;
    float v_64;
    float v_60;
    float v_5c;
    float v_58;
    float v_54;
    uint32_t v_50;

    if (ctxB2 & 0x10)
    {
        void** srcS3 = &v_44;
        int32_t valA5;
        int32_t tmpD1;
        tmpD1 = HIGHD((valA1 & 0x10) + (dstD1 & 0x10) + (srcS1 & 0x10));
        valA5 = LOWD((valA1 & 0x10) + (dstD1 & 0x10) + (srcS1 & 0x10));
        int32_t i_5 = 3;
        void v_30;
        float* tmpD3 = &v_30;
        int32_t valA7 = (valA5 + (tmpD1 & 0xf)) >> 4;
        int32_t v_48_1 = valA7;
        int32_t i;

        do
        {
            float* objC3 = *srcS3;
            objC3[9] = tmpD3;

            if (objC3[8] & 0x10)
            {
                *tmpD3 = *objC3;
                tmpD3[1] = objC3[1];
                tmpD3[2] = objC3[2];
                valA7 = v_48_1;
            }
            else
            {
                tmpD3[2] = 1f / objC3[2];
                *tmpD3 = (*objC3 - g_c311b0) / (g_c311a4 * objC3[2]);
                tmpD3[1] = (objC3[1] - g_c311b4) / (g_c311a0 * objC3[2]);
            }

            int32_t v_94_1 = 0;
            int32_t v_9c_1 = 0;
            int32_t v_34_1 = 0;
            int32_t v_4c_1 = 0;
            tmpD3 = &tmpD3[3];
            srcS3 = &srcS3[1];
            objC3[0xa] = objC3[4] >> 0x10;
            objC3[0xb] = objC3[4] >> 8;
            objC3[0xc] = objC3[4];
            objC3[0xd] = objC3[6];
            objC3[0xe] = objC3[7];
            v_50 = objC3[5] >> 0x18;
            i = i_5;
            i_5 -= 1;
            objC3[0xf] = v_50;
        } while (i != 1);

        if (valA7 != 2)
        {
            void* valA27;
            float* tmpD16;
            void* flagP5;

            if (a1 & 0x10)
            {
                valA27 = &arg_44;
                flagP5 = &arg_84;
                tmpD16 = &arg_4;
            }
            else if (!(a2 & 0x10))
            {
                valA27 = &arg_4;
                flagP5 = &arg_44;
                tmpD16 = &arg_84;
            }
            else
            {
                valA27 = &arg_84;
                flagP5 = &arg_4;
                tmpD16 = &arg_44;
            }

            memcpy(&v_90, tmpD16, 0x40);
            long double x87_r7_59 = g_bcadc0;
            float v_c;
            int32_t* v_6c_1 = &v_c;
            int32_t* objC8 = tmpD16[9];
            v_c = *objC8;
            float srcS7 = objC8[1];
            float objC9 = objC8[2];
            float* objC10 = *(valA27 + 0x24);
            float* srcS8 = tmpD16[9];
            long double x87_r7_61 = (x87_r7_59 - objC10[2]) / (srcS8[2] - objC10[2]);
            *srcS8 = (*srcS8 - *objC10) * x87_r7_61 + *objC10;
            void* objC11 = tmpD16[9];
            void* srcS9 = *(valA27 + 0x24);
            *(objC11 + 4) = (*(objC11 + 4) - *(srcS9 + 4)) * x87_r7_61 + *(srcS9 + 4);
            void* objC12 = tmpD16[9];
            void* srcS10 = *(valA27 + 0x24);
            *(objC12 + 8) = (*(objC12 + 8) - *(srcS10 + 8)) * x87_r7_61 + *(srcS10 + 8);
            tmpD16[0xa] = (tmpD16[0xa] - *(valA27 + 0x28)) * x87_r7_61 + *(valA27 + 0x28);
            tmpD16[0xb] = (tmpD16[0xb] - *(valA27 + 0x2c)) * x87_r7_61 + *(valA27 + 0x2c);
            tmpD16[0xc] = (tmpD16[0xc] - *(valA27 + 0x30)) * x87_r7_61 + *(valA27 + 0x30);
            tmpD16[0xd] = (tmpD16[0xd] - *(valA27 + 0x34)) * x87_r7_61 + *(valA27 + 0x34);
            tmpD16[0xe] = (tmpD16[0xe] - *(valA27 + 0x38)) * x87_r7_61 + *(valA27 + 0x38);
            tmpD16[0xf] = (tmpD16[0xf] - *(valA27 + 0x3c)) * x87_r7_61 + *(valA27 + 0x3c);
            float* valA28 = tmpD16[9];
            char v_98_4 = 1;
            long double x87_r7_64 = 1f / valA28[2];
            tmpD16[2] = x87_r7_64;
            *tmpD16 = x87_r7_64 * *valA28 * g_c311a4 + g_c311b0;
            tmpD16[1] = valA28[1] * tmpD16[2] * g_c311a0 + g_c311b4;
            long double x87_r7_72 = *tmpD16;
            long double f15_1 = g_bcabd0;
            x87_r7_72 - f15_1;

            if (!(*(&((x87_r7_72 < f15_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_72, f15_1) ? 1 : 0) << 0xa
                    | (x87_r7_72 == f15_1 ? 1 : 0) << 0xe) + 1) & 1))
                v_98_4 = 0;

            long double x87_r7_73 = tmpD16[1];
            long double f18_1 = g_bcabd4;
            x87_r7_73 - f18_1;
            char ctxB23;

            ctxB23 = !(*(&((x87_r7_73 < f18_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_73, f18_1) ? 1 : 0) << 0xa
                | (x87_r7_73 == f18_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_74 = *tmpD16;
            long double f25_1 = g_bcabd8;
            x87_r7_74 - f25_1;
            char objC13;

            objC13 = *(&((x87_r7_74 < f25_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_74, f25_1) ? 1 : 0) << 0xa
                | (x87_r7_74 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_75 = tmpD16[1];
            long double f30_1 = g_bcabdc;
            x87_r7_75 - f30_1;
            char valA30;

            valA30 = *(&((x87_r7_75 < f30_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_75, f30_1) ? 1 : 0) << 0xa
                | (x87_r7_75 == f30_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            tmpD16[8] = ((valA30 << 1 | objC13) << 1 | ctxB23) << 1 | v_98_4;
            float* valA32 = *(flagP5 + 0x24);
            long double x87_r7_78 = (g_bcadc0 - valA32[2]) / (objC9 - valA32[2]);
            v_c = (v_c - *valA32) * x87_r7_78 + *valA32;
            void* valA33 = *(flagP5 + 0x24);
            float v_8_2 = (srcS7 - *(valA33 + 4)) * x87_r7_78 + *(valA33 + 4);
            void* valA34 = *(flagP5 + 0x24);
            float v_68_1 = (v_68 - *(flagP5 + 0x28)) * x87_r7_78 + *(flagP5 + 0x28);
            float v_64_1 = (v_64 - *(flagP5 + 0x2c)) * x87_r7_78 + *(flagP5 + 0x2c);
            float v_60_1 = (v_60 - *(flagP5 + 0x30)) * x87_r7_78 + *(flagP5 + 0x30);
            float v_5c_1 = (v_5c - *(flagP5 + 0x34)) * x87_r7_78 + *(flagP5 + 0x34);
            float v_58_1 = (v_58 - *(flagP5 + 0x38)) * x87_r7_78 + *(flagP5 + 0x38);
            long double x87_r7_80 = x87_r7_78 * (v_54 - *(flagP5 + 0x3c)) + *(flagP5 + 0x3c);
            long double x87_r6_156 = 1f / ((objC9 - *(valA34 + 8)) * x87_r7_78 + *(valA34 + 8));
            v_88 = x87_r6_156;
            long double x87_r6_159 = x87_r6_156 * v_c * g_c311a4 + g_c311b0;
            v_90 = x87_r6_159;
            long double x87_r5_4 = v_88 * v_8_2 * g_c311a0 + g_c311b4;
            char v_98_5 = 1;
            v_8c = x87_r5_4;
            long double f35_1 = g_bcabd0;
            x87_r6_159 - f35_1;

            if (!(*(&((x87_r6_159 < f35_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_159, f35_1) ? 1 : 0) << 0xa
                    | (x87_r6_159 == f35_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1))
                v_98_5 = 0;

            long double f37_1 = g_bcabd4;
            x87_r5_4 - f37_1;
            char ctxB24;

            ctxB24 = !(*(&((x87_r5_4 < f37_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_4, f37_1) ? 1 : 0) << 0xa
                | (x87_r5_4 == f37_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) ? 0 : 1;

            long double f39_1 = g_bcabd8;
            x87_r6_159 - f39_1;
            char objC15;

            objC15 = *(&((x87_r6_159 < f39_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_159, f39_1) ? 1 : 0) << 0xa
                | (x87_r6_159 == f39_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            long double x87_r6_160 = v_8c;
            long double f41_1 = g_bcabdc;
            x87_r6_160 - f41_1;
            char valA36;

            valA36 = *(&((x87_r6_160 < f41_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_160, f41_1) ? 1 : 0) << 0xa
                | (x87_r6_160 == f41_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            char v_70_1 = ((valA36 << 1 | objC15) << 1 | ctxB24) << 1 | v_98_5;
            uint32_t valA39 = a1;
            uint32_t srcS12 = a2;
            uint32_t objC17 = a3;
            ctxB2 = valA39 | srcS12 | objC17;
            void** objC18 = &v_44;
            int32_t i_4 = 3;
            int32_t i_1;

            do
            {
                void* valA42 = *objC18;
                objC18 = &objC18[1];
                i_1 = i_4;
                i_4 -= 1;
                *(valA42 + 0x28) = *(valA42 + 8) * *(valA42 + 0x28);
                *(valA42 + 0x2c) = *(valA42 + 8) * *(valA42 + 0x2c);
                *(valA42 + 0x30) = *(valA42 + 8) * *(valA42 + 0x30);
                *(valA42 + 0x34) = *(valA42 + 8) * *(valA42 + 0x34);
                *(valA42 + 0x38) = *(valA42 + 8) * *(valA42 + 0x38);
                *(valA42 + 0x3c) = *(valA42 + 8) * *(valA42 + 0x3c);
            } while (i_1 != 1);
            int32_t* v_b4_1 = a4;
            v_68 = v_88 * v_68_1;
            memcpy(&v_f4, tmpD16, 0x40);
            v_64 = v_88 * v_64_1;
            v_60 = v_88 * v_60_1;
            v_5c = v_88 * v_5c_1;
            v_58 = v_88 * v_58_1;
            v_54 = v_88 * x87_r7_80;
            memcpy(&v_134, &v_90, 0x40);
            memcpy(&v_174, flagP5, 0x40);
            valA1 = Terrain_BuildMipMaps_2();
            tmpD = a3;
            objC2 = a1;
            flagP2 = valA39 & srcS12 & objC17;
        }
        else
        {
            void* valA11;
            float* objC4;
            float* srcS4;
            void* dstD3;

            if (!(a1 & 0x10))
            {
                valA11 = &arg_4;
                dstD3 = &arg_4;
                srcS4 = &arg_44;
                objC4 = &arg_84;
            }
            else if (a2 & 0x10)
            {
                valA11 = &arg_84;
                dstD3 = &arg_84;
                srcS4 = &arg_4;
                objC4 = &arg_44;
            }
            else
            {
                valA11 = &arg_44;
                dstD3 = &arg_44;
                srcS4 = &arg_84;
                objC4 = &arg_4;
            }

            float* tmpD4 = *(valA11 + 0x24);
            float* ctxB16 = srcS4[9];
            long double x87_r7_15 = (g_bcadc0 - tmpD4[2]) / (ctxB16[2] - tmpD4[2]);
            *ctxB16 = (*ctxB16 - *tmpD4) * x87_r7_15 + *tmpD4;
            void* tmpD5 = srcS4[9];
            void* ctxB17 = *(valA11 + 0x24);
            *(tmpD5 + 4) = (*(tmpD5 + 4) - *(ctxB17 + 4)) * x87_r7_15 + *(ctxB17 + 4);
            void* tmpD6 = srcS4[9];
            void* ctxB18 = *(valA11 + 0x24);
            *(tmpD6 + 8) = (*(tmpD6 + 8) - *(ctxB18 + 8)) * x87_r7_15 + *(ctxB18 + 8);
            srcS4[0xa] = (srcS4[0xa] - *(valA11 + 0x28)) * x87_r7_15 + *(valA11 + 0x28);
            srcS4[0xb] = (srcS4[0xb] - *(valA11 + 0x2c)) * x87_r7_15 + *(valA11 + 0x2c);
            srcS4[0xc] = (srcS4[0xc] - *(valA11 + 0x30)) * x87_r7_15 + *(valA11 + 0x30);
            srcS4[0xd] = (srcS4[0xd] - *(valA11 + 0x34)) * x87_r7_15 + *(valA11 + 0x34);
            srcS4[0xe] = (srcS4[0xe] - *(valA11 + 0x38)) * x87_r7_15 + *(valA11 + 0x38);
            float* valA12 = srcS4[9];
            srcS4[0xf] = (srcS4[0xf] - *(valA11 + 0x3c)) * x87_r7_15 + *(valA11 + 0x3c);
            long double x87_r7_18 = 1f / valA12[2];
            srcS4[2] = x87_r7_18;
            *srcS4 = x87_r7_18 * g_c311a4 * *valA12 + g_c311b0;
            srcS4[1] = g_c311a0 * valA12[1] * srcS4[2] + g_c311b4;
            long double x87_r7_26 = *srcS4;
            long double f6_1 = g_bcabd0;
            x87_r7_26 - f6_1;
            char v_98_2 = 1;

            if (!(*(&((x87_r7_26 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_26, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                v_98_2 = 0;

            long double x87_r7_27 = srcS4[1];
            long double f10_1 = g_bcabd4;
            x87_r7_27 - f10_1;
            char ctxB19;

            ctxB19 = !(*(&((x87_r7_27 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_27, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_27 == f10_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_28 = *srcS4;
            long double f19_1 = g_bcabd8;
            x87_r7_28 - f19_1;
            char tmpD7;

            tmpD7 = *(&((x87_r7_28 < f19_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_28, f19_1) ? 1 : 0) << 0xa
                | (x87_r7_28 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_29 = srcS4[1];
            long double f26_1 = g_bcabdc;
            x87_r7_29 - f26_1;
            char valA14;

            valA14 = *(&((x87_r7_29 < f26_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_29, f26_1) ? 1 : 0) << 0xa
                | (x87_r7_29 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            srcS4[8] = ((valA14 << 1 | tmpD7) << 1 | ctxB19) << 1 | v_98_2;
            float* valA16 = *(dstD3 + 0x24);
            float* tmpD9 = objC4[9];
            long double x87_r7_32 = (g_bcadc0 - valA16[2]) / (tmpD9[2] - valA16[2]);
            *tmpD9 = (*tmpD9 - *valA16) * x87_r7_32 + *valA16;
            void* valA17 = objC4[9];
            void* tmpD10 = *(dstD3 + 0x24);
            *(valA17 + 4) = (*(valA17 + 4) - *(tmpD10 + 4)) * x87_r7_32 + *(tmpD10 + 4);
            void* valA18 = objC4[9];
            void* tmpD11 = *(dstD3 + 0x24);
            *(valA18 + 8) = (*(valA18 + 8) - *(tmpD11 + 8)) * x87_r7_32 + *(tmpD11 + 8);
            float* valA19 = objC4[9];
            objC4[0xa] = (objC4[0xa] - *(dstD3 + 0x28)) * x87_r7_32 + *(dstD3 + 0x28);
            objC4[0xb] = (objC4[0xb] - *(dstD3 + 0x2c)) * x87_r7_32 + *(dstD3 + 0x2c);
            objC4[0xc] = (objC4[0xc] - *(dstD3 + 0x30)) * x87_r7_32 + *(dstD3 + 0x30);
            objC4[0xd] = (objC4[0xd] - *(dstD3 + 0x34)) * x87_r7_32 + *(dstD3 + 0x34);
            objC4[0xe] = (objC4[0xe] - *(dstD3 + 0x38)) * x87_r7_32 + *(dstD3 + 0x38);
            objC4[0xf] = (objC4[0xf] - *(dstD3 + 0x3c)) * x87_r7_32 + *(dstD3 + 0x3c);
            long double x87_r7_35 = 1f / valA19[2];
            objC4[2] = x87_r7_35;
            char v_98_3 = 1;
            *objC4 = x87_r7_35 * *valA19 * g_c311a4 + g_c311b0;
            objC4[1] = valA19[1] * objC4[2] * g_c311a0 + g_c311b4;
            long double x87_r7_43 = *objC4;
            long double f31_1 = g_bcabd0;
            x87_r7_43 - f31_1;

            if (!(*(&((x87_r7_43 < f31_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_43, f31_1) ? 1 : 0) << 0xa
                    | (x87_r7_43 == f31_1 ? 1 : 0) << 0xe) + 1) & 1))
                v_98_3 = 0;

            long double x87_r7_44 = objC4[1];
            long double f34_1 = g_bcabd4;
            x87_r7_44 - f34_1;
            char ctxB20;

            ctxB20 = !(*(&((x87_r7_44 < f34_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_44, f34_1) ? 1 : 0) << 0xa
                | (x87_r7_44 == f34_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_45 = *objC4;
            long double f38_1 = g_bcabd8;
            x87_r7_45 - f38_1;
            char tmpD12;

            tmpD12 = *(&((x87_r7_45 < f38_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_45, f38_1) ? 1 : 0) << 0xa
                | (x87_r7_45 == f38_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_46 = objC4[1];
            long double f40_1 = g_bcabdc;
            x87_r7_46 - f40_1;
            char valA21;

            valA21 = *(&((x87_r7_46 < f40_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_46, f40_1) ? 1 : 0) << 0xa
                | (x87_r7_46 == f40_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            objC4[8] = ((valA21 << 1 | tmpD12) << 1 | ctxB20) << 1 | v_98_3;
            uint32_t valA24 = a1;
            uint32_t tmpD15 = a2;
            uint32_t objC6 = a3;
            ctxB2 = valA24 | tmpD15 | objC6;
            flagP2 = valA24 & tmpD15 & objC6;
            void** objC7 = &v_44;
            int32_t i_3 = 3;
            int32_t i_2;

            do
            {
                valA1 = *objC7;
                objC7 = &objC7[1];
                i_2 = i_3;
                i_3 -= 1;
                *(valA1 + 0x28) = *(valA1 + 0x28) * *(valA1 + 8);
                *(valA1 + 0x2c) = *(valA1 + 0x2c) * *(valA1 + 8);
                *(valA1 + 0x30) = *(valA1 + 0x30) * *(valA1 + 8);
                *(valA1 + 0x34) = *(valA1 + 0x34) * *(valA1 + 8);
                *(valA1 + 0x38) = *(valA1 + 0x38) * *(valA1 + 8);
                *(valA1 + 0x3c) = *(valA1 + 0x3c) * *(valA1 + 8);
            } while (i_2 != 1);
            tmpD = a3;
            objC2 = a1;
        }
    }

    if (flagP2)
    {
        g_a7e070 -= 1;
        return valA1;
    }

    if (ctxB2 & 1)
    {
        ctxB2 = a2;
        valA1 = objC2;

        if ((valA1 & 1) + (ctxB2 & 1) + (tmpD & 1) != 2)
        {
            float* valA56;
            float* tmpD20;
            float* flagP6;

            if (objC2 & 1)
            {
                valA56 = &arg_44;
                tmpD20 = &arg_84;
                flagP6 = &arg_4;
            }
            else if (!(a2 & 1))
            {
                valA56 = &arg_4;
                tmpD20 = &arg_44;
                flagP6 = &arg_84;
            }
            else
            {
                valA56 = &arg_84;
                tmpD20 = &arg_4;
                flagP6 = &arg_44;
            }

            long double x87_r7_161 = *flagP6 - *valA56;
            long double x87_r6_193 = (g_bcabd0 - *valA56) / x87_r7_161;
            memcpy(&v_90, flagP6, 0x40);
            float v_a0_5 = x87_r6_193;
            *flagP6 = x87_r7_161 * v_a0_5 + *valA56;
            flagP6[1] = (flagP6[1] - valA56[1]) * v_a0_5 + valA56[1];
            flagP6[2] = (flagP6[2] - valA56[2]) * v_a0_5 + valA56[2];
            flagP6[0xa] = (flagP6[0xa] - valA56[0xa]) * v_a0_5 + valA56[0xa];
            flagP6[0xb] = (flagP6[0xb] - valA56[0xb]) * v_a0_5 + valA56[0xb];
            flagP6[0xc] = (flagP6[0xc] - valA56[0xc]) * v_a0_5 + valA56[0xc];
            flagP6[0xd] = (flagP6[0xd] - valA56[0xd]) * v_a0_5 + valA56[0xd];
            flagP6[0xe] = (flagP6[0xe] - valA56[0xe]) * v_a0_5 + valA56[0xe];
            flagP6[0xf] = (flagP6[0xf] - valA56[0xf]) * v_a0_5 + valA56[0xf];
            long double x87_r7_196 = flagP6[1];
            long double f4_1 = g_bcabd4;
            x87_r7_196 - f4_1;
            char ctxB33;

            ctxB33 = !(*(&((x87_r7_196 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_196, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_196 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_197 = *flagP6;
            long double f13_1 = g_bcabd8;
            x87_r7_197 - f13_1;
            char objC20;

            objC20 = *(&((x87_r7_197 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_197, f13_1) ? 1 : 0) << 0xa
                | (x87_r7_197 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_198 = flagP6[1];
            long double f21_1 = g_bcabdc;
            x87_r7_198 - f21_1;
            char valA58;

            valA58 = *(&((x87_r7_198 < f21_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_198, f21_1) ? 1 : 0) << 0xa
                | (x87_r7_198 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t valA59;
            valA59 = valA58 << 1;
            long double x87_r7_199 = v_90;
            valA59 |= objC20;
            valA59 <<= 1;
            valA59 |= ctxB33;
            valA59 <<= 1;
            flagP6[8] = valA59;
            long double x87_r7_200 = x87_r7_199 - *tmpD20;
            float v_a0_6 = (g_bcabd0 - *tmpD20) / x87_r7_200;
            long double x87_r7_202 = x87_r7_200 * v_a0_6 + *tmpD20;
            v_90 = x87_r7_202;
            long double x87_r6_200 = (v_8c - tmpD20[1]) * v_a0_6 + tmpD20[1];
            v_8c = x87_r6_200;
            v_88 = (v_88 - tmpD20[2]) * v_a0_6 + tmpD20[2];
            v_68 = (v_68 - tmpD20[0xa]) * v_a0_6 + tmpD20[0xa];
            v_64 = (v_64 - tmpD20[0xb]) * v_a0_6 + tmpD20[0xb];
            v_60 = (v_60 - tmpD20[0xc]) * v_a0_6 + tmpD20[0xc];
            v_5c = (v_5c - tmpD20[0xd]) * v_a0_6 + tmpD20[0xd];
            v_58 = (v_58 - tmpD20[0xe]) * v_a0_6 + tmpD20[0xe];
            v_54 = (v_54 - tmpD20[0xf]) * v_a0_6 + tmpD20[0xf];
            long double f27_1 = g_bcabd4;
            x87_r6_200 - f27_1;
            char ctxB34;

            ctxB34 = !(*(&((x87_r6_200 < f27_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_200, f27_1) ? 1 : 0) << 0xa
                | (x87_r6_200 == f27_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

            long double f32_1 = g_bcabd8;
            x87_r7_202 - f32_1;
            char objC21;

            objC21 = *(&((x87_r7_202 < f32_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_202, f32_1) ? 1 : 0) << 0xa
                | (x87_r7_202 == f32_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_203 = v_8c;
            long double f36_1 = g_bcabdc;
            x87_r7_203 - f36_1;
            char valA60;

            valA60 = *(&((x87_r7_203 < f36_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_203, f36_1) ? 1 : 0) << 0xa
                | (x87_r7_203 == f36_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            char v_70_2 = ((valA60 << 1 | objC21) << 1 | ctxB34) << 1;
            uint32_t valA63 = a1;
            uint32_t srcS20 = a2;
            uint32_t objC23 = a3;
            ctxB2 = valA63 | srcS20 | objC23;
            int32_t* v_b4_2 = a4;
            memcpy(&v_f4, flagP6, 0x40);
            memcpy(&v_134, &v_90, 0x40);
            memcpy(&v_174, tmpD20, 0x40);
            Terrain_BuildMipMaps_2();
            tmpD = a3;
            objC2 = a1;
            valA1 = valA63 & srcS20 & objC23;
        }
        else
        {
            float* valA47;
            float* objC19;
            float* srcS15;
            float* dstD4;

            if (!(objC2 & 1))
            {
                valA47 = &arg_4;
                srcS15 = &arg_4;
                dstD4 = &arg_44;
                objC19 = &arg_84;
            }
            else if (a2 & 1)
            {
                valA47 = &arg_84;
                srcS15 = &arg_84;
                dstD4 = &arg_4;
                objC19 = &arg_44;
            }
            else
            {
                valA47 = &arg_44;
                srcS15 = &arg_44;
                dstD4 = &arg_84;
                objC19 = &arg_4;
            }

            long double x87_r7_83 = *dstD4 - *valA47;
            float v_a0_3 = (g_bcabd0 - *valA47) / x87_r7_83;
            *dstD4 = x87_r7_83 * v_a0_3 + *valA47;
            dstD4[1] = (dstD4[1] - valA47[1]) * v_a0_3 + valA47[1];
            dstD4[2] = (dstD4[2] - valA47[2]) * v_a0_3 + valA47[2];
            dstD4[0xa] = (dstD4[0xa] - valA47[0xa]) * v_a0_3 + valA47[0xa];
            dstD4[0xb] = (dstD4[0xb] - valA47[0xb]) * v_a0_3 + valA47[0xb];
            dstD4[0xc] = (dstD4[0xc] - valA47[0xc]) * v_a0_3 + valA47[0xc];
            dstD4[0xd] = (dstD4[0xd] - valA47[0xd]) * v_a0_3 + valA47[0xd];
            dstD4[0xe] = (dstD4[0xe] - valA47[0xe]) * v_a0_3 + valA47[0xe];
            dstD4[0xf] = (dstD4[0xf] - valA47[0xf]) * v_a0_3 + valA47[0xf];
            long double x87_r7_118 = dstD4[1];
            long double f1_1 = g_bcabd4;
            x87_r7_118 - f1_1;
            char ctxB29;

            ctxB29 = !(*(&((x87_r7_118 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_118, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_118 == f1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_119 = *dstD4;
            long double f5_1 = g_bcabd8;
            x87_r7_119 - f5_1;
            char tmpD18;

            tmpD18 = *(&((x87_r7_119 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_119, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_119 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_120 = dstD4[1];
            long double f14_1 = g_bcabdc;
            x87_r7_120 - f14_1;
            char valA49;

            valA49 = *(&((x87_r7_120 < f14_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_120, f14_1) ? 1 : 0) << 0xa
                | (x87_r7_120 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t valA50;
            valA50 = valA49 << 1;
            valA50 |= tmpD18;
            valA50 <<= 1;
            valA50 |= ctxB29;
            valA50 <<= 1;
            dstD4[8] = valA50;
            long double x87_r7_122 = *objC19 - *srcS15;
            float v_a0_4 = (g_bcabd0 - *srcS15) / x87_r7_122;
            *objC19 = x87_r7_122 * v_a0_4 + *srcS15;
            objC19[1] = (objC19[1] - srcS15[1]) * v_a0_4 + srcS15[1];
            objC19[2] = (objC19[2] - srcS15[2]) * v_a0_4 + srcS15[2];
            objC19[0xa] = (objC19[0xa] - srcS15[0xa]) * v_a0_4 + srcS15[0xa];
            objC19[0xb] = (objC19[0xb] - srcS15[0xb]) * v_a0_4 + srcS15[0xb];
            objC19[0xc] = (objC19[0xc] - srcS15[0xc]) * v_a0_4 + srcS15[0xc];
            objC19[0xd] = (objC19[0xd] - srcS15[0xd]) * v_a0_4 + srcS15[0xd];
            objC19[0xe] = (objC19[0xe] - srcS15[0xe]) * v_a0_4 + srcS15[0xe];
            objC19[0xf] = (objC19[0xf] - srcS15[0xf]) * v_a0_4 + srcS15[0xf];
            long double x87_r7_157 = objC19[1];
            long double f22_1 = g_bcabd4;
            x87_r7_157 - f22_1;
            char ctxB30;

            ctxB30 = !(*(&((x87_r7_157 < f22_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_157, f22_1) ? 1 : 0) << 0xa
                | (x87_r7_157 == f22_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

            long double x87_r7_158 = *objC19;
            long double f28_1 = g_bcabd8;
            x87_r7_158 - f28_1;
            char tmpD19;

            tmpD19 = *(&((x87_r7_158 < f28_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_158, f28_1) ? 1 : 0) << 0xa
                | (x87_r7_158 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_159 = objC19[1];
            long double f33_1 = g_bcabdc;
            x87_r7_159 - f33_1;
            char valA51;

            valA51 = *(&((x87_r7_159 < f33_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_159, f33_1) ? 1 : 0) << 0xa
                | (x87_r7_159 == f33_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            objC19[8] = ((valA51 << 1 | tmpD19) << 1 | ctxB30) << 1;
            objC2 = a1;
            tmpD = a3;
            uint32_t valA54 = objC2;
            uint32_t dstD6 = a2;
            uint32_t srcS17 = tmpD;
            ctxB2 = valA54 | dstD6 | srcS17;
            valA1 = valA54 & dstD6 & srcS17;
        }

        if (valA1)
        {
            g_a7e070 -= 1;
            return valA1;
        }
    }

    if (ctxB2 & 2)
    {
        ctxB2 = a2;
        valA1 = objC2;
        int32_t valA69;
        int32_t tmpD22;
        tmpD22 = HIGHD((valA1 & 2) + (ctxB2 & 2) + (tmpD & 2));
        valA69 = LOWD((valA1 & 2) + (ctxB2 & 2) + (tmpD & 2));
        int32_t valA71 = (valA69 - tmpD22) >> 1;

        if (valA71 != 2)
        {
            float* valA81;
            float* tmpD25;
            float* flagP7;

            if (objC2 & 2)
            {
                valA81 = &arg_44;
                tmpD25 = &arg_84;
                flagP7 = &arg_4;
            }
            else if (!(a2 & 2))
            {
                valA81 = &arg_4;
                tmpD25 = &arg_44;
                flagP7 = &arg_84;
            }
            else
            {
                valA81 = &arg_84;
                tmpD25 = &arg_4;
                flagP7 = &arg_44;
            }

            long double x87_r7_218 = (g_bcabd4 - valA81[1]) / (flagP7[1] - valA81[1]);
            memcpy(&v_90, flagP7, 0x40);
            *flagP7 = (*flagP7 - *valA81) * x87_r7_218 + *valA81;
            flagP7[1] = (flagP7[1] - valA81[1]) * x87_r7_218 + valA81[1];
            flagP7[2] = (flagP7[2] - valA81[2]) * x87_r7_218 + valA81[2];
            flagP7[0xa] = (flagP7[0xa] - valA81[0xa]) * x87_r7_218 + valA81[0xa];
            flagP7[0xb] = (flagP7[0xb] - valA81[0xb]) * x87_r7_218 + valA81[0xb];
            flagP7[0xc] = (flagP7[0xc] - valA81[0xc]) * x87_r7_218 + valA81[0xc];
            flagP7[0xd] = (flagP7[0xd] - valA81[0xd]) * x87_r7_218 + valA81[0xd];
            flagP7[0xe] = (flagP7[0xe] - valA81[0xe]) * x87_r7_218 + valA81[0xe];
            flagP7[0xf] = (flagP7[0xf] - valA81[0xf]) * x87_r7_218 + valA81[0xf];
            long double x87_r7_220 = *flagP7;
            long double f8_1 = g_bcabd8;
            x87_r7_220 - f8_1;
            char objC26;

            objC26 = *(&((x87_r7_220 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_220, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_220 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_221 = flagP7[1];
            long double f16_1 = g_bcabdc;
            x87_r7_221 - f16_1;
            char valA83;

            valA83 = *(&((x87_r7_221 < f16_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_221, f16_1) ? 1 : 0) << 0xa
                | (x87_r7_221 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t valA84;
            valA84 = valA83 << 1;
            valA84 |= objC26;
            valA84 <<= 2;
            flagP7[8] = valA84;
            long double x87_r7_223 = v_8c - tmpD25[1];
            float v_a0_8 = (g_bcabd4 - tmpD25[1]) / x87_r7_223;
            v_90 = (v_90 - *tmpD25) * v_a0_8 + *tmpD25;
            long double x87_r7_225 = x87_r7_223 * v_a0_8 + tmpD25[1];
            v_8c = x87_r7_225;
            v_88 = (v_88 - tmpD25[2]) * v_a0_8 + tmpD25[2];
            v_68 = (v_68 - tmpD25[0xa]) * v_a0_8 + tmpD25[0xa];
            v_64 = (v_64 - tmpD25[0xb]) * v_a0_8 + tmpD25[0xb];
            v_60 = (v_60 - tmpD25[0xc]) * v_a0_8 + tmpD25[0xc];
            v_5c = (v_5c - tmpD25[0xd]) * v_a0_8 + tmpD25[0xd];
            v_58 = (v_58 - tmpD25[0xe]) * v_a0_8 + tmpD25[0xe];
            v_54 = (v_54 - tmpD25[0xf]) * v_a0_8 + tmpD25[0xf];
            long double x87_r6_350 = v_90;
            long double f23_1 = g_bcabd8;
            x87_r6_350 - f23_1;
            char objC27;

            objC27 = *(&((x87_r6_350 < f23_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_350, f23_1) ? 1 : 0) << 0xa
                | (x87_r6_350 == f23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

            long double f29_1 = g_bcabdc;
            x87_r7_225 - f29_1;
            char valA85;

            valA85 = *(&((x87_r7_225 < f29_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_225, f29_1) ? 1 : 0) << 0xa
                | (x87_r7_225 == f29_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            uint32_t srcS28 = a2;
            char v_70_3 = (valA85 << 1 | objC27) << 2;
            uint32_t valA88 = a1;
            uint32_t objC29 = a3;
            int32_t* v_b4_3 = a4;
            ctxB2 = valA88 | srcS28 | objC29;
            memcpy(&v_f4, flagP7, 0x40);
            memcpy(&v_134, &v_90, 0x40);
            memcpy(&v_174, tmpD25, 0x40);
            Terrain_BuildMipMaps_2();
            tmpD = a3;
            objC2 = a1;
            valA1 = valA88 & srcS28 & objC29;
        }
        else
        {
            float* valA72;
            float* objC25;
            float* srcS23;
            float* dstD7;

            if (!(valA71 & objC2))
            {
                valA72 = &arg_4;
                srcS23 = &arg_4;
                dstD7 = &arg_44;
                objC25 = &arg_84;
            }
            else if (a2 & 2)
            {
                valA72 = &arg_84;
                srcS23 = &arg_84;
                dstD7 = &arg_4;
                objC25 = &arg_44;
            }
            else
            {
                valA72 = &arg_44;
                srcS23 = &arg_44;
                dstD7 = &arg_84;
                objC25 = &arg_4;
            }

            long double x87_r7_206 = (g_bcabd4 - valA72[1]) / (dstD7[1] - valA72[1]);
            *dstD7 = (*dstD7 - *valA72) * x87_r7_206 + *valA72;
            dstD7[1] = (dstD7[1] - valA72[1]) * x87_r7_206 + valA72[1];
            dstD7[2] = (dstD7[2] - valA72[2]) * x87_r7_206 + valA72[2];
            dstD7[0xa] = (dstD7[0xa] - valA72[0xa]) * x87_r7_206 + valA72[0xa];
            dstD7[0xb] = (dstD7[0xb] - valA72[0xb]) * x87_r7_206 + valA72[0xb];
            dstD7[0xc] = (dstD7[0xc] - valA72[0xc]) * x87_r7_206 + valA72[0xc];
            dstD7[0xd] = (dstD7[0xd] - valA72[0xd]) * x87_r7_206 + valA72[0xd];
            dstD7[0xe] = (dstD7[0xe] - valA72[0xe]) * x87_r7_206 + valA72[0xe];
            dstD7[0xf] = (dstD7[0xf] - valA72[0xf]) * x87_r7_206 + valA72[0xf];
            long double x87_r7_208 = *dstD7;
            long double f2_1 = g_bcabd8;
            x87_r7_208 - f2_1;
            char tmpD23;

            tmpD23 = *(&((x87_r7_208 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_208, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_208 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_209 = dstD7[1];
            long double f9_1 = g_bcabdc;
            x87_r7_209 - f9_1;
            char valA74;

            valA74 = *(&((x87_r7_209 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_209, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_209 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            int16_t valA75;
            valA75 = valA74 << 1;
            valA75 |= tmpD23;
            valA75 <<= 2;
            dstD7[8] = valA75;
            long double x87_r7_212 = (g_bcabd4 - srcS23[1]) / (objC25[1] - srcS23[1]);
            *objC25 = (*objC25 - *srcS23) * x87_r7_212 + *srcS23;
            objC25[1] = (objC25[1] - srcS23[1]) * x87_r7_212 + srcS23[1];
            objC25[2] = (objC25[2] - srcS23[2]) * x87_r7_212 + srcS23[2];
            objC25[0xa] = (objC25[0xa] - srcS23[0xa]) * x87_r7_212 + srcS23[0xa];
            objC25[0xb] = (objC25[0xb] - srcS23[0xb]) * x87_r7_212 + srcS23[0xb];
            objC25[0xc] = (objC25[0xc] - srcS23[0xc]) * x87_r7_212 + srcS23[0xc];
            objC25[0xd] = (objC25[0xd] - srcS23[0xd]) * x87_r7_212 + srcS23[0xd];
            objC25[0xe] = (objC25[0xe] - srcS23[0xe]) * x87_r7_212 + srcS23[0xe];
            objC25[0xf] = (objC25[0xf] - srcS23[0xf]) * x87_r7_212 + srcS23[0xf];
            long double x87_r7_214 = *objC25;
            long double f17_1 = g_bcabd8;
            x87_r7_214 - f17_1;
            char tmpD24;

            tmpD24 = *(&((x87_r7_214 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_214, f17_1) ? 1 : 0) << 0xa
                | (x87_r7_214 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_215 = objC25[1];
            long double f24_1 = g_bcabdc;
            x87_r7_215 - f24_1;
            char valA76;

            valA76 = *(&((x87_r7_215 < f24_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_215, f24_1) ? 1 : 0) << 0xa
                | (x87_r7_215 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            objC25[8] = (valA76 << 1 | tmpD24) << 2;
            objC2 = a1;
            tmpD = a3;
            uint32_t valA79 = objC2;
            uint32_t dstD9 = a2;
            uint32_t srcS25 = tmpD;
            ctxB2 = valA79 | dstD9 | srcS25;
            valA1 = valA79 & dstD9 & srcS25;
        }

        if (valA1)
        {
            g_a7e070 -= 1;
            return valA1;
        }
    }

    if (ctxB2 & 4)
    {
        ctxB2 = a2;
        valA1 = objC2;
        int32_t valA95;
        int32_t tmpD27;
        tmpD27 = HIGHD((valA1 & 4) + (ctxB2 & 4) + (tmpD & 4));
        valA95 = LOWD((valA1 & 4) + (ctxB2 & 4) + (tmpD & 4));

        if ((valA95 + (tmpD27 & 3)) >> 2 != 2)
        {
            float* valA107;
            float* tmpD30;
            float* flagP8;

            if (objC2 & 4)
            {
                valA107 = &arg_44;
                flagP8 = &arg_84;
                tmpD30 = &arg_4;
            }
            else if (!(a2 & 4))
            {
                valA107 = &arg_4;
                flagP8 = &arg_44;
                tmpD30 = &arg_84;
            }
            else
            {
                valA107 = &arg_84;
                flagP8 = &arg_4;
                tmpD30 = &arg_44;
            }

            long double x87_r7_301 = *tmpD30 - *valA107;
            long double x87_r6_359 = (g_bcabd8 - *valA107) / x87_r7_301;
            memcpy(&v_90, tmpD30, 0x40);
            float v_a0_12 = x87_r6_359;
            *tmpD30 = x87_r7_301 * v_a0_12 + *valA107;
            tmpD30[1] = (tmpD30[1] - valA107[1]) * v_a0_12 + valA107[1];
            tmpD30[2] = (tmpD30[2] - valA107[2]) * v_a0_12 + valA107[2];
            tmpD30[0xa] = (tmpD30[0xa] - valA107[0xa]) * v_a0_12 + valA107[0xa];
            tmpD30[0xb] = (tmpD30[0xb] - valA107[0xb]) * v_a0_12 + valA107[0xb];
            tmpD30[0xc] = (tmpD30[0xc] - valA107[0xc]) * v_a0_12 + valA107[0xc];
            tmpD30[0xd] = (tmpD30[0xd] - valA107[0xd]) * v_a0_12 + valA107[0xd];
            tmpD30[0xe] = (tmpD30[0xe] - valA107[0xe]) * v_a0_12 + valA107[0xe];
            tmpD30[0xf] = (tmpD30[0xf] - valA107[0xf]) * v_a0_12 + valA107[0xf];
            long double x87_r7_336 = tmpD30[1];
            long double f11_1 = g_bcabdc;
            x87_r7_336 - f11_1;
            char valA109;

            valA109 = *(&((x87_r7_336 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_336, f11_1) ? 1 : 0) << 0xa
                | (x87_r7_336 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

            long double x87_r7_337 = v_90;
            int16_t valA110;
            valA110 = valA109 << 3;
            tmpD30[8] = valA110;
            long double x87_r7_338 = x87_r7_337 - *flagP8;
            float v_a0_13 = (g_bcabd8 - *flagP8) / x87_r7_338;
            v_90 = x87_r7_338 * v_a0_13 + *flagP8;
            long double x87_r7_344 = (v_8c - flagP8[1]) * v_a0_13 + flagP8[1];
            v_8c = x87_r7_344;
            v_88 = (v_88 - flagP8[2]) * v_a0_13 + flagP8[2];
            v_68 = (v_68 - flagP8[0xa]) * v_a0_13 + flagP8[0xa];
            v_64 = (v_64 - flagP8[0xb]) * v_a0_13 + flagP8[0xb];
            v_60 = (v_60 - flagP8[0xc]) * v_a0_13 + flagP8[0xc];
            v_5c = (v_5c - flagP8[0xd]) * v_a0_13 + flagP8[0xd];
            v_58 = (v_58 - flagP8[0xe]) * v_a0_13 + flagP8[0xe];
