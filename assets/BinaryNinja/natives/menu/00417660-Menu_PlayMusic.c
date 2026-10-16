#include "Menu_PlayMusic.h"
void Menu_PlayMusic(void* a1 @ 0x8)

{
    if (!a1)
        return;

    int32_t valA1 = Menu_DrawWidget_13();
    int32_t objC1 = 0;
    objC1 = *(a1 + 0x1c);
    (*(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0))(a1);
}
