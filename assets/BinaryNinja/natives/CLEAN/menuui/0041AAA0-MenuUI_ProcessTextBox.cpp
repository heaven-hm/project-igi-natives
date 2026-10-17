// IGI native provenance: MenuUI_ProcessTextBox - 0x0041AAA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041AAA0-MenuUI_ProcessTextBox.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_ProcessTextBox.h"

void* MenuUI_ProcessTextBox(void* arg1)

{
    if (*(arg1 + 0x54))
        *(arg1 + 0x54) = 0;

    return arg1;
}
