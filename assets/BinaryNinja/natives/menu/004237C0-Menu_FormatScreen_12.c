#include "Menu_FormatScreen_12.h"
void* Menu_FormatScreen_12(void* a1)

{
    void* result = Config_ValidatePassword();

    for (void* i = nullptr; i < 0x1b; i += 1)
    {
        int32_t objC;
        int32_t tmpD;
        int32_t valA1 = Menu_PlayMusic_12(result, tmpD, objC, i) * 3;
        result = Menu_UpdateLanguage_12(a1, i,
            Menu_DrawWidget_12(*((valA1 << 2) + 0x536414), *((valA1 << 2) + 0x536418)));
    }

    return result;
}
