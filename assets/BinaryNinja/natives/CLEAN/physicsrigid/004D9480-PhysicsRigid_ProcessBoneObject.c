// IGI native provenance: PhysicsRigid_ProcessBoneObject - 0x004D9480 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D9480-PhysicsRigid_ProcessBoneObject.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_ProcessBoneObject.h"

int32_t* PhysicsRigid_ProcessBoneObject(void* arg1, void* arg2)

{
    __builtin_memcpy(arg2, arg1 + 0x20, 0x18);
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x1c) = 0;
    *(arg2 + 0x20) = 0;
    __builtin_memcpy(arg2 + 0x24, arg1 + 0x78, 0x28);
    *(arg2 + 0x4c) = *(arg1 + 0xa0);
    int32_t* result = *(arg2 + 0x50);

    if (result)
    {
        *result = data_54862c[0];
        result[1] = data_54862c[4][0];
        result[2] = data_54862c[8][0];
    }

    return result;
}
