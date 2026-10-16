#include "gi_platform.h"
#include "0052AC50-AnimRigidDynCubeObj_Action.h"
int32_t AnimRigidDynCubeObj_Action(void* a1, int32_t* a2)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double fpu6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    double* flagP = *a2;
    fpu6 - fpu7;
    memcpy(a1 + 0x70, &flagP[3], 0x28);
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    long double x87_r7_6 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_3;
    return WorldObject_CommitTransform((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, flagP, x87_r7_6);
}
