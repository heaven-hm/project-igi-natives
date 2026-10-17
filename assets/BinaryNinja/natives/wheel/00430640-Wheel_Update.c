// Original IGI.EXE function: Wheel_Update (VA 0x00430640; static CFG gate PASS, CFG score 0.875).
#include "Wheel_Update.h"
int32_t Wheel_Update(void* a1, int32_t* a2)

{
    double v_30;
    memcpy(&v_30, a1 + 0xf0, 0x18);
    void* srcS1 = *(a1 + 0x130);
    int16_t valA = Menu_LeaveMenus_23();
    long double x87_r7_2;
    double v_20;

    if (*(srcS1 + 0x1c) != valA)
        x87_r7_2 = v_20;
    else
    {
        void* objC1 = *(*(srcS1 + 0x1b4) + 0x2d4);
        int32_t valA4 = *(objC1 + *(a1 + 0x148) * 0x14 + 0x124);

        if (valA4 < 0)
            valA4 = 0xfffffff6 - valA4;

        x87_r7_2 = *(a2[2] + valA4 * 0x38 + 0x1f0) + v_20 - *(objC1 + 0x25c);
    }
    float* valA5 = a2[1];
    double v_28;
    double v_58 = valA5[1] * v_28 + valA5[2] * x87_r7_2 + *valA5 * v_30;
    double v_50 = valA5[4] * v_28 + valA5[3] * v_30 + valA5[5] * x87_r7_2;
    double* valA6 = *a2;
    double v_48 = valA5[7] * v_28 + valA5[6] * v_30 + valA5[8] * x87_r7_2;
    double v_18;
    memcpy(&v_18, &v_58, 0x18);
    v_18 = v_58 + *valA6;
    double v_10;
    double v_10_1 = v_10 + valA6[1];
    double v_8;
    double v_8_1 = v_8 + valA6[2];
    long double x87_r7_10 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_10;
    long double x87_r7_11;

    if (!(*(&((x87_r6_12 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_11 = *(a1 + 0xa0);
    else
        x87_r7_11 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_11;
    long double x87_r7_13;

    if (*(&((x87_r6_13 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_14 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_14;

        if (!(*(&((x87_r6_14 < x87_r7_14 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_14) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_13 = *(a1 + 0xa0);
        else
            x87_r7_13 = *(a1 + 0x9c);
    }
    else
        x87_r7_13 = *(a1 + 0x98);

    float v_98_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_13;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, v_98_1);
    float v_80;
    Sys_CheckHeap_11(&v_80, a1 + 0x108, *(a1 + 0x140), 0f, *(a1 + 0x144));
    float* valA10 = a2[1];
    float v_74;
    float v_68;
    v_58 = v_74 * valA10[1] + v_68 * valA10[2] + v_80 * *valA10;
    float v_7c;
    float v_70;
    float v_64;
    *(&v_58 + 4) = v_70 * valA10[1] + v_64 * valA10[2] + v_7c * *valA10;
    float v_78;
    float v_6c;
    float v_60;
    v_50 = v_6c * valA10[1] + v_60 * valA10[2] + v_78 * *valA10;
    *(&v_50 + 4) = v_80 * valA10[3] + v_68 * valA10[5] + v_74 * valA10[4];
    v_48 = v_7c * valA10[3] + v_64 * valA10[5] + v_70 * valA10[4];
    int32_t objC4 = valA10[9];
    *(&v_48 + 4) = v_78 * valA10[3] + v_60 * valA10[5] + v_6c * valA10[4];
    float v_40 = v_80 * valA10[6] + v_68 * valA10[8] + v_74 * valA10[7];
    float v_3c = v_7c * valA10[6] + v_64 * valA10[8] + v_70 * valA10[7];
    int32_t v_5c;
    int32_t v_34 = objC4 + v_5c + 1;
    float v_38 = v_78 * valA10[6] + v_60 * valA10[8] + v_6c * valA10[7];
    memcpy(a1 + 0x70, &v_58, 0x28);
    return objC4 + v_5c + 1;
}
