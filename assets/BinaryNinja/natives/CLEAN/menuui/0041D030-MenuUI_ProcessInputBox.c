// IGI native provenance: MenuUI_ProcessInputBox - 0x0041D030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D030-MenuUI_ProcessInputBox.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_ProcessInputBox.h"

void* MenuUI_ProcessInputBox(void* arg1)

{
    if (*(arg1 + 0xf0))
        *(arg1 + 0xf0) = 0;

    return arg1;
}
