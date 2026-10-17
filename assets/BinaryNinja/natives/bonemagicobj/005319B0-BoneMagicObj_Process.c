// Original IGI.EXE function: BoneMagicObj_Process (VA 0x005319B0; static CFG gate FAIL, CFG score 0.833).
#include "BoneMagicObj_Process.h"
void* BoneMagicObj_Process(void* context, int32_t* param_2)

{
    float* data_val = param_2[1];
    void* temp_val = g_a44344;
    double item_40 = data_val[2] * *(context + 0xe8) + data_val[1] * *(context + 0xe0) + *data_val * *(context + 0xd8);
    double item_38 = data_val[5] * *(context + 0xe8) + data_val[4] * *(context + 0xe0) + data_val[3] * *(context + 0xd8);
    double* data_1 = *param_2;
    double item_30 = data_val[8] * *(context + 0xe8) + data_val[7] * *(context + 0xe0) + data_val[6] * *(context + 0xd8);
    long double fpu_val_7_12 = item_40;
    double item_18;
    memcpy(&item_18, &item_40, 0x18);
    long double fpu_val_7_13 = fpu_val_7_12 + *data_1;
    item_18 = fpu_val_7_13;
    double item_10;
    double item_10_1 = item_10 + data_1[1];
    double item_8;
    long double fpu_val_6_15 = item_8 + data_1[2];
    float data_2 = *(context + 0xa0);
    long double fpu_val_5_1 = *(context + 0x120) + fpu_val_7_13;
    double* i_1 = &item_18;
    item_18 = fpu_val_5_1;
    double item_10_2 = *(context + 0x124) + item_10_1;
    double item_8_1 = *(context + 0x128) + fpu_val_6_15;
    WorldObject_CommitTransform(temp_val, context, i_1, data_2);
    float* data_3 = param_2[1];
    item_40 = *(context + 0x108) * data_3[2] + *(context + 0xf0) * *data_3 + *(context + 0xfc) * data_3[1];
    int32_t entity_val = *(context + 0x114);
    *(&item_40 + 4) =
        *(context + 0x10c) * data_3[2] + *(context + 0xf4) * *data_3 + *(context + 0x100) * data_3[1];
    item_38 = *(context + 0x110) * data_3[2] + *(context + 0xf8) * *data_3 + *(context + 0x104) * data_3[1];
    *(&item_38 + 4) =
        *(context + 0xfc) * data_3[4] + data_3[5] * *(context + 0x108) + data_3[3] * *(context + 0xf0);
    item_30 = *(context + 0x100) * data_3[4] + data_3[5] * *(context + 0x10c) + data_3[3] * *(context + 0xf4);
    *(&item_30 + 4) =
        *(context + 0x104) * data_3[4] + data_3[5] * *(context + 0x110) + data_3[3] * *(context + 0xf8);
    float item_28 =
        *(context + 0xfc) * data_3[7] + data_3[8] * *(context + 0x108) + data_3[6] * *(context + 0xf0);
    float item_24 =
        *(context + 0x100) * data_3[7] + data_3[8] * *(context + 0x10c) + data_3[6] * *(context + 0xf4);
    int32_t item_1c = data_3[9] + entity_val + 1;
    float item_20 =
        *(context + 0x104) * data_3[7] + data_3[8] * *(context + 0x110) + data_3[6] * *(context + 0xf8);
    void* result = context + 0x78;
    memcpy(result, &item_40, 0x28);
    int32_t* i = *(context + 8);
    void* result_1 = *i;

    if (result_1 && i)
    {
        *(&item_40 + 4) = result;
        result = result_1;
        item_40 = context + 0x20;

        if (result && i)
        {
            int32_t entity_1 = g_afa7e0;

            do
            {
                int32_t* temp_2 = *i;
                void* data_8;

                if (!temp_2)
                    data_8 = nullptr;
                else
                {
                    int32_t data_5 = *temp_2;
                    int32_t data_6 = -(data_5);
                    data_8 = (data_6 - data_6) & temp_2;
                }

                *((entity_1 << 2) + &g_afa6e0) = data_8;
                g_afa7e0 = entity_1 + 1;
                uint32_t data_10 = MagicObj_GetEventId();
                int32_t entity_3 = 0;
                entity_3 = i[7];
                result = *(((data_10 * 0x180 + entity_3) << 2) + &g_a96ae0);

                if (result)
                {
                    double* item_54_1 = &item_40;
                    i_1 = i;
                    result = result(i_1, item_54_1);
                }

                entity_1 = g_afa7e0 - 1;
                g_afa7e0 = entity_1;
                i = *((entity_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
