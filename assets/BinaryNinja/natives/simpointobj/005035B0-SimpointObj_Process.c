#include "SimpointObj_Process.h"
int32_t* SimpointObj_Process(int32_t* a1)

{
    int32_t* result = a1;
    int32_t* i = result[2];

    if (*i && i)
    {
        float objC1 = result[0x11];
        float v_28_1 = result[0x14] * result[0x13] * objC1;
        long double x87_r7_5 = result[0x15] * 0.99000001f;
        result[0x15] = x87_r7_5;
        long double x87_r7_7 = result[0x16] * 0.99000001f;
        result[0x16] = x87_r7_7;
        long double x87_r7_9 = result[0x17] * 0.99000001f;
        float v_24_1 = x87_r7_9;
        result[0x17] = x87_r7_9;
        float v_50;
        Sys_ReadFileBlock_12(&v_50, x87_r7_5, x87_r7_7, v_24_1);

        do
        {
            long double x87_r7_11 = objC1 * i[0x3c];
            i[0x3c] = x87_r7_11;
            long double x87_r6_2 = objC1 * i[0x3d];
            i[0x3d] = x87_r6_2;
            long double x87_r6_5 = objC1 * i[0x3e] - v_28_1;
            i[0x3e] = x87_r6_5;
            double v_20 = x87_r7_11 + *(i + 0x20);
            double v_18_1 = x87_r6_2 + *(i + 0x28);
            double v_10_1 = x87_r6_5 + *(i + 0x30);
            memcpy(&i[8], &v_20, 0x18);
            float v_4c;
            float v_48;
            float v_a0 = v_50 * i[0x1c] + v_48 * i[0x22] + v_4c * i[0x1f];
            float v_9c_1 = v_48 * i[0x23] + v_4c * i[0x20] + v_50 * i[0x1d];
            float v_98_1 = v_50 * i[0x1e] + v_48 * i[0x24] + v_4c * i[0x21];
            float v_44;
            float v_40;
            float v_3c;
            float v_94_1 = v_44 * i[0x1c] + v_3c * i[0x22] + v_40 * i[0x1f];
            float v_90_1 = v_3c * i[0x23] + v_40 * i[0x20] + v_44 * i[0x1d];
            int32_t v_2c;
            result = i[0x25] + v_2c + 1;
            int32_t* result_2 = result;
            float v_8c_1 = v_44 * i[0x1e] + v_3c * i[0x24] + v_40 * i[0x21];
            float v_38;
            float v_34;
            float v_30;
            float v_88_1 = v_38 * i[0x1c] + v_30 * i[0x22] + v_34 * i[0x1f];
            float v_84_1 = v_30 * i[0x23] + v_34 * i[0x20] + v_38 * i[0x1d];
            float v_80_1 = v_38 * i[0x1e] + v_30 * i[0x24] + v_34 * i[0x21];
            memcpy(&i[0x1c], &v_a0, 0x28);

            if (result > 0x3e8)
            {
                long double x87_r7_53 = v_a0;
                long double f0_1 = 0f;
                x87_r7_53 - f0_1;
                float v_74_1 = v_9c_1;
                float v_78 = v_a0;
                float v_70_1 = v_98_1;

                if (!(*(&((x87_r7_53 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_53, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_53 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_5038c5:
                    long double x87_r7_56 = v_98_1;
                    long double x87_r6_42 = v_9c_1;
                    long double x87_r5_1 = v_a0;
                    long double x87_r7_58 = 1.0 /
                        sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_42 * x87_r6_42 + x87_r7_56 * x87_r7_56);
                    v_78 = v_a0 * x87_r7_58;
                    v_74_1 = v_74_1 * x87_r7_58;
                    v_70_1 = v_70_1 * x87_r7_58;
                }
                else
                {
                    long double x87_r7_54 = v_9c_1;
                    long double f1_1 = 0f;
                    x87_r7_54 - f1_1;

                    if (!(*(&((x87_r7_54 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_54, f1_1) ? 1 : 0) << 0xa
                            | (x87_r7_54 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_5038c5;

                    long double x87_r7_55 = v_98_1;
                    long double f3_1 = 0f;
                    x87_r7_55 - f3_1;

                    if (!(*(&((x87_r7_55 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_55, f3_1) ? 1 : 0) << 0xa
                            | (x87_r7_55 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_5038c5;
                }

                float v_c4_1 = v_84_1 * v_98_1 - v_80_1 * v_9c_1;
                float v_6c_1 = v_c4_1;
                float v_c0_1 = -((v_88_1 * v_98_1 - v_80_1 * v_a0));
                float v_bc_1 = v_88_1 * v_9c_1 - v_84_1 * v_a0;
                float v_b4_1 = v_bc_1 * v_74_1 - v_c0_1 * v_70_1;
                float v_60_1 = v_b4_1;
                float result_1 = -((v_bc_1 * v_78 - v_c4_1 * v_70_1));
                result = result_1;
                int32_t* result_3 = result;
                float v_ac_1 = v_c0_1 * v_78 - v_c4_1 * v_74_1;
                long double x87_r7_80 = v_c4_1;
                long double f2_1 = 0f;
                x87_r7_80 - f2_1;
                result = (x87_r7_80 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_80, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_80 == f2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                label_5039fa:
                    long double x87_r7_83 = v_c4_1;
                    long double x87_r6_62 = v_c0_1;
                    long double x87_r5_3 = v_bc_1;
                    long double x87_r7_85 = 1.0 /
                        sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_62 * x87_r6_62 + x87_r7_83 * x87_r7_83);
                    float v_6c_2 = v_c4_1 * x87_r7_85;
                    float v_68_2 = v_c0_1 * x87_r7_85;
                    float v_64_2 = v_bc_1 * x87_r7_85;
                }
                else
                {
                    long double x87_r7_81 = v_c0_1;
                    long double f4_1 = 0f;
                    x87_r7_81 - f4_1;
                    result = (x87_r7_81 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_81, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_81 == f4_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_5039fa;

                    long double x87_r7_82 = v_bc_1;
                    long double f6_1 = 0f;
                    x87_r7_82 - f6_1;
                    result = (x87_r7_82 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_82, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_82 == f6_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_5039fa;
                }

                long double x87_r7_87 = v_b4_1;
                long double f5_1 = 0f;
                x87_r7_87 - f5_1;
                result = (x87_r7_87 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_87, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_87 == f5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                label_503a77:
                    long double x87_r7_90 = v_ac_1;
                    long double x87_r6_70 = result_1;
                    long double x87_r5_5 = v_b4_1;
                    long double x87_r7_92 = 1.0 /
                        sqrtl(x87_r5_5 * x87_r5_5 + x87_r6_70 * x87_r6_70 + x87_r7_90 * x87_r7_90);
                    float v_60_2 = v_b4_1 * x87_r7_92;
                    float v_5c_1 = result_3 * x87_r7_92;
                    float v_58_2 = v_ac_1 * x87_r7_92;
                }
                else
                {
                    long double x87_r7_88 = result_1;
                    long double f8_1 = 0f;
                    x87_r7_88 - f8_1;
                    result = (x87_r7_88 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_88, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_88 == f8_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_503a77;

                    long double x87_r7_89 = v_ac_1;
                    long double f9_1 = 0f;
                    x87_r7_89 - f9_1;
                    result = (x87_r7_89 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_89, f9_1) ? 1 : 0) << 0xa
                        | (x87_r7_89 == f9_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_503a77;
                }

                memcpy(&v_a0, &v_78, 0x28);
                int32_t v_7c_1 = 0;
            }

            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);

        int32_t* i_1 = a1[2];

        if (*i_1 && i_1)
        {
            int32_t tmpD6 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i_1;
                void* valA9;

                if (!srcS1)
                    valA9 = nullptr;
                else
                {
                    int32_t valA6 = *srcS1;
                    int32_t valA7 = -(valA6);
                    valA9 = (valA7 - valA7) & srcS1;
                }

                *((tmpD6 << 2) + &g_afa6e0) = valA9;
                int32_t tmpD7 = tmpD6 + 1;
                int32_t valA10 = 0;
                g_afa7e0 = tmpD7;
                valA10 = i_1[7];
                result = *((valA10 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    tmpD7 = g_afa7e0;
                }

                i_1 = *((tmpD7 << 2) + &g_afa6dc);
                tmpD6 = tmpD7 - 1;
                g_afa7e0 = tmpD6;
            } while (i_1);
        }
    }
    else if (result[0x18])
        return QTask_FindType(result);

    return result;
}
