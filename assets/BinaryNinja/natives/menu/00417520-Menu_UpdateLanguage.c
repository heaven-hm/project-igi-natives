// Original IGI.EXE function: Menu_UpdateLanguage (VA 0x00417520; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage.h"
int32_t Menu_UpdateLanguage(void* a1)

{
    int32_t valA = Config_SaveGraphicOptions_2();
    void* valA1 = *(a1 + 0x30);

    if (valA1)
    {
        int32_t valA2 = Menu_RequestScreen_14();
        int32_t objC1 = 0;
        objC1 = *(valA1 + 0x1c);
        int32_t valA6 = *(((valA2 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA6)
            valA6(valA1);
    }

    Config_SaveSoundOptions_2(*(a1 + 0x27e4));
    int32_t result = *(a1 + 0x27e4);

    if (result == valA)
        return result;

    return Menu_FormatScreen(a1, 1);
}
