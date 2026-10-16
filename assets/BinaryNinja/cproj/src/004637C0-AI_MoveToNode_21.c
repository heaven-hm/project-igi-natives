#include "gi_platform.h"
#include "004637C0-AI_MoveToNode_21.h"
uint32_t AI_MoveToNode_21(void* a1, int32_t a2, int32_t a3)

{
    void* dstD = nullptr;
    uint32_t result = Frames_GetUpdateCounter();

    if (result >= (*(int32_t*)(uintptr_t)(a1 + 0x844)))
    {
        int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x840));

        if (valA)
        {
            dstD = *valA;

            if (dstD)
                SoundSys_SetFrequency_7(dstD);

            Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x840)));
            (*(int32_t*)(uintptr_t)(a1 + 0x840)) = 0;
        }

        (*(int32_t*)(uintptr_t)(a1 + 0x844)) =
            0x1e - Sys_AllocateMemory_14(Level_SetMission_5()) * -30.0f + Frames_GetUpdateCounter();
        int32_t v_40_1 = Sys_FreeMemory_14(Level_SetMission_5(), a3) + 1;
        int32_t v_44_1 = a2;
        char v_20[0x20];
        Game_DataSymbolLoad(&v_20, "%s%d");
        result = SoundSys_SetMasterVolume_7((*(int32_t*)(uintptr_t)(a1 + 0x4ec)), &v_20);

        if (dstD)
        {
            result = QTask_LinkEventHandler_2(dstD);
            (*(int32_t*)(uintptr_t)(a1 + 0x840)) = result;
        }
    }

    return result;
}
