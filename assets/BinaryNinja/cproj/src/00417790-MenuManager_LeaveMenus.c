#include "gi_platform.h"
#include "00417790-MenuManager_LeaveMenus.h"
int32_t MenuManager_LeaveMenus(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_LeaveMenus(int param1, int param2)
// Note: Leaves/closes the whole menu system returning to gameplay. Params: two
// ints observed in retail calls (pass 0,0). Use to exit from custom menus.
{
    int32_t valA = Script_GetArg(a3, 0);
    int32_t v_2c = 1;
    float v_30 = a3;
    int32_t valA1 = Script_GetArg(v_30, v_2c);

    if (!FX_DebrisSpawn_11() || valA1 != 9)
    {
        (*(int32_t*)(uintptr_t)(a2 + 0x20)) = valA;
        (*(int32_t*)(uintptr_t)(a2 + 0x28)) = 6;
        (*(int32_t*)(uintptr_t)(a2 + 0x2c)) = valA1;
    }

    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
