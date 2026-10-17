// IGI native provenance: RenderLight_ProcessSpotlight - 0x00531480 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531480-RenderLight_ProcessSpotlight.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_ProcessSpotlight.h"

int32_t* RenderLight_ProcessSpotlight(void* arg1, void* arg2)

{
    __builtin_memcpy(arg2, arg1 + 0x20, 0x18);
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x1c) = 0;
    *(arg2 + 0x20) = 0;
    *(arg2 + 0x24) = 0x3f800000;
    *(arg2 + 0x28) = 0;
    *(arg2 + 0x2c) = 0;
    *(arg2 + 0x30) = 0;
    *(arg2 + 0x34) = 0x3f800000;
    *(arg2 + 0x38) = 0;
    *(arg2 + 0x3c) = 0;
    *(arg2 + 0x40) = 0;
    *(arg2 + 0x44) = 0x3f800000;
    *(arg2 + 0x48) = 0;
    *(arg2 + 0x4c) = *(arg1 + 0x74);
    int32_t* result = *(arg2 + 0x50);

    if (result)
    {
        *result = data_54f83c[0];
        result[1] = data_54f83c[4][0];
        result[2] = data_54f83c[8][0];
    }

    return result;
}
