// Original IGI.EXE function: Render_BindTexture_15 (VA 0x004DEEC0; static CFG gate PASS, CFG score 0.926).
#include "Render_BindTexture_15.h"
float Render_BindTexture_15(float a1) __location("valA")

{
    float result = *(a1 + 0x6c);

    if (result)
    {
        if (!*(a1 + 0x18c))
        {
            int32_t* valA18 = *(a1 + 0xe8);

            if (valA18)
                QTask_FindType(valA18);

            int32_t* valA19 = *(a1 + 0x148);

            if (valA19)
                QTask_FindType(valA19);

            *(a1 + 0xe8) = CarGun_Create(nullptr, a1);
            float v_ac_1 = a1;
            *(a1 + 0x148) = CarGun_Create(nullptr, a1);
            Render_MagicObjectTypeSNotD(a1);
            result = Render_ClipMesh_15(a1, a1 + 0x190, a1 + 0x19c);
            *(a1 + 0x18c) = 1;
        }
        else
        {
            result = *(a1 + 0x148);
            float v_7c;

            if (result)
            {
                int32_t* i = *(result + 8);

                if (*i && i)
                {
                    do
                    {
                        float v_58 = *(a1 + 0x7c) * i[0x43] + i[0x44] * *(a1 + 0x88)
                            + *(a1 + 0x70) * i[0x42];
                        float v_54_1 = *(a1 + 0x80) * i[0x43] + *(a1 + 0x8c) * i[0x44]
                            + i[0x42] * *(a1 + 0x74);
                        float v_50_1 = *(a1 + 0x84) * i[0x43] + *(a1 + 0x78) * i[0x42]
                            + *(a1 + 0x90) * i[0x44];
                        float v_4c_1 = i[0x47] * *(a1 + 0x88) + *(a1 + 0x7c) * i[0x46]
                            + i[0x45] * *(a1 + 0x70);
                        float v_48_1 = *(a1 + 0x80) * i[0x46] + i[0x45] * *(a1 + 0x74)
                            + i[0x47] * *(a1 + 0x8c);
                        float v_44_1 = i[0x47] * *(a1 + 0x90) + i[0x46] * *(a1 + 0x84)
                            + i[0x45] * *(a1 + 0x78);
                        float v_40_1 = *(a1 + 0x7c) * i[0x49] + i[0x4a] * *(a1 + 0x88)
                            + *(a1 + 0x70) * i[0x48];
                        float v_3c_1 = *(a1 + 0x80) * i[0x49] + *(a1 + 0x8c) * i[0x4a]
                            + i[0x48] * *(a1 + 0x74);
                        result = i[0x4b] + *(a1 + 0x94) + 1;
                        float result_2 = result;
                        float v_38_1 = *(a1 + 0x84) * i[0x49] + *(a1 + 0x78) * i[0x48]
                            + *(a1 + 0x90) * i[0x4a];
                        memcpy(&i[0x1c], &v_58, 0x28);

                        if (result > 0x3e8)
                        {
                            long double x87_r7_37 = v_58;
                            long double f1_1 = 0f;
                            x87_r7_37 - f1_1;
                            float v_30 = v_58;
                            float v_28_1 = v_50_1;
                            float v_2c_1 = v_54_1;

                            if (!(*(&((x87_r7_37 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, f1_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_4df0ed:
                                long double x87_r7_40 = v_50_1;
                                long double x87_r6_37 = v_54_1;
                                long double x87_r5_1 = v_58;
                                long double x87_r7_42 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                    + x87_r6_37 * x87_r6_37 + x87_r7_40 * x87_r7_40);
                                v_30 = v_58 * x87_r7_42;
                                v_2c_1 = v_2c_1 * x87_r7_42;
                                v_28_1 = v_28_1 * x87_r7_42;
                            }
                            else
                            {
                                long double x87_r7_38 = v_54_1;
                                long double f2_1 = 0f;
                                x87_r7_38 - f2_1;

                                if (!(*(&((x87_r7_38 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_38, f2_1) ? 1 : 0) << 0xa
                                        | (x87_r7_38 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_4df0ed;

                                long double x87_r7_39 = v_50_1;
                                long double f4_1 = 0f;
                                x87_r7_39 - f4_1;

                                if (!(*(&((x87_r7_39 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_39, f4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_39 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_4df0ed;
                            }

                            float v_88_1 = v_3c_1 * v_50_1 - v_38_1 * v_54_1;
                            float v_24_1 = v_88_1;
                            float v_84_1 = -((v_40_1 * v_50_1 - v_38_1 * v_58));
                            float v_80 = v_40_1 * v_54_1 - v_3c_1 * v_58;
                            float objC4 = v_80;
                            v_7c = v_80 * v_2c_1 - v_84_1 * v_28_1;
                            float v_18_1 = v_7c;
                            float v_78_1 = -((v_80 * v_30 - v_88_1 * v_28_1));
                            float result_1 = v_84_1 * v_30 - v_88_1 * v_2c_1;
                            long double x87_r7_64 = v_88_1;
                            long double f3_1 = 0f;
                            x87_r7_64 - f3_1;
                            result = result_1;
                            float result_3 = result;
                            result = (x87_r7_64 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_64, f3_1) ? 1 : 0) << 0xa
                                | (x87_r7_64 == f3_1 ? 1 : 0) << 0xe;

                            if (!(*(&result + 1) & 0x40))
                            {
                            label_4df22b:
                                long double x87_r7_67 = v_88_1;
                                long double x87_r6_57 = v_84_1;
                                long double x87_r5_3 = v_80;
                                long double x87_r7_69 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                                    + x87_r6_57 * x87_r6_57 + x87_r7_67 * x87_r7_67);
                                float v_24_2 = v_88_1 * x87_r7_69;
                                float v_20_2 = v_84_1 * x87_r7_69;
                                float v_1c_2 = objC4 * x87_r7_69;
                            }
                            else
                            {
                                long double x87_r7_65 = v_84_1;
                                long double f5_1 = 0f;
                                x87_r7_65 - f5_1;
                                result = (x87_r7_65 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_65, f5_1) ? 1 : 0) << 0xa
                                    | (x87_r7_65 == f5_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df22b;

                                long double x87_r7_66 = v_80;
                                long double f7_1 = 0f;
                                x87_r7_66 - f7_1;
                                result = (x87_r7_66 < f7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_66, f7_1) ? 1 : 0) << 0xa
                                    | (x87_r7_66 == f7_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df22b;
                            }

                            long double x87_r7_71 = v_7c;
                            long double f6_1 = 0f;
                            x87_r7_71 - f6_1;
                            result = (x87_r7_71 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_71, f6_1) ? 1 : 0) << 0xa
                                | (x87_r7_71 == f6_1 ? 1 : 0) << 0xe;

                            if (!(*(&result + 1) & 0x40))
                            {
                            label_4df2a8:
                                long double x87_r7_74 = result_1;
                                long double x87_r6_65 = v_78_1;
                                long double x87_r5_5 = v_7c;
                                long double x87_r7_76 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                                    + x87_r6_65 * x87_r6_65 + x87_r7_74 * x87_r7_74);
                                float v_18_2 = v_7c * x87_r7_76;
                                float v_14_2 = v_78_1 * x87_r7_76;
                                float v_10_1 = result_3 * x87_r7_76;
                            }
                            else
                            {
                                long double x87_r7_72 = v_78_1;
                                long double f8_1 = 0f;
                                x87_r7_72 - f8_1;
                                result = (x87_r7_72 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_72, f8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_72 == f8_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df2a8;

                                long double x87_r7_73 = result_1;
                                long double f9_1 = 0f;
                                x87_r7_73 - f9_1;
                                result = (x87_r7_73 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_73, f9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_73 == f9_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df2a8;
                            }

                            memcpy(&v_58, &v_30, 0x28);
                            int32_t v_34_1 = 0;
                        }

                        long double x87_r7_81 = *(a1 + 0x78) * *(i + 0x100)
                            + *(a1 + 0x70) * *(i + 0xf0) + *(a1 + 0x74) * *(i + 0xf8);
                        long double x87_r6_80 = *(a1 + 0x80) * *(i + 0xf8)
                            + *(a1 + 0x7c) * *(i + 0xf0) + *(a1 + 0x84) * *(i + 0x100);
                        double v_68_1 = x87_r6_80;
                        long double x87_r6_84 = *(a1 + 0x8c) * *(i + 0xf8)
                            + *(a1 + 0x88) * *(i + 0xf0) + *(a1 + 0x90) * *(i + 0x100);
                        double v_60_1 = x87_r6_84;
                        *(i + 0x20) = x87_r7_81 + *(a1 + 0x20);
                        *(i + 0x28) = v_68_1 + *(a1 + 0x28);
                        *(i + 0x30) = v_60_1 + *(a1 + 0x30);
                        i = *i;

                        if (!i)
                            break;

                        if (!*i)
                            break;
                    } while (i);
                }
            }

            float i_1 = a1;

            if (a1)
            {
                int32_t objC6 = g_afa7e0;

                do
                {
                    v_7c = i_1 + 0x20;
                    float i_2 = i_1;
                    int32_t v_78_2 = i_1 + 0x70;
                    int32_t* j = *(*(i_1 + 0xe8) + 8);

                    if (*j && j)
                    {
                        do
                        {
                            int32_t* tmpD3 = *j;
                            void* valA11;

                            if (!tmpD3)
                                valA11 = nullptr;
                            else
                            {
                                int32_t valA8 = *tmpD3;
                                int32_t valA9 = -(valA8);
                                valA11 = (valA9 - valA9) & tmpD3;
                            }

                            *((objC6 << 2) + &g_afa6e0) = valA11;
                            g_afa7e0 = objC6 + 1;
                            uint32_t valA13 = MagicObj_GetEventId();
                            int32_t objC8 = 0;
                            objC8 = j[7];
                            int32_t valA17 = *(((valA13 * 0x180 + objC8) << 2) + &g_a96ae0);

                            if (valA17)
                                valA17(j, &v_7c);

                            objC6 = g_afa7e0 - 1;
                            g_afa7e0 = objC6;
                            j = *((objC6 << 2) + &g_afa6e0);
                        } while (j);
                    }

                    if (i_1 != a1)
                    {
                        result = *i_1;

                        if (!result)
                            break;

                        if (!*result)
                            break;
                    }
                    else
                    {
                        result = *(i_1 + 0x148);

                        if (!result)
                            break;

                        result = *(result + 8);

                        if (!*result)
                            break;
                    }

                    i_1 = result;
                } while (i_1);
            }
        }
    }

    return result;
}
