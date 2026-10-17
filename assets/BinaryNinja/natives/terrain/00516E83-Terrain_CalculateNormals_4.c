// Original IGI.EXE function: Terrain_CalculateNormals_4 (VA 0x00516E83; static CFG gate PASS, CFG score 1.000).
#include "Terrain_CalculateNormals_4.h"
int32_t Terrain_CalculateNormals_4(int32_t context)

{
    int32_t dest_val = 0;
    void item_1c;
    char* item_8;
    char data_val = Camera_ApplyHandiCam_29(&item_1c, &item_8, context, 0, 0, 0, 0);
    int32_t item_10;

    if (!(data_val & 4))
    {
        int32_t data_1 = Camera_ApplyWideScreen_25(&item_1c, &item_10);

        if (data_val & 2 || data_1 == 1)
            dest_val = 0x80;

        if (data_val & 1 || data_1 == 2)
            dest_val |= 0x100;
    }
    else
    {
        dest_val = 0x200;
        item_10 = 0;
        int32_t item_c_1 = 0;
    }

    **&g_54ec40 = dest_val;
    *(g_54ec40 + 4) = item_8 - context;
    *(g_54ec40 + 0x10) = item_10;
    return g_54ec40;
}
