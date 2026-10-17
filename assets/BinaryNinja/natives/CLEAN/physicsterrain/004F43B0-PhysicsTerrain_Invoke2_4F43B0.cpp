// IGI native provenance: PhysicsTerrain_Invoke2_4F43B0 - 0x004F43B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F43B0-PhysicsTerrain_Invoke2_4F43B0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Invoke2_4F43B0.h"

int32_t PhysicsTerrain_Invoke2_4F43B0(int32_t* arg1)

{
    long double x87_r0;
    long double x87_r1;
    long double x87_r2;
    long double x87_r3;
    long double x87_r4;
    long double x87_r5;
    long double x87_r6;
    long double x87_r7;
    return Physics_InterpolateWaypoint_2(x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, x87_r6,
        x87_r7, *arg1, &arg1[2], arg1[1]);
}
