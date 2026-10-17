// IGI native provenance: MenuUI_Invoke6 - 0x004191F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004191F0-MenuUI_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke6.h"

void* MenuUI_Invoke6(void* arg1)

{
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x121) = 0;
    *(arg1 + 0x120) = 0;
    return arg1;
}
