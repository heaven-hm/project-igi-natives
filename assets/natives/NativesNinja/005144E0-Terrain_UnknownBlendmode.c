#include "005144E0-Terrain_UnknownBlendmode.h"
/* 0x005144e0 Terrain_UnknownBlendmode full linked: callers=1 callees=1 */
int32_t sub_5144e0(int32_t a1)

{
    if (!a1)
    {
        int32_t* eax_21 = g_5ca114;
        (*(*eax_21 + 0x50))(eax_21, 0x1b, 0);
        int32_t* eax_22 = g_5ca114;
        (*(*eax_22 + 0x50))(eax_22, 0x22, g_a7e068);
        int32_t* eax_23 = g_5ca114;
        (*(*eax_23 + 0x50))(eax_23, 0x1c, g_5470b4);
        int32_t* eax_24 = g_5ca114;
        (*(*eax_24 + 0x94))(eax_24, 0, 1, 4);
        int32_t* eax_25 = g_5ca114;
        (*(*eax_25 + 0x50))(eax_25, 0x17, 2);
        int32_t* eax_26 = g_5ca114;
        return (*(*eax_26 + 0x50))(eax_26, 0xe, 1);
    }

    if (a1 == 1)
    {
        int32_t* eax_12 = g_5ca114;
        (*(*eax_12 + 0x50))(eax_12, 0x1b, 1);
        int32_t* eax_13 = g_5ca114;
        (*(*eax_13 + 0x50))(eax_13, 0x13, 2);
        int32_t* eax_14 = g_5ca114;
        (*(*eax_14 + 0x50))(eax_14, 0x14, 2);
        int32_t* eax_15 = g_5ca114;
        (*(*eax_15 + 0x50))(eax_15, 0x22, 0);
        int32_t* eax_16 = g_5ca114;
        (*(*eax_16 + 0x50))(eax_16, 0x1c, g_5470b4);
        int32_t* eax_17 = g_5ca114;
        (*(*eax_17 + 0x94))(eax_17, 0, 1, 4);
        int32_t* eax_18 = g_5ca114;
        (*(*eax_18 + 0x50))(eax_18, 0x17, 4);
        int32_t* eax_19 = g_5ca114;
        return (*(*eax_19 + 0x50))(eax_19, 0xe, 0);
    }

    if (a1 == 2)
    {
        int32_t* eax_3 = g_5ca114;
        (*(*eax_3 + 0x50))(eax_3, 0x1b, 1);
        int32_t* eax_4 = g_5ca114;
        (*(*eax_4 + 0x50))(eax_4, 0x13, 1);
        int32_t* eax_5 = g_5ca114;
        (*(*eax_5 + 0x50))(eax_5, 0x22, 0xffffffff);
        int32_t* eax_6 = g_5ca114;
        (*(*eax_6 + 0x50))(eax_6, 0x14, 3);
        int32_t* eax_7 = g_5ca114;
        (*(*eax_7 + 0x50))(eax_7, 0x1c, g_5470b4);
        int32_t* eax_8 = g_5ca114;
        (*(*eax_8 + 0x94))(eax_8, 0, 1, 2);
        int32_t* eax_9 = g_5ca114;
        (*(*eax_9 + 0x50))(eax_9, 0x17, 4);
        int32_t* eax_10 = g_5ca114;
        return (*(*eax_10 + 0x50))(eax_10, 0xe, 0);
    }

    Error_Show("Unknown blendmode");

    while (true)
        /* nop */
}
