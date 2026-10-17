// Original IGI.EXE function: Rain_Update (VA 0x00498BD0; static CFG gate PASS, CFG score 0.852).
#include "Rain_Update.h"
int32_t Rain_Update(void* context)

{
    double* context_val = context + 0xe40;
    int32_t item_a0 = Camera_ApplyBandFilter_5((g_bcab08 - 59924.48193359375) * 9.1782186888072072e-05 + 0.5);
    double item_d0_1 = (g_bcab10 - 59924.48193359375) * 9.1782186888072072e-05 + 0.5;
    int32_t item_a0_1 = Camera_ApplyBandFilter_5(item_d0_1);
    int32_t entity_3 = item_a0 % 0xc;
    int32_t data_5 = 0;
    int32_t source_1 = item_a0_1 % 0xc;
    data_5 = entity_3 >= 0;
    int32_t temp_10 = 0;
    int32_t entity_4 = entity_3 + ((data_5 - 1) & 0xc);
    void* data_8 = context;
    temp_10 = source_1 >= 0;
    *(data_8 + 0x5640) = entity_4;
    int32_t source_2 = source_1 + ((temp_10 - 1) & 0xc);
    bool flag_0 = *(data_8 + 0x56ad);
    double item_90 = (item_a0 - entity_4) * 10895.3603515625;
    *(data_8 + 0x5644) = source_2;
    double item_a0_2 = (item_a0_1 - source_2) * 10895.3603515625;
    double item_b0;
    int32_t item_a4;

    if (flag_0)
    {
        float item_b8_2 = fabsl(g_bcab10 - *(data_8 + 0x56b8));
        int32_t item_b0_1 =
            Camera_ResetMatrix_6(fabsl(g_bcab08 - *(data_8 + 0x56b0)) * 9.1782189e-05.0f * 12.0f);
        item_d0_1 = item_b8_2 * 9.1782189e-05.0f * 12.0f;
        item_b0 = Camera_ResetMatrix_6(item_d0_1);
        data_8 = context;
        item_a4 = item_b0_1 + item_b0;
    }
    else
        item_a4 = 0x2710;

    int32_t i = 0;
    memcpy(data_8 + 0x56b0, &g_bcab08, 0x18);
    void* entity_8 = context;
    int32_t i_1 = 0;
    *(entity_8 + 0x56ad) = 1;

    do
    {
        int32_t item_98;
        int32_t item_94;

        if (i >= entity_4)
        {
            item_98 = item_90;
            item_94 = *(&item_90 + 4);
        }
        else
            item_98 = item_90 + 130744.32421875;

        *(&item_b0 + 4) = *(&item_a0_2 + 4);
        int32_t j = 0;
        item_b0 = item_a0_2;
        int32_t j_1 = 0;

        do
        {
            long double fpu_val_7_26 = item_b0;

            if (j < source_2)
                fpu_val_7_26 = fpu_val_7_26 + 130744.32421875;

            long double fpu_val_6_4 = *context_val;
            long double f0_1 = item_98;
            fpu_val_6_4 - f0_1;
            long double f1_1;

            if (*(&((fpu_val_6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            {
                f1_1 = context_val[1];
                fpu_val_7_26 - f1_1;
            }

            int32_t data_14;

            data_14 = !(*(&((fpu_val_6_4 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_4, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                (fpu_val_7_26 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_26, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_26 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) ? 0 : 0x20;

            int32_t source_6 = *(context_val + 0x1c) & data_14;
            *(context_val + 0x1c) = source_6;

            if (!source_6)
            {
                bool flag_1_1 = item_a4 <= 0;
                item_a4 -= 1;

                if (!flag_1_1)
                {
                    double item_80 = -(*(entity_8 + 0x5698));
                    *context_val = item_98;
                    *(context_val + 4) = item_94;
                    context_val[1] = fpu_val_7_26;
                    *(&item_d0_1 + 4) = 0xc8000000;
                    item_d0_1 = 0;
                    context_val[2] = g_bcab18 + *(entity_8 + 0x56a0);
                    void item_78;
                    DynObj_UpdateDynTree_10(*(entity_8 + 0x68), &item_78, context_val, 1, &item_80, 0xff,
                        -0xc800000000000000);
                    int32_t item_60;
                    context_val[2] = item_60;
                    int32_t item_5c;
                    *(context_val + 0x14) = item_5c;
                    j = j_1;
                    memcpy(&context_val[0x30], context_val, 0x18);
                    memcpy(&context_val[0x480], context_val, 0x18);
                    *(context_val + 0x1c) = 0x20;
                    memcpy(&context_val[0x4b0], context_val, 0x18);
                    entity_8 = context;
                }
            }

            int32_t data_19 = *(context_val + 0x1c);
            j += 1;
            *(context_val + 0x19c) = data_19;
            *(context_val + 0x241c) = data_19;
            *(context_val + 0x259c) = data_19;
            context_val = &context_val[4];
            j_1 = j;
            item_b0 = item_b0 + 10895.3603515625;
        } while (j <= 0xb);

        context_val = &context_val[0x30];
        i = i_1 + 1;
        i_1 = i;
        item_90 = item_90 + 10895.3603515625;
    } while (i <= 0xb);

    *(entity_8 + 0x5648) = 0;
    return i;
}
