// IGI native provenance: PickupTrigger_InvokeUpdate - 0x0046DF70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046DF70-PickupTrigger_InvokeUpdate.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PickupTrigger_InvokeUpdate.h"

int32_t PickupTrigger_InvokeUpdate(int32_t* arg1)

{
    int32_t context_val;
    int32_t var_4_1 = context_val;
    float var_4 = -0.261799395f;
    int32_t result;

    for (int32_t i = 0; i < 3;)
    {
        result = KnifeStab_Update(arg1, var_4);

        if (result)
            break;

        i += 1;
        var_4 = var_4 + 0.174532935f;
    }

    return result;
}
