#include "004237C0-Menu_FormatScreen_12.h"
/* 0x004237c0 Menu_FormatScreen_12 full linked: callers=1 callees=5 */
void* Menu_FormatScreen_12(void* a1)

{
    void* result = Config_ValidatePassword();

    for (void* i = nullptr; i < 0x1b; i += 1)
    {
        int32_t ecx;
        int32_t edx;
        int32_t eax_1 = Menu_PlayMusic_12(result, edx, ecx, i) * 3;
        result = Menu_UpdateLanguage_12(a1, i,
            Menu_DrawWidget_12(*((eax_1 << 2) + 0x536414), *((eax_1 << 2) + 0x536418)));
    }

    return result;
}
