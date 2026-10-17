// Original IGI.EXE function: Terrain_UnknownBlendmode (VA 0x005144E0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_UnknownBlendmode.h"
int32_t Terrain_UnknownBlendmode(int32_t a1)

{
    if (!a1)
    {
        int32_t* valA21 = g_5ca114;
        (*(*valA21 + 0x50))(valA21, 0x1b, 0);
        int32_t* valA22 = g_5ca114;
        (*(*valA22 + 0x50))(valA22, 0x22, g_a7e068);
        int32_t* valA23 = g_5ca114;
        (*(*valA23 + 0x50))(valA23, 0x1c, g_5470b4);
        int32_t* valA24 = g_5ca114;
        (*(*valA24 + 0x94))(valA24, 0, 1, 4);
        int32_t* valA25 = g_5ca114;
        (*(*valA25 + 0x50))(valA25, 0x17, 2);
        int32_t* valA26 = g_5ca114;
        return (*(*valA26 + 0x50))(valA26, 0xe, 1);
    }

    if (a1 == 1)
    {
        int32_t* valA12 = g_5ca114;
        (*(*valA12 + 0x50))(valA12, 0x1b, 1);
        int32_t* valA13 = g_5ca114;
        (*(*valA13 + 0x50))(valA13, 0x13, 2);
        int32_t* valA14 = g_5ca114;
        (*(*valA14 + 0x50))(valA14, 0x14, 2);
        int32_t* valA15 = g_5ca114;
        (*(*valA15 + 0x50))(valA15, 0x22, 0);
        int32_t* valA16 = g_5ca114;
        (*(*valA16 + 0x50))(valA16, 0x1c, g_5470b4);
        int32_t* valA17 = g_5ca114;
        (*(*valA17 + 0x94))(valA17, 0, 1, 4);
        int32_t* valA18 = g_5ca114;
        (*(*valA18 + 0x50))(valA18, 0x17, 4);
        int32_t* valA19 = g_5ca114;
        return (*(*valA19 + 0x50))(valA19, 0xe, 0);
    }

    if (a1 == 2)
    {
        int32_t* valA3 = g_5ca114;
        (*(*valA3 + 0x50))(valA3, 0x1b, 1);
        int32_t* valA4 = g_5ca114;
        (*(*valA4 + 0x50))(valA4, 0x13, 1);
        int32_t* valA5 = g_5ca114;
        (*(*valA5 + 0x50))(valA5, 0x22, 0xffffffff);
        int32_t* valA6 = g_5ca114;
        (*(*valA6 + 0x50))(valA6, 0x14, 3);
        int32_t* valA7 = g_5ca114;
        (*(*valA7 + 0x50))(valA7, 0x1c, g_5470b4);
        int32_t* valA8 = g_5ca114;
        (*(*valA8 + 0x94))(valA8, 0, 1, 2);
        int32_t* valA9 = g_5ca114;
        (*(*valA9 + 0x50))(valA9, 0x17, 4);
        int32_t* valA10 = g_5ca114;
        return (*(*valA10 + 0x50))(valA10, 0xe, 0);
    }

    Error_Show("Unknown blendmode");

    while (true)
        /* nop */
}
