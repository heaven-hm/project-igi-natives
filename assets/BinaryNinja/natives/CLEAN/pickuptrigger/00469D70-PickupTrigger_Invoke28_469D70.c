// IGI native provenance: PickupTrigger_Invoke28_469D70 - 0x00469D70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00469D70-PickupTrigger_Invoke28_469D70.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_Invoke28_469D70.h"

int32_t PickupTrigger_Invoke28_469D70(int32_t* arg1)

{
    char result = AI_AlertAllies_28();

    if (result & 0x10)
    {
        int32_t eax_1 = *arg1;

        if (eax_1 == 1)
            result = AI_TakeCover_28(2);
        else
        {
            result = (eax_1 - 1) - 1;

            if (eax_1 == 2)
                return AI_TakeCover_28(3);
        }
    }

    return result;
}
