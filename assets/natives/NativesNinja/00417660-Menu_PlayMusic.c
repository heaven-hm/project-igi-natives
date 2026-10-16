#include "00417660-Menu_PlayMusic.h"
/* 0x00417660 Menu_PlayMusic full linked: callers=7 callees=1 */
void Menu_PlayMusic(void* a1 @ 0x8)

{
    if (!a1)
        return;

    int32_t eax_1 = Menu_DrawWidget_13();
    int32_t ecx_1 = 0;
    ecx_1 = *(a1 + 0x1c);
    (*(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0))(a1);
}
