// IGI native provenance: MenuUI_GetContext_425D90 - 0x00425D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00425D90-MenuUI_GetContext_425D90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_GetContext_425D90.h"

void* MenuUI_GetContext_425D90(void* arg1)

{
    *(arg1 + 0x28) = 0xffffffff;
    *(arg1 + 0x20) = 0xffffffff;
    *(arg1 + 0x24) = 0xffffffff;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x4c) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x54) = 0;
    __builtin_memset(arg1 + 0x58, 0, 0x14);
    __builtin_memset(arg1 + 0x70, 0, 0x14);
    return arg1;
}
