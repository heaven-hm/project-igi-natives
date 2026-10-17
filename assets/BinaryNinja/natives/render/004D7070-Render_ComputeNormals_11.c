// Original IGI.EXE function: Render_ComputeNormals_11 (VA 0x004D7070; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_11.h"
float Render_ComputeNormals_11(float context, float param_2, float param_3, int32_t param_4, int32_t param_5) {
    float result = context;
    void* entity_val = *(result + 0x74);
    float flagP = param_3;
    float* source_val = param_2;

    if (flagP < param_4)
    {
        long double fpu_val_7_3 = (*(result + 0x50) - *(result + 0x54)) * (source_val[2] - source_val[1]);
        long double fpu_val_6_5 = (source_val[3] - *source_val) * (*(result + 0x54) + *(result + 0x50));
        float item_24_1 = (*(result + 0x58) - *(result + 0x4c)) * (source_val[1] + source_val[2]);
        float item_2c_1 = (*source_val + source_val[2]) * (*(result + 0x50) + *(result + 0x4c));
        param_2 = (*(result + 0x58) - *(result + 0x54)) * (source_val[3] + source_val[1]);
        long double fpu_val_5_14 = (source_val[3] - source_val[1]) * (*(result + 0x58) + *(result + 0x54));
        long double fpu_val_4_11 = fpu_val_5_14 + param_2 + item_2c_1;
        context = ((*(result + 0x4c) - *(result + 0x50)) * (source_val[2] - *source_val) + fpu_val_4_11) * 0.5f;
        *(result + 0x4c) =
            (*(result + 0x58) + *(result + 0x4c)) * (source_val[3] + *source_val) + context - fpu_val_4_11;
        long double fpu_val_5_16 = fpu_val_6_5 + context - fpu_val_5_14;
        param_3 = fpu_val_5_16;
        *(result + 0x50) = fpu_val_5_16;
        int32_t context_1 = *(result + 0x5c);
        long double fpu_val_6_11 = context + item_24_1 - param_2;
        param_2 = fpu_val_6_11;
        *(result + 0x54) = fpu_val_6_11;
        long double fpu_val_7_5 = fpu_val_7_3 + context - item_2c_1;
        *(result + 0x58) = fpu_val_7_5;
        int32_t context_2 = context_1 + source_val[4] + 1;
        *(result + 0x5c) = context_2;

        if (context_2 > 0x3e8)
        {
            long double fpu_val_6_12 = *(result + 0x4c);
            *(result + 0x5c) = 0;
            long double fpu_val_5_25 = 1.0
                / sqrtl(fpu_val_7_5 * fpu_val_7_5 + param_2 * param_2 + param_3 * param_3 + fpu_val_6_12 * fpu_val_6_12);
            *(result + 0x4c) = *(result + 0x4c) * fpu_val_5_25;
            *(result + 0x50) = param_3 * fpu_val_5_25;
            *(result + 0x54) = param_2 * fpu_val_5_25;
            *(result + 0x58) = fpu_val_7_5 * fpu_val_5_25;
        }

        if (entity_val)
        {
            long double fpu_val_7_10 = -(*(entity_val + 0x4c));
            float item_10_1 = -(*(entity_val + 0x50));
            float item_c_1 = -(*(entity_val + 0x54));
            long double fpu_val_6_20 = *(entity_val + 0x58);
            int32_t temp_4 = *(entity_val + 0x5c);
            float item_2c_2 = (item_c_1 + fpu_val_7_10) * (*(result + 0x50) + *(result + 0x4c));
            param_3 = (*(result + 0x58) - *(result + 0x54)) * (fpu_val_6_20 + item_10_1);
            long double fpu_val_5_40 = (*(result + 0x58) + *(result + 0x54)) * (fpu_val_6_20 - item_10_1);
            long double fpu_val_4_28 = fpu_val_5_40 + param_3 + item_2c_2;
            context =
                ((item_c_1 - fpu_val_7_10) * (*(result + 0x4c) - *(result + 0x50)) + fpu_val_4_28) * 0.5f;
            long double fpu_val_4_29 =
                (*(result + 0x58) + *(result + 0x4c)) * (fpu_val_6_20 + fpu_val_7_10) + context - fpu_val_4_28;
            param_2 = fpu_val_4_29;
            *(result + 0x60) = fpu_val_4_29;
            long double fpu_val_5_43 =
                (*(result + 0x54) + *(result + 0x50)) * (fpu_val_6_20 - fpu_val_7_10) + context - fpu_val_5_40;
            *(result + 0x64) = fpu_val_5_43;
            param_3 = (*(result + 0x58) - *(result + 0x4c)) * (item_c_1 + item_10_1) + context - param_3;
            long double fpu_val_6_32 = (*(result + 0x50) - *(result + 0x54)) * (item_c_1 - item_10_1);
            *(result + 0x68) = param_3;
            int32_t temp_5 = *(result + 0x5c) + temp_4 + 1;
            *(result + 0x70) = temp_5;
            long double fpu_val_6_34 = fpu_val_6_32 + context - item_2c_2;
            *(result + 0x6c) = fpu_val_6_34;

            if (temp_5 > 0x3e8)
            {
                *(result + 0x70) = 0;
                long double fpu_val_5_54 = 1.0 / sqrtl(fpu_val_6_34 * fpu_val_6_34 + param_3 * param_3
                    + fpu_val_5_43 * fpu_val_5_43 + param_2 * param_2);
                *(result + 0x60) = param_2 * fpu_val_5_54;
                *(result + 0x64) = fpu_val_5_43 * fpu_val_5_54;
                *(result + 0x68) = param_3 * fpu_val_5_54;
                *(result + 0x6c) = fpu_val_6_34 * fpu_val_5_54;
            }
        }

        long double fpu_val_7_15 = *(result + 0x4c);
        long double fpu_val_7_16 = fpu_val_7_15 * fpu_val_7_15;
        *(result + 0x48) = *(result + 0x5c);
        long double fpu_val_6_39 = *(result + 0x50) * *(result + 0x4c);
        long double fpu_val_6_40 = fpu_val_6_39 + fpu_val_6_39;
        long double fpu_val_5_60 = *(result + 0x54) * *(result + 0x4c);
        param_3 = fpu_val_5_60 + fpu_val_5_60;
        long double fpu_val_5_63 = *(result + 0x58) * *(result + 0x4c);
        float item_28_1 = fpu_val_5_63 + fpu_val_5_63;
        long double fpu_val_5_65 = *(result + 0x50);
        long double fpu_val_4_43 = fpu_val_5_65 * fpu_val_5_65;
        float item_24_2 = fpu_val_4_43 + fpu_val_4_43;
        long double fpu_val_5_68 = *(result + 0x54) * *(result + 0x50);
        float item_2c_3 = fpu_val_5_68 + fpu_val_5_68;
        long double fpu_val_5_71 = *(result + 0x58) * *(result + 0x50);
        param_2 = fpu_val_5_71 + fpu_val_5_71;
        long double fpu_val_5_73 = *(result + 0x54);
        long double fpu_val_4_46 = fpu_val_5_73 * fpu_val_5_73;
        context = fpu_val_4_46 + fpu_val_4_46;
        long double fpu_val_5_76 = *(result + 0x58) * *(result + 0x54);
        long double fpu_val_5_77 = fpu_val_5_76 + fpu_val_5_76;
        *(result + 0x24) = 1.0f - item_24_2 - context;
        *(result + 0x28) = fpu_val_6_40 - fpu_val_5_77;
        *(result + 0x2c) = param_2 + param_3;
        *(result + 0x30) = fpu_val_5_77 + fpu_val_6_40;
        long double fpu_val_7_18 = 1.0f - (fpu_val_7_16 + fpu_val_7_16);
        *(result + 0x34) = fpu_val_7_18 - context;
        *(result + 0x38) = item_2c_3 - item_28_1;
        *(result + 0x3c) = param_3 - param_2;
        *(result + 0x40) = item_2c_3 + item_28_1;
        *(result + 0x44) = fpu_val_7_18 - item_24_2;
    }

    if (flagP < param_5)
    {
        long double fpu_val_7_23 = *(entity_val + 0x2c) * *(result + 0x10) + *(entity_val + 0x28) * *(result + 0xc)
            + *(entity_val + 0x24) * *(result + 8);
        float item_14_1 = fpu_val_7_23;
        float item_20_1 = item_14_1;
        long double fpu_val_7_27 = *(entity_val + 0x38) * *(result + 0x10) + *(entity_val + 0x34) * *(result + 0xc)
            + *(entity_val + 0x30) * *(result + 8);
        long double fpu_val_7_31 = *(entity_val + 0x44) * *(result + 0x10) + *(entity_val + 0x40) * *(result + 0xc)
            + *(entity_val + 0x3c) * *(result + 8);
        float item_1c_2 = fpu_val_7_27 + *(entity_val + 0x1c);
        long double fpu_val_7_37 = fpu_val_7_31 + *(entity_val + 0x20);
        *(result + 0x18) = item_14_1 + *(entity_val + 0x18);
        int16_t top_1 = 0;
        *(result + 0x1c) = item_1c_2;
        *(result + 0x20) = fpu_val_7_37;

        if (flagP < param_5 - 1)
        {
            for (float i = *(result + 0x78); i; i = *(i + 0x7c))
            {
                result = Render_ComputeNormals_11(i, source_val, flagP + 1, param_4, param_5);
                top_1 -= 1;
            }
        }
    }

    return result;
}
