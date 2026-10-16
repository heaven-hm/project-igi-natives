#include "gi_platform.h"
#include "005269C0-Light_CalculateAttenuation_5.h"
int32_t* Light_CalculateAttenuation_5(float a1)

{
    float srcS = a1;
    DynObj_UpdateDynTree_11((*(int32_t*)(uintptr_t)(srcS + 0x20)));
    int32_t* v_64_1;
    int32_t* v_60_1;
    int32_t* v_5c_3;
    char v_58_5;
    char v_54_7;
    int32_t* valA14;
    int32_t* objC4;
    int32_t* tmpD5;
    int32_t dstD7;
    int32_t* dstD9;

    if (!QTask_DeleteTask_2(srcS, g_a83d4c))
    {
        tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x48));
        valA14 = srcS + 0x30;
        objC4 = srcS + 0x3c;
        dstD9 = srcS + 0x24;
        *valA14 = 0;
        __builtin_memset(srcS + 0x34, 0, 0x14);
        *dstD9 = 0;
        (*(int32_t*)(uintptr_t)(srcS + 0x28)) = 0;
        (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = 0x3f800000;

        if (tmpD5)
        {
    label_526e79: ;
            *tmpD5 = *dstD9;
            tmpD5[1] = dstD9[1];
            dstD7 = dstD9[2];
    label_526e84: ;
            tmpD5[2] = dstD7;
            int32_t* tmpD21 = (*(int32_t*)(uintptr_t)(srcS + 0x48)) + 0xc;
            *tmpD21 = *valA14;
            tmpD21[1] = valA14[1];
            tmpD21[2] = valA14[2];
            int32_t* tmpD23 = (*(int32_t*)(uintptr_t)(srcS + 0x48)) + 0x18;
            *tmpD23 = *objC4;
            tmpD23[1] = objC4[1];
            tmpD23[2] = objC4[2];
    label_526eb9: ;
            (*(int32_t*)(uintptr_t)(*(srcS + 0x48) + 0x24)) = (*(int32_t*)(uintptr_t)(srcS + 0x4c));
            (*(int32_t*)(uintptr_t)(*(srcS + 0x48) + 0x25)) = (*(int32_t*)(uintptr_t)(srcS + 0x4d));
            return DynObj_RemoveSymbol_12((*(int32_t*)(uintptr_t)(srcS + 0x20)));
        }

        tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x4d));
        v_54_7 = tmpD5;
        tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x4c));
        v_58_5 = tmpD5;
        v_5c_3 = objC4;
        v_60_1 = valA14;
        v_64_1 = dstD9;
    }
    else
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(srcS + 0x58));
        long double f0_1 = (*(int32_t*)(uintptr_t)(srcS + 0x54));
        x87_r7_1 - f0_1;

        if (*(&((x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t* valA19 = QTask_DeleteTask_2(srcS, g_a83d4c);
            (*(int32_t*)(uintptr_t)(srcS + 0x30)) = valA19[0xd];
            (*(int32_t*)(uintptr_t)(srcS + 0x34)) = valA19[0xe];
            (*(int32_t*)(uintptr_t)(srcS + 0x38)) = valA19[0xf];
            int32_t* valA20 = &valA19[0xa];
            (*(int32_t*)(uintptr_t)(srcS + 0x3c)) = valA19[0x10];
            (*(int32_t*)(uintptr_t)(srcS + 0x40)) = valA19[0x11];
            (*(int32_t*)(uintptr_t)(srcS + 0x44)) = valA19[0x12];
            (*(int32_t*)(uintptr_t)(srcS + 0x24)) = *valA20;
            (*(int32_t*)(uintptr_t)(srcS + 0x28)) = valA20[1];
            (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = valA20[2];
            int32_t* dstD14 = (*(int32_t*)(uintptr_t)(srcS + 0x48));

            if (dstD14)
            {
                *dstD14 = *valA20;
                dstD14[1] = valA20[1];
                dstD14[2] = valA20[2];
                int32_t* valA23 = (*(int32_t*)(uintptr_t)(srcS + 0x48)) + 0xc;
                *valA23 = (*(int32_t*)(uintptr_t)(srcS + 0x30));
                valA23[1] = (*(int32_t*)(uintptr_t)(srcS + 0x34));
                valA23[2] = (*(int32_t*)(uintptr_t)(srcS + 0x38));
                int32_t* valA25 = (*(int32_t*)(uintptr_t)(srcS + 0x48)) + 0x18;
                *valA25 = (*(int32_t*)(uintptr_t)(srcS + 0x3c));
                valA25[1] = (*(int32_t*)(uintptr_t)(srcS + 0x40));
                valA25[2] = (*(int32_t*)(uintptr_t)(srcS + 0x44));
                (*(int32_t*)(uintptr_t)(*(srcS + 0x48) + 0x24)) = (*(int32_t*)(uintptr_t)(srcS + 0x4c));
                (*(int32_t*)(uintptr_t)(*(srcS + 0x48) + 0x25)) = (*(int32_t*)(uintptr_t)(srcS + 0x4d));
                return DynObj_RemoveSymbol_12((*(int32_t*)(uintptr_t)(srcS + 0x20)));
            }

            valA20 = (*(int32_t*)(uintptr_t)(srcS + 0x4d));
            v_54_7 = valA20;
            valA20 = (*(int32_t*)(uintptr_t)(srcS + 0x4c));
            v_58_5 = valA20;
            v_5c_3 = srcS + 0x3c;
            v_60_1 = srcS + 0x30;
            v_64_1 = srcS + 0x24;
        }
        else
        {
            int32_t* i_4 = nullptr;
            int32_t* i_3 = nullptr;
            int32_t* i_2 = QTask_DeleteTask_2(srcS, g_a83d4c);
            int32_t* i = i_2;

            if (i)
            {
                do
                {
                    long double x87_r7_2 = i[0x14];
                    long double f1_1 = (*(int32_t*)(uintptr_t)(srcS + 0x5c));
                    x87_r7_2 - f1_1;
                    i_2 = (x87_r7_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe;

                    if (*(&i_2 + 1) & 0x40)
                    {
                        i_4 = i;
                        i_3 = i;
                        break;
                    }

                    long double x87_r7_3 = i[0x14];
                    long double f2_1 = (*(int32_t*)(uintptr_t)(srcS + 0x5c));
                    x87_r7_3 - f2_1;
                    i_2 = (x87_r7_3 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe;

                    if (*(&i_2 + 1) & 1)
                    {
                        if (i_4)
                        {
                            long double x87_r7_4 = i[0x14];
                            long double f4_1 = i_4[0x14];
                            x87_r7_4 - f4_1;
                            i_2 = (x87_r7_4 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_4, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_4 == f4_1 ? 1 : 0) << 0xe;
                        }

                        if (!i_4 || !(*(&i_2 + 1) & 0x41))
                            i_4 = i;
                    }

                    long double x87_r7_5 = i[0x14];
                    long double f3_1 = (*(int32_t*)(uintptr_t)(srcS + 0x5c));
                    x87_r7_5 - f3_1;
                    i_2 = (x87_r7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe;

                    if (!(*(&i_2 + 1) & 0x41))
                    {
                        if (i_3)
                        {
                            long double x87_r7_6 = i[0x14];
                            long double f5_1 = i_3[0x14];
                            x87_r7_6 - f5_1;
                            i_2 = (x87_r7_6 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_6, f5_1) ? 1 : 0) << 0xa
                                | (x87_r7_6 == f5_1 ? 1 : 0) << 0xe;
                        }

                        if (!i_3 || *(&i_2 + 1) & 1)
                            i_3 = i;
                    }

                    i_2 = g_a83d4c;
                    i_2 = QTask_TriggerEvent_2(i, i_2);
                    i = i_2;
                } while (i);

                if (!i_4)
                    goto label_526a86;

                long double x87_r7_7;
                long double f6_1;

                if (i_3 && i_4 != i_3)
                {
                    x87_r7_7 = i_4[0x14];
                    f6_1 = i_3[0x14];
                    x87_r7_7 - f6_1;
                }

                if (!i_3 || i_4 == i_3 || *(&((x87_r7_7 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    valA14 = srcS + 0x30;
                    *valA14 = i_4[0xd];
                    valA14[1] = i_4[0xe];
                    valA14[2] = i_4[0xf];
                    objC4 = srcS + 0x3c;
                    dstD9 = &i_4[0xa];
                    *objC4 = i_4[0x10];
                    objC4[1] = i_4[0x11];
                    objC4[2] = i_4[0x12];
                    (*(int32_t*)(uintptr_t)(srcS + 0x24)) = *dstD9;
                    (*(int32_t*)(uintptr_t)(srcS + 0x28)) = dstD9[1];
                    (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = dstD9[2];
                    tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x48));

                    if (tmpD5)
                        goto label_526e79;

                    goto label_526d3b;
                }

                int32_t* i_1 = i;
                a1 = ((*(int32_t*)(uintptr_t)(srcS + 0x5c)) - i_4[0x14]) / (i_3[0x14] - i_4[0x14]);
                (*(int32_t*)(uintptr_t)(srcS + 0x30)) = (i_3[0xd] - i_4[0xd]) * a1 + i_4[0xd];
                (*(int32_t*)(uintptr_t)(srcS + 0x34)) = (i_3[0xe] - i_4[0xe]) * a1 + i_4[0xe];
                (*(int32_t*)(uintptr_t)(srcS + 0x38)) = (i_3[0xf] - i_4[0xf]) * a1 + i_4[0xf];
                (*(int32_t*)(uintptr_t)(srcS + 0x3c)) = (i_3[0x10] - i_4[0x10]) * a1 + i_4[0x10];
                (*(int32_t*)(uintptr_t)(srcS + 0x40)) = (i_3[0x11] - i_4[0x11]) * a1 + i_4[0x11];
                (*(int32_t*)(uintptr_t)(srcS + 0x44)) = (i_3[0x12] - i_4[0x12]) * a1 + i_4[0x12];
                long double fp0_1 =
                    Sys_DispatchOpcode_9(i_3[0xa] * i_4[0xa] + i_4[0xb] * i_3[0xb] + i_4[0xc] * i_3[0xc]);
                float v_3c_1 = -((i_3[0xc] * i_4[0xa] - i_3[0xa] * i_4[0xc]));
                long double x87_r7_47 = i_3[0xb] * i_4[0xa];
                long double x87_r6_12 = i_3[0xa] * i_4[0xb];
                float v_34 = i_3[0xc] * i_4[0xb] - i_4[0xc] * i_3[0xb];
                float v_30_1 = v_3c_1;
                float v_2c_1 = x87_r7_47 - x87_r6_12;
                float v_28;
                Sys_PopStack_12(&v_28, &v_34, fp0_1 * a1);
                float v_24;
                float v_20;
                float tmpD7 = v_20 * i_4[0xc] + v_24 * i_4[0xb] + v_28 * i_4[0xa];
                float v_1c;
                float v_18;
                float v_14;
                float v_3c_2 = v_14 * i_4[0xc] + v_18 * i_4[0xb] + v_1c * i_4[0xa];
                float v_c;
                float v_8;
                long double x87_r0_13 = v_8 * i_4[0xc] + v_c * i_4[0xb];
                float v_10;
                long double x87_r7_60 = v_10 * i_4[0xa];
                (*(int32_t*)(uintptr_t)(srcS + 0x24)) = tmpD7;
                (*(int32_t*)(uintptr_t)(srcS + 0x28)) = v_3c_2;
                float v_38_2 = x87_r0_13 + x87_r7_60;
                (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = v_38_2;
                float* valA6 = (*(int32_t*)(uintptr_t)(srcS + 0x48));

                if (!valA6)
                {
                    tmpD7 = (*(int32_t*)(uintptr_t)(srcS + 0x4d));
                    valA6 = (*(int32_t*)(uintptr_t)(srcS + 0x4c));
                    (*(int32_t*)(uintptr_t)(srcS + 0x48)) = Render_TransformVertices_13(srcS + 0x24, srcS + 0x30, srcS + 0x3c, valA6, tmpD7);
                    return DynObj_RemoveSymbol_12((*(int32_t*)(uintptr_t)(srcS + 0x20)));
                }

                *valA6 = tmpD7;
                valA6[1] = v_3c_2;
                valA6[2] = v_38_2;
                float* objC8 = (*(int32_t*)(uintptr_t)(srcS + 0x48)) + 0xc;
                *objC8 = (*(int32_t*)(uintptr_t)(srcS + 0x30));
                objC8[1] = (*(int32_t*)(uintptr_t)(srcS + 0x34));
                objC8[2] = (*(int32_t*)(uintptr_t)(srcS + 0x38));
                int32_t* valA13 = (*(int32_t*)(uintptr_t)(srcS + 0x48)) + 0x18;
                *valA13 = (*(int32_t*)(uintptr_t)(srcS + 0x3c));
                valA13[1] = (*(int32_t*)(uintptr_t)(srcS + 0x40));
                valA13[2] = (*(int32_t*)(uintptr_t)(srcS + 0x44));
                goto label_526eb9;
            }
    label_526a86: ;
            valA14 = srcS + 0x30;
            *valA14 = i_3[0xd];
            valA14[1] = i_3[0xe];
            valA14[2] = i_3[0xf];
            objC4 = srcS + 0x3c;
            *objC4 = i_3[0x10];
            objC4[1] = i_3[0x11];
            objC4[2] = i_3[0x12];
            (*(int32_t*)(uintptr_t)(srcS + 0x24)) = i_3[0xa];
            (*(int32_t*)(uintptr_t)(srcS + 0x28)) = i_3[0xb];
            (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = i_3[0xc];
            tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x48));

            if (tmpD5)
            {
                *tmpD5 = i_3[0xa];
                tmpD5[1] = i_3[0xb];
                dstD7 = i_3[0xc];
                goto label_526e84;
            }
    label_526d3b: ;
            tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x4d));
            v_54_7 = tmpD5;
            tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x4c));
            v_58_5 = tmpD5;
            v_5c_3 = objC4;
            v_60_1 = valA14;
            v_64_1 = srcS + 0x24;
        }
    }
    (*(int32_t*)(uintptr_t)(srcS + 0x48)) = Render_TransformVertices_13(v_64_1, v_60_1, v_5c_3, v_58_5, v_54_7);
    return DynObj_RemoveSymbol_12((*(int32_t*)(uintptr_t)(srcS + 0x20)));
}
