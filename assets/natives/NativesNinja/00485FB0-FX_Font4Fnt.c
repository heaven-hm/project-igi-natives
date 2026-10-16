#include "00485FB0-FX_Font4Fnt.h"
/* 0x00485fb0 FX_Font4Fnt full linked: callers=2 callees=3 */
void* sub_485fb0(int32_t a1, int32_t a2)

{
    void* eax = sub_485d00(a1, a2);

    if (!eax)
        return 0;

    if (!*(eax + 0x1c6))
        return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font1.fnt");

    return Menu_HandleInput_3(*(g_bc2360 + 0x120), "font4.fnt");
}
