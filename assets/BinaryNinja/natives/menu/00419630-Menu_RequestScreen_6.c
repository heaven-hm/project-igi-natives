// Original IGI.EXE function: Menu_RequestScreen_6 (VA 0x00419630; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_6.h"
int32_t Menu_RequestScreen_6(float* context, float* param_2)

{
    long double fpu7 = 0.0f;
    float item_5e0 = context[1] * param_2[2] + *context * *param_2 + param_2[4];
    float item_5dc = context[1] * param_2[3] + param_2[1] * *context + param_2[5];
    long double fpu_val_6_9 = context[2] * param_2[6];
    float item_5ec = fpu_val_6_9;
    int64_t item_5e8 = fpu_val_6_9 * 0.314159274f;
    int32_t i_2 = item_5e8;

    if (i_2 >= 0x28)
        i_2 = 0x28;

    int32_t i_3 = 0;
    item_5e8 = i_2;

    if (i_2 > 0)
    {
        void item_5a8;
        int32_t* data_1 = &item_5a8;
        int32_t i_1 = i_2;
        i_3 = i_2;
        long double fpu_val_6_12 = 6.28318548f / item_5e8;
        int32_t i;

        do
        {
            long double fp0_1;
            bool c1_1;
            bool c2_1;
            fp0_1 = __fcos(fpu7);
            data_1[-1] = 0;
            *data_1 = 0x3f800000;
            data_1[1] = 0;
            data_1[-2] = 0x3d99999a;
            data_1[-4] = 0;
            data_1[-3] = 0;
            data_1[-5] = 0x3f800000;
            data_1 = &data_1[9];
            i = i_1;
            i_1 -= 1;
            data_1[-0x10] = fp0_1 * item_5ec + item_5e0;
            long double fp0_2;
            bool c1_2;
            bool c2_2;
            fp0_2 = __fsin(fpu7);
            data_1[-0xf] = fp0_2 * item_5ec + item_5dc;
            fpu7 = fpu7 + fpu_val_6_12;
        } while (i != 1);
    }

    int32_t item_5d0 = 0;
    int32_t data_3 = g_a84a54;
    int32_t saved_target;
    void item_5c4;
    memcpy(&(&saved_target)[i_3 * 9 + 0xe], &item_5c4, 0x24);
    int32_t item_5d4 = 0x80000;
    int32_t item_5d8 = 1;
    int32_t item_5cc = i_2 + 1;
    void* item_5c8 = &item_5c4;
    return (*((data_3 << 2) + &g_a94e84))(&item_5d8);
}
