#include "gi_platform.h"
#include "00417810-MenuManager_SetLanguage.h"
int32_t MenuManager_SetLanguage(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_SetLanguage(int langIndex)
// Note: Switches menu/UI language at runtime. Param: langIndex = language index
// matching the LANGUAGE\ folder tables. Call before pushing screens so texts
// load in the right language.
{
    int32_t v_24 = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x28)) = 6;
    (*(int32_t*)(uintptr_t)(a2 + 0x2c)) = 4;
    (*(int32_t*)(uintptr_t)(a2 + 0x27e4)) = Script_GetArg(a3, v_24);
    int32_t v_18 = 1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
