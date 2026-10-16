#include "Rudder_Setup.h"
float* Rudder_Setup(void* a1, int32_t* a2)

{
    void* srcS = a2[2];
    void* dstD = *(*(srcS + 0x1b4) + 0x2d4);
    float* valA1 = a2[1];
    double v_88 =
        valA1[5] * *(a1 + 0x100) + valA1[4] * *(a1 + 0xf8) + valA1[3] * *(a1 + 0xf0);
    double* valA2 = *a2;
    double v_80 =
        valA1[8] * *(a1 + 0x100) + valA1[7] * *(a1 + 0xf8) + valA1[6] * *(a1 + 0xf0);
    double v_18 =
        valA1[2] * *(a1 + 0x100) + valA1[1] * *(a1 + 0xf8) + *valA1 * *(a1 + 0xf0) + *valA2;
    double v_10 = v_88 + valA2[1];
    double v_8 = v_80 + valA2[2];
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

    float v_94 = x87_r7_12;
    float v_a8_1 = Render_ComputeNormals(*(a1 + 0x6c)) * v_94;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, v_a8_1);
    int32_t* valA5 = *(a1 + 0x138);
    int32_t valA6 = *valA5;
    long double x87_r7_17 = valA5[1] * 0.0174532924f;
    long double x87_r7_19;

    if (valA6 != 1)
    {
        if (valA6 == 2)
        {
            x87_r7_19 = x87_r7_17 * *(srcS + 0x728) + x87_r7_17 * *(srcS + 0x724);
            goto label_436428;
        }

        if (!valA6)
            v_94 = -((x87_r7_17 * *(srcS + 0x724)));
        else if (valA6 == 3)
            v_94 = -((x87_r7_17 * *(srcS + 0x72c)));
    }
    else
    {
        x87_r7_19 = x87_r7_17 * *(srcS + 0x728) - x87_r7_17 * *(srcS + 0x724);
    label_436428:
        v_94 = x87_r7_19;
        long double x87_r6_19 = *(dstD + 4);
        x87_r7_19 - x87_r6_19;

        if (!(*(&((x87_r7_19 < x87_r6_19 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, x87_r6_19) ? 1 : 0) << 0xa
                | (x87_r7_19 == x87_r6_19 ? 1 : 0) << 0xe) + 1) & 1))
            v_94 = *(dstD + 4);
    }
    float v_68;
    Sys_CloseFileStream_12(&v_68, v_94);
    float v_5c;
    float v_50;
    float v_90 = v_50 * *(a1 + 0x110) + v_68 * *(a1 + 0x108) + v_5c * *(a1 + 0x10c);
    float v_64;
    float v_58;
    float v_4c;
    float v_8c = v_4c * *(a1 + 0x110) + v_64 * *(a1 + 0x108) + v_58 * *(a1 + 0x10c);
    float v_60;
    float v_54;
    float v_48;
    v_88 = v_48 * *(a1 + 0x110) + v_60 * *(a1 + 0x108) + v_54 * *(a1 + 0x10c);
    *(&v_88 + 4) = v_50 * *(a1 + 0x11c) + v_68 * *(a1 + 0x114) + v_5c * *(a1 + 0x118);
    v_80 = v_4c * *(a1 + 0x11c) + v_64 * *(a1 + 0x114) + v_58 * *(a1 + 0x118);
    *(&v_80 + 4) = v_48 * *(a1 + 0x11c) + v_60 * *(a1 + 0x114) + v_54 * *(a1 + 0x118);
    float v_78 = v_50 * *(a1 + 0x128) + v_68 * *(a1 + 0x120) + v_5c * *(a1 + 0x124);
    int32_t v_44;
    int32_t tmpD1 = *(a1 + 0x12c) + v_44 + 1;
    float* result = a2[1];
    int32_t v_6c = tmpD1;
    float v_74 = v_4c * *(a1 + 0x128) + v_64 * *(a1 + 0x120) + v_58 * *(a1 + 0x124);
    float v_70 = v_48 * *(a1 + 0x128) + v_60 * *(a1 + 0x120) + v_54 * *(a1 + 0x124);
    memcpy(&v_68, &v_90, 0x28);
    float v_40 = v_78 * result[2] + *(&v_88 + 4) * result[1] + v_90 * *result;
    float v_3c = v_74 * result[2] + v_80 * result[1] + v_8c * *result;
    float v_38 = v_70 * result[2] + *(&v_80 + 4) * result[1] + v_88 * *result;
    float v_34 = v_78 * result[5] + v_90 * result[3] + *(&v_88 + 4) * result[4];
    float v_30 = v_74 * result[5] + v_8c * result[3] + v_80 * result[4];
    float v_2c = v_70 * result[5] + v_88 * result[3] + *(&v_80 + 4) * result[4];
    int32_t v_1c = result[9] + tmpD1 + 1;
    float v_28 = v_78 * result[8] + v_90 * result[6] + *(&v_88 + 4) * result[7];
    float v_24 = v_74 * result[8] + v_8c * result[6] + v_80 * result[7];
    float v_20 = v_70 * result[8] + v_88 * result[6] + *(&v_80 + 4) * result[7];
    memcpy(a1 + 0x70, &v_40, 0x28);
    return result;
}
