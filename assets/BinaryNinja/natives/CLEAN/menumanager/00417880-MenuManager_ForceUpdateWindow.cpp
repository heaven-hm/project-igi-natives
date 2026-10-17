// IGI native provenance: MenuManager_ForceUpdateWindow - 0x00417880 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00417880-MenuManager_ForceUpdateWindow.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuManager_ForceUpdateWindow.h"
int32_t MenuManager_ForceUpdateWindow(int32_t context, float param_2 )

// Sig: void MenuManager_ForceUpdateWindow(int param)
// Note: Forces the menu manager to redraw/update its windows this frame. Param:
// observed retail value 0. Use after changing control contents from script.
{
    void* data_1 = Script_ExecuteLevelScript_4(Script_GetArg(param_2, 0));

    if (data_1)
    {
        int32_t data_2 = Menu_HandleInput_13();
        int32_t temp_1 = 0;
        temp_1 = *(data_1 + 0x1c);
        int32_t data_3 = *(((data_2 * 0x180 + temp_1) << 2) + &g_a96ae0);

        if (data_3)
            data_3(data_1);
    }

    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
