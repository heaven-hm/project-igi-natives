#include "Hatch_LoadParameters.h"
int32_t Hatch_LoadParameters(void* a1, float a2)

{
    int32_t* dstD = a2;
    float* valA = dstD[1];
    long double x87_r6_7 =
        valA[5] * *(a1 + 0x100) + valA[4] * *(a1 + 0xf8) + valA[3] * *(a1 + 0xf0);
    double* valA1 = *dstD;
    long double x87_r6_11 =
        valA[8] * *(a1 + 0x100) + valA[7] * *(a1 + 0xf8) + valA[6] * *(a1 + 0xf0);
    double v_18 =
        valA[2] * *(a1 + 0x100) + valA[1] * *(a1 + 0xf8) + *valA * *(a1 + 0xf0) + *valA1;
    double v_10 = x87_r6_7 + valA1[1];
    double v_8 = x87_r6_11 + valA1[2];
    long double x87_r7_9 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_9;
    long double x87_r7_10;

    if (!(*(&((x87_r6_12 < x87_r7_9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = *(a1 + 0xa0);
    else
        x87_r7_10 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_10;
    long double x87_r7_12;

    if (*(&((x87_r6_13 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_13 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_13;

        if (!(*(&((x87_r6_14 < x87_r7_13 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_12 = *(a1 + 0xa0);
        else
            x87_r7_12 = *(a1 + 0x9c);
    }
    else
        x87_r7_12 = *(a1 + 0x98);

    float v_3c_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_12;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, v_3c_1);
    return Vehicle_UpdateCockpit_4(a1, dstD[1]);
}
