// IGI native provenance: RenderLight_GetContext_52BE70 - 0x0052BE70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052BE70-RenderLight_GetContext_52BE70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_GetContext_52BE70.h"

void* RenderLight_GetContext_52BE70(int32_t arg1, void* arg2)

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
    int32_t esi_1 = 0x40000000 >> (*(arg1 + 0x68) & 0x1f);
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x4c) = esi_1;
    return arg2;
}
