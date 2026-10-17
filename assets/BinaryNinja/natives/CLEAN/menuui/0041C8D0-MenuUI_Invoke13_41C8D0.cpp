// IGI native provenance: MenuUI_Invoke13_41C8D0 - 0x0041C8D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041C8D0-MenuUI_Invoke13_41C8D0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41C8D0.h"

struct status_msg* MenuUI_Invoke13_41C8D0(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    int32_t data_val = *(arg1 + 0x44);
    *(arg1 + 0x28) = 0x64;
    *(arg1 + 0x2c) = 0x64;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0xf0) = 0;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xd4) = 0;
    *(arg1 + 0xdc) = 0;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x94) = 0;
    struct status_msg* result = Menu_Slidevert(nullptr, data_val);
    *(arg1 + 0xf4) = result;
    return result;
}
