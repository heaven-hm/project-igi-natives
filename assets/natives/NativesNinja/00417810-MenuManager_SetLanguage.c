#include "00417810-MenuManager_SetLanguage.h"
/* 0x00417810 MenuManager_SetLanguage full linked: callers=0 callees=2 */
int32_t MenuManager_SetLanguage(int32_t a1, void* a2, float a3)

// Sig: void MenuManager_SetLanguage(int langIndex)
// Note: Switches menu/UI language at runtime. Param: langIndex = language index
// matching the LANGUAGE\ folder tables. Call before pushing screens so texts
// load in the right language.
{
    int32_t var_24 = 0;
    *(a2 + 0x28) = 6;
    *(a2 + 0x2c) = 4;
    *(a2 + 0x27e4) = sub_4b8a20(a3, var_24);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
