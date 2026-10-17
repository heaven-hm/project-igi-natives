// IGI native provenance: Light_ApplyLightmap_13 - 0x0052FFA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052FFA0-Light_ApplyLightmap_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_ApplyLightmap_13.h"
uint32_t Light_ApplyLightmap_13(void* context, double* param_2)

{
    double* dest_val = param_2;
    int32_t flagP = 0;
    int32_t temp_val = dest_val[4];
    int32_t item_24 = 0;
    int32_t item_34 = 0;
    uint32_t entity_1 = temp_val >> 1;
    int32_t item_30 = 0;
    long double fpu7 = entity_1;
    uint32_t item_2c = entity_1;
    int64_t item_18 = fabsl(fpu7 + *dest_val - *(context + 0x4870));

    if (item_18 > temp_val)
    {
    label_53003e:

        if (*(dest_val + 0x1c) > 0)
        {
            uint32_t data_2 = Light_RenderLensflare_13(context, dest_val);
            dest_val[5] = 0;
            return data_2;
        }
    }
    else
    {
        item_18 = fabsl(fpu7 + dest_val[1] - *(context + 0x4878));

        if (item_18 > temp_val)
            goto label_53003e;

        int32_t item_24_1 = 0;
        long double fpu_val_7_4 = temp_val;
        long double f0_1 = 131072.0;
        fpu_val_7_4 - f0_1;

        if (*(&((fpu_val_7_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            goto label_53003e;

        int32_t item_24_2 = 0;
        long double fpu_val_7_6 = temp_val * 1.5f;
        long double f1_1 = *(context + 0x4a78);
        fpu_val_7_6 - f1_1;

        if (*(&((fpu_val_7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            goto label_53003e;
    }

    int32_t temp_1 = *(dest_val + 0x1c);
    dest_val[5] = 1;
    int32_t data_3 = *((temp_1 << 2) + &g_a84584);

    if (data_3 > 3)
        goto label_5300d3;

    double* temp_2;

    switch (data_3)
    {
        case 0:
        {
            item_34 = 0;
            *((temp_1 << 2) + &g_a84584) = data_3 + 1;
            temp_2 = nullptr;
            item_30 = 0;
            param_2 = nullptr;
            break;
        }
        case 1:
        {
            item_34 = 0;
            *((temp_1 << 2) + &g_a84584) = data_3 + 1;
            temp_2 = nullptr;
            item_30 = 2;
            param_2 = nullptr;
            break;
        }
        case 2:
        {
            item_34 = 2;
            *((temp_1 << 2) + &g_a84584) = data_3 + 1;
            temp_2 = nullptr;
            item_30 = 0;
            param_2 = nullptr;
            break;
        }
        case 3:
        {
            item_34 = 2;
            item_30 = 2;
        label_5300d3:
            *((temp_1 << 2) + &g_a84584) = data_3 + 1;
            temp_2 = nullptr;
            param_2 = nullptr;
            break;
        }
    }

    double* data_25;

    while (true)
    {
        int32_t item_24_3 = 0;
        double item_10_1 = (temp_2 * entity_1);

        while (true)
        {
            int32_t item_1c_1 = 0;
            int32_t data_14 = flagP + ((temp_2 + (*(dest_val + 0x1c) << 2) + item_34) << 2) + item_30;
            *(data_14 * 0x30 + context + 0xc6c) = dest_val;
            int32_t data_18 = *(dest_val + 0x1c) + 1;
            *(data_14 * 0x30 + context + 0xc60) = entity_1;
            *(data_14 * 0x30 + context + 0xc5c) = data_18;
            *(data_14 * 0x30 + context + 0xc54) = 0;
            int32_t entity_2 = *(data_14 * 0x30 + context + 0xc5c);
            *(data_14 * 0x30 + context + 0xc40) = item_10_1 + *dest_val;
            *(data_14 * 0x30 + context + 0xc48) = (flagP * entity_1) + dest_val[1];
            int32_t data_21 = *(context + 0x4abc);

            if (data_21 <= entity_2)
                data_21 = entity_2;

            *(context + 0x4abc) = data_21;
            int32_t data_22 = *(data_14 * 0x30 + context + 0xc54);

            if (!temp_2)
                data_22 |= 0x10;
            else
                data_22 |= 8;

            *(data_14 * 0x30 + context + 0xc54) = data_22;

            if (!flagP)
                data_22 |= 4;
            else
                data_22 |= 2;

            *(&item_18 + 4) = 0;
            item_18 = *(data_14 * 0x30 + context + 0xc60);
            *(data_14 * 0x30 + context + 0xc54) = data_22;
            long double fpu_val_7_13 = item_18;
            long double f2_1 = 131072.0;
            fpu_val_7_13 - f2_1;

            if (!(*(&((fpu_val_7_13 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_13, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_13 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                Light_ApplyLightmap_13(context, data_14 * 0x30 + context + 0xc40);
            else
            {
                Light_RenderLensflare_13(context, data_14 * 0x30 + context + 0xc40);
                *(data_14 * 0x30 + context + 0xc68) = 0;
            }

            flagP += 1;

            if (flagP >= 2)
                break;

            entity_1 = item_2c;
            temp_2 = param_2;
        }

        data_25 = param_2 + 1;
        param_2 = data_25;

        if (data_25 >= 2)
            break;

        entity_1 = item_2c;
        temp_2 = param_2;
        flagP = 0;
    }

    return data_25;
}
