// IGI native provenance: MenuUI_Invoke4 - 0x00418A80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00418A80-MenuUI_Invoke4.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke4.h"

void* MenuUI_Invoke4(void* arg1)

{
    if (!*(arg1 + 0x26bd))
        *(arg1 + 0x26bd) = 1;

    return arg1;
}
