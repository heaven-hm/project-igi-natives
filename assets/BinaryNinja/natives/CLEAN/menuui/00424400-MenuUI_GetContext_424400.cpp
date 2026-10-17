// IGI native provenance: MenuUI_GetContext_424400 - 0x00424400 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424400-MenuUI_GetContext_424400.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_GetContext_424400.h"

char* MenuUI_GetContext_424400(void* arg1, char* arg2)

{
    *arg2 = 1;
    *(arg2 + 4) = *(arg1 + 0x28);
    *(arg2 + 8) = *(arg1 + 0x2c);
    return arg2;
}
