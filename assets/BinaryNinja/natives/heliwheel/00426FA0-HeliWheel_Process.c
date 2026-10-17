// Original IGI.EXE function: HeliWheel_Process (VA 0x00426FA0; static CFG gate FAIL, CFG score 0.833).
#include "HeliWheel_Process.h"
int32_t HeliWheel_Process(float a1, int32_t* a2)

{
    float* valA = a2[1];
    long double fpu7 = valA[2];
    double v_40;
    memcpy(&v_40, a1 + 0xf0, 0x18);
    double v_38;
    double v_30;
    double v_28 = fpu7 * v_30 + valA[1] * v_38 + *valA * v_40;
    double v_20 = valA[5] * v_30 + valA[4] * v_38 + valA[3] * v_40;
    double* valA1 = *a2;
    double v_18 = valA[8] * v_30 + valA[7] * v_38 + valA[6] * v_40;
    long double x87_r7_12 = v_28;
    memcpy(&v_40, &v_28, 0x18);
    v_40 = x87_r7_12 + *valA1;
    double v_38_1 = v_38 + valA1[1];
    double v_30_1 = v_30 + valA1[2];
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

    float v_54_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_21;
    double* v_58 = &v_40;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, v_58, v_54_1);
    float* valA5 = a2[1];
    v_28 = *(a1 + 0x114) * valA5[1] + valA5[2] * *(a1 + 0x120) + *(a1 + 0x108) * *valA5;
    *(&v_28 + 4) =
        *(a1 + 0x118) * valA5[1] + valA5[2] * *(a1 + 0x124) + *(a1 + 0x10c) * *valA5;
    v_20 = *(a1 + 0x11c) * valA5[1] + valA5[2] * *(a1 + 0x128) + *(a1 + 0x110) * *valA5;
    *(&v_20 + 4) =
        valA5[4] * *(a1 + 0x114) + *(a1 + 0x120) * valA5[5] + *(a1 + 0x108) * valA5[3];
    v_18 = valA5[4] * *(a1 + 0x118) + *(a1 + 0x124) * valA5[5] + *(a1 + 0x10c) * valA5[3];
    *(&v_18 + 4) =
        valA5[4] * *(a1 + 0x11c) + *(a1 + 0x128) * valA5[5] + *(a1 + 0x110) * valA5[3];
    float v_10 =
        valA5[7] * *(a1 + 0x114) + *(a1 + 0x120) * valA5[8] + *(a1 + 0x108) * valA5[6];
    float v_c =
        valA5[7] * *(a1 + 0x118) + *(a1 + 0x124) * valA5[8] + *(a1 + 0x10c) * valA5[6];
    int32_t result = *(a1 + 0x12c);
    int32_t v_4 = valA5[9] + result + 1;
    float v_8 =
        valA5[7] * *(a1 + 0x11c) + *(a1 + 0x128) * valA5[8] + *(a1 + 0x110) * valA5[6];
    memcpy(a1 + 0x70, &v_28, 0x28);
    return result;
}
