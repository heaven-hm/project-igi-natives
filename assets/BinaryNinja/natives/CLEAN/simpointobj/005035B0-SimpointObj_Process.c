// IGI native provenance: SimpointObj_Process - 0x005035B0 - CFG score 80.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 005035B0-SimpointObj_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SimpointObj_Process.h"
int32_t* SimpointObj_Process(int32_t* context)

{
    int32_t* result = context;
    int32_t* i = result[2];

    if (*i && i)
    {
        float entity_1 = result[0x11];
        float item_28_1 = result[0x14] * result[0x13] * entity_1;
        long double fpu_val_7_5 = result[0x15] * 0.99000001f;
        result[0x15] = fpu_val_7_5;
        long double fpu_val_7_7 = result[0x16] * 0.99000001f;
        result[0x16] = fpu_val_7_7;
        long double fpu_val_7_9 = result[0x17] * 0.99000001f;
        float item_24_1 = fpu_val_7_9;
        result[0x17] = fpu_val_7_9;
        float item_50;
        Sys_ReadFileBlock_12(&item_50, fpu_val_7_5, fpu_val_7_7, item_24_1);

        do
        {
            long double fpu_val_7_11 = entity_1 * i[0x3c];
            i[0x3c] = fpu_val_7_11;
            long double fpu_val_6_2 = entity_1 * i[0x3d];
            i[0x3d] = fpu_val_6_2;
            long double fpu_val_6_5 = entity_1 * i[0x3e] - item_28_1;
            i[0x3e] = fpu_val_6_5;
            double item_20 = fpu_val_7_11 + *(i + 0x20);
            double item_18_1 = fpu_val_6_2 + *(i + 0x28);
            double item_10_1 = fpu_val_6_5 + *(i + 0x30);
            memcpy(&i[8], &item_20, 0x18);
            float item_4c;
            float item_48;
            float item_a0 = item_50 * i[0x1c] + item_48 * i[0x22] + item_4c * i[0x1f];
            float item_9c_1 = item_48 * i[0x23] + item_4c * i[0x20] + item_50 * i[0x1d];
            float item_98_1 = item_50 * i[0x1e] + item_48 * i[0x24] + item_4c * i[0x21];
            float item_44;
            float item_40;
            float item_3c;
            float item_94_1 = item_44 * i[0x1c] + item_3c * i[0x22] + item_40 * i[0x1f];
            float item_90_1 = item_3c * i[0x23] + item_40 * i[0x20] + item_44 * i[0x1d];
            int32_t item_2c;
            result = i[0x25] + item_2c + 1;
            int32_t* result_2 = result;
            float item_8c_1 = item_44 * i[0x1e] + item_3c * i[0x24] + item_40 * i[0x21];
            float item_38;
            float item_34;
            float item_30;
            float item_88_1 = item_38 * i[0x1c] + item_30 * i[0x22] + item_34 * i[0x1f];
            float item_84_1 = item_30 * i[0x23] + item_34 * i[0x20] + item_38 * i[0x1d];
            float item_80_1 = item_38 * i[0x1e] + item_30 * i[0x24] + item_34 * i[0x21];
            memcpy(&i[0x1c], &item_a0, 0x28);

            if (result > 0x3e8)
            {
                long double fpu_val_7_53 = item_a0;
                long double f0_1 = 0.0f;
                fpu_val_7_53 - f0_1;
                float item_74_1 = item_9c_1;
                float item_78 = item_a0;
                float item_70_1 = item_98_1;

                if (!(*(&((fpu_val_7_53 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_53, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_53 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_5038c5:
                    long double fpu_val_7_56 = item_98_1;
                    long double fpu_val_6_42 = item_9c_1;
                    long double fpu_val_5_1 = item_a0;
                    long double fpu_val_7_58 = 1.0 /
                        sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_42 * fpu_val_6_42 + fpu_val_7_56 * fpu_val_7_56);
                    item_78 = item_a0 * fpu_val_7_58;
                    item_74_1 = item_74_1 * fpu_val_7_58;
                    item_70_1 = item_70_1 * fpu_val_7_58;
                }
                else
                {
                    long double fpu_val_7_54 = item_9c_1;
                    long double f1_1 = 0.0f;
                    fpu_val_7_54 - f1_1;

                    if (!(*(&((fpu_val_7_54 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_54, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_54 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_5038c5;

                    long double fpu_val_7_55 = item_98_1;
                    long double f3_1 = 0.0f;
                    fpu_val_7_55 - f3_1;

                    if (!(*(&((fpu_val_7_55 < f3_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_55, f3_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_55 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_5038c5;
                }

                float item_c4_1 = item_84_1 * item_98_1 - item_80_1 * item_9c_1;
                float item_6c_1 = item_c4_1;
                float item_c0_1 = -((item_88_1 * item_98_1 - item_80_1 * item_a0));
                float item_bc_1 = item_88_1 * item_9c_1 - item_84_1 * item_a0;
                float item_b4_1 = item_bc_1 * item_74_1 - item_c0_1 * item_70_1;
                float item_60_1 = item_b4_1;
                float result_1 = -((item_bc_1 * item_78 - item_c4_1 * item_70_1));
                result = result_1;
                int32_t* result_3 = result;
                float item_ac_1 = item_c0_1 * item_78 - item_c4_1 * item_74_1;
                long double fpu_val_7_80 = item_c4_1;
                long double f2_1 = 0.0f;
                fpu_val_7_80 - f2_1;
                result = (fpu_val_7_80 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_80, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_80 == f2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                label_5039fa:
                    long double fpu_val_7_83 = item_c4_1;
                    long double fpu_val_6_62 = item_c0_1;
                    long double fpu_val_5_3 = item_bc_1;
                    long double fpu_val_7_85 = 1.0 /
                        sqrtl(fpu_val_5_3 * fpu_val_5_3 + fpu_val_6_62 * fpu_val_6_62 + fpu_val_7_83 * fpu_val_7_83);
                    float item_6c_2 = item_c4_1 * fpu_val_7_85;
                    float item_68_2 = item_c0_1 * fpu_val_7_85;
                    float item_64_2 = item_bc_1 * fpu_val_7_85;
                }
                else
                {
                    long double fpu_val_7_81 = item_c0_1;
                    long double f4_1 = 0.0f;
                    fpu_val_7_81 - f4_1;
                    result = (fpu_val_7_81 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_81, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_81 == f4_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_5039fa;

                    long double fpu_val_7_82 = item_bc_1;
                    long double f6_1 = 0.0f;
                    fpu_val_7_82 - f6_1;
                    result = (fpu_val_7_82 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_82, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_82 == f6_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_5039fa;
                }

                long double fpu_val_7_87 = item_b4_1;
                long double f5_1 = 0.0f;
                fpu_val_7_87 - f5_1;
                result = (fpu_val_7_87 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_87, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_87 == f5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                label_503a77:
                    long double fpu_val_7_90 = item_ac_1;
                    long double fpu_val_6_70 = result_1;
                    long double fpu_val_5_5 = item_b4_1;
                    long double fpu_val_7_92 = 1.0 /
                        sqrtl(fpu_val_5_5 * fpu_val_5_5 + fpu_val_6_70 * fpu_val_6_70 + fpu_val_7_90 * fpu_val_7_90);
                    float item_60_2 = item_b4_1 * fpu_val_7_92;
                    float item_5c_1 = result_3 * fpu_val_7_92;
                    float item_58_2 = item_ac_1 * fpu_val_7_92;
                }
                else
                {
                    long double fpu_val_7_88 = result_1;
                    long double f8_1 = 0.0f;
                    fpu_val_7_88 - f8_1;
                    result = (fpu_val_7_88 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_88, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_88 == f8_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_503a77;

                    long double fpu_val_7_89 = item_ac_1;
                    long double f9_1 = 0.0f;
                    fpu_val_7_89 - f9_1;
                    result = (fpu_val_7_89 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_89, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_89 == f9_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        goto label_503a77;
                }

                memcpy(&item_a0, &item_78, 0x28);
                int32_t item_7c_1 = 0;
            }

            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);

        int32_t* i_1 = context[2];

        if (*i_1 && i_1)
        {
            int32_t temp_6 = g_afa7e0;

            do
            {
                int32_t* source_1 = *i_1;
                void* data_9;

                if (!source_1)
                    data_9 = nullptr;
                else
                {
                    int32_t data_6 = *source_1;
                    int32_t data_7 = -(data_6);
                    data_9 = (data_7 - data_7) & source_1;
                }

                *((temp_6 << 2) + &g_afa6e0) = data_9;
                int32_t temp_7 = temp_6 + 1;
                int32_t data_10 = 0;
                g_afa7e0 = temp_7;
                data_10 = i_1[7];
                result = *((data_10 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    temp_7 = g_afa7e0;
                }

                i_1 = *((temp_7 << 2) + &g_afa6dc);
                temp_6 = temp_7 - 1;
                g_afa7e0 = temp_6;
            } while (i_1);
        }
    }
    else if (result[0x18])
        return QTask_FindType(result);

    return result;
}
