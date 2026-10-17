// IGI native provenance: PhysicsRigid_Invoke6 - 0x004DDF60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DDF60-PhysicsRigid_Invoke6.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_Invoke6.h"

int32_t PhysicsRigid_Invoke6(void* arg1)

{
    DynObj_LookupHashItem_6(g_a44344, arg1, 0);
    *(arg1 + 0x70) = 0x3f800000;
    *(arg1 + 0x80) = 0x3f800000;
    *(arg1 + 0x90) = 0x3f800000;
    *(arg1 + 0x74) = 0;
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x7c) = 0;
    *(arg1 + 0x84) = 0;
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x8c) = 0;
    *(arg1 + 0x94) = 0;
    *(arg1 + 0x148) = 0;
    __builtin_memset(arg1 + 0x14c, 0x1010101, 0x40);
    *(arg1 + 0x18c) = 1;
    return Sys_FreeMemory_2(arg1 + 0x130, 4, 0x64, 0);
}
