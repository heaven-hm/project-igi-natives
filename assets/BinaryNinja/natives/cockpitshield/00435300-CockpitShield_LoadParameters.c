#include "CockpitShield_LoadParameters.h"
int32_t CockpitShield_LoadParameters(void* a1, float a2)

{
    int32_t* flagP = a2;
    float* valA = flagP[1];
    double v_18 = valA[2] * *(a1 + 0x100) + valA[1] * *(a1 + 0xf8) + *valA * *(a1 + 0xf0);
    double v_10 = valA[5] * *(a1 + 0x100) + valA[4] * *(a1 + 0xf8) + valA[3] * *(a1 + 0xf0);
    double* valA1 = *flagP;
    double v_8 = valA[8] * *(a1 + 0x100) + valA[7] * *(a1 + 0xf8) + valA[6] * *(a1 + 0xf0);
    long double x87_r7_12 = v_18;
    double v_30;
    memcpy(&v_30, &v_18, 0x18);
    v_30 = x87_r7_12 + *valA1;
    double v_28;
    double v_28_1 = v_28 + valA1[1];
    double v_20;
    double v_20_1 = v_20 + valA1[2];
    long double x87_r7_18 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = *(a1 + 0xa0);
    else
        x87_r7_19 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = *(a1 + 0xa0);
        else
            x87_r7_21 = *(a1 + 0x9c);
    }
    else
        x87_r7_21 = *(a1 + 0x98);

    float v_44_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_21;
    double* v_48 = &v_30;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, v_48, v_44_1);
    return Vehicle_UpdateCockpit_4(a1, flagP[1]);
}
