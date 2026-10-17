// IGI native provenance: MenuUI_Invoke13_419C90 - 0x00419C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419C90-MenuUI_Invoke13_419C90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke13_419C90.h"

int32_t MenuUI_Invoke13_419C90(int32_t arg1)

{
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(arg1);
}
