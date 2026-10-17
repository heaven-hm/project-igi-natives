// IGI native provenance: MenuUI_Invoke13_41D290 - 0x0041D290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041D290-MenuUI_Invoke13_41D290.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41D290.h"

int32_t MenuUI_Invoke13_41D290(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x2c) = 0xf;
    *(arg1 + 0x54) = g_script_ret_type;
    *(arg1 + 0x1a0) = 4;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0x1a4) = 0x14;
    Script_ExecuteLevelScript_6(arg1 + 0xa4);
    Script_ExecuteLevelScript_6(arg1 + 0xf4);
    Script_ExecuteLevelScript_6(arg1 + 0x144);
    *(arg1 + 0x194) = 0;
    *(arg1 + 0x195) = 0;
    *(arg1 + 0x196) = 0;
    *(arg1 + 0x19c) = 0;
    *(arg1 + 0x4c) = 1;
    return 0;
}
