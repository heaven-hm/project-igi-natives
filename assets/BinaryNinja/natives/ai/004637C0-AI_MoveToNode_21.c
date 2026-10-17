// Original IGI.EXE function: AI_MoveToNode_21 (VA 0x004637C0; static CFG gate PASS, CFG score 1.000).
#include "AI_MoveToNode_21.h"
uint32_t AI_MoveToNode_21(void* context, int32_t param_2, int32_t param_3)

{
    void* dest_val = nullptr;
    uint32_t result = Frames_GetUpdateCounter();

    if (result >= *(context + 0x844))
    {
        int32_t* data_val = *(context + 0x840);

        if (data_val)
        {
            dest_val = *data_val;

            if (dest_val)
                SoundSys_SetFrequency_7(dest_val);

            Qtask_UpdateList(*(context + 0x840));
            *(context + 0x840) = 0;
        }

        *(context + 0x844) =
            0x1e - Sys_AllocateMemory_14(Level_SetMission_5()) * -30.0f + Frames_GetUpdateCounter();
        int32_t item_40_1 = Sys_FreeMemory_14(Level_SetMission_5(), param_3) + 1;
        int32_t item_44_1 = param_2;
        char item_20[0x20];
        Game_DataSymbolLoad(&item_20, "%s%d");
        result = SoundSys_SetMasterVolume_7(*(context + 0x4ec), &item_20);

        if (dest_val)
        {
            result = QTask_LinkEventHandler_2(dest_val);
            *(context + 0x840) = result;
        }
    }

    return result;
}
