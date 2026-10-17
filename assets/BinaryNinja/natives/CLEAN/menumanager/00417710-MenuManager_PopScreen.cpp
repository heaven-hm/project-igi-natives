// IGI native provenance: MenuManager_PopScreen - 0x00417710 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00417710-MenuManager_PopScreen.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuManager_PopScreen.h"
int32_t MenuManager_PopScreen(int32_t context, void* param_2, float param_3)

// Sig: void MenuManager_PopScreen(int param)
// Note: Pops the idx screen off the menu stack (destroys it) revealing the one
// beneath. Param: param = pass-through argument observed in retail calls (pass
// 0). Pair with MenuManager_PushScreen.
{
    if (Script_GetArg(param_3, 0))
        Menu_UpdateLanguage(param_2);

    int32_t item_10 = 0;
    int32_t data_2 = *(param_2 + 0x27e8) - 1;
    int32_t item_c = 0x3ff00000;
    *(param_2 + 0x27e8) = data_2;
    char* item_8 = &g_567c74;
    *(param_2 + 0x20) = *(param_2 + (data_2 << 2) + 0x27ec);
    *(param_2 + 0x2c) = 1;
    int32_t item_18 = 1;
    *(param_2 + 0x28) = 6;
    memcpy(context, &item_18, 0x18);
    return context;
}
