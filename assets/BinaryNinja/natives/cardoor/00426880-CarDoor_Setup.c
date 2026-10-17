// Original IGI.EXE function: CarDoor_Setup (VA 0x00426880; static CFG gate PASS, CFG score 0.867).
#include "CarDoor_Setup.h"
int32_t CarDoor_Setup(void* a1, int32_t* a2)

{
    float* valA = a2[1];
    long double fpu7 = valA[2];
    double v_40;
    memcpy(&v_40, a1 + 0xf0, 0x18);
    double v_38;
    double v_30;
    double v_94 = fpu7 * v_30 + valA[1] * v_38 + *valA * v_40;
    double v_8c = valA[5] * v_30 + valA[4] * v_38 + valA[3] * v_40;
    double* valA1 = *a2;
    double v_84 = valA[8] * v_30 + valA[7] * v_38 + valA[6] * v_40;
    long double x87_r7_12 = v_94;
    memcpy(&v_40, &v_94, 0x18);
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

    float v_a8_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_21;
    double* v_ac = &v_40;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, v_ac, v_a8_1);
    int32_t valA5 = **(a1 + 0x138);
    float v_68;

    if (!valA5)
    {
        float valA6 = *(a1 + 0x13c);
        v_ac = &v_68;
        Sys_CloseFileStream_12(v_ac, valA6);
    }
    else if (valA5 == 1)
    {
        float tmpD1 = *(a1 + 0x13c);
        v_ac = &v_68;
        Sys_ExecuteBytecode_12(v_ac, tmpD1);
    }
    else if (valA5 == 2)
    {
        float objC1 = *(a1 + 0x13c);
        v_ac = &v_68;
        Sys_DispatchOpcode_12(v_ac, objC1);
    }

    float v_5c;
    float v_50;
    v_94 = v_50 * *(a1 + 0x110) + v_68 * *(a1 + 0x108) + v_5c * *(a1 + 0x10c);
    float v_64;
    float v_58;
    float v_4c;
    *(&v_94 + 4) = v_4c * *(a1 + 0x110) + v_64 * *(a1 + 0x108) + v_58 * *(a1 + 0x10c);
    float v_60;
    float v_54;
    float v_48;
    v_8c = v_48 * *(a1 + 0x110) + v_60 * *(a1 + 0x108) + v_54 * *(a1 + 0x10c);
    *(&v_8c + 4) = v_50 * *(a1 + 0x11c) + v_68 * *(a1 + 0x114) + v_5c * *(a1 + 0x118);
    v_84 = v_4c * *(a1 + 0x11c) + v_64 * *(a1 + 0x114) + v_58 * *(a1 + 0x118);
    *(&v_84 + 4) = v_48 * *(a1 + 0x11c) + v_60 * *(a1 + 0x114) + v_54 * *(a1 + 0x118);
    float v_7c = v_50 * *(a1 + 0x128) + v_68 * *(a1 + 0x120) + v_5c * *(a1 + 0x124);
    float v_78 = v_4c * *(a1 + 0x128) + v_64 * *(a1 + 0x120) + v_58 * *(a1 + 0x124);
    int32_t v_44;
    int32_t tmpD2 = *(a1 + 0x12c) + v_44 + 1;
    float* valA8 = a2[1];
    int32_t v_70 = tmpD2;
    float v_74 = v_48 * *(a1 + 0x128) + v_60 * *(a1 + 0x120) + v_54 * *(a1 + 0x124);
    long double x87_r7_61 = v_94;
    memcpy(&v_68, &v_94, 0x28);
    float v_28 = x87_r7_61 * *valA8 + *(&v_8c + 4) * valA8[1] + v_7c * valA8[2];
    float v_24 = *(&v_94 + 4) * *valA8 + v_84 * valA8[1] + v_78 * valA8[2];
    float v_20 = v_8c * *valA8 + *(&v_84 + 4) * valA8[1] + v_74 * valA8[2];
    float v_1c = v_7c * valA8[5] + v_94 * valA8[3] + *(&v_8c + 4) * valA8[4];
    float v_18 = v_78 * valA8[5] + *(&v_94 + 4) * valA8[3] + v_84 * valA8[4];
    float v_14 = v_74 * valA8[5] + v_8c * valA8[3] + *(&v_84 + 4) * valA8[4];
    float v_10 = v_7c * valA8[8] + v_94 * valA8[6] + *(&v_8c + 4) * valA8[7];
    float v_c = v_78 * valA8[8] + *(&v_94 + 4) * valA8[6] + v_84 * valA8[7];
    int32_t result = valA8[9];
    int32_t v_4 = result + tmpD2 + 1;
    float v_8 = v_74 * valA8[8] + v_8c * valA8[6] + *(&v_84 + 4) * valA8[7];
    memcpy(a1 + 0x70, &v_28, 0x28);
    return result;
}
