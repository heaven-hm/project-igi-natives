// IGI native provenance: PhysicsRigid_Invoke2 - 0x004DA2C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DA2C0-PhysicsRigid_Invoke2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_Invoke2.h"

void* PhysicsRigid_Invoke2(void* arg1)

{
    if (!*(arg1 + 0x8c))
        g_a5e2fc -= 1;

    return arg1;
}
