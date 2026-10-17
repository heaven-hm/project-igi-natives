// IGI native provenance: MenuUI_GetContext_424C10 - 0x00424C10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424C10-MenuUI_GetContext_424C10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_GetContext_424C10.h"

void* MenuUI_GetContext_424C10(void* arg1, int32_t arg2)

{
    *(arg1 + 0x20) = arg2;
    *(arg1 + 0x34) = 0;
    *(arg1 + 0x24) = 0x140;
    *(arg1 + 0x28) = 0xf0;
    *(arg1 + 0x2c) = 0xfffffffe;
    *(arg1 + 0x30) = 0;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x3c) = 0;
    return arg1;
}
