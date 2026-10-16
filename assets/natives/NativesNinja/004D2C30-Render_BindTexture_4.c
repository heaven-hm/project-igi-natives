#include "004D2C30-Render_BindTexture_4.h"
/* 0x004d2c30 Render_BindTexture_4 full linked: callers=1 callees=6 */
int32_t sub_4d2c30()

{
    sub_4d38a0(0, 0);
    g_a54678 = 1;
    int32_t* ecx = &g_a538f0;

    for (int32_t* i = &g_a542f4; i < &g_a545f4; )
    {
        i[-1] = 0;
        *i = 0;
        ecx[9] = 0;
        i[1] = 0;
        *ecx = 0;
        ecx[1] = 0;
        i = &i[3];
        ecx = &ecx[0xa];
    }

    sub_4b0b00(&g_a54640, 0x10, 0x80, 4);
    sub_4b0b00(&g_a54620, 0x34, 0x80, 4);
    sub_4b0b00(&g_a54608, 0x1c, 0x80, 4);
    sub_4b0b00(&g_a54660, 0x2c, 0x80, 4);
    int32_t result = sub_4b0b00(&g_a545f0, 0x14, 0x100, 4);
    g_a54684 = 0;
    g_a54688 = 0;
    g_a54658 = 0;
    return result;
}
