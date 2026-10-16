#include "00417520-Menu_UpdateLanguage.h"
/* 0x00417520 Menu_UpdateLanguage full linked: callers=2 callees=4 */
int32_t Menu_UpdateLanguage(void* a1)

{
    int32_t eax = Config_SaveGraphicOptions_2();
    void* eax_1 = *(a1 + 0x30);

    if (eax_1)
    {
        int32_t eax_2 = Menu_RequestScreen_14();
        int32_t ecx_1 = 0;
        ecx_1 = *(eax_1 + 0x1c);
        int32_t eax_6 = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_6)
            eax_6(eax_1);
    }

    Config_SaveSoundOptions_2(*(a1 + 0x27e4));
    int32_t result = *(a1 + 0x27e4);

    if (result == eax)
        return result;

    return Menu_FormatScreen(a1, 1);
}
