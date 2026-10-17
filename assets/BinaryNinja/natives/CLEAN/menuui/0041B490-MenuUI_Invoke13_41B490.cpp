// IGI native provenance: MenuUI_Invoke13_41B490 - 0x0041B490 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041B490-MenuUI_Invoke13_41B490.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41B490.h"

int32_t* MenuUI_Invoke13_41B490(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0x20) = 0x140;
    *(arg1 + 0x24) = 0xf0;
    *(arg1 + 0x28) = 0x100;
    *(arg1 + 0x2c) = 0xc0;
    *(arg1 + 0x954) = 0;
    *(arg1 + 0x958) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0x95c);
    return Script_ExecuteLevelScript_6(arg1 + 0x9ac);
}
