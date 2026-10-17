// Original IGI.EXE function: Menu_FormatScreen_2 (VA 0x00418790; static CFG gate PASS, CFG score 1.000).
#include "Menu_FormatScreen_2.h"
int32_t Menu_FormatScreen_2(void* context)

{
    int32_t context_val = *(context + 0x27e4);
    void* dest_val = *(context + 0x30);
    int32_t data_val = Menu_HandleInput_13();
    int32_t entity_val = 0;
    entity_val = *(dest_val + 0x1c);
    int32_t data_4 = *(((data_val * 0x180 + entity_val) << 2) + &g_a96ae0);

    if (data_4)
        data_4(dest_val);

    int32_t result = Config_SaveGraphicOptions_2();
    *(context + 0x27e4) = result;

    if (result == context_val)
        return result;

    return Menu_FormatScreen(context, 1);
}
