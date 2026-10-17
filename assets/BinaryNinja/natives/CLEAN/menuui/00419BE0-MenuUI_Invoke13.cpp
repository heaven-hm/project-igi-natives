// IGI native provenance: MenuUI_Invoke13 - 0x00419BE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419BE0-MenuUI_Invoke13.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13.h"

int32_t MenuUI_Invoke13(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x3c) = 1;
    *(arg1 + 0x40) = 1;
    *(arg1 + 0x58) = 0;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x59) = 1;
    return 1;
}
