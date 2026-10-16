#include "AI_TakeCover_21.h"
struct status_msg* AI_TakeCover_21(void* a1, int32_t a2, int32_t a3)

{
    int32_t* valA = *(a1 + 0x840);

    if (valA)
    {
        void* valA1 = *valA;

        if (valA1)
            SoundSys_SetFrequency_7(valA1);

        Qtask_UpdateList(*(a1 + 0x840));
        *(a1 + 0x840) = 0;
    }

    uint32_t v_30 = Sys_FreeMemory_14(Level_SetMission_5(), a3);
    int32_t v_34 = a2;
    char v_20[0x20];
    Game_DataSymbolLoad(&v_20, "%s%d");
    return SoundSys_SetMasterVolume_7(a1, &v_20);
}
