// IGI native provenance: MenuUI_Invoke13_4241C0 - 0x004241C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004241C0-MenuUI_Invoke13_4241C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_4241C0.h"

void* MenuUI_Invoke13_4241C0(void* arg1, int32_t arg2)

{
    *(arg1 + 0x30) = 4;
    *(arg1 + 0x34) = 4;
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x28) = 0;
    *(arg1 + 0x2c) = 0;
    *(arg1 + 0x38) = 0;
    *(arg1 + 0x3c) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x4a) = 0;
    *(arg1 + 0x49) = 0;
    *(arg1 + 0x4b) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x4d) = 0;
    *(arg1 + 0x4c) = 0;

    if (!arg2)
        return Menu_LeaveMenus_13(arg1, arg1);

    *(arg1 + 0x44) = arg2;
    return arg1;
}
