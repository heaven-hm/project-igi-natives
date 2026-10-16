#include "00417880-MenuManager_ForceUpdateWindow.h"
/* 0x00417880 MenuManager_ForceUpdateWindow full linked: callers=0 callees=4 */
int32_t MenuManager_ForceUpdateWindow(int32_t a1, float a2 @ 0xc)

// Sig: void MenuManager_ForceUpdateWindow(int param)
// Note: Forces the menu manager to redraw/update its windows this frame. Param:
// observed retail value 0. Use after changing control contents from script.
{
    void* eax_1 = sub_4f1030(sub_4b8a20(a2, 0));

    if (eax_1)
    {
        int32_t eax_2 = Menu_HandleInput_13();
        int32_t edx_1 = 0;
        edx_1 = *(eax_1 + 0x1c);
        int32_t eax_3 = *(((eax_2 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (eax_3)
            eax_3(eax_1);
    }

    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
