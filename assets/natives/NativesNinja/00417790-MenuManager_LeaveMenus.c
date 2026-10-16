#include "00417790-MenuManager_LeaveMenus.h"
/* 0x00417790 MenuManager_LeaveMenus full linked: callers=0 callees=4 */
int32_t MenuManager_LeaveMenus(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_LeaveMenus(int param1, int param2)
// Note: Leaves/closes the whole menu system returning to gameplay. Params: two
// ints observed in retail calls (pass 0,0). Use to exit from custom menus.
{
    int32_t eax = sub_4b8a20(a3, 0);
    int32_t var_2c = 1;
    float var_30 = a3;
    int32_t eax_1 = sub_4b8a20(var_30, var_2c);

    if (!sub_489460() || eax_1 != 9)
    {
        *(a2 + 0x20) = eax;
        *(a2 + 0x28) = 6;
        *(a2 + 0x2c) = eax_1;
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
