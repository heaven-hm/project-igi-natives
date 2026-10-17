// IGI native provenance: PickupTrigger_InvokeFindType_46D740 - 0x0046D740 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D740-PickupTrigger_InvokeFindType_46D740.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_InvokeFindType_46D740.h"

int32_t* PickupTrigger_InvokeFindType_46D740(int32_t* arg1)

{
    int32_t* result = arg1;

    if (*(result + 0x109))
        result = QTask_FindType(result);

    return result;
}
