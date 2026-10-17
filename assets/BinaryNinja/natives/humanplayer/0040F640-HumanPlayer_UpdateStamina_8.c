// Original IGI.EXE function: HumanPlayer_UpdateStamina_8 (VA 0x0040F640; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateStamina_8.h"
void* HumanPlayer_UpdateStamina_8(void* context, int32_t* param_2)

{
    void* flagP = param_2[0x13b];
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(&param_2[0x131], 0);
    int32_t temp_val;
    void* data_2 = HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
    param_2[0x138] += 1;
    void* data_3 = *(flagP + 0x20c);

    if (data_3 == 3)
    {
        data_3 = param_2[0x139];
        *(param_2 + 0x4d1) = 1;

        if (data_3)
        {
            data_3 = SoundSys_SetFrequency_7(data_3);
            param_2[0x139] = 0;
        }
    }

    if (*(context + 8) & 1)
    {
        Bones_PlayAnimation(flagP + 0x68, 0, *(data_2 + 0x67c), 0, 0.0f);
        AI_UpdateSensors_22(param_2[0x13b], -0.610865235f, 0xbeb2b8c3);
        AI_SelectTarget_22(param_2[0x13b], 0.0f, 0, 0x3d6e4bae, 0x3d082b3f);
        void item_8;
        Script_ParseEnumReal32_13(data_1, &item_8);
        int32_t item_4;
        int32_t data_5 = item_4;
        bool flag_0_1 = data_5;
        data_5 = g_56e214;

        if (!flag_0_1 && !data_5)
        {
            HumanPlayer_UpdateHealth_8(param_2, 1);
            *(context + 0x14) = HumanPlayer_CheckCollision_7;
            return context;
        }

        data_3 = Script_SpawnNewTask_13(data_1, data_5);
        *(context + 0x14) = HumanPlayer_PlayFootstep_8;
    }

    return data_3;
}
