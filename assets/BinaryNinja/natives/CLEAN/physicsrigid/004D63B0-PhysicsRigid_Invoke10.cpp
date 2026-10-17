// IGI native provenance: PhysicsRigid_Invoke10 - 0x004D63B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D63B0-PhysicsRigid_Invoke10.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_Invoke10.h"

int32_t PhysicsRigid_Invoke10(float* arg1)

{
    long double x87_r7_1 = *arg1 + 1f;
    long double temp0 = arg1[1];
    x87_r7_1 - temp0;
    *arg1 = x87_r7_1;
    bool c1 = /* bool c1 = unknown  {fst dword [context_val], st0} */;

    if (*(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1)
        & 1)
    {
        arg1[2] = 1f - x87_r7_1 / arg1[1];
        return 0xffffffff;
    }

    int32_t result = arg1[3];
    arg1[2] = 0;
    return result;
}
