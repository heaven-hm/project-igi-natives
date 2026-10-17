// IGI native provenance: PickupTrigger_Invoke6 - 0x004673B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004673B0-PickupTrigger_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke6.h"

int32_t* PickupTrigger_Invoke6(void* arg1)

{
    Script_ExecuteLevelScript_6(arg1 + 0x20);
    int32_t* esi_1 = arg1 + 0x94;
    int32_t i_1 = 6;
    int32_t* result;
    int32_t i;

    do
    {
        esi_1[-9] = 0;
        esi_1[-1] = 0xffffffff;
        Script_ExecuteLevelScript_6(esi_1);
        result = Script_ExecuteLevelScript_6(&esi_1[0x14]);
        esi_1[0x28] = 0;
        esi_1[0x29] = 0;
        esi_1 = &esi_1[0x33];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
