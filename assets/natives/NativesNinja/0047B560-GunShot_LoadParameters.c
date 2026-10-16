#include "0047B560-GunShot_LoadParameters.h"
/* 0x0047b560 GunShot_LoadParameters full linked: callers=0 callees=7 */
void* sub_47b560(void* a1)

{
    __builtin_memset(a1 + 0x78, 0, 0x20);
    *(a1 + 0x68) = 0;
    *(a1 + 0x6c) = 0;
    *(a1 + 0x70) = 0;
    *(a1 + 0x98) = 0xa;
    *(a1 + 0xa0) = 0;
    __builtin_memset(a1 + 0xa4, 0, 0x3c);
    int32_t* eax = a1 + 0xe0;
    int32_t i_2 = 0xf;
    int32_t i;

    do
    {
        *eax = 0;
        eax = &eax[0x12];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    *(a1 + 0x9c) = 0;
    int32_t* eax_1 = a1 + 0x54c;
    int32_t i_3 = 5;
    int32_t i_1;

    do
    {
        eax_1[-1] = 0;
        *eax_1 = 0;
        eax_1[1] = 0;
        eax_1[2] = 0;
        eax_1 = &eax_1[0x32];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    __builtin_memset(a1 + 0x900, 0, 0x14);
    int32_t var_28 = 0x3f800000;
    int32_t var_18 = 0x3f800000;
    int32_t var_8 = 0x3f800000;
    int32_t var_4 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    *(a1 + 0x914) = sub_49a450(Level_StartMission_4(), a1, a1 + 0x20, &var_28, a1 + 0x918,
        0, 0, 0, 0, nullptr, 0);
    return sub_4c6890(Level_StartMission_4(), a1, 0);
}
