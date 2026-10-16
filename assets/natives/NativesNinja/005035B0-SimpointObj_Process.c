#include "005035B0-SimpointObj_Process.h"
/* 0x005035b0 SimpointObj_Process full linked: callers=0 callees=5 */
int32_t* sub_5035b0(int32_t* a1)

{
    int32_t* result = a1;
    int32_t* i = result[2];

    if (*i && i)
    {
        float ecx_1 = result[0x11];
        float var_28_1 = result[0x14] * result[0x13] * ecx_1;
        long double x87_r7_5 = result[0x15] * 0.99000001f;
        result[0x15] = x87_r7_5;
        long double x87_r7_7 = result[0x16] * 0.99000001f;
        result[0x16] = x87_r7_7;
        long double x87_r7_9 = result[0x17] * 0.99000001f;
        float var_24_1 = x87_r7_9;
        result[0x17] = x87_r7_9;
        float var_50;
        sub_4b38e0(&var_50, x87_r7_5, x87_r7_7, var_24_1);

        do
        {
            long double x87_r7_11 = ecx_1 * i[0x3c];
            i[0x3c] = x87_r7_11;
            long double x87_r6_2 = ecx_1 * i[0x3d];
            i[0x3d] = x87_r6_2;
            long double x87_r6_5 = ecx_1 * i[0x3e] - var_28_1;
            i[0x3e] = x87_r6_5;
            double var_20 = x87_r7_11 + *(i + 0x20);
            double var_18_1 = x87_r6_2 + *(i + 0x28);
            double var_10_1 = x87_r6_5 + *(i + 0x30);
            memcpy(&i[8], &var_20, 0x18);
            float var_4c;
            float var_48;
            float var_a0 = var_50 * i[0x1c] + var_48 * i[0x22] + var_4c * i[0x1f];
            float var_9c_1 = var_48 * i[0x23] + var_4c * i[0x20] + var_50 * i[0x1d];
            float var_98_1 = var_50 * i[0x1e] + var_48 * i[0x24] + var_4c * i[0x21];
            float var_44;
            float var_40;
            float var_3c;
            float var_94_1 = var_44 * i[0x1c] + var_3c * i[0x22] + var_40 * i[0x1f];
            float var_90_1 = var_3c * i[0x23] + var_40 * i[0x20] + var_44 * i[0x1d];
            int32_t var_2c;
            result = i[0x25] + var_2c + 1;
            int32_t* result_2 = result;
            float var_8c_1 = var_44 * i[0x1e] + var_3c * i[0x24] + var_40 * i[0x21];
            float var_38;
            float var_34;
            float var_30;
            float var_88_1 = var_38 * i[0x1c] + var_30 * i[0x22] + var_34 * i[0x1f];
            float var_84_1 = var_30 * i[0x23] + var_34 * i[0x20] + var_38 * i[0x1d];
            float var_80_1 = var_38 * i[0x1e] + var_30 * i[0x24] + var_34 * i[0x21];
            memcpy(&i[0x1c], &var_a0, 0x28);

            if (result > 0x3e8)
            {
                long double x87_r7_53 = var_a0;
                long double temp0_1 = 0f;
                x87_r7_53 - temp0_1;
                float var_74_1 = var_9c_1;
                float var_78 = var_a0;
                float var_70_1 = var_98_1;

                if (!(*(&((x87_r7_53 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_53, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_53 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_5038c5:
                    long double x87_r7_56 = var_98_1;
                    long double x87_r6_42 = var_9c_1;
                    long double x87_r5_1 = var_a0;
                    long double x87_r7_58 = 1.0 /
                        sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_42 * x87_r6_42 + x87_r7_56 * x87_r7_56);
                    var_78 = var_a0 * x87_r7_58;
                    var_74_1 = var_74_1 * x87_r7_58;
                    var_70_1 = var_70_1 * x87_r7_58;
                }
                else
                {
                    long double x87_r7_54 = var_9c_1;
                    long double temp1_1 = 0f;
                    x87_r7_54 - temp1_1;

                    if (!(*(&((x87_r7_54 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_54, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_54 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_5038c5;

                    long double x87_r7_55 = var_98_1;
                    long double temp3_1 = 0f;
                    x87_r7_55 - temp3_1;

                    if (!(*(&((x87_r7_55 < temp3_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_55, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r7_55 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_5038c5;
                }

                float var_c4_1 = var_84_1 * var_98_1 - var_80_1 * var_9c_1;
                float var_6c_1 = var_c4_1;
                float var_c0_1 = -((var_88_1 * var_98_1 - var_80_1 * var_a0));
                float var_bc_1 = var_88_1 * var_9c_1 - var_84_1 * var_a0;
                float var_b4_1 = var_bc_1 * var_74_1 - var_c0_1 * var_70_1;
                float var_60_1 = var_b4_1;
                float result_1 = -((var_bc_1 * var_78 - var_c4_1 * var_70_1));
                result = result_1;
                int32_t* result_3 = result;
                float var_ac_1 = var_c0_1 * var_78 - var_c4_1 * var_74_1;
                long double x87_r7_80 = var_c4_1;
                long double temp2_1 = 0f;
                x87_r7_80 - temp2_1;
                result = (x87_r7_80 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_80, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_80 == temp2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                label_5039fa:
                    long double x87_r7_83 = var_c4_1;
                    long double x87_r6_62 = var_c0_1;
                    long double x87_r5_3 = var_bc_1;
                    long double x87_r7_85 = 1.0 /
                        sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_62 * x87_r6_62 + x87_r7_83 * x87_r7_83);
                    float var_6c_2 = var_c4_1 * x87_r7_85;
                    float var_68_2 = var_c0_1 * x87_r7_85;
                    float var_64_2 = var_bc_1 * x87_r7_85;
                }
                else
                {
                    long double x87_r7_81 = var_c0_1;
                    long double temp4_1 = 0f;
                    x87_r7_81 - temp4_1;
                    result = (x87_r7_81 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_81, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_81 == temp4_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_5039fa;

                    long double x87_r7_82 = var_bc_1;
                    long double temp6_1 = 0f;
                    x87_r7_82 - temp6_1;
                    result = (x87_r7_82 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_82, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_82 == temp6_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_5039fa;
                }

                long double x87_r7_87 = var_b4_1;
                long double temp5_1 = 0f;
                x87_r7_87 - temp5_1;
                result = (x87_r7_87 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_87, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_87 == temp5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                label_503a77:
                    long double x87_r7_90 = var_ac_1;
                    long double x87_r6_70 = result_1;
                    long double x87_r5_5 = var_b4_1;
                    long double x87_r7_92 = 1.0 /
                        sqrtl(x87_r5_5 * x87_r5_5 + x87_r6_70 * x87_r6_70 + x87_r7_90 * x87_r7_90);
                    float var_60_2 = var_b4_1 * x87_r7_92;
                    float var_5c_1 = result_3 * x87_r7_92;
                    float var_58_2 = var_ac_1 * x87_r7_92;
                }
                else
                {
                    long double x87_r7_88 = result_1;
                    long double temp8_1 = 0f;
                    x87_r7_88 - temp8_1;
                    result = (x87_r7_88 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_88, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_88 == temp8_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_503a77;

                    long double x87_r7_89 = var_ac_1;
                    long double temp9_1 = 0f;
                    x87_r7_89 - temp9_1;
                    result = (x87_r7_89 < temp9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_89, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_89 == temp9_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_503a77;
                }

                memcpy(&var_a0, &var_78, 0x28);
                int32_t var_7c_1 = 0;
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
            int32_t edx_6 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i_1;
                void* eax_9;

                if (!esi_1)
                    eax_9 = nullptr;
                else
                {
                    int32_t eax_6 = *esi_1;
                    int32_t eax_7 = -(eax_6);
                    eax_9 = (eax_7 - eax_7) & esi_1;
                }

                *((edx_6 << 2) + &g_afa6e0) = eax_9;
                int32_t edx_7 = edx_6 + 1;
                int32_t eax_10 = 0;
                g_afa7e0 = edx_7;
                eax_10 = i_1[7];
                result = *((eax_10 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    edx_7 = g_afa7e0;
                }

                i_1 = *((edx_7 << 2) + &g_afa6dc);
                edx_6 = edx_7 - 1;
                g_afa7e0 = edx_6;
            } while (i_1);
        }
    }
    else if (result[0x18])
        return QTask_FindType(result);

    return result;
}
