// Original IGI.EXE function: Config_FillMissionSelectionBox (VA 0x00405660; static CFG gate PASS, CFG score 0.933).
#include "Config_FillMissionSelectionBox.h"
int32_t Config_FillMissionSelectionBox(int32_t context)

// Sig: void Config_FillMissionSelectionBox()
// Note: Fills the current menu list box with missions selectable for the active
// profile (respects unlocked progress). Use inside the mission-selection list
// box collect-items script.
{
    int32_t source_val = 1;
    int32_t i = 1;

    while (i)
    {
        void* data_1 = FX_ExplosionSpawn_6(source_val);
        void* item_30 = data_1 + 4;
        Menu_LeaveMenus_8(item_30, source_val);

        if (source_val != *(Config_GetActivePlayerProfileRecord() + 0x560))
            source_val = *(data_1 + 0x4a4);
        else
            i = 0;

        if (source_val == 0xffffffff)
            break;
    }

    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
