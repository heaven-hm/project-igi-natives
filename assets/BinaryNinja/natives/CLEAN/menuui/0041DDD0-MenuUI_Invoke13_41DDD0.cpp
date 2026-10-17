// IGI native provenance: MenuUI_Invoke13_41DDD0 - 0x0041DDD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041DDD0-MenuUI_Invoke13_41DDD0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41DDD0.h"

int32_t* MenuUI_Invoke13_41DDD0(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x94) = Object_Create(nullptr, Menu_PlayMusic_13(), 0);
    struct status_msg* eax_6 = Object_Create(nullptr, Menu_PlayMusic_13(), 0);
    void* data_val = *(arg1 + 0x94);
    *(arg1 + 0x98) = eax_6;
    *(data_val + 0x44) = *(arg1 + 0x44);
    *(*(arg1 + 0x98) + 0x44) = *(arg1 + 0x44);
    void* eax_8 = *(arg1 + 0x98);
    *(arg1 + 0x54) = 0;
    *(eax_8 + 0x40) = 0;
    *(*(arg1 + 0x94) + 0x40) = 0;
    *(*(arg1 + 0x98) + 0x3c) = 0;
    *(*(arg1 + 0x94) + 0x3c) = 0;
    *(arg1 + 0xa4) = 1;
    *(arg1 + 0x28) = 0x32;
    *(arg1 + 0x2c) = 0xf;
    *(arg1 + 0x9c) = 0;
    *(arg1 + 0xa0) = 0;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    Script_ExecuteLevelScript_6(arg1 + 0xac);
    int32_t* result = Script_ExecuteLevelScript_6(arg1 + 0xfc);
    *(arg1 + 0xa8) = 0;
    return result;
}
