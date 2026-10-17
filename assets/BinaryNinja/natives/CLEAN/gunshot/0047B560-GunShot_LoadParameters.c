// IGI native provenance: GunShot_LoadParameters - 0x0047B560 - CFG score 85.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047B560-GunShot_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunShot_LoadParameters.h"
void* GunShot_LoadParameters(void* context)

{
    memset(context + 0x78, 0, 0x20);
    *(context + 0x68) = 0;
    *(context + 0x6c) = 0;
    *(context + 0x70) = 0;
    *(context + 0x98) = 0xa;
    *(context + 0xa0) = 0;
    memset(context + 0xa4, 0, 0x3c);
    int32_t* data_val = context + 0xe0;
    int32_t i_2 = 0xf;
    int32_t i;

    do
    {
        *data_val = 0;
        data_val = &data_val[0x12];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    *(context + 0x9c) = 0;
    int32_t* data_1 = context + 0x54c;
    int32_t i_3 = 5;
    int32_t i_1;

    do
    {
        data_1[-1] = 0;
        *data_1 = 0;
        data_1[1] = 0;
        data_1[2] = 0;
        data_1 = &data_1[0x32];
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    memset(context + 0x900, 0, 0x14);
    int32_t item_28 = 0x3f800000;
    int32_t item_18 = 0x3f800000;
    int32_t item_8 = 0x3f800000;
    int32_t item_4 = 0;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    *(context + 0x914) = Display_RestoreDevice_18(Level_StartMission_4(), context, context + 0x20, &item_28, context + 0x918,
        0, 0, 0, 0, nullptr, 0);
    return DynObj_RegisterSymbol_8(Level_StartMission_4(), context, 0);
}
