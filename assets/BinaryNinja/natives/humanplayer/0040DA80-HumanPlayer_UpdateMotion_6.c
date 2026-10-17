// Original IGI.EXE function: HumanPlayer_UpdateMotion_6 (VA 0x0040DA80; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateMotion_6.h"
int32_t* HumanPlayer_UpdateMotion_6(void* context, void* param_2)

{
    int32_t* result = *(param_2 + 0x538);
    int32_t context_val = *(context + 8);

    if (result == 8)
    {
        long double fpu_val_7_1 = *(param_2 + 0x540);
        long double f3_1 = *(param_2 + 0xd88);
        fpu_val_7_1 - f3_1;
        result = (fpu_val_7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            *(param_2 + 0xd88) = *(param_2 + 0x540);
            int32_t item_50_1 = *((*(param_2 + 0xd8c) << 2) + &g_538c18) + 1;
            int32_t data_1;
            *(param_2 + 0xd8c) = COMBINE(0, data_1 + 1) % 0xc;
            char item_20[0x20];
            Game_DataSymbolLoad(&item_20, "walk_ladder_%d");
            struct status_msg* data_5 = SoundSys_SetMasterVolume_7(Script_FormatString(), &item_20);

            if (data_5)
                SoundSys_StopSoundSample_7(data_5, param_2 + 0x20);

            int32_t temp_3 = *(param_2 + 0xfc);
            int32_t item_3c = 0xe;
            int32_t item_38_1 = temp_3;
            int32_t item_34_1 = 0x46;
            int32_t item_30_1 = 0x46a00000;
            int32_t item_2c_1 = DynObj_UpdateDynTree_4(param_2);
            void* item_28_1 = param_2;
            void* item_24_1 = param_2;
            result = AI_EventBroadcast(&item_3c);
        }
    }

    result = 1;

    if (!(1 & context_val))
    {
        if (context_val & 0x20000)
            *(param_2 + 0xd7a) = 1;

        return result;
    }

    *(param_2 + 0xd7a) = 1;
    int32_t* temp_4 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_7 = *temp_4;
    *(context + 0x14) = data_7;
    return data_7(context, param_2);
}
