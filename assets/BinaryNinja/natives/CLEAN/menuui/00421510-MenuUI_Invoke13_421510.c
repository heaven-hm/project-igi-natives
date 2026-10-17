// IGI native provenance: MenuUI_Invoke13_421510 - 0x00421510 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00421510-MenuUI_Invoke13_421510.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_421510.h"

int32_t MenuUI_Invoke13_421510(void* arg1, int32_t arg2)

{
    (*((Menu_PlayMusic_13() << 2) + &g_a96ae0))(arg1, arg2);
    *(arg1 + 0x94) = 0;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x20) = 0x140;
    *(arg1 + 0x24) = 0xf0;
    return 0;
}
