// Original IGI.EXE function: Light_ApplyLightmap_2 (VA 0x00523110; static CFG gate PASS, CFG score 1.000).
#include "Light_ApplyLightmap_2.h"
int32_t* Light_ApplyLightmap_2(int32_t context)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc(0xec, 4);
    int32_t context_2 = (context * context) << 2;
    int32_t dest_1 = context >> 1;
    *result = context;
    result[1] = dest_1;
    result[2] = Mem_Alloc(context_2, 4);
    result[7] = Mem_Alloc(context_2, 4);
    int32_t dest_3 = (dest_1 * context) << 2;
    result[0xc] = Mem_Alloc(context_2, 4);
    result[0xd] = Mem_Alloc(dest_3, 4);
    int32_t* context_3 = &result[8];
    int32_t i_3 = 4;
    int32_t i;

    do
    {
        context_3[-5] = Mem_Alloc(dest_3, 4);
        *context_3 = Mem_Alloc(dest_3, 4);
        context_3 = &context_3[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);
    int32_t data_6 = *result;
    int32_t temp_val = 0;
    long double fpu7 = 0.0f;
    int32_t item_4 = 0;
    context = data_6;

    if (data_6 > 0)
    {
        do
        {
            int32_t entity_1 = 0;
            int32_t item_8_1 = 0;

            if (data_6 > 0)
            {
                do
                {
                    long double fpu_val_5_1 = context;
                    long double fpu_val_4_2 = fpu_val_5_1 * 0.5f;
                    float item_4_1 = (item_8_1 - fpu_val_4_2 + 0.5f) / fpu_val_4_2;
                    context = (item_4 - fpu_val_4_2 + 0.5f) / fpu_val_4_2;
                    long double fpu_val_5_2 = 2.0f / fpu_val_5_1;
                    long double fpu_val_4_7 = context * context + item_4_1 * item_4_1 + 1.0f;
                    long double fpu_val_3_15 =
                        1.0f / (fpu_val_4_7 * fpu_val_4_7 * 3.14159274f) * fpu_val_5_2 * fpu_val_5_2;
                    *(result[0xc] + ((data_6 * temp_val + entity_1) << 2)) = fpu_val_3_15;
                    fpu7 = fpu7 + fpu_val_3_15;
                    long double fpu_val_4_10 = g_a83b40;
                    fpu_val_4_10 - fpu_val_3_15;

                    if (*(&((fpu_val_4_10 < fpu_val_3_15 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_4_10, fpu_val_3_15) ? 1 : 0) << 0xa
                            | (fpu_val_4_10 == fpu_val_3_15 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                        g_a83b40 = fpu_val_3_15;

                    data_6 = *result;
                    entity_1 += 1;
                    item_8_1 = entity_1;
                    context = data_6;
                } while (entity_1 < data_6);
            }

            data_6 = *result;
            temp_val += 1;
            item_4 = temp_val;
            context = data_6;
        } while (temp_val < data_6);
    }

    int32_t entity_2 = *result;
    int32_t i_1 = 0;
    int32_t i_2 = 0;
    int32_t data_12;
    int32_t temp_1;
    temp_1 = HIGHD(entity_2);
    data_12 = LOWD(entity_2);
    context = entity_2;

    if ((data_12 - temp_1) >> 1 > 0)
    {
        int32_t data_18;
        int32_t temp_3;

        do
        {
            int32_t temp_2 = 0;
            int32_t item_8_2 = 0;

            if (entity_2 > 0)
            {
                do
                {
                    long double fpu_val_5_5 = context;
                    long double fpu_val_4_12 = fpu_val_5_5 * 0.5f;
                    float item_4_2 = (item_8_2 - fpu_val_4_12 + 0.5f) / fpu_val_4_12;
                    context = (i_2 - fpu_val_4_12 + 0.5f) / fpu_val_4_12;
                    long double fpu_val_5_6 = 2.0f / fpu_val_5_5;
                    long double fpu_val_4_15 = context;
                    long double f1_1 = 0.0f;
                    fpu_val_4_15 - f1_1;
                    long double fpu_val_4_16 = context;

                    if (*(&((fpu_val_4_15 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_4_15, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_4_15 == f1_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 1)
                        fpu_val_4_16 = -(fpu_val_4_16);

                    long double fpu_val_3_27 = context * context + item_4_2 * item_4_2 + 1.0f;
                    long double fpu_val_5_8 =
                        fpu_val_5_6 * fpu_val_5_6 * fpu_val_4_16 / (fpu_val_3_27 * fpu_val_3_27 * 3.14159274f);
                    *(result[0xd] + ((entity_2 * i_1 + temp_2) << 2)) = fpu_val_5_8;
                    fpu7 = fpu7 + fpu_val_5_8 * 4.0f;
                    long double fpu_val_4_20 = g_a83b2c;
                    fpu_val_4_20 - fpu_val_5_8;

                    if (*(&((fpu_val_4_20 < fpu_val_5_8 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_4_20, fpu_val_5_8) ? 1 : 0) << 0xa
                            | (fpu_val_4_20 == fpu_val_5_8 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                        g_a83b2c = fpu_val_5_8;

                    entity_2 = *result;
                    temp_2 += 1;
                    item_8_2 = temp_2;
                    context = entity_2;
                } while (temp_2 < entity_2);
            }

            entity_2 = *result;
            i_1 += 1;
            i_2 = i_1;
            temp_3 = HIGHD(entity_2);
            data_18 = LOWD(entity_2);
            context = entity_2;
        } while (i_1 < (data_18 - temp_3) >> 1);
    }

    Qhash_Reset();
    return result;
}
