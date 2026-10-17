// IGI native provenance: MenuManager_SetLanguage - 0x00417810 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00417810-MenuManager_SetLanguage.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuManager_SetLanguage.h"
int32_t MenuManager_SetLanguage(int32_t context, void* param_2, float param_3)

// Sig: void MenuManager_SetLanguage(int langIndex)
// Note: Switches menu/UI language at runtime. Param: langIndex = language index
// matching the LANGUAGE\ folder tables. Call before pushing screens so texts
// load in the right language.
{
    int32_t item_24 = 0;
    *(param_2 + 0x28) = 6;
    *(param_2 + 0x2c) = 4;
    *(param_2 + 0x27e4) = Script_GetArg(param_3, item_24);
    int32_t item_18 = 1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
