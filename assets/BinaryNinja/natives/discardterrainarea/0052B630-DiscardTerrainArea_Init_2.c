// IGI native provenance: DiscardTerrainArea_Init_2 - 0x0052B630 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052B630-DiscardTerrainArea_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DiscardTerrainArea_Init_2.h"

void* DiscardTerrainArea_Init_2(int32_t pThis, void* param)

{
    memcpy(param, pThis + 0x28, 0x18);
    *(param + 0x18) = 0;
    *(param + 0x1c) = 0;
    *(param + 0x20) = 0;
    *(param + 0x24) = 0x3f800000;
    *(param + 0x28) = 0;
    *(param + 0x2c) = 0;
    *(param + 0x30) = 0;
    *(param + 0x34) = 0x3f800000;
    *(param + 0x38) = 0;
    *(param + 0x3c) = 0;
    *(param + 0x40) = 0;
    *(param + 0x44) = 0x3f800000;
    *(param + 0x48) = 0;
    int32_t source_ptr_1 = 0x40000000 >> (*(pThis + 0x70) & 0x1f);
    *(param + 0x50) = 0;
    *(param + 0x4c) = source_ptr_1 * 4.0f;
    return param;
}
