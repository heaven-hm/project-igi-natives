#include "004DEEC0-Render_BindTexture_15.h"
/* 0x004deec0 Render_BindTexture_15 full linked: callers=1 callees=9 */
float sub_4deec0(float a1) __location("eax")

{
    float result = *(a1 + 0x6c);

    if (result)
    {
        if (!*(a1 + 0x18c))
        {
            int32_t* eax_18 = *(a1 + 0xe8);

            if (eax_18)
                QTask_FindType(eax_18);

            int32_t* eax_19 = *(a1 + 0x148);

            if (eax_19)
                QTask_FindType(eax_19);

            *(a1 + 0xe8) = sub_4e0930(nullptr, a1);
            float var_ac_1 = a1;
            *(a1 + 0x148) = sub_4e0930(nullptr, a1);
            sub_4dfa50(a1);
            result = sub_4df500(a1, a1 + 0x190, a1 + 0x19c);
            *(a1 + 0x18c) = 1;
        }
        else
        {
            result = *(a1 + 0x148);
            float var_7c;

            if (result)
            {
                int32_t* i = *(result + 8);

                if (*i && i)
                {
                    do
                    {
                        float var_58 = *(a1 + 0x7c) * i[0x43] + i[0x44] * *(a1 + 0x88)
                            + *(a1 + 0x70) * i[0x42];
                        float var_54_1 = *(a1 + 0x80) * i[0x43] + *(a1 + 0x8c) * i[0x44]
                            + i[0x42] * *(a1 + 0x74);
                        float var_50_1 = *(a1 + 0x84) * i[0x43] + *(a1 + 0x78) * i[0x42]
                            + *(a1 + 0x90) * i[0x44];
                        float var_4c_1 = i[0x47] * *(a1 + 0x88) + *(a1 + 0x7c) * i[0x46]
                            + i[0x45] * *(a1 + 0x70);
                        float var_48_1 = *(a1 + 0x80) * i[0x46] + i[0x45] * *(a1 + 0x74)
                            + i[0x47] * *(a1 + 0x8c);
                        float var_44_1 = i[0x47] * *(a1 + 0x90) + i[0x46] * *(a1 + 0x84)
                            + i[0x45] * *(a1 + 0x78);
                        float var_40_1 = *(a1 + 0x7c) * i[0x49] + i[0x4a] * *(a1 + 0x88)
                            + *(a1 + 0x70) * i[0x48];
                        float var_3c_1 = *(a1 + 0x80) * i[0x49] + *(a1 + 0x8c) * i[0x4a]
                            + i[0x48] * *(a1 + 0x74);
                        result = i[0x4b] + *(a1 + 0x94) + 1;
                        float result_2 = result;
                        float var_38_1 = *(a1 + 0x84) * i[0x49] + *(a1 + 0x78) * i[0x48]
                            + *(a1 + 0x90) * i[0x4a];
                        memcpy(&i[0x1c], &var_58, 0x28);

                        if (result > 0x3e8)
                        {
                            long double x87_r7_37 = var_58;
                            long double temp1_1 = 0f;
                            x87_r7_37 - temp1_1;
                            float var_30 = var_58;
                            float var_28_1 = var_50_1;
                            float var_2c_1 = var_54_1;

                            if (!(*(&((x87_r7_37 < temp1_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, temp1_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                            label_4df0ed:
                                long double x87_r7_40 = var_50_1;
                                long double x87_r6_37 = var_54_1;
                                long double x87_r5_1 = var_58;
                                long double x87_r7_42 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1
                                    + x87_r6_37 * x87_r6_37 + x87_r7_40 * x87_r7_40);
                                var_30 = var_58 * x87_r7_42;
                                var_2c_1 = var_2c_1 * x87_r7_42;
                                var_28_1 = var_28_1 * x87_r7_42;
                            }
                            else
                            {
                                long double x87_r7_38 = var_54_1;
                                long double temp2_1 = 0f;
                                x87_r7_38 - temp2_1;

                                if (!(*(&((x87_r7_38 < temp2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_38, temp2_1) ? 1 : 0) << 0xa
                                        | (x87_r7_38 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_4df0ed;

                                long double x87_r7_39 = var_50_1;
                                long double temp4_1 = 0f;
                                x87_r7_39 - temp4_1;

                                if (!(*(&((x87_r7_39 < temp4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_39, temp4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_39 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                    goto label_4df0ed;
                            }

                            float var_88_1 = var_3c_1 * var_50_1 - var_38_1 * var_54_1;
                            float var_24_1 = var_88_1;
                            float var_84_1 = -((var_40_1 * var_50_1 - var_38_1 * var_58));
                            float var_80 = var_40_1 * var_54_1 - var_3c_1 * var_58;
                            float ecx_4 = var_80;
                            var_7c = var_80 * var_2c_1 - var_84_1 * var_28_1;
                            float var_18_1 = var_7c;
                            float var_78_1 = -((var_80 * var_30 - var_88_1 * var_28_1));
                            float result_1 = var_84_1 * var_30 - var_88_1 * var_2c_1;
                            long double x87_r7_64 = var_88_1;
                            long double temp3_1 = 0f;
                            x87_r7_64 - temp3_1;
                            result = result_1;
                            float result_3 = result;
                            result = (x87_r7_64 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_64, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r7_64 == temp3_1 ? 1 : 0) << 0xe;

                            if (!(*(&result + 1) & 0x40))
                            {
                            label_4df22b:
                                long double x87_r7_67 = var_88_1;
                                long double x87_r6_57 = var_84_1;
                                long double x87_r5_3 = var_80;
                                long double x87_r7_69 = 1.0 / sqrtl(x87_r5_3 * x87_r5_3
                                    + x87_r6_57 * x87_r6_57 + x87_r7_67 * x87_r7_67);
                                float var_24_2 = var_88_1 * x87_r7_69;
                                float var_20_2 = var_84_1 * x87_r7_69;
                                float var_1c_2 = ecx_4 * x87_r7_69;
                            }
                            else
                            {
                                long double x87_r7_65 = var_84_1;
                                long double temp5_1 = 0f;
                                x87_r7_65 - temp5_1;
                                result = (x87_r7_65 < temp5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_65, temp5_1) ? 1 : 0) << 0xa
                                    | (x87_r7_65 == temp5_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df22b;

                                long double x87_r7_66 = var_80;
                                long double temp7_1 = 0f;
                                x87_r7_66 - temp7_1;
                                result = (x87_r7_66 < temp7_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_66, temp7_1) ? 1 : 0) << 0xa
                                    | (x87_r7_66 == temp7_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df22b;
                            }

                            long double x87_r7_71 = var_7c;
                            long double temp6_1 = 0f;
                            x87_r7_71 - temp6_1;
                            result = (x87_r7_71 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_71, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_71 == temp6_1 ? 1 : 0) << 0xe;

                            if (!(*(&result + 1) & 0x40))
                            {
                            label_4df2a8:
                                long double x87_r7_74 = result_1;
                                long double x87_r6_65 = var_78_1;
                                long double x87_r5_5 = var_7c;
                                long double x87_r7_76 = 1.0 / sqrtl(x87_r5_5 * x87_r5_5
                                    + x87_r6_65 * x87_r6_65 + x87_r7_74 * x87_r7_74);
                                float var_18_2 = var_7c * x87_r7_76;
                                float var_14_2 = var_78_1 * x87_r7_76;
                                float var_10_1 = result_3 * x87_r7_76;
                            }
                            else
                            {
                                long double x87_r7_72 = var_78_1;
                                long double temp8_1 = 0f;
                                x87_r7_72 - temp8_1;
                                result = (x87_r7_72 < temp8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_72, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_72 == temp8_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df2a8;

                                long double x87_r7_73 = result_1;
                                long double temp9_1 = 0f;
                                x87_r7_73 - temp9_1;
                                result = (x87_r7_73 < temp9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_73, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_73 == temp9_1 ? 1 : 0) << 0xe;

                                if (!(*(&result + 1) & 0x40))
                                    goto label_4df2a8;
                            }

                            memcpy(&var_58, &var_30, 0x28);
                            int32_t var_34_1 = 0;
                        }

                        long double x87_r7_81 = *(a1 + 0x78) * *(i + 0x100)
                            + *(a1 + 0x70) * *(i + 0xf0) + *(a1 + 0x74) * *(i + 0xf8);
                        long double x87_r6_80 = *(a1 + 0x80) * *(i + 0xf8)
                            + *(a1 + 0x7c) * *(i + 0xf0) + *(a1 + 0x84) * *(i + 0x100);
                        double var_68_1 = x87_r6_80;
                        long double x87_r6_84 = *(a1 + 0x8c) * *(i + 0xf8)
                            + *(a1 + 0x88) * *(i + 0xf0) + *(a1 + 0x90) * *(i + 0x100);
                        double var_60_1 = x87_r6_84;
                        *(i + 0x20) = x87_r7_81 + *(a1 + 0x20);
                        *(i + 0x28) = var_68_1 + *(a1 + 0x28);
                        *(i + 0x30) = var_60_1 + *(a1 + 0x30);
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
                int32_t ecx_6 = g_afa7e0;

                do
                {
                    var_7c = i_1 + 0x20;
                    float i_2 = i_1;
                    int32_t var_78_2 = i_1 + 0x70;
                    int32_t* j = *(*(i_1 + 0xe8) + 8);

                    if (*j && j)
                    {
                        do
                        {
                            int32_t* edx_3 = *j;
                            void* eax_11;

                            if (!edx_3)
                                eax_11 = nullptr;
                            else
                            {
                                int32_t eax_8 = *edx_3;
                                int32_t eax_9 = -(eax_8);
                                eax_11 = (eax_9 - eax_9) & edx_3;
                            }

                            *((ecx_6 << 2) + &g_afa6e0) = eax_11;
                            g_afa7e0 = ecx_6 + 1;
                            uint32_t eax_13 = MagicObj_GetEventId();
                            int32_t ecx_8 = 0;
                            ecx_8 = j[7];
                            int32_t eax_17 = *(((eax_13 * 0x180 + ecx_8) << 2) + &g_a96ae0);

                            if (eax_17)
                                eax_17(j, &var_7c);

                            ecx_6 = g_afa7e0 - 1;
                            g_afa7e0 = ecx_6;
                            j = *((ecx_6 << 2) + &g_afa6e0);
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
