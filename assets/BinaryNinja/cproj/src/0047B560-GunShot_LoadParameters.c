#include "gi_platform.h"
#include "0047B560-GunShot_LoadParameters.h"
void* GunShot_LoadParameters(void* a1)

{
    __builtin_memset(a1 + 0x78, 0, 0x20);
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x98)) = 0xa;
    (*(int32_t*)(uintptr_t)(a1 + 0xa0)) = 0;
    __builtin_memset(a1 + 0xa4, 0, 0x3c);
    int32_t* valA = a1 + 0xe0;
    int32_t i_2 = 0xf;
    int32_t i;

    do
    {
        *valA = 0;
        valA = &valA[0x12];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    (*(int32_t*)(uintptr_t)(a1 + 0x9c)) = 0;
    int32_t* valA1 = a1 + 0x54c;
    int32_t i_3 = 5;
    int32_t i_1;

    do
    {
        valA1[-1] = 0;
        *valA1 = 0;
        valA1[1] = 0;
        valA1[2] = 0;
        valA1 = &valA1[0x32];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    __builtin_memset(a1 + 0x900, 0, 0x14);
    int32_t v_28 = 0x3f800000;
    int32_t v_18 = 0x3f800000;
    int32_t v_8 = 0x3f800000;
    int32_t v_4 = 0;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x914)) = Display_RestoreDevice_18(Level_StartMission_4(), a1, a1 + 0x20, &v_28, a1 + 0x918,
        0, 0, 0, 0, nullptr, 0);
    return DynObj_RegisterSymbol_8(Level_StartMission_4(), a1, 0);
}
