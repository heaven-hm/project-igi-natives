// IGI native provenance: Terrain_UnknownBlendmode - 0x005144E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005144E0-Terrain_UnknownBlendmode.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_UnknownBlendmode.h"
int32_t Terrain_UnknownBlendmode(int32_t context)

{
    if (!context)
    {
        int32_t* data_21 = g_5ca114;
        (*(*data_21 + 0x50))(data_21, 0x1b, 0);
        int32_t* data_22 = g_5ca114;
        (*(*data_22 + 0x50))(data_22, 0x22, g_a7e068);
        int32_t* data_23 = g_5ca114;
        (*(*data_23 + 0x50))(data_23, 0x1c, g_5470b4);
        int32_t* data_24 = g_5ca114;
        (*(*data_24 + 0x94))(data_24, 0, 1, 4);
        int32_t* data_25 = g_5ca114;
        (*(*data_25 + 0x50))(data_25, 0x17, 2);
        int32_t* data_26 = g_5ca114;
        return (*(*data_26 + 0x50))(data_26, 0xe, 1);
    }

    if (context == 1)
    {
        int32_t* data_12 = g_5ca114;
        (*(*data_12 + 0x50))(data_12, 0x1b, 1);
        int32_t* data_13 = g_5ca114;
        (*(*data_13 + 0x50))(data_13, 0x13, 2);
        int32_t* data_14 = g_5ca114;
        (*(*data_14 + 0x50))(data_14, 0x14, 2);
        int32_t* data_15 = g_5ca114;
        (*(*data_15 + 0x50))(data_15, 0x22, 0);
        int32_t* data_16 = g_5ca114;
        (*(*data_16 + 0x50))(data_16, 0x1c, g_5470b4);
        int32_t* data_17 = g_5ca114;
        (*(*data_17 + 0x94))(data_17, 0, 1, 4);
        int32_t* data_18 = g_5ca114;
        (*(*data_18 + 0x50))(data_18, 0x17, 4);
        int32_t* data_19 = g_5ca114;
        return (*(*data_19 + 0x50))(data_19, 0xe, 0);
    }

    if (context == 2)
    {
        int32_t* data_3 = g_5ca114;
        (*(*data_3 + 0x50))(data_3, 0x1b, 1);
        int32_t* data_4 = g_5ca114;
        (*(*data_4 + 0x50))(data_4, 0x13, 1);
        int32_t* data_5 = g_5ca114;
        (*(*data_5 + 0x50))(data_5, 0x22, 0xffffffff);
        int32_t* data_6 = g_5ca114;
        (*(*data_6 + 0x50))(data_6, 0x14, 3);
        int32_t* data_7 = g_5ca114;
        (*(*data_7 + 0x50))(data_7, 0x1c, g_5470b4);
        int32_t* data_8 = g_5ca114;
        (*(*data_8 + 0x94))(data_8, 0, 1, 2);
        int32_t* data_9 = g_5ca114;
        (*(*data_9 + 0x50))(data_9, 0x17, 4);
        int32_t* data_10 = g_5ca114;
        return (*(*data_10 + 0x50))(data_10, 0xe, 0);
    }

    Error_Show("Unknown blendmode");

    while (true)
        /* nop */
}
