// IGI native provenance: PhysicsTerrain_InvokeComputeNormals - 0x004F42D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F42D0-PhysicsTerrain_InvokeComputeNormals.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_InvokeComputeNormals.h"

int32_t PhysicsTerrain_InvokeComputeNormals(float arg1, void* arg2)

{
    __builtin_memcpy(arg2, arg1 + 0x20, 0x18);
    *(arg2 + 0x18) = *(arg1 + 0x108);
    *(arg2 + 0x1c) = *(arg1 + 0x10c);
    *(arg2 + 0x20) = *(arg1 + 0x110);
    __builtin_memcpy(arg2 + 0x24, arg1 + 0x70, 0x28);
    long double x87_r7 = *(arg1 + 0x9c);
    long double x87_r6 = *(arg1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(arg1 + 0xa0);
    else
        x87_r7_1 = *(arg1 + 0x9c);

    long double x87_r6_1 = *(arg1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(arg1 + 0x9c);
        long double x87_r6_2 = *(arg1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(arg1 + 0xa0);
        else
            x87_r7_3 = *(arg1 + 0x9c);
    }
    else
        x87_r7_3 = *(arg1 + 0x98);

    int32_t result;
    long double st0;
    st0 = Render_ComputeNormals(*(arg1 + 0x6c));
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x4c) = st0 * x87_r7_3;
    return result;
}
