// IGI native provenance: MenuUI_Invoke13_4219B0 - 0x004219B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004219B0-MenuUI_Invoke13_4219B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_4219B0.h"

int32_t* MenuUI_Invoke13_4219B0(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x94) = 0;
    *(arg1 + 0x98) = 0;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x1a0) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0xac);
    Script_ExecuteLevelScript_6(arg1 + 0xfc);
    return Script_ExecuteLevelScript_6(arg1 + 0x14c);
}
