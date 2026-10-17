// IGI native provenance: MenuManager_RequestScreen - 0x004174A0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004174A0-MenuManager_RequestScreen.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuManager_RequestScreen.h"
int32_t MenuManager_RequestScreen(int32_t context, void* param_2, float param_3)

// Sig: void MenuManager_RequestScreen(int screenId, int flags)
// Note: Requests a menu screen by id through the menu manager (queued request).
// Params: screenId = retail screen resource id, flags = request modifier (0 =
// normal). Use outside the menu stack internals when you just want a screen
// opened next tick.
{
    if (Script_GetArg(param_3, 1))
        Menu_UpdateLanguage(param_2);

    *(param_2 + 0x20) = Script_GetArg(param_3, 0);
    *(param_2 + 0x2c) = 0;
    *(param_2 + 0x28) = 6;
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
