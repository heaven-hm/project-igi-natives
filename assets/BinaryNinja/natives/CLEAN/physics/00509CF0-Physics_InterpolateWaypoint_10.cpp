// IGI native provenance: Physics_InterpolateWaypoint_10 - 0x00509CF0 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00509CF0-Physics_InterpolateWaypoint_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_InterpolateWaypoint_10.h"
void Physics_InterpolateWaypoint_10()

{
    int32_t i_1 = g_a7b638;
    int32_t context_val = 0;
    int32_t item_4 = 0;

    if (i_1 > 0)
    {
        int32_t* item_8_1 = &g_a7b4e0;
        bool flag_1_1;

        do
        {
            int32_t* data_2 = *item_8_1;

            if (data_2)
            {
                memcpy(context_val + 0xa7b4f8, context_val + &g_a7b2f0, 0x50);
                (*(*data_2 + 0x64))(data_2);
                int32_t* data_3 = *item_8_1;
                int32_t data_4 = (*(*data_3 + 0x24))(data_3, 0x50, context_val + &g_a7b2f0);

                if (data_4 < 0)
                {
                    if (data_4 == 0x8007001e)
                        Physics_CalculateSplineLength_10(item_4);

                    memset(context_val + &g_a7b2f0, 0, 0x50);
                }
            }

            i_1 = g_a7b638;
            context_val += 0x50;
            flag_1_1 = item_4 + 1 < i_1;
            item_4 += 1;
            item_8_1 = &item_8_1[1];
        } while (flag_1_1);
    }

    if (i_1 <= 0)
        return;

    int32_t* dest_3 = &g_a7b2f0;
    int32_t* temp_3 = &g_bcaa20;
    int32_t i;

    do
    {
        int32_t j = 0;
        temp_3[1] = *temp_3;
        *temp_3 = 0;
        int32_t context_1 = *temp_3;

        do
        {
            int32_t data_7 = 0;
            data_7 = (*(dest_3 + j + 0x30) & 0x80) == 0x80;
            context_1 |= data_7 << ((j + 4) & 0x1f);
            j += 1;
        } while (j < 0x20);

        *temp_3 = context_1;
        int16_t data_9;
        data_9 = temp_3[-7];

        if (data_9)
        {
            int32_t data_10 = *dest_3;
            int32_t data_11;

            if (data_10 < 0)
            {
                data_11 = context_1;
                data_11 |= 1;
                *temp_3 = data_11;
            }
            else if (data_10 > 0)
            {
                data_11 = *temp_3;
                data_11 |= 2;
                *temp_3 = data_11;
            }
            int32_t data_12 = dest_3[1];
            int32_t data_13;

            if (data_12 < 0)
            {
                data_13 = *temp_3;
                data_13 |= 4;
                *temp_3 = data_13;
            }
            else if (data_12 > 0)
            {
                data_13 = *temp_3;
                data_13 |= 8;
                *temp_3 = data_13;
            }
        }

        data_9 = *(temp_3 - 0x1b);

        if (data_9)
        {
            if (!*temp_3)
                *(temp_3 - 0x1b) = 0;

            *temp_3 = 0;
        }

        int32_t entity_val = dest_3[5];
        temp_3[-6] = *dest_3 * 0.0078125;
        temp_3[-5] = dest_3[1] * 0.0078125;
        long double fpu_val_7_5 = entity_val;
        long double f1_1 = 0.0f;
        fpu_val_7_5 - f1_1;
        data_9 = (fpu_val_7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe;

        if (*(&data_9 + 1) & 0x41)
        {
            temp_3[-2] = -((entity_val * 0.0078125));
            temp_3[-1] = 0;
        }
        else
        {
            temp_3[-2] = 0;
            temp_3[-1] = entity_val * 0.0078125;
        }

        long double fpu_val_7_11 = dest_3[6];
        dest_3 = &dest_3[0x14];
        temp_3 = &temp_3[0xa];
        i = i_1;
        i_1 -= 1;
        temp_3[-0xe] = fpu_val_7_11;
        temp_3[-0xd] = dest_3[-0xd];
    } while (i != 1);
}
