// IGI native provenance: PickupTrigger_InvokeFindType - 0x00465AE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465AE0-PickupTrigger_InvokeFindType.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_InvokeFindType.h"

int32_t* PickupTrigger_InvokeFindType(int32_t* arg1)

{
    if (!arg1[0x4e])
        return arg1;

    return QTask_FindType(arg1);
}
