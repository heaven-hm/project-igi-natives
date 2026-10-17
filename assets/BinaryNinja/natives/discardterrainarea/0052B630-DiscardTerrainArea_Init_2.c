// Original IGI.EXE function: DiscardTerrainArea_Init_2 (VA 0x0052B630; static CFG gate PASS, CFG score 1.000).
#include "DiscardTerrainArea_Init_2.h"

void* DiscardTerrainArea_Init_2(int32_t pThis, void* param)

{
    __builtin_memcpy(param, pThis + 0x28, 0x18);
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
    int32_t esi_1 = 0x40000000 >> (*(pThis + 0x70) & 0x1f);
    *(param + 0x50) = 0;
    *(param + 0x4c) = esi_1 * 4f;
    return param;
}
