// IGI native provenance: MenuUI_Invoke4_41AA80 - 0x0041AA80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041AA80-MenuUI_Invoke4_41AA80.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke4_41AA80.h"

void* MenuUI_Invoke4_41AA80(void* arg1)

{
    if (!*(arg1 + 0x54))
        *(arg1 + 0x54) = 1;

    return arg1;
}
