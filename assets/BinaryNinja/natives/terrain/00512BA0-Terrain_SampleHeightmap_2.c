// Original IGI.EXE function: Terrain_SampleHeightmap_2 (VA 0x00512BA0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_2.h"
int32_t Terrain_SampleHeightmap_2()

{
    int32_t data_2 = g_a800ec;
    int32_t dest_val = 0;

    if (data_2 <= 0)
    {
        g_a800ec = 0;
        return data_2;
    }

    int32_t* source_val = &g_afa844;
    int32_t data_1;

    do
    {
        int32_t* data_val = Display_CloseDevice_14(0x28);
        data_val[1] = g_a7dc60;
        data_val[3] = source_val[-1];
        data_val[4] = *source_val;
        data_val[5] = source_val[1];
        data_val[6] = source_val[2];
        data_val[7] = source_val[3];
        data_val[8] = source_val[4];
        data_val[9] = source_val[5];
        Display_ClearSurfaces_14(0, data_val);
        data_1 = g_a800ec;
        dest_val += 1;
        source_val = &source_val[7];
    } while (dest_val < data_1);

    g_a800ec = 0;
    return data_1;
}
