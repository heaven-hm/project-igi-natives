#include "SplineObj_Setup.h"
int32_t SplineObj_Setup(void* a1, char* a2)

{
    char* srcS = a2;
    int32_t tmpD;
    void* dstD;

    if (!srcS || !*srcS)
        dstD = a1;
    else
    {
        dstD = a1;
        *(dstD + 0x38) = *(dstD + 0x2c);
        tmpD = *(dstD + 0x30);
        *(dstD + 0x3c) = tmpD;
        *(dstD + 0x40) = *(dstD + 0x34);
        *(dstD + 0x48) = *(dstD + 0x44);
    }

    long double fpu7 = *(dstD + 0x44);
    float v_90 = fpu7;
    long double f1 = *(dstD + 0x48);
    fpu7 - f1;
    float v_8c;
    float v_88;
    float v_84;
    float v_80;
    float v_7c;
    float v_78;
    float v_74;
    float v_70;
    float v_6c;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        tmpD = g_a7a620;
        int32_t* valA3;
        int32_t objC3;
        valA3 = QTask_DeleteTask_2(dstD, tmpD);
        int32_t* ctxB1 = valA3;

        if (ctxB1)
        {
            int32_t v_bc_2 = objC3;
            double* srcS1 = &ctxB1[0x3e];
            double* v_90_1 = srcS1;
            float v_64;
            Sys_DispatchOpcode_12(&v_64, *(dstD + 0x44) - *(dstD + 0x48));

            while (true)
            {
                long double x87_r7_4 = *(ctxB1 + 0xf8) - *srcS1;
                long double x87_r6_2 = *(ctxB1 + 0x100) - srcS1[1];
                long double x87_r5_2 = *(ctxB1 + 0x108) - srcS1[2];
                float v_58;
                float v_54;
                float v_50;
                float v_10_1 = v_50 * x87_r5_2 + v_54 * x87_r6_2 + v_58 * x87_r7_4;
                float v_60;
                float v_5c;
                *(ctxB1 + 0xf8) =
                    v_5c * x87_r5_2 + v_60 * x87_r6_2 + v_64 * x87_r7_4 + *srcS1;
                *(ctxB1 + 0x100) = v_10_1 + srcS1[1];
                float v_4c;
                float v_48;
                float v_44;
                *(ctxB1 + 0x108) =
                    v_44 * x87_r5_2 + v_48 * x87_r6_2 + v_4c * x87_r7_4 + srcS1[2];
                float v_3c = v_64 * ctxB1[0x44] + v_4c * ctxB1[0x46] + v_58 * ctxB1[0x45];
                float v_38_1 = v_60 * ctxB1[0x44] + v_48 * ctxB1[0x46] + v_54 * ctxB1[0x45];
                float v_34_1 = v_5c * ctxB1[0x44] + v_44 * ctxB1[0x46] + v_50 * ctxB1[0x45];
                int32_t v_40;
                float valA4 = ctxB1[0x4d] + v_40 + 1;
                float v_18_1 = valA4;
                float v_30_1 = v_64 * ctxB1[0x47] + v_4c * ctxB1[0x49] + v_58 * ctxB1[0x48];
                float v_2c_1 = v_60 * ctxB1[0x47] + v_48 * ctxB1[0x49] + v_54 * ctxB1[0x48];
                float v_28_1 = v_5c * ctxB1[0x47] + v_44 * ctxB1[0x49] + v_50 * ctxB1[0x48];
                float v_24_1 = v_4c * ctxB1[0x4c] + v_58 * ctxB1[0x4b] + v_64 * ctxB1[0x4a];
                float v_20_1 = v_48 * ctxB1[0x4c] + v_54 * ctxB1[0x4b] + v_60 * ctxB1[0x4a];
                float v_1c_1 = v_44 * ctxB1[0x4c] + v_50 * ctxB1[0x4b] + v_5c * ctxB1[0x4a];
                memcpy(&ctxB1[0x44], &v_3c, 0x28);

                if (valA4 > 0x3e8)
                {
                    long double x87_r7_43 = v_3c;
                    long double f5_1 = 0f;
                    x87_r7_43 - f5_1;
                    v_8c = v_3c;
                    v_88 = v_38_1;
                    v_84 = v_34_1;

                    if (!(*(&((x87_r7_43 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_43, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_43 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_502a58:
                        long double x87_r7_46 = v_34_1;
                        long double x87_r6_44 = v_38_1;
                        long double x87_r5_4 = v_3c;
                        long double x87_r7_48 = 1.0 / sqrtl(x87_r5_4 * x87_r5_4
                            + x87_r6_44 * x87_r6_44 + x87_r7_46 * x87_r7_46);
                        v_8c = v_3c * x87_r7_48;
                        v_88 = v_88 * x87_r7_48;
                        v_84 = v_84 * x87_r7_48;
                    }
                    else
                    {
                        long double x87_r7_44 = v_38_1;
                        long double f6_1 = 0f;
                        x87_r7_44 - f6_1;

                        if (!(*(&((x87_r7_44 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_44, f6_1) ? 1 : 0) << 0xa
                                | (x87_r7_44 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_502a58;

                        long double x87_r7_45 = v_34_1;
                        long double f8_1 = 0f;
                        x87_r7_45 - f8_1;

                        if (!(*(&((x87_r7_45 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_45, f8_1) ? 1 : 0) << 0xa
                                | (x87_r7_45 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_502a58;
                    }

                    float v_9c_1 = v_20_1 * v_34_1 - v_1c_1 * v_38_1;
                    v_80 = v_9c_1;
                    float v_98_1 = -((v_24_1 * v_34_1 - v_1c_1 * v_3c));
                    v_7c = v_98_1;
                    float v_94_1 = v_24_1 * v_38_1 - v_20_1 * v_3c;
                    v_78 = v_94_1;
                    float v_a8_1 = v_94_1 * v_88 - v_98_1 * v_84;
                    valA4 = v_a8_1;
                    v_74 = valA4;
                    float v_a4_1 = -((v_94_1 * v_8c - v_9c_1 * v_84));
                    v_70 = v_a4_1;
                    float v_a0_1 = v_98_1 * v_8c - v_9c_1 * v_88;
                    long double x87_r7_70 = v_9c_1;
                    long double f7_1 = 0f;
                    x87_r7_70 - f7_1;
                    v_6c = v_a0_1;
                    valA4 = (x87_r7_70 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_70, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_70 == f7_1 ? 1 : 0) << 0xe;

                    if (!(*(&valA4 + 1) & 0x40))
                    {
                    label_502bb1:
                        long double x87_r7_73 = v_9c_1;
                        long double x87_r6_64 = v_98_1;
                        long double x87_r5_6 = v_94_1;
                        long double x87_r7_75 = 1.0 / sqrtl(x87_r5_6 * x87_r5_6
                            + x87_r6_64 * x87_r6_64 + x87_r7_73 * x87_r7_73);
                        v_80 = v_9c_1 * x87_r7_75;
                        v_7c = v_7c * x87_r7_75;
                        v_78 = v_78 * x87_r7_75;
                    }
                    else
                    {
                        long double x87_r7_71 = v_98_1;
                        long double f9_1 = 0f;
                        x87_r7_71 - f9_1;
                        valA4 = (x87_r7_71 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_71, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_71 == f9_1 ? 1 : 0) << 0xe;

                        if (!(*(&valA4 + 1) & 0x40))
                            goto label_502bb1;

                        long double x87_r7_72 = v_94_1;
                        long double f12_1 = 0f;
                        x87_r7_72 - f12_1;
                        valA4 = (x87_r7_72 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_72, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_72 == f12_1 ? 1 : 0) << 0xe;

                        if (!(*(&valA4 + 1) & 0x40))
                            goto label_502bb1;
                    }

                    long double x87_r7_77 = v_a8_1;
                    long double f11_1 = 0f;
                    x87_r7_77 - f11_1;
                    valA4 = (x87_r7_77 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_77, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_77 == f11_1 ? 1 : 0) << 0xe;

                    if (!(*(&valA4 + 1) & 0x40))
                    {
                    label_502c2e:
                        long double x87_r7_80 = v_a0_1;
                        long double x87_r6_72 = v_a4_1;
                        long double x87_r5_8 = v_a8_1;
                        long double x87_r7_86 = 1.0 / sqrtl(x87_r7_80 * x87_r7_80
                            + x87_r5_8 * x87_r5_8 + x87_r6_72 * x87_r6_72);
                        v_74 = v_a8_1 * x87_r7_86;
                        v_70 = v_70 * x87_r7_86;
                        v_6c = v_6c * x87_r7_86;
                    }
                    else
                    {
                        long double x87_r7_78 = v_a4_1;
                        long double f13_1 = 0f;
                        x87_r7_78 - f13_1;
                        valA4 = (x87_r7_78 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_78, f13_1) ? 1 : 0) << 0xa
                            | (x87_r7_78 == f13_1 ? 1 : 0) << 0xe;

                        if (!(*(&valA4 + 1) & 0x40))
                            goto label_502c2e;

                        long double x87_r7_79 = v_a0_1;
                        long double f14_1 = 0f;
                        x87_r7_79 - f14_1;
                        valA4 = (x87_r7_79 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_79, f14_1) ? 1 : 0) << 0xa
                            | (x87_r7_79 == f14_1 ? 1 : 0) << 0xe;

                        if (!(*(&valA4 + 1) & 0x40))
                            goto label_502c2e;
                    }

                    memcpy(&v_3c, &v_8c, 0x28);
                    int32_t v_18_2 = 0;
                }

                valA4 = g_a7a620;
                ctxB1 = QTask_TriggerEvent_2(ctxB1, valA4);

                if (!ctxB1)
                    break;

                srcS1 = v_90_1;
            }

            dstD = a1;
            srcS = a2;
        }

        long double x87_r7_88 = *(dstD + 0x44);
        v_90 = x87_r7_88;
        *(dstD + 0x48) = x87_r7_88;
    }

    long double x87_r7_89 = *(dstD + 0x2c);
    long double f2 = *(dstD + 0x38);
    x87_r7_89 - f2;

    if (!(*(&((x87_r7_89 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_89, f2) ? 1 : 0) << 0xa
        | (x87_r7_89 == f2 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_502cf9:
        float v_a8_2 = *(dstD + 0x2c) - *(dstD + 0x38);
        float v_a4_2 = *(dstD + 0x30) - *(dstD + 0x3c);
        float v_a0_2 = *(dstD + 0x34) - *(dstD + 0x40);
        Sys_DispatchOpcode_12(&v_8c, v_90);
        float v_9c_2 = v_84 * v_a0_2 + v_88 * v_a4_2 + v_8c * v_a8_2;

        for (int32_t* i = QTask_DeleteTask_2(dstD, g_a7a620); i;
            i = QTask_TriggerEvent_2(i, g_a7a620))
        {
            *(i + 0xf8) = v_9c_2 + *(i + 0xf8);
            *(i + 0x100) = v_78 * v_a0_2 + v_7c * v_a4_2 + v_80 * v_a8_2 + *(i + 0x100);
            *(i + 0x108) = v_6c * v_a0_2 + v_70 * v_a4_2 + v_74 * v_a8_2 + *(i + 0x108);
        }

        int32_t valA9 = *(dstD + 0x30);
        int32_t objC10 = *(dstD + 0x34);
        *(dstD + 0x38) = *(dstD + 0x2c);
        *(dstD + 0x3c) = valA9;
        *(dstD + 0x40) = objC10;
    }
    else
    {
        long double x87_r7_90 = *(dstD + 0x30);
        long double f3_1 = *(dstD + 0x3c);
        x87_r7_90 - f3_1;

        if (!(*(&((x87_r7_90 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_90, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_90 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_502cf9;

        long double x87_r7_91 = *(dstD + 0x34);
        long double f4_1 = *(dstD + 0x40);
        x87_r7_91 - f4_1;

        if (!(*(&((x87_r7_91 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_91, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_91 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_502cf9;
    }

    int32_t result = *(dstD + 0x20);

    if (result < 0)
        *(dstD + 0x20) = 0;

    if (!srcS || !*srcS)
    {
        int32_t* i_1 = *(dstD + 8);

        if (*i_1 && i_1)
        {
            int32_t objC11 = g_afa7e0;

            do
            {
                int32_t* tmpD7 = *i_1;
                void* valA13;

                if (!tmpD7)
                    valA13 = nullptr;
                else
                {
                    int32_t valA10 = *tmpD7;
                    int32_t valA11 = -(valA10);
                    valA13 = (valA11 - valA11) & tmpD7;
                }

                *((objC11 << 2) + &g_afa6e0) = valA13;
                g_afa7e0 = objC11 + 1;
                uint32_t valA15 = Script_ParseEnumReal32_8();
                int32_t valA16 = 0;
                valA16 = i_1[7];
                result = *(((valA15 * 0x180 + valA16) << 2) + &g_a96ae0);

                if (result)
                    result = result(i_1, srcS);

                objC11 = g_afa7e0 - 1;
                g_afa7e0 = objC11;
                i_1 = *((objC11 << 2) + &g_afa6e0);
            } while (i_1);
        }
    }

    return result;
}
