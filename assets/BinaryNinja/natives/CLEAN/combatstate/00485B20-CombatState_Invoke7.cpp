// IGI native provenance: CombatState_Invoke7 - 0x00485B20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00485B20-CombatState_Invoke7.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CombatState_Invoke7.h"

int32_t CombatState_Invoke7(void* arg1)

{
    int32_t i_1 = 0x18;
    char* result_val = arg1 + 0x40;
    int32_t i;

    do
    {
        *result_val = 0;
        result_val = &result_val[0x102c];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    /* tailcall */
    return AI_CheckVisibility_26();
}
