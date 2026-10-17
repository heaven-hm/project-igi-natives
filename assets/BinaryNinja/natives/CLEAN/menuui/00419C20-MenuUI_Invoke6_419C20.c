// IGI native provenance: MenuUI_Invoke6_419C20 - 0x00419C20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419C20-MenuUI_Invoke6_419C20.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MenuUI_Invoke6_419C20.h"

int32_t MenuUI_Invoke6_419C20(void* arg1)

{
    int32_t eax_2 = Script_SpawnNewTask_6();
    int32_t data_val = 0;
    data_val = *(arg1 + 0x1c);
    return (*(((eax_2 * 0x180 + data_val) << 2) + &g_a96ae0))(arg1);
}
