#include "Binocular_Process_2.h"
int32_t Binocular_Process_2(float a1, int32_t* a2)

{
    char valA = *(a1 + 0xf0);

    if (!valA)
    {
        memcpy(a1 + 0x20, *a2, 0x18);
        memcpy(a1 + 0x70, a2[1], 0x28);
        return valA;
    }

    long double fpu7 = *(a1 + 0x9c);
    long double fpu6 = *(a1 + 0xa0);
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    long double x87_r7_6 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_3;
    int32_t valA4 = WorldObject_CommitTransform(Level_StartMission_4(), a1, *a2, x87_r7_6);
    memcpy(a1 + 0x70, a2[1], 0x28);
    return valA4;
}
