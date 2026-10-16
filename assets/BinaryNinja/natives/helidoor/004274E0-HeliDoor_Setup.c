#include "HeliDoor_Setup.h"
int32_t HeliDoor_Setup(float a1, int32_t* a2)

{
    int32_t valA1 = **(a1 + 0x138);
    double v_40;
    memcpy(&v_40, a1 + 0xf0, 0x18);
    double v_38;
    double v_30;

    if (!valA1)
        v_40 = *(a1 + 0x13c) + v_40;
    else if (valA1 == 1)
        v_38 = *(a1 + 0x13c) + v_38;
    else if (valA1 == 2)
        v_30 = *(a1 + 0x13c) + v_30;

    float* valA2 = a2[1];
    double v_28 = valA2[2] * v_30 + valA2[1] * v_38 + *valA2 * v_40;
    double v_20 = valA2[5] * v_30 + valA2[4] * v_38 + valA2[3] * v_40;
    double* valA3 = *a2;
    double v_18 = valA2[8] * v_30 + valA2[7] * v_38 + valA2[6] * v_40;
    long double x87_r7_19 = v_28;
    memcpy(&v_40, &v_28, 0x18);
    v_40 = x87_r7_19 + *valA3;
    double v_38_1 = v_38 + valA3[1];
    double v_30_1 = v_30 + valA3[2];
    long double x87_r7_25 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_25;
    long double x87_r7_26;

    if (!(*(&((x87_r6_12 < x87_r7_25 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_25) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_25 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_26 = *(a1 + 0xa0);
    else
        x87_r7_26 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_26;
    long double x87_r7_28;

    if (*(&((x87_r6_13 < x87_r7_26 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_26) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_29 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_29;

        if (!(*(&((x87_r6_14 < x87_r7_29 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_29) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_29 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_28 = *(a1 + 0xa0);
        else
            x87_r7_28 = *(a1 + 0x9c);
    }
    else
        x87_r7_28 = *(a1 + 0x98);

    float v_54_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_28;
    double* v_58 = &v_40;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, v_58, v_54_1);
    float* valA6 = a2[1];
    v_28 = *(a1 + 0x114) * valA6[1] + valA6[2] * *(a1 + 0x120) + *(a1 + 0x108) * *valA6;
    *(&v_28 + 4) =
        *(a1 + 0x118) * valA6[1] + valA6[2] * *(a1 + 0x124) + *(a1 + 0x10c) * *valA6;
    v_20 = *(a1 + 0x11c) * valA6[1] + valA6[2] * *(a1 + 0x128) + *(a1 + 0x110) * *valA6;
    *(&v_20 + 4) =
        valA6[4] * *(a1 + 0x114) + *(a1 + 0x120) * valA6[5] + *(a1 + 0x108) * valA6[3];
    v_18 = valA6[4] * *(a1 + 0x118) + *(a1 + 0x124) * valA6[5] + *(a1 + 0x10c) * valA6[3];
    *(&v_18 + 4) =
        valA6[4] * *(a1 + 0x11c) + *(a1 + 0x128) * valA6[5] + *(a1 + 0x110) * valA6[3];
    float v_10 =
        valA6[7] * *(a1 + 0x114) + *(a1 + 0x120) * valA6[8] + *(a1 + 0x108) * valA6[6];
    float v_c =
        valA6[7] * *(a1 + 0x118) + *(a1 + 0x124) * valA6[8] + *(a1 + 0x10c) * valA6[6];
    int32_t result = valA6[9];
    int32_t v_4 = result + *(a1 + 0x12c) + 1;
    float v_8 =
        valA6[7] * *(a1 + 0x11c) + *(a1 + 0x128) * valA6[8] + *(a1 + 0x110) * valA6[6];
    memcpy(a1 + 0x70, &v_28, 0x28);
    return result;
}
