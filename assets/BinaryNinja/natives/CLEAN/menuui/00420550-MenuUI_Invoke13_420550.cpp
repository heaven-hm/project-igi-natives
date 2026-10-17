// IGI native provenance: MenuUI_Invoke13_420550 - 0x00420550 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00420550-MenuUI_Invoke13_420550.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_420550.h"

int32_t* MenuUI_Invoke13_420550(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x94) = 0;
    *(arg1 + 0xd4) = 0;
    *(arg1 + 0x114) = 0;
    *(arg1 + 0x20c) = 0;
    *(arg1 + 0x20) = 0x12c;
    *(arg1 + 0x24) = 0xe6;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    Script_ExecuteLevelScript_6(arg1 + 0x11c);
    Script_ExecuteLevelScript_6(arg1 + 0x16c);
    int32_t* result = Script_ExecuteLevelScript_6(arg1 + 0x1bc);
    *(arg1 + 0x210) = 0;
    *(arg1 + 0x214) = 1;
    return result;
}
