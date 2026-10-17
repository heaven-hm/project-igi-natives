// IGI native provenance: MenuUI_Invoke4_41D010 - 0x0041D010 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D010-MenuUI_Invoke4_41D010.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke4_41D010.h"

void* MenuUI_Invoke4_41D010(void* arg1)

{
    if (!*(arg1 + 0xf0))
        *(arg1 + 0xf0) = 1;

    return arg1;
}
