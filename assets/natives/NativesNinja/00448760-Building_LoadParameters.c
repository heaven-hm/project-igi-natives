#include "00448760-Building_LoadParameters.h"
/* 0x00448760 Building_LoadParameters full linked: callers=0 callees=5 */
int32_t sub_448760(int32_t* a1, int32_t a2)

{
    int32_t var_20;
    __builtin_memset(&var_20, 0, 0x18);
    (*((sub_4dee80() << 2) + &g_a96ae0))(a1, a2);
    sub_4c7140(Level_StartMission_4(), a1, &var_20, 1f, 8);
    __builtin_memset(&a1[0x76], 0, 0x18);
    a1[0x72] = 0;
    a1[0x68] = 0x3f800000;
    a1[0x69] = 0;
    a1[0x6a] = 0;
    a1[0x6b] = 0;
    a1[0x6c] = 0x3f800000;
    a1[0x6d] = 0;
    a1[0x6e] = 0;
    a1[0x6f] = 0;
    a1[0x70] = 0x3f800000;
    a1[0x71] = 0;
    return 0;
}
