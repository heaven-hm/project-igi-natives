// Original IGI.EXE function: Menu_UpdateLanguage_2 (VA 0x00418710; static CFG gate PASS, CFG score 0.933).
#include "Menu_UpdateLanguage_2.h"
void* Menu_UpdateLanguage_2(void* context, int32_t param_2, int32_t param_3)

{
    *(context + 0x20) = param_2;
    void* result = Script_ExecuteLevelScript_4(param_2);
    *(context + 0x30) = result;

    if (result)
    {
        void* item_10_1 = context;
        Menu_PlayMusic(result);

        if (param_3)
            Menu_FormatScreen_2(context);

        Menu_PlayMusic_2(context, *(context + 0x30));
        void* data_2 = *(context + 0x30);
        int32_t entity_1 = 0;
        *(context + 0x27cd) = 0;
        *(context + 0x27ce) = 0;
        *(context + 0x27cc) = 0;
        *(context + 0x27cf) = 1;
        entity_1 = *(data_2 + 0x1c);
        result = (*((entity_1 << 2) + &g_a970e0))(data_2);
        *(context + 0x27cf) = 0;
    }

    return result;
}
