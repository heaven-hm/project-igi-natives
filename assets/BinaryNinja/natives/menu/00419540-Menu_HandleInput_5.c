// Original IGI.EXE function: Menu_HandleInput_5 (VA 0x00419540; static CFG gate FAIL, CFG score 0.667).
#include "Menu_HandleInput_5.h"
int32_t Menu_HandleInput_5(int32_t* context, float* param_2)

{
    void item_2c;
    int32_t* data_val = &item_2c;
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        data_val[-1] = 0;
        *data_val = 0x3f800000;
        data_val[1] = 0;
        data_val[-2] = 0x3d99999a;
        data_val[-4] = 0;
        data_val[-3] = 0;
        data_val[-5] = 0x3f800000;
        data_val = &data_val[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float item_48;
    int32_t* item_4c = &item_48;
    int32_t context_val = 0;
    int32_t result = *context;
    int32_t item_58 = 0x80000;
    int32_t item_5c = 1;
    int32_t item_54 = 0;
    int32_t item_50 = 2;
    float* dest_val = &context[1];

    if (result > 0)
    {
        do
        {
            int32_t temp_val = g_a84a54;
            item_48 = dest_val[1] * param_2[2] + *dest_val * *param_2 + param_2[4];
            float item_44_1 = dest_val[1] * param_2[3] + *dest_val * param_2[1] + param_2[5];
            float item_24_1 = dest_val[3] * param_2[2] + dest_val[2] * *param_2 + param_2[4];
            float item_20_1 = dest_val[2] * param_2[1] + dest_val[3] * param_2[3] + param_2[5];
            (*((temp_val << 2) + &g_a94e84))(&item_5c);
            result = *context;
            context_val += 1;
            dest_val = &dest_val[4];
        } while (context_val < result);
    }

    return result;
}
