// Original IGI.EXE function: Menu_PlayMusic (VA 0x00417660; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic.h"
void Menu_PlayMusic(void* context )

{
    if (!context)
        return;

    int32_t data_1 = Menu_DrawWidget_13();
    int32_t entity_1 = 0;
    entity_1 = *(context + 0x1c);
    (*(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0))(context);
}
