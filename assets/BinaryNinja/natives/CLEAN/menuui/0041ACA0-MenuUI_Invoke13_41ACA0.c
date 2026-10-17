// IGI native provenance: MenuUI_Invoke13_41ACA0 - 0x0041ACA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041ACA0-MenuUI_Invoke13_41ACA0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41ACA0.h"

int32_t* MenuUI_Invoke13_41ACA0(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x28) = 0x80;
    *(arg1 + 0x2c) = 0x80;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x94) = 0;
    *(arg1 + 0x98) = 0;
    *(arg1 + 0x20) = 0x12c;
    *(arg1 + 0x24) = 0xe6;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0x21a0) = 0;
    *(arg1 + 0x219c) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0x21a4);
    return Script_ExecuteLevelScript_6(arg1 + 0x21f4);
}
