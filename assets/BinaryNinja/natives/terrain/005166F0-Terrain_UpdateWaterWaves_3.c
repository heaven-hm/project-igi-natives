// Original IGI.EXE function: Terrain_UpdateWaterWaves_3 (VA 0x005166F0; static CFG gate FAIL, CFG score 0.667).
#include "Terrain_UpdateWaterWaves_3.h"
int32_t Terrain_UpdateWaterWaves_3()

{
    int32_t* data_val = g_a7f890;
    (*(*data_val + 8))(data_val);
    int32_t data_1 = g_bcad74;
    memset(&return_addr, 0, 8);
    g_a7f890 = 0;
    memcpy(&return_addr, "\x10\x00\x00\x00\x00\x00\x01\x00", 8);
    int32_t arg_8 = 0;
    int32_t arg_c = 0;

    if (!data_1)
        int32_t arg_4 = 0x10800;

    int32_t* data_2 = g_5ca110;
    arg_8 = 0x1c4;
    arg_c = 0x8000;
    return (*(*data_2 + 0x14))(data_2, &return_addr, &g_a7f890, 0);
}
