// Original IGI.EXE function: Afterburner_Process (VA 0x0042C0B0; static CFG gate PASS, CFG score 0.905).
#include "Afterburner_Process.h"
int32_t Afterburner_Process(void* a1, int32_t* a2)

{
    float* valA = a2[1];
    double v_8c = valA[5] * *(a1 + 0x100) + valA[4] * *(a1 + 0xf8) + valA[3] * *(a1 + 0xf0);
    double* valA1 = *a2;
    double v_84 = valA[8] * *(a1 + 0x100) + valA[7] * *(a1 + 0xf8) + valA[6] * *(a1 + 0xf0);
    double v_18 =
        valA[2] * *(a1 + 0x100) + valA[1] * *(a1 + 0xf8) + *valA * *(a1 + 0xf0) + *valA1;
    double v_10 = v_8c + valA1[1];
    double v_8 = v_84 + valA1[2];
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

    float v_a8_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_12;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, v_a8_1);
    float v_68;
    Sys_ExecuteBytecode_12(&v_68, Sys_AllocateMemory_14(&g_57bd00));
    float v_5c;
    float v_50;
    float v_94 = v_50 * *(a1 + 0x110) + v_68 * *(a1 + 0x108) + v_5c * *(a1 + 0x10c);
    float v_64;
    float v_58;
    float v_4c;
    float v_90 = v_4c * *(a1 + 0x110) + v_64 * *(a1 + 0x108) + v_58 * *(a1 + 0x10c);
    float v_60;
    float v_54;
    float v_48;
    v_8c = v_48 * *(a1 + 0x110) + v_60 * *(a1 + 0x108) + v_54 * *(a1 + 0x10c);
    *(&v_8c + 4) = v_50 * *(a1 + 0x11c) + v_68 * *(a1 + 0x114) + v_5c * *(a1 + 0x118);
    v_84 = v_4c * *(a1 + 0x11c) + v_64 * *(a1 + 0x114) + v_58 * *(a1 + 0x118);
    *(&v_84 + 4) = v_48 * *(a1 + 0x11c) + v_60 * *(a1 + 0x114) + v_54 * *(a1 + 0x118);
    int32_t v_44;
    int32_t tmpD = *(a1 + 0x12c) + v_44 + 1;
    float* valA6 = a2[1];
    int32_t v_70 = tmpD;
    float v_7c = v_50 * *(a1 + 0x128) + v_68 * *(a1 + 0x120) + v_5c * *(a1 + 0x124);
    float v_78 = v_4c * *(a1 + 0x128) + v_64 * *(a1 + 0x120) + v_58 * *(a1 + 0x124);
    float v_74 = v_48 * *(a1 + 0x128) + v_60 * *(a1 + 0x120) + v_54 * *(a1 + 0x124);
    memcpy(&v_68, &v_94, 0x28);
    float v_40 = v_7c * valA6[2] + *(&v_8c + 4) * valA6[1] + v_94 * *valA6;
    float v_3c = v_78 * valA6[2] + v_84 * valA6[1] + v_90 * *valA6;
    float v_38 = v_74 * valA6[2] + *(&v_84 + 4) * valA6[1] + v_8c * *valA6;
    float v_34 = v_7c * valA6[5] + v_94 * valA6[3] + *(&v_8c + 4) * valA6[4];
    float v_30 = v_78 * valA6[5] + v_90 * valA6[3] + v_84 * valA6[4];
    float v_2c = v_74 * valA6[5] + v_8c * valA6[3] + *(&v_84 + 4) * valA6[4];
    float v_28 = v_7c * valA6[8] + v_94 * valA6[6] + *(&v_8c + 4) * valA6[7];
    float v_24 = v_78 * valA6[8] + v_90 * valA6[6] + v_84 * valA6[7];
    int32_t result = valA6[9];
    int32_t v_1c = result + tmpD + 1;
    float v_20 = v_74 * valA6[8] + v_8c * valA6[6] + *(&v_84 + 4) * valA6[7];
    memcpy(a1 + 0x70, &v_40, 0x28);
    return result;
}
