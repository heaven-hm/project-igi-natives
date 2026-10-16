#include "004D5EC0-Render_DrawLightmapMesh_9.h"
/* 0x004d5ec0 Render_DrawLightmapMesh_9 full linked: callers=1 callees=7 */
int32_t sub_4d5ec0(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t* esi = *(a1 + 0x80);
    int32_t* eax = sub_4d5f90();
    sub_4d5fd0(eax, a3, a4);

    if (!esi)
    {
        esi = sub_4d35b0();
        esi[7] = 1;
        esi[9] = 1;
        esi[0xa] = a2;
        int32_t* eax_6 = sub_4d4710();
        sub_4d4750(eax_6, 0, sub_4d4780, 0, 0, a1);
        esi[8] = eax_6;
    }
    else
    {
        int32_t* var_14_1 = esi;

        if (esi[9] != 0xffffffff)
        {
            int32_t* eax_3 = sub_4d35b0();
            *esi = eax_3;
            eax_3[8] = esi;
            eax_3[7] = 0;
            esi = eax_3;
        }

        esi[9] = 1;
        esi[0xa] = a2;
    }

    esi[1] = 0;
    esi[2] = 0;
    esi[3] = sub_4d63a0;
    esi[4] = sub_4d63f0;
    esi[5] = sub_4d63b0;
    esi[6] = eax;
    int32_t eax_7 = *(a1 + 4);
    *(a1 + 0x80) = esi;
    int32_t result = eax_7 | 0x10000;
    *(a1 + 4) = result;
    return result;
}
