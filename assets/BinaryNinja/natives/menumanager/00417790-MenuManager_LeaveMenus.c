// Original IGI.EXE function: MenuManager_LeaveMenus (VA 0x00417790; static CFG gate PASS, CFG score 0.917).
#include "MenuManager_LeaveMenus.h"
int32_t MenuManager_LeaveMenus(int32_t context, void* param_2, float param_3)

// Sig: void MenuManager_LeaveMenus(int param1, int param2)
// Note: Leaves/closes the whole menu system returning to gameplay. Params: two
// ints observed in retail calls (pass 0,0). Use to exit from custom menus.
{
    int32_t data_val = Script_GetArg(param_3, 0);
    int32_t item_2c = 1;
    float item_30 = param_3;
    int32_t data_1 = Script_GetArg(item_30, item_2c);

    if (!FX_DebrisSpawn_11() || data_1 != 9)
    {
        *(param_2 + 0x20) = data_val;
        *(param_2 + 0x28) = 6;
        *(param_2 + 0x2c) = data_1;
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
