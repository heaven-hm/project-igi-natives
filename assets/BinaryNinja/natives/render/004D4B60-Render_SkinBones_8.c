// Original IGI.EXE function: Render_SkinBones_8 (VA 0x004D4B60; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_8.h"
float Render_SkinBones_8(int32_t context, float param_2, float param_3, float param_4) {
    float source_val = param_4;
    void* data_val = *(source_val + 0x30);

    if (data_val)
        *(data_val + 4) = *(source_val + 0x2c);

    int32_t* dest_val = param_3;
    *(source_val + 8) &= 0xfffffeff;
    dest_val[1] &= 0xfffffeff;
    float temp_2 = *(source_val + 0x2c);
    param_3 = *(source_val + 0x28) + *(source_val + 0x2c);
    *(source_val + 0x2c) = param_3;
    float data_1;

    if (context)
        data_1 = *(*(source_val + 0xc) + 0x10);

    int32_t entity_5;
    float result;

    if (!context || !data_1 || *data_1 <= 0)
    {
        result = param_2;
        entity_5 = 0;
    }
    else
    {
        long double fpu_val_7_2;
        long double f2_1;

        if (*((source_val + 8) + 1) & 0x80)
        {
            fpu_val_7_2 = temp_2;
            f2_1 = param_3;
            fpu_val_7_2 - f2_1;
        }

        float data_4;

        if (!(*((source_val + 8) + 1) & 0x80) || *(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            data_4 = param_2;
        else
            data_4 = Render_ComputeNormals_8(context, param_2, dest_val, source_val, temp_2, temp_2);

        entity_5 = 1;
        result = Render_ComputeNormals_8(context, data_4, dest_val, source_val, temp_2, *(source_val + 0x2c));
    }

    long double fpu_val_7_3 = *(source_val + 0x2c);
    long double f0 = **(source_val + 0xc);
    fpu_val_7_3 - f0;
    int32_t data_6;

    if (!(*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        data_6 = *(source_val + 8);

    if (!(*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1) && !(data_6 & 2))
    {
    label_4d4c4a:
        *(&data_6 + 1) |= 1;
        *(source_val + 8) = data_6;
        int32_t data_7 = dest_val[1];
        *(&data_7 + 1) |= 1;
        dest_val[1] = data_7;
        char data_8 = *(source_val + 8);

        if (!(data_8 & 1))
        {
            if (data_8 & 2)
            {
                int32_t data_23 = *(source_val + 8);
                *(source_val + 0x2c) = 0;
                *(&data_23 + 1) &= 0x7f;
                *(source_val + 8) = data_23;
                return result;
            }

            *(source_val + 0x2c) = **(source_val + 0xc);
        }
        else
        {
            float* data_9 = *(source_val + 0xc);

            if (!(data_8 & 2))
            {
                param_4 = -1.0f;
                *(source_val + 0x2c) = *(source_val + 0x2c) - *data_9;
            }
            else
            {
                *(source_val + 0x2c) = *data_9 + *(source_val + 0x2c);
                param_4 = *data_9 + 1.0f;
            }

            if (entity_5)
                result = Render_ComputeNormals_8(context, result, dest_val, source_val, param_4, *(source_val + 0x2c));

            if (!*dest_val)
            {
                int16_t entity_8 = *(source_val + 8);

                if (!(*(&entity_8 + 1) & 0x80))
                {
                    int32_t* data_11 = *(source_val + 0xc);
                    float temp_6 = *(source_val + 0x2c);
                    int32_t* dest_1 = data_11[2];

                    if (!(entity_8 & 2))
                    {
                        *(source_val + 0x2c) = *data_11;
                        Render_DrawLightmapMesh_8(nullptr, nullptr, source_val);
                        *(source_val + 0x10) = *dest_1[1] - *(source_val + 0x1c);
                        *(source_val + 0x14) = *(dest_1[1] + 4) - *(source_val + 0x20);
                        long double fpu_val_7_22 = *(dest_1[1] + 8) - *(source_val + 0x24);
                        int32_t data_21 = *(source_val + 8);
                        *(source_val + 0x2c) = temp_6;
                        *(&data_21 + 1) &= 0x7f;
                        *(source_val + 8) = data_21;
                        *(source_val + 0x18) = fpu_val_7_22;
                        return result;
                    }

                    *(source_val + 0x2c) = 0;
                    Render_DrawLightmapMesh_8(nullptr, nullptr, source_val);
                    *(source_val + 0x10) = *(dest_1[1] + *dest_1 * 0x28 - 0x28) - *(source_val + 0x1c);
                    *(source_val + 0x14) = *(dest_1[1] + *dest_1 * 0x28 - 0x24) - *(source_val + 0x20);
                    int32_t data_17 = *(source_val + 8);
                    *(&data_17 + 1) &= 0x7f;
                    long double fpu_val_7_16 = *(dest_1[1] + *dest_1 * 0x28 - 0x20) - *(source_val + 0x24);
                    *(source_val + 8) = data_17;
                    *(source_val + 0x2c) = temp_6;
                    *(source_val + 0x18) = fpu_val_7_16;
                    return result;
                }
            }
        }
    }
    else
    {
        long double fpu_val_7_4 = *(source_val + 0x2c);
        long double f1_1 = 0.0f;
        fpu_val_7_4 - f1_1;

        if (*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            data_6 = *(source_val + 8);

            if (data_6 & 2)
                goto label_4d4c4a;
        }
    }

    int32_t data_26 = *(source_val + 8);
    *(&data_26 + 1) &= 0x7f;
    *(source_val + 8) = data_26;
    return result;
}
