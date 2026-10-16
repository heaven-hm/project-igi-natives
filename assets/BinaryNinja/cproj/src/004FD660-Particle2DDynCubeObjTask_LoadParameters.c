#include "gi_platform.h"
#include "004FD660-Particle2DDynCubeObjTask_LoadParameters.h"
void* Particle2DDynCubeObjTask_LoadParameters(int32_t* a1)

{
    void* result = a1[0x3c];
    int32_t srcS = 0;
    int32_t dstD = 0;

    if (!result)
    {
        result = (*(int32_t*)(uintptr_t)(a1 + 0xfd));

        if (result)
            return QTask_FindType(a1);
    }
    else
    {
        result = a1[0x3f];
        int32_t v_94 = 0xffffffff;
        int32_t v_90_1 = 0x7fefffff;
        int32_t v_8c_1 = 0xffffffff;
        int32_t v_88_1 = 0x7fefffff;
        int32_t v_84_1 = 0xffffffff;
        int32_t v_80_1 = 0x7fefffff;
        int32_t v_ac = 0xffffffff;
        int32_t v_a8_1 = 0xffefffff;
        int32_t v_a4_1 = 0xffffffff;
        int32_t v_a0_1 = 0xffefffff;
        int32_t v_9c_1 = 0xffffffff;
        int32_t v_98_1 = 0xffefffff;

        if (result)
        {
            result = a1[0x20];
            srcS = *(*(result + 0xc) + 4) - 1;
        }

        int32_t tmpD1;

        do
        {
            tmpD1 = a1[0x1b];
            double* objC2 = (*(int32_t*)(uintptr_t)(tmpD1 + (dstD << 2)));
            objC2[3] = objC2[3] + a1[0x31];
            *(objC2 + 0x1c) = a1[0x32] + *(objC2 + 0x1c);
            objC2[4] = a1[0x33] + objC2[4];
            *objC2 = objC2[3] + *objC2;
            objC2[1] = *(objC2 + 0x1c) + objC2[1];
            objC2[2] = objC2[4] + objC2[2];
            objC2[7] = *(objC2 + 0x2c) + objC2[7];
            *(objC2 + 0x3c) = a1[0x39] + *(objC2 + 0x3c);

            if (srcS)
            {
                *(objC2 + 0x2a) += 1;
                tmpD1 = a1[0x3d];
                result = *(objC2 + 0x2a);

                if (result >= tmpD1)
                {
                    result = objC2[5];
                    *(objC2 + 0x2a) = 0;
                    tmpD1 = result;

                    if (tmpD1 < srcS)
                    {
                        result += 1;
                        objC2[5] = result;
                    }
                }
            }

            result = *(objC2 + 0x26);

            if (!result)
            {
                long double x87_r7_49 = objC2[6] - *(objC2 + 0x34);
                objC2[6] = x87_r7_49;
                long double f0_1 = 0.0f;
                x87_r7_49 - f0_1;
                long double x87_r7_50;
                long double f1_1;

                if (!(*(&((x87_r7_49 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_49, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_49 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    x87_r7_50 = *(objC2 + 0x3c);
                    f1_1 = 0.0f;
                    x87_r7_50 - f1_1;
                }

                if (!(*(&((x87_r7_49 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_49, f0_1) ? 1 : 0) << 0xa
                        | (x87_r7_49 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41) && !(*(&(
                        (x87_r7_50 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_50, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_50 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    dstD += 1;
                else
                    tmpD1 = Script_ExecuteLevelScript_30(a1, dstD);
            }
            else
            {
                *(objC2 + 0x26) = result - 1;
                dstD += 1;
            }

            result = a1[0x3c];
        } while (dstD < result);

        if (result)
        {
            if (result > 0)
            {
                int32_t* tmpD2 = a1[0x1b];
                void* srcS2 = result;
                void* i;

                do
                {
                    double* objC3 = *tmpD2;
                    long double x87_r7_17 = v_ac;
                    long double f5_1 = *objC3;
                    x87_r7_17 - f5_1;

                    if (*(&((x87_r7_17 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        int32_t dstD1 = *(objC3 + 4);
                        v_ac = *objC3;
                        int32_t v_a8_2 = dstD1;
                    }

                    long double x87_r7_18 = v_a4_1;
                    long double f7_1 = objC3[1];
                    x87_r7_18 - f7_1;

                    if (*(&((x87_r7_18 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_18, f7_1) ? 1 : 0) << 0xa
                        | (x87_r7_18 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        v_a4_1 = objC3[1];
                        int32_t v_a0_2 = *(objC3 + 0xc);
                    }

                    long double x87_r7_19 = v_9c_1;
                    long double f9_1 = objC3[2];
                    x87_r7_19 - f9_1;

                    if (*(&((x87_r7_19 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_19, f9_1) ? 1 : 0) << 0xa
                        | (x87_r7_19 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        v_9c_1 = objC3[2];
                        int32_t v_98_2 = *(objC3 + 0x14);
                    }

                    long double x87_r7_20 = v_94;
                    long double f11_1 = *objC3;
                    x87_r7_20 - f11_1;

                    if (!(*(&((x87_r7_20 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_20, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_20 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        int32_t dstD4 = *(objC3 + 4);
                        v_94 = *objC3;
                        int32_t v_90_2 = dstD4;
                    }

                    long double x87_r7_21 = v_8c_1;
                    long double f13_1 = objC3[1];
                    x87_r7_21 - f13_1;

                    if (!(*(&((x87_r7_21 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, f13_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        v_8c_1 = objC3[1];
                        int32_t v_88_2 = *(objC3 + 0xc);
                    }

                    long double x87_r7_22 = v_84_1;
                    long double f15_1 = objC3[2];
                    x87_r7_22 - f15_1;

                    if (!(*(&((x87_r7_22 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_22, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_22 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        v_84_1 = objC3[2];
                        int32_t v_80_2 = *(objC3 + 0x14);
                    }

                    tmpD2 = &tmpD2[1];
                    i = srcS2;
                    srcS2 -= 1;
                } while (i != 1);
            }

            tmpD1 = &a1[0x28];
            double v_60_1 = v_94 - (*(int32_t*)(uintptr_t)(a1 + 0x88));
            double v_58_1 = v_8c_1 - (*(int32_t*)(uintptr_t)(a1 + 0x90));
            double v_50 = v_84_1 - (*(int32_t*)(uintptr_t)(a1 + 0x98));
            double v_78 = v_ac - *tmpD1;
            double v_70_1 = v_a4_1 - (*(int32_t*)(uintptr_t)(a1 + 0xa8));
            double v_68_1 = v_9c_1 - (*(int32_t*)(uintptr_t)(a1 + 0xb0));
            long double x87_r7_35 = v_60_1;
            long double f3_1 = 0.0;
            x87_r7_35 - f3_1;

            if (*(&((x87_r7_35 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_35, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_35 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
    label_4fd9a5: ;
                memcpy(&a1[0x22], &v_94, 0x18);
                memcpy(tmpD1, &v_ac, 0x18);
                float v_b4_1 = Script_ParseEnumReal32_30(a1);
                Script_ParseEnumString_30(&v_78, a1);
                tmpD1 = WorldObject_CommitTransform(a1[0x2e], a1, &v_78, v_b4_1);
            }
            else
            {
                long double x87_r7_36 = v_58_1;
                long double f4_1 = 0.0;
                x87_r7_36 - f4_1;

                if (*(&((x87_r7_36 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_36, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_36 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_37 = v_50;
                long double f6_1 = 0.0;
                x87_r7_37 - f6_1;

                if (*(&((x87_r7_37 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_37, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_37 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_38 = v_78;
                long double f8_1 = 0.0;
                x87_r7_38 - f8_1;

                if (!(*(&((x87_r7_38 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_38, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_38 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_39 = v_70_1;
                long double f10_1 = 0.0;
                x87_r7_39 - f10_1;

                if (!(*(&((x87_r7_39 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_39, f10_1) ? 1 : 0) << 0xa
                        | (x87_r7_39 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_40 = v_68_1;
                long double f12_1 = 0.0;
                x87_r7_40 - f12_1;

                if (!(*(&((x87_r7_40 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_40, f12_1) ? 1 : 0) << 0xa
                        | (x87_r7_40 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_41 = v_60_1;
                long double f14_1 = 12288.0;
                x87_r7_41 - f14_1;

                if (!(*(&((x87_r7_41 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_41, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_41 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_42 = v_58_1;
                long double f16_1 = 12288.0;
                x87_r7_42 - f16_1;

                if (!(*(&((x87_r7_42 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_42, f16_1) ? 1 : 0) << 0xa
                        | (x87_r7_42 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_43 = v_50;
                long double f18_1 = 12288.0;
                x87_r7_43 - f18_1;

                if (!(*(&((x87_r7_43 < f18_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_43, f18_1) ? 1 : 0) << 0xa
                        | (x87_r7_43 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    goto label_4fd9a5;

                long double x87_r7_44 = v_78;
                long double f19_1 = 12288.0;
                x87_r7_44 - f19_1;

                if (*(&((x87_r7_44 < f19_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_44, f19_1) ? 1 : 0) << 0xa
                        | (x87_r7_44 == f19_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_45 = v_70_1;
                long double f20_1 = 12288.0;
                x87_r7_45 - f20_1;

                if (*(&((x87_r7_45 < f20_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_45, f20_1) ? 1 : 0) << 0xa
                        | (x87_r7_45 == f20_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;

                long double x87_r7_46 = v_68_1;
                long double f21_1 = 12288.0;
                x87_r7_46 - f21_1;

                if (*(&((x87_r7_46 < f21_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_46, f21_1) ? 1 : 0) << 0xa
                        | (x87_r7_46 == f21_1 ? 1 : 0) << 0xe) + 1) & 1)
                    goto label_4fd9a5;
            }
        }

        result = a1[0x3b];
        int32_t i_1 = 0;

        if (result)
        {
            int32_t* srcS3 = nullptr;
            int32_t* v_b0_1 = nullptr;
            int32_t i_2 = 0;

            if (a1[0x3c] > 0)
            {
                int32_t v_bc_1 = 0;

                do
                {
                    void* valA12 = (*(int32_t*)(uintptr_t)(a1[0x1b] + (i_1 << 2)));
                    tmpD1 = *(valA12 + 0x24);

                    if (tmpD1)
                    {
                        tmpD1 -= 1;
                        *(valA12 + 0x24) = tmpD1;
                    }

                    if (!*(valA12 + 0x24))
                    {
                        (*(int32_t*)(uintptr_t)(a1[0x1f] + (srcS3 << 2))) = i_1;
                        tmpD1 = valA12 + 0x40;
                        memcpy(a1[0x1d] + v_bc_1, tmpD1, 0x18);
                        memcpy(a1[0x1e] + v_bc_1, valA12, 0x18);
                        v_b0_1 += 1;
                        v_bc_1 += 0x18;
                        *(valA12 + 0x24) = 0xf;
                        memcpy(tmpD1, valA12, 0x18);
                        srcS3 = v_b0_1;
                        i_1 = i_2;
                    }

                    i_1 += 1;
                    i_2 = i_1;
                } while (i_1 < a1[0x3c]);
            }

            i_1 = g_54e56a;
            int32_t v_44_1 = 0;
            char v_48;
            DynObj_FindSymbol_11(a1[0x2e], a1[0x1c], a1[0x1d], a1[0x1e], srcS3, i_1, &v_48,
                0x20000000);
            result = nullptr;
            int32_t v_bc_2 = 0;

            if (srcS3 > 0)
            {
                int32_t tmpD7 = 0;
                void* result_1 = nullptr;
                int32_t v_b4_2 = 0;
                bool cond_5_1;

                do
                {
                    void* valA15 = result + a1[0x1c];

                    if (*(valA15 + 0x58))
                    {
                        int32_t valA18 = g_a7a4d8 * 0x30;
                        memcpy(valA18 + 0xa774c0, a1[0x1d] + tmpD7, 0x18);
                        int32_t valA20 = g_a7a4d8 + 1;
                        memcpy(valA18 + 0xa774d8, a1[0x1e] + tmpD7, 0x18);
                        g_a7a4d8 = valA20;

                        if (valA20 == 0x100)
                            g_a7a4d8 = 0;

                        int32_t srcS15 = a1[0x1d] + tmpD7;
                        void* v_40 = valA15;
                        char v_38;
                        memcpy(&v_38, srcS15, 0x18);
                        char v_20;
                        memcpy(&v_20, a1[0x1e] + tmpD7, 0x18);
                        a1[0x3b](&v_40);
                        Script_ExecuteLevelScript_30(a1, (*(int32_t*)(uintptr_t)(a1[0x1f] + (v_bc_2 << 2))));
                        srcS3 = v_b0_1;
                        tmpD7 = v_b4_2;
                    }

                    result = result_1 + 0x70;
                    tmpD7 += 0x18;
                    cond_5_1 = v_bc_2 + 1 < srcS3;
                    v_bc_2 += 1;
                    result_1 = result;
                    v_b4_2 = tmpD7;
                } while (cond_5_1);
            }
        }
    }

    return result;
}
