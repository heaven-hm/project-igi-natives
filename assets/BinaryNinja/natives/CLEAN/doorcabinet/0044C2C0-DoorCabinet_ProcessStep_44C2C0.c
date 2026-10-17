// IGI native provenance: DoorCabinet_ProcessStep_44C2C0 - 0x0044C2C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044C2C0-DoorCabinet_ProcessStep_44C2C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DoorCabinet_ProcessStep_44C2C0.h"

int32_t* DoorCabinet_ProcessStep_44C2C0(void* arg1)

{
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x3c) = 0x3ff00000;
    *(arg1 + 0x44) = 0x3ff00000;
    *(arg1 + 0x4c) = 0x3ff00000;
    __builtin_memset(arg1 + 0x20, 0, 0x1c);
    *(arg1 + 0x50) = 0x3f800000;
    *(arg1 + 0x60) = 0x3f800000;
    *(arg1 + 0x70) = 0x3f800000;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x5c) = 0;
    *(arg1 + 0x64) = 0;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0x6c) = 0;
    __builtin_memset(arg1 + 0x74, 0, 0x21);
    *(arg1 + 0x1b4) = 0;
    char* data_val = arg1 + 0xb4;
    int32_t i_1 = 8;
    int32_t i;

    do
    {
        *data_val = 0;
        data_val = &data_val[0x20];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(arg1 + 0x1b8) = 0;
    return Script_ExecuteLevelScript_6(arg1 + 0x1bc);
}
