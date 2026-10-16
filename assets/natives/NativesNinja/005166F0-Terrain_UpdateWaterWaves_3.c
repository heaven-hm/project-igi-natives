#include "005166F0-Terrain_UpdateWaterWaves_3.h"
/* 0x005166f0 Terrain_UpdateWaterWaves_3 full linked: callers=0 callees=2 */
int32_t sub_5166f0()

{
    int32_t* eax = g_a7f890;
    (*(*eax + 8))(eax);
    int32_t eax_1 = g_bcad74;
    __builtin_memset(&__return_addr, 0, 8);
    g_a7f890 = 0;
    memcpy(&__return_addr, "\x10\x00\x00\x00\x00\x00\x01\x00", 8);
    int32_t arg_8 = 0;
    int32_t arg_c = 0;

    if (!eax_1)
        int32_t arg_4 = 0x10800;

    int32_t* eax_2 = g_5ca110;
    arg_8 = 0x1c4;
    arg_c = 0x8000;
    return (*(*eax_2 + 0x14))(eax_2, &__return_addr, &g_a7f890, 0);
}
