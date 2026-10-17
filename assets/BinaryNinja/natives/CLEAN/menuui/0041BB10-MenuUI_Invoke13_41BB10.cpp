// IGI native provenance: MenuUI_Invoke13_41BB10 - 0x0041BB10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041BB10-MenuUI_Invoke13_41BB10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41BB10.h"

struct status_msg* MenuUI_Invoke13_41BB10(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x1254) = 0;
    Menu_HandleInput_7(arg1);
    Script_ExecuteLevelScript_6(arg1 + 0x12b0);
    Script_ExecuteLevelScript_6(arg1 + 0x1300);
    Script_ExecuteLevelScript_6(arg1 + 0x1350);
    Script_ExecuteLevelScript_6(arg1 + 0x13a0);
    *(arg1 + 0x12a8) = 0;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0x125c) = 0;
    *(arg1 + 0x28) = 0x64;
    *(arg1 + 0x2c) = 0x64;
    int32_t eax_4 = *(arg1 + 0x44);
    *(arg1 + 0x12ac) = 0;
    struct status_msg* eax_5 = Menu_Slidevert(nullptr, eax_4);
    int32_t ecx_2 = *(arg1 + 0x44);
    *(arg1 + 0x13f4) = eax_5;
    struct status_msg* result = Menu_HandleInput_14(nullptr, ecx_2);
    *(arg1 + 0x13f8) = result;
    *(arg1 + 0x12aa) = 0;
    return result;
}
