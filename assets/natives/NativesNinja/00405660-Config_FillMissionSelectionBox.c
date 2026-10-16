#include "00405660-Config_FillMissionSelectionBox.h"
/* 0x00405660 Config_FillMissionSelectionBox full linked: callers=0 callees=5 */
int32_t Config_FillMissionSelectionBox(int32_t a1)

// Sig: void Config_FillMissionSelectionBox()
// Note: Fills the current menu list box with missions selectable for the active
// profile (respects unlocked progress). Use inside the mission-selection list
// box collect-items script.
{
    int32_t esi = 1;
    int32_t i = 1;

    while (i)
    {
        void* eax_1 = sub_485170(esi);
        void* var_30 = eax_1 + 4;
        Menu_LeaveMenus_8(var_30, esi);

        if (esi != *(Config_GetActivePlayerProfileRecord() + 0x560))
            esi = *(eax_1 + 0x4a4);
        else
            i = 0;

        if (esi == 0xffffffff)
            break;
    }

    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
