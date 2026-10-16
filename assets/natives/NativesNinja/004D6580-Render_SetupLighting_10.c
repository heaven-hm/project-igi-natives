#include "004D6580-Render_SetupLighting_10.h"
/* 0x004d6580 Render_SetupLighting_10 full linked: callers=7 callees=2 */
int32_t sub_4d6580(void* a1, int32_t a2, float a3)

{
    void* eax = sub_4d6460(a1, a2);
    *(eax + 0x28) = g_a54658 * a3;
    return sub_4d6550(eax);
}
