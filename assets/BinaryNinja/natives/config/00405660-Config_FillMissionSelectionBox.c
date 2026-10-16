#include "Config_FillMissionSelectionBox.h"
int32_t Config_FillMissionSelectionBox(int32_t a1)

// Sig: void Config_FillMissionSelectionBox()
// Note: Fills the current menu list box with missions selectable for the active
// profile (respects unlocked progress). Use inside the mission-selection list
// box collect-items script.
{
    int32_t srcS = 1;
    int32_t i = 1;

    while (i)
    {
        void* valA1 = FX_ExplosionSpawn_6(srcS);
        void* v_30 = valA1 + 4;
        Menu_LeaveMenus_8(v_30, srcS);

        if (srcS != *(Config_GetActivePlayerProfileRecord() + 0x560))
            srcS = *(valA1 + 0x4a4);
        else
            i = 0;

        if (srcS == 0xffffffff)
            break;
    }

    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
