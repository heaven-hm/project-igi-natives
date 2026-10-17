// IGI native provenance: MenuUI_Invoke13_41E8C0 - 0x0041E8C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041E8C0-MenuUI_Invoke13_41E8C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41E8C0.h"

int32_t MenuUI_Invoke13_41E8C0(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0xbec) = 0x64;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x94) = 0;
    *(arg1 + 0xd4) = Menu_LeaveMenus_11(0);
    struct status_msg* eax_4 = Menu_LeaveMenus_11(0);
    *(arg1 + 0xd8) = eax_4;
    eax_4->head[0x10] = 0;
    *(*(arg1 + 0xd4) + 0x40) = 0;
    *(*(arg1 + 0xd8) + 0x3c) = 0;
    *(*(arg1 + 0xd4) + 0x3c) = 0;
    *(arg1 + 0xbe0) = 0;
    Menu_UpdateLanguage_9(arg1);
    Script_ExecuteLevelScript_6(arg1 + 0xbf8);
    Script_ExecuteLevelScript_6(arg1 + 0xc48);
    Script_ExecuteLevelScript_6(arg1 + 0xc98);
    Script_ExecuteLevelScript_6(arg1 + 0xce8);
    *(arg1 + 0xbf0) = 0;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0xbf4) = 0;
    return 1;
}
