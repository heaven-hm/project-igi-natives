#include "SplineObj_Update.h"
float* SplineObj_Update(int32_t* a1)

{
    int32_t* i_10 = a1;
    int32_t* i_9 = QTask_TriggerEvent_2(i_10, g_a7a620);
    void* valA1 = QTask_AllocateEvent_2(i_10, g_a7a620);
    int32_t* dstD = i_10[5];
    void* v_64 = valA1;
    a1 = dstD;
    float v_50;
    float v_48;
    float v_38;
    float v_28;
    char objC19;

    if ((*(dstD + 0x4f) || *(i_10 + 0x1a5)) && (valA1 || i_9))
    {
        if (!*(dstD + 0x4e))
        {
            v_50 = 0f;
            float v_4c_1 = 0f;
            void* v_48_1 = nullptr;

            if (valA1)
            {
                long double x87_r7_2 = *(i_10 + 0xf8) - *(valA1 + 0xf8);
                float v_34_1 = *(i_10 + 0x100) - *(valA1 + 0x100);
                valA1 = *(i_10 + 0x108) - *(valA1 + 0x108);
                v_50 = x87_r7_2;
                v_4c_1 = v_34_1;
                v_48_1 = valA1;
            }

            if (i_9)
            {
                float v_34_2 = *(i_9 + 0x100) - *(i_10 + 0x100);
                float v_30_2 = *(i_9 + 0x108) - *(i_10 + 0x108);
                v_50 = *(i_9 + 0xf8) - *(i_10 + 0xf8) + v_50;
                v_4c_1 = v_34_2 + v_4c_1;
                v_48_1 = v_30_2 + v_48_1;
            }

            long double x87_r7_10 = v_50;
            long double f1_1 = 0f;
            x87_r7_10 - f1_1;
            int32_t* tmpD2;

            if (!(*(&((x87_r7_10 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_501055:
                tmpD2 = &i_10[0x44];
                float* objC3 = tmpD2;
                *objC3 = v_50;
                objC3[1] = v_4c_1;
                objC3[2] = v_48_1;
            }
            else
            {
                long double x87_r7_11 = v_4c_1;
                long double f2_1 = 0f;
                x87_r7_11 - f2_1;

                if (!(*(&((x87_r7_11 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_11, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_501055;

                long double x87_r7_12 = v_48_1;
                long double f4_1 = 0f;
                x87_r7_12 - f4_1;

                if (!(*(&((x87_r7_12 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_12, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_12 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_501055;

                tmpD2 = &i_10[0x44];
                i_10[0x45] = 0;
                i_10[0x46] = 0;
                *tmpD2 = 0x3f800000;
            }

            long double x87_r7_13 = *tmpD2;
            long double f3_1 = 0f;
            x87_r7_13 - f3_1;
            long double x87_r7_14;
            long double f6_1;

            if (*(&((x87_r7_13 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            {
                x87_r7_14 = i_10[0x45];
                f6_1 = 0f;
                x87_r7_14 - f6_1;
            }

            if (!(*(&((x87_r7_13 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_13, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
                (x87_r7_14 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                long double x87_r7_15 = i_10[0x45];
                i_10[0x49] = 0;
                i_10[0x47] = x87_r7_15;
                long double x87_r6_10 = -(*tmpD2);
                i_10[0x48] = x87_r6_10;
                long double f5_1 = 0f;
                x87_r7_15 - f5_1;
                long double f7_1;

                if (*(&((x87_r7_15 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                {
                    f7_1 = 0f;
                    x87_r6_10 - f7_1;
                }

                if (!(*(&((x87_r7_15 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40) || !(*(&(
                    (x87_r6_10 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_10, f7_1) ? 1 : 0) << 0xa
                    | (x87_r6_10 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                {
                    i_10[0x49] = 0;
                    long double x87_r5_4 =
                        1.0 / sqrtl(x87_r7_15 * x87_r7_15 + x87_r6_10 * x87_r6_10);
                    i_10[0x47] = x87_r7_15 * x87_r5_4;
                    i_10[0x48] = x87_r6_10 * x87_r5_4;
                }
            }
            else
            {
                i_10[0x47] = 0;
                i_10[0x48] = 0x3f800000;
                i_10[0x49] = 0;
            }

            v_38 = i_10[0x48] * i_10[0x46] - i_10[0x49] * i_10[0x45];
            long double x87_r7_23 = i_10[0x47] * i_10[0x46];
            long double x87_r6_16 = i_10[0x49] * *tmpD2;
            i_10[0x4a] = v_38;
            long double x87_r7_27 = i_10[0x47] * i_10[0x45];
            long double x87_r6_18 = i_10[0x48] * *tmpD2;
            i_10[0x4b] = -((x87_r7_23 - x87_r6_16));
            i_10[0x4c] = x87_r7_27 - x87_r6_18;
            v_28 = *tmpD2;
            long double x87_r7_29 = v_28;
            long double f8_1 = 0f;
            x87_r7_29 - f8_1;
            float v_24_1 = tmpD2[1];
            float v_20_1 = tmpD2[2];

            if (!(*(&((x87_r7_29 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_29, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_29 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_5011d2:
                long double x87_r7_32 = v_20_1;
                long double x87_r6_19 = v_24_1;
                long double x87_r5_7 = v_28;
                long double x87_r7_34 = 1.0
                    / sqrtl(x87_r5_7 * x87_r5_7 + x87_r6_19 * x87_r6_19 + x87_r7_32 * x87_r7_32);
                v_28 = v_28 * x87_r7_34;
                v_24_1 = v_24_1 * x87_r7_34;
                v_20_1 = v_20_1 * x87_r7_34;
            }
            else
            {
                long double x87_r7_30 = v_24_1;
                long double f9_1 = 0f;
                x87_r7_30 - f9_1;

                if (!(*(&((x87_r7_30 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, f9_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_5011d2;

                long double x87_r7_31 = v_20_1;
                long double f11_1 = 0f;
                x87_r7_31 - f11_1;

                if (!(*(&((x87_r7_31 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_31, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_31 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_5011d2;
            }

            v_50 = i_10[0x46] * i_10[0x4b] - i_10[0x4c] * i_10[0x45];
            float v_1c_1 = v_50;
            float v_4c_2 = -((i_10[0x46] * i_10[0x4a] - i_10[0x4c] * *tmpD2));
            v_48 = i_10[0x45] * i_10[0x4a] - *tmpD2 * i_10[0x4b];
            v_38 = v_48 * v_24_1 - v_4c_2 * v_20_1;
            float v_10_1 = v_38;
            float v_34_4 = -((v_48 * v_28 - v_50 * v_20_1));
            float v_30_4 = v_4c_2 * v_28 - v_50 * v_24_1;
            long double x87_r7_56 = v_50;
            long double f10_1 = 0f;
            x87_r7_56 - f10_1;

            if (!(*(&((x87_r7_56 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_56, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_50130f:
                long double x87_r7_59 = v_50;
                long double x87_r6_39 = v_4c_2;
                long double x87_r5_9 = v_48;
                long double x87_r7_61 = 1.0
                    / sqrtl(x87_r5_9 * x87_r5_9 + x87_r6_39 * x87_r6_39 + x87_r7_59 * x87_r7_59);
                float v_1c_2 = v_50 * x87_r7_61;
                float v_18_2 = v_4c_2 * x87_r7_61;
                float v_14_2 = v_48 * x87_r7_61;
            }
            else
            {
                long double x87_r7_57 = v_4c_2;
                long double f12_1 = 0f;
                x87_r7_57 - f12_1;

                if (!(*(&((x87_r7_57 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_57, f12_1) ? 1 : 0) << 0xa
                        | (x87_r7_57 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50130f;

                long double x87_r7_58 = v_48;
                long double f14_1 = 0f;
                x87_r7_58 - f14_1;

                if (!(*(&((x87_r7_58 < f14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_58, f14_1) ? 1 : 0) << 0xa
                        | (x87_r7_58 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50130f;
            }

            long double x87_r7_63 = v_38;
            long double f13_1 = 0f;
            x87_r7_63 - f13_1;

            if (!(*(&((x87_r7_63 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_63, f13_1) ? 1 : 0) << 0xa
                | (x87_r7_63 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_50138c:
                long double x87_r7_66 = v_30_4;
                long double x87_r6_47 = v_34_4;
                long double x87_r5_11 = v_38;
                long double x87_r7_68 = 1.0
                    / sqrtl(x87_r5_11 * x87_r5_11 + x87_r6_47 * x87_r6_47 + x87_r7_66 * x87_r7_66);
                float v_10_2 = v_38 * x87_r7_68;
                float v_c_2 = v_34_4 * x87_r7_68;
                float v_8_2 = v_30_4 * x87_r7_68;
            }
            else
            {
                long double x87_r7_64 = v_34_4;
                long double f15_1 = 0f;
                x87_r7_64 - f15_1;

                if (!(*(&((x87_r7_64 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_64, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_64 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50138c;

                long double x87_r7_65 = v_30_4;
                long double f16_1 = 0f;
                x87_r7_65 - f16_1;

                if (!(*(&((x87_r7_65 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_65, f16_1) ? 1 : 0) << 0xa
                        | (x87_r7_65 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_50138c;
            }

            memcpy(tmpD2, &v_28, 0x28);
            v_28 = *tmpD2;
            int32_t v_24_2 = i_10[0x47];
            float v_20_2 = i_10[0x4a];
            int32_t v_1c_3 = i_10[0x45];
            int32_t v_18_3 = i_10[0x48];
            int32_t v_14_3 = i_10[0x4b];
            int32_t v_10_3 = i_10[0x46];
            int32_t v_c_3 = i_10[0x49];
            int32_t v_8_3 = i_10[0x4c];
            i_10[0x4d] = 0;
            int32_t v_4_1 = 0;
            valA1 = v_64;
            memcpy(tmpD2, &v_28, 0x28);
            dstD = a1;
            goto label_50145b;
        }

        objC19 = 1;
    }
    else
    {
    label_50145b:

        if (*(dstD + 0x4e) || *(i_10 + 0x1a1))
            objC19 = 1;
        else
            objC19 = 0;
    }

    *(i_10 + 0x1a2) = objC19;
    int32_t objC20 = i_10[0x66];
    int32_t tmpD3 = dstD[9];
    int32_t srcS1 = objC20;

    if (objC20 >= tmpD3)
        srcS1 = tmpD3;

    if (srcS1 > 0x14)
        objC20 = 0x14;
    else if (objC20 >= tmpD3)
        objC20 = tmpD3;

    i_10[0x66] = objC20;

    if (dstD[0x13] && valA1)
    {
        void* objC22 = i_10[0x3c];

        if (objC22)
        {
            v_38 = *(i_10 + 0xf8) - *(valA1 + 0xf8);
            float v_34_5 = *(i_10 + 0x100) - *(valA1 + 0x100);
            long double x87_r7_75 = *(i_10 + 0x108) - *(valA1 + 0x108);
            long double x87_r5_13 = v_34_5;
            long double x87_r4_18 = v_38;
            long double x87_r6_58 = (*(objC22 + 0x100) - *(objC22 + 0xfc))
                / sqrtl(x87_r4_18 * x87_r4_18 + x87_r5_13 * x87_r5_13 + x87_r7_75 * x87_r7_75);
            v_38 = v_38 * x87_r6_58;
            float v_34_6 = v_34_5 * x87_r6_58;
            *(i_10 + 0xf8) = v_38 + *(valA1 + 0xf8);
            *(i_10 + 0x100) = v_34_6 + *(valA1 + 0x100);
            *(i_10 + 0x108) = x87_r7_75 * x87_r6_58 + *(valA1 + 0x108);
        }
    }

    int16_t valA16;
    valA16 = i_10[0x68];
    bool cond_1 = !valA16;
    valA16 = *(dstD + 0x4d);

    if (cond_1)
    {
        if (valA16)
        {
            long double x87_r7_79 = i_10[0x27];
            long double x87_r6_67 = i_10[0x28];
            x87_r6_67 - x87_r7_79;
            long double x87_r7_80;

            if (!(*(&((x87_r6_67 < x87_r7_79 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_67, x87_r7_79) ? 1 : 0) << 0xa
                    | (x87_r6_67 == x87_r7_79 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_80 = i_10[0x28];
            else
                x87_r7_80 = i_10[0x27];

            long double x87_r6_68 = i_10[0x26];
            x87_r6_68 - x87_r7_80;
            valA16 = (x87_r6_68 < x87_r7_80 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_68, x87_r7_80) ? 1 : 0) << 0xa
                | (x87_r6_68 == x87_r7_80 ? 1 : 0) << 0xe | 0x3800;
            long double x87_r7_82;

            if (*(&valA16 + 1) & 0x41)
            {
                long double x87_r7_83 = i_10[0x27];
                long double x87_r6_69 = i_10[0x28];
                x87_r6_69 - x87_r7_83;
                valA16 = (x87_r6_69 < x87_r7_83 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_69, x87_r7_83) ? 1 : 0) << 0xa
                    | (x87_r6_69 == x87_r7_83 ? 1 : 0) << 0xe;

                if (!(*(&valA16 + 1) & 1))
                    x87_r7_82 = i_10[0x28];
                else
                    x87_r7_82 = i_10[0x27];
            }
            else
                x87_r7_82 = i_10[0x26];

            long double x87_r7_85 = Render_ComputeNormals(i_10[0x1b]) * x87_r7_82;
            DynObj_LinkDynamicCube_8(g_a44344, i_10, &i_10[0x3e], x87_r7_85, 1);
            i_10[0x68] = 1;
        }
    }
    else if (!valA16)
    {
        DynObj_RegisterSymbol_9(i_10[0x1a], i_10);
        i_10[0x68] = 0;
    }

    valA16 = i_10[0x5e];
    float objC24 = memcpy(&i_10[0x1c], &i_10[0x44], 0x28);

    if (valA16 != 0x2a && valA16)
    {
        void* valA20;
        valA20 = DynObj_Missing(&i_10[0x5e]);

        if (!valA20)
        {
            char* dstD4 = &i_10[0x5e];
            int32_t i = 0xffffffff;

            while (i)
            {
                bool cond_4_1 = 0 != *dstD4;
                dstD4 = &dstD4[1];
                i -= 1;

                if (!cond_4_1)
                    break;
            }

            int32_t objC25 = ~i;
            int32_t srcS4;
            int32_t dstD6;
            dstD6 = memcpy(&v_38, dstD4 - objC25, objC25 & 0xfffffffc);
            memcpy(dstD6, srcS4, objC25 & 3);
            float* v_7c_3 = &v_38;
            int32_t valA22;
            valA22 = Game_DataSymbolLoad(&i_10[0x5e], "*%s");
        }
        else
            i_10[0x1b] = valA20;
    }

    valA16 = i_10[0x68];

    if (valA16)
    {
        float v_7c_5 = Render_ComputeNormals(i_10[0x1b]);
        objC24 = WorldObject_CommitTransform(i_10[0x67], i_10, &i_10[0x3e], v_7c_5);
    }

    int32_t* valA27;

    if (!v_64)
    {
        valA27 = i_10[0x3c];

        if (valA27)
        {
            objC24 = Menu_FormatScreen_3(valA27);
            i_10[0x3c] = 0;
        }
    }
    else
    {
        float srcS5 = i_10[0x3c];
        char objC30 = *(i_10 + 0x1a2);

        if (srcS5)
        {
            char objC34;

            if (objC30 || *(i_10 + 0x1a1))
                objC34 = 1;
            else
                objC34 = 0;

            int32_t v_80_6 = a1[8];
            int32_t tmpD15 = i_10[0x66];
            int32_t v_84_5 = tmpD15;
            tmpD15 = i_10[0x69];
            objC24 = SoundSys_Update3DPosition_2(srcS5, v_64 + 0xf8, &i_10[0x3e], v_64 + 0x110, &i_10[0x44],
                objC34, tmpD15, v_84_5, &i_10[0x62]);
        }
        else
        {
            char objC31;

            if (objC30 || *(i_10 + 0x1a1))
                objC31 = 1;
            else
                objC31 = 0;

            int32_t tmpD10 = i_10[0x66];
            int32_t v_84_4 = tmpD10;
            tmpD10 = i_10[0x69];
            valA27 = SoundSys_PlaySoundSample_2(i_10, i_10[0x67], v_64 + 0xf8, &i_10[0x3e], v_64 + 0x110,
                &i_10[0x44], objC31, tmpD10, v_84_4, a1[8], &i_10[0x62]);
            i_10[0x3c] = valA27;
        }
    }
    int32_t* i_5 = i_9;

    if (i_5)
    {
        objC24 = i_5[0x3c];

        if (objC24)
        {
            char valA30;

            if (*(i_5 + 0x1a2) || *(i_5 + 0x1a1))
                valA30 = 1;
            else
                valA30 = 0;

            int32_t v_80_7 = a1[8];
            int32_t tmpD20 = i_5[0x66];
            int32_t v_84_6 = tmpD20;
            tmpD20 = i_5[0x69];
            objC24 = SoundSys_Update3DPosition_2(objC24, &i_10[0x3e], &i_5[0x3e], &i_10[0x44], &i_5[0x44], valA30,
                tmpD20, v_84_6, &i_5[0x62]);
        }
    }

    char valA34 = *(i_10 + 0x1a1);

    if (valA34)
    {
    label_501862:
        int32_t ctxB3 = 0;
        int32_t v_60_2 = 0;
        int32_t* i_8;
        int32_t* i_6;

        if (!valA34)
        {
            i_6 = i_5;
            i_8 = i_6;
        }
        else
        {
            i_6 = i_10;
            i_5 = i_10;
            i_8 = i_6;
        }

        objC24 = g_a7a620;
        int32_t* i_7 = i_5;
        void* i_1 = QTask_AllocateEvent_2(i_6, objC24);

        if (*(i_6 + 0x1a1))
        {
            while (i_1)
            {
                i_6 = i_1;
                i_1 = QTask_AllocateEvent_2(i_1, g_a7a620);
                ctxB3 += 1;

                if (!*(i_6 + 0x1a1))
                    break;
            }

            v_60_2 = ctxB3;
            i_8 = i_6;
        }

        i_1 = g_a7a620;
        int32_t* i_2;
        i_2 = QTask_TriggerEvent_2(i_5, i_1);

        if (i_2)
        {
            do
            {
                objC24 = *(i_2 + 0x1a1);

                if (!objC24)
                    break;

                objC24 = g_a7a620;
                i_5 = i_2;
                i_2 = QTask_TriggerEvent_2(i_2, objC24);
                ctxB3 += 1;
            } while (i_2);

            v_60_2 = ctxB3;
            i_7 = i_5;
        }

        if (i_6 != i_5)
        {
            int32_t* i_3 = QTask_TriggerEvent_2(i_8, g_a7a620);
            int32_t* i_11 = i_7;
            float v_34_7 = *(i_11 + 0x100) - *(i_8 + 0x100);
            float v_30_5 = *(i_11 + 0x108) - *(i_8 + 0x108);
            long double x87_r6_75 = 1f / v_60_2;
            float v_60_3 = x87_r6_75;
            v_38 = x87_r6_75 * (*(i_11 + 0xf8) - *(i_8 + 0xf8));
            float v_34_8 = v_60_3 * v_34_7;
            float v_30_6 = v_60_3 * v_30_5;
            float v_58;
            float v_54;
            Sys_ResolveSymbol_10(&v_38, &v_54, &v_58);
            Sys_ReadFileBlock_12(&v_28, 0f, v_54, v_58);
            int32_t* i_12 = i_8;
            memcpy(&v_50, &i_8[0x3e], 0x18);
            memcpy(&i_12[0x44], &v_28, 0x28);
            memcpy(&i_12[0x1c], &v_28, 0x28);

            if (i_12[0x3c])
            {
                i_12 = g_a7a620;
                void* valA37 = QTask_AllocateEvent_2(i_8, i_12);
                char dstD10;

                if (*(i_8 + 0x1a2) || *(i_8 + 0x1a1))
                    dstD10 = 1;
                else
                    dstD10 = 0;

                int32_t objC47 = a1[8];
                int32_t v_80_14 = objC47;
                objC47 = i_8[0x69];
                SoundSys_Update3DPosition_2(i_8[0x3c], valA37 + 0xf8, &i_8[0x3e], valA37 + 0x110, &i_8[0x44],
                    dstD10, objC47, i_8[0x66], &i_8[0x62]);
            }

            for (; i_3 != i_7; i_3 = QTask_TriggerEvent_2(i_3, g_a7a620))
            {
                char valA40 = i_3[0x68];
                memcpy(&i_3[0x44], &v_28, 0x28);
                v_50 = v_38 + v_50;
                v_48 = v_34_8 + v_48;
                double v_40 = v_30_6 + v_40;
                memcpy(&i_3[0x3e], &v_50, 0x18);
                memcpy(&i_3[0x1c], &v_28, 0x28);

                if (valA40)
                {
                    float v_7c_18 = Render_ComputeNormals(i_3[0x1b]);
                    WorldObject_CommitTransform(i_3[0x67], i_3, &i_3[0x3e], v_7c_18);
                }

                int32_t valA42 = i_3[0x3c];

                if (valA42)
                {
                    valA42 = g_a7a620;
                    void* valA43 = QTask_AllocateEvent_2(i_3, valA42);
                    char srcS8;

                    if (*(i_3 + 0x1a2) || *(i_3 + 0x1a1))
                        srcS8 = 1;
                    else
                        srcS8 = 0;

                    int32_t objC55 = a1[8];
                    int32_t v_80_17 = objC55;
                    objC55 = i_3[0x69];
                    SoundSys_Update3DPosition_2(i_3[0x3c], valA43 + 0xf8, &i_3[0x3e], valA43 + 0x110, &i_3[0x44],
                        srcS8, objC55, i_3[0x66], &i_3[0x62]);
                }
            }

            int32_t* i_13 = i_7;
            int32_t valA47 = i_13[0x3c];
            memcpy(&i_13[0x44], &v_28, 0x28);
            memcpy(&i_13[0x1c], &v_28, 0x28);

            if (valA47)
            {
                void* valA48 = QTask_AllocateEvent_2(i_13, g_a7a620);
                char srcS9;

                if (*(i_13 + 0x1a2) || *(i_13 + 0x1a1))
                    srcS9 = 1;
                else
                    srcS9 = 0;

                int32_t objC62 = a1[8];
                int32_t v_80_20 = objC62;
                objC62 = i_13[0x69];
                SoundSys_Update3DPosition_2(i_13[0x3c], valA48 + 0xf8, &i_11[0x3e], valA48 + 0x110, &i_13[0x44],
                    srcS9, objC62, i_13[0x66], &i_13[0x62]);
            }

            int32_t* valA51;
            valA51 = QTask_TriggerEvent_2(i_13, g_a7a620);

            if (valA51)
            {
                float srcS10 = valA51[0x3c];

                if (srcS10)
                {
                    char objC65;

                    if (*(valA51 + 0x1a2) || *(valA51 + 0x1a1))
                        objC65 = 1;
                    else
                        objC65 = 0;

                    int32_t v_80_22 = a1[8];
                    int32_t tmpD38 = valA51[0x66];
                    int32_t v_84_12 = tmpD38;
                    tmpD38 = valA51[0x69];
                    objC24 = SoundSys_Update3DPosition_2(srcS10, &i_11[0x3e], &valA51[0x3e], &i_13[0x44],
                        &valA51[0x44], objC65, tmpD38, v_84_12, &valA51[0x62]);
                }
            }
        }
    }
    else if (i_5)
    {
        objC24 = *(i_5 + 0x1a1);

        if (objC24)
            goto label_501862;
    }

    objC24 = g_a7a620;
    int32_t* valA54 = QTask_DeleteTask_2(a1, objC24);
    a1[0xa] = 0;

    if (valA54)
    {
        void* objC67;

        for (int32_t* i_4 = QTask_TriggerEvent_2(valA54, g_a7a620); i_4;
            i_4 = QTask_TriggerEvent_2(i_4, objC67))
        {
            objC67 = i_4[0x3c];

            if (objC67)
                a1[0xa] = *(objC67 + 0xf8) + a1[0xa];

            objC67 = g_a7a620;
        }
    }

    void* valA55 = i_10[0x3c];

    if (valA55)
    {
        *(valA55 + 0xa8) = a1[0x14];
        *(valA55 + 0xac) = a1[0x15];
        *(valA55 + 0xb0) = a1[0x16];
        int32_t* valA58 = i_10[0x3c] + 0xb4;
        *valA58 = a1[0x17];
        valA58[1] = a1[0x18];
        valA58[2] = a1[0x19];
    }

    return Physics_EvaluateAreaCriteria(i_10);
}
