#include "004D6130-Render_BindTexture_9.h"
/* 0x004d6130 Render_BindTexture_9 full linked: callers=1 callees=5 */
int32_t sub_4d6130(float a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, float a7)

{
    int32_t* eax = a1;
    int32_t* esi = eax[2] + a2 * 0x84;
    a1 = a7 * 4800f / g_a54658;
    int32_t* eax_3;

    if (a5 >= 0)
        eax_3 = sub_4d47d0(*eax, a2, a5, a6);
    else
        eax_3 = sub_4d46e0(esi);

    sub_4d5ff0(esi, sub_4d3560(1, sub_4d5700(a2, a3, a4), 1, eax_3, 0, 0, 0, 0, 0, 0), a1,
        0);
    int32_t result = esi[1] | 0x20000;
    esi[1] = result;
    return result;
}
