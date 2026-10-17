// Original IGI.EXE function: Menu_UpdateLanguage (VA 0x00417520; static CFG gate PASS, CFG score 1.000).
#include "Menu_UpdateLanguage.h"
int32_t Menu_UpdateLanguage(void* context)

{
    int32_t data_val = Config_SaveGraphicOptions_2();
    void* data_1 = *(context + 0x30);

    if (data_1)
    {
        int32_t data_2 = Menu_RequestScreen_14();
        int32_t entity_1 = 0;
        entity_1 = *(data_1 + 0x1c);
        int32_t data_6 = *(((data_2 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_6)
            data_6(data_1);
    }

    Config_SaveSoundOptions_2(*(context + 0x27e4));
    int32_t result = *(context + 0x27e4);

    if (result == data_val)
        return result;

    return Menu_FormatScreen(context, 1);
}
