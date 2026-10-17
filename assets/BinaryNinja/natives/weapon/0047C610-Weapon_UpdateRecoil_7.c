// Original IGI.EXE function: Weapon_UpdateRecoil_7 (VA 0x0047C610; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateRecoil_7.h"
int32_t* Weapon_UpdateRecoil_7(float* context, int32_t* param_2, int32_t param_3 , int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t* param_9)

{
    int32_t* result = param_2;
    double* temp_val = context[&result[0x90]];
    void* source_val = context[0x245];

    if (*(source_val + 0x9c) != 0xa)
    {
        *(temp_val + 0x44) = *temp_val - *(context + 0x518);
        temp_val[9] = temp_val[1] - *(context + 0x520);
        *(temp_val + 0x4c) = temp_val[2] - *(context + 0x528);
        temp_val[0xa] = temp_val[3] - *(context + 0x518);
        *(temp_val + 0x54) = temp_val[4] - *(context + 0x520);
        long double fpu_val_7_12 = temp_val[5] - *(context + 0x528);
        temp_val[0xb] = fpu_val_7_12;
        float item_10_1 = fpu_val_7_12 - *(temp_val + 0x4c);
        long double fpu_val_7_14 = 0.0f;
        float item_c_1 = fpu_val_7_14 - (*(temp_val + 0x54) - temp_val[9]);
        float item_18_2 = item_c_1;
        float item_8_1 = -((fpu_val_7_14 - (temp_val[0xa] - *(temp_val + 0x44))));
        long double fpu_val_7_17 = item_c_1;
        long double f0_1 = 0.0f;
        fpu_val_7_17 - f0_1;
        float item_14_2 = item_8_1;
        result = nullptr;
        float item_10_2 = 0.0f;
        result = (fpu_val_7_17 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_17, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_17 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
        label_47c732:
            long double fpu_val_7_22 = 0.0f;
            long double fpu_val_6_7 = item_8_1;
            long double fpu_val_5_1 = item_c_1;
            long double fpu_val_7_24 =
                1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_7 * fpu_val_6_7 + fpu_val_7_22 * fpu_val_7_22);
            item_18_2 = item_c_1 * fpu_val_7_24;
            item_14_2 = item_14_2 * fpu_val_7_24;
            item_10_2 = 0.0f * fpu_val_7_24;
        label_47c780:
            long double fpu_val_7_27 = item_18_2 * 286.720001f;
            float item_14_3 = item_14_2 * 286.720001f;
            float item_10_3 = item_10_2 * 286.720001f;
            long double fpu_val_7_32;

            if (!param_9)
            {
                *(temp_val + 0x5c) = fpu_val_7_27 + *(temp_val + 0x44);
                temp_val[0xc] = item_14_3 + temp_val[9];
                fpu_val_7_32 = item_10_3 + *(temp_val + 0x4c);
            }
            else
            {
                *(temp_val + 0x5c) = fpu_val_7_27 + temp_val[0xa];
                temp_val[0xc] = item_14_3 + *(temp_val + 0x54);
                fpu_val_7_32 = item_10_3 + temp_val[0xb];
            }

            temp_val[0xd] = param_3;
            *(temp_val + 0x6c) = param_4;
            *(temp_val + 0x64) = fpu_val_7_32;
            temp_val[0xe] = param_5;
            *(temp_val + 0x74) = param_6;
            temp_val[0xf] = param_7;
            *(temp_val + 0x7c) = param_8;
            temp_val[0x10] = param_6;
            int32_t* context_2 = temp_val + 0x9c;
            *(temp_val + 0x84) = param_7;
            int32_t i_2 = 3;
            temp_val[0x11] = param_8;
            int32_t i_1 = 0;
            int32_t i;

            do
            {
                context_2[-1] = 0;
                *context_2 = 0;
                context_2 = &context_2[2];
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            temp_val[0x12] = 0;
            *(temp_val + 0x94) = 0x3f800000;
            *(temp_val + 0x8c) = 0;
            *(temp_val + 0xbc) = *(source_val + 0x9c);
            temp_val[0x18] = 1;
            temp_val[0x16] = 0;
            *(temp_val + 0xb4) = 0x3f000000;

            if (!param_9)
                temp_val[0x17] = 0;
            else
                temp_val[0x17] = 0x3f000000;

            float* dest_8 = temp_val + 0x44;
            param_9 = &temp_val[0x16];
            void* temp_1 = &temp_val[0x13];

            do
            {
                temp_1 += 8;
                context[i_1 + *(source_val + 0x9c) * 0x14 + 0x249] = &dest_8[9];
                context[i_1 + *(source_val + 0x9c) * 0x14 + 0x246] = dest_8;
                dest_8 = &dest_8[3];
                int32_t context_13 = i_1 + *(source_val + 0x9c) * 0xa;
                context[context_13 * 2 + 0x24c] = *(temp_1 - 8);
                context[context_13 * 2 + 0x24d] = *(temp_1 - 4);
                int32_t context_16 = i_1 + *(source_val + 0x9c) * 0x14;
                i_1 += 1;
                context[context_16 + 0x252] = *param_9;
                param_9 = &param_9[1];
            } while (i_1 < 3);

            context[*(source_val + 0x9c) * 0x14 + 0x259] = 0;
            context[(*(source_val + 0x9c) + 0x1e) * 0x14] = 0;
            int32_t data_12 = *(source_val + 0x9c);
            context[data_12 * 0x14 + 0x255] = *(temp_val + 0x8c);
            context[data_12 * 0x14 + 0x256] = temp_val[0x12];
            context[data_12 * 0x14 + 0x257] = *(temp_val + 0x94);
            result = *(source_val + 0x9c) + 1;
            *(source_val + 0x9c) = result;
        }
        else
        {
            long double fpu_val_7_18 = item_8_1;
            long double f1_1 = 0.0f;
            fpu_val_7_18 - f1_1;
            result = (fpu_val_7_18 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_18, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_18 == f1_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_47c710:
                long double fpu_val_7_20 = item_8_1;
                long double f2_1 = 0.0f;
                fpu_val_7_20 - f2_1;

                if (!(*(&((fpu_val_7_20 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_20, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_20 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_47c732;

                long double fpu_val_7_21 = 0.0f;
                long double f4_1 = 0.0f;
                fpu_val_7_21 - f4_1;

                if (*(&((fpu_val_7_21 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_21, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_21 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    goto label_47c780;

                goto label_47c732;
            }

            long double fpu_val_7_19 = 0.0f;
            long double f3_1 = 0.0f;
            fpu_val_7_19 - f3_1;
            result = (fpu_val_7_19 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_19, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == f3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_47c710;
        }
    }

    return result;
}
