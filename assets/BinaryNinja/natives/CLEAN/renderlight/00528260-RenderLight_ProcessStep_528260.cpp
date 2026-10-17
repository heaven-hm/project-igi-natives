// IGI native provenance: RenderLight_ProcessStep_528260 - 0x00528260 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00528260-RenderLight_ProcessStep_528260.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_ProcessStep_528260.h"

int32_t* RenderLight_ProcessStep_528260(void* arg1)

{
    int32_t i_1 = 5;
    int32_t* result = arg1 + 0x50;
    int32_t i;

    do
    {
        result[-1] = 0;
        *result = 0;
        result[1] = 0;
        result[2] = 0x3f800000;
        result[3] = 0x3f800000;
        result[4] = 0x3f800000;
        result[5] = 0;
        result[0xf] = 0xffffffff;
        result = &result[0x11];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x44) = 0;
    *(arg1 + 0x1a0) = 0;
    *(arg1 + 0x20) = 0x3f800000;
    *(arg1 + 0x24) = 0x3f800000;
    *(arg1 + 0x28) = 0x3f800000;
    *(arg1 + 0x38) = 0x3f800000;
    *(arg1 + 0x3c) = 0x3f800000;
    *(arg1 + 0x40) = 0x3f800000;
    return result;
}
