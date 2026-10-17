// IGI native provenance: PickupTrigger_InvokeLoadParameters - 0x00465AC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465AC0-PickupTrigger_InvokeLoadParameters.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_InvokeLoadParameters.h"

int32_t PickupTrigger_InvokeLoadParameters(int32_t* arg1, int32_t arg2)

{
    int32_t var_4 = arg2;
    arg1[0x4e] = 0;
    return EditRigidObjAttachedToBone_LoadParameters(arg1);
}
