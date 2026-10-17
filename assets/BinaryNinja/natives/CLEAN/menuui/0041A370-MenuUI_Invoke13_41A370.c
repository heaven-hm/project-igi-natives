// IGI native provenance: MenuUI_Invoke13_41A370 - 0x0041A370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041A370-MenuUI_Invoke13_41A370.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_41A370.h"

int32_t MenuUI_Invoke13_41A370(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x28) = 0x64;
    *(arg1 + 0x2c) = 0x64;
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x7c) = 0;
    *(arg1 + 0x80) = 0;
    *(arg1 + 0x84) = 0;
    *(arg1 + 0x54) = 0;
    return 1;
}
