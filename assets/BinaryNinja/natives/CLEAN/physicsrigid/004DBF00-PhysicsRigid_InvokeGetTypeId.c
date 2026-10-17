// IGI native provenance: PhysicsRigid_InvokeGetTypeId - 0x004DBF00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DBF00-PhysicsRigid_InvokeGetTypeId.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_InvokeGetTypeId.h"

void* PhysicsRigid_InvokeGetTypeId(void* arg1, int32_t* arg2)

{
    void* result_val = *arg2;

    if (!result_val)
    {
        arg2[1] = 0;
        return result_val;
    }

    int32_t eax_1 = *(result_val + 4);
    int32_t data_val = 0;
    data_val = eax_1 == *(arg1 + 0x6c);
    arg2[1] = data_val;
    return eax_1;
}
