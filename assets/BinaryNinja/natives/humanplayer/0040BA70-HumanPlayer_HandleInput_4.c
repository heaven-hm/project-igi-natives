// Original IGI.EXE function: HumanPlayer_HandleInput_4 (VA 0x0040BA70; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_HandleInput_4.h"
int32_t* HumanPlayer_HandleInput_4(void* context, void* param_2)

{
    int32_t* data_val = *(param_2 + 0x768);

    if (data_val)
    {
        void* dest_1 = *data_val;

        if (dest_1)
        {
            int16_t data_1 = Vehicle_DeployGear_9();

            if (*(dest_1 + 0x1c) == data_1)
            {
                int32_t* temp_val = *(context + 4);
                *(context + 0xc) = *(context + 0x10);
                *(context + 0x10) = 0;
                int32_t entity_1 = *temp_val;
                *(context + 0x14) = entity_1;
                return entity_1(context, param_2);
            }
        }
    }

    *(param_2 + 0x33d) = 0;
    Human_StateAnimation(param_2, *(context + 0x10), 0.0f);
    Render_SetupLighting_10(param_2 + 0x68, 0, 0.400000006f);
    SoundSys_SetMasterVolume_7(*(param_2 + 0x4ec), "jump_1");
    float item_c = *(param_2 + 0x520);
    long double fpu7 = item_c;
    long double f1 = 0.0f;
    fpu7 - f1;
    long double fpu_val_7_1 = *(param_2 + 0x524);
    int32_t item_4 = *(param_2 + 0x528);
    long double f2_1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;
    }

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
        (fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double fpu_val_5_1 = item_c;
        long double fpu_val_6_3 = 1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_7_1 * fpu_val_7_1);
        item_c = g_56e1ec * item_c * fpu_val_6_3;
        fpu_val_7_1 = fpu_val_7_1 * fpu_val_6_3 * g_56e1ec;
    }

    float item_8_1 = fpu_val_7_1 + *(param_2 + 0x72c);
    long double fpu_val_7_6 = g_56e1f0 + *(param_2 + 0x730);
    *(param_2 + 0x664) = item_c + *(param_2 + 0x728);
    *(param_2 + 0x668) = item_8_1;
    *(param_2 + 0x66c) = fpu_val_7_6;
    int32_t* result = AI_UpdateSensors_19(param_2);
    *(context + 0x14) = HumanPlayer_ApplyPhysics_4;
    return result;
}
