#include "Env_333333333Glassshatte.h"
struct status_msg* Env_333333333Glassshatte(uint32_t a1, float* a2, double* a3, double* a4, float a5 @ 0x18)

{
    int32_t* kind = a1;
    void* objC = *kind;
    kind = g_57c240;
    void* srcS = *(*(objC + 0xc) + 0xc);
    struct status_msg* valA1 = QTask_HandleInput(Script_FormatString(), kind, 0);
    g_57c244 = 1;
    int32_t* srcS1 = *(srcS + 0x2c);
    struct status_msg* tmpD1 = valA1;
    struct status_msg* result = *srcS1;
    struct status_msg* v_24 = tmpD1;

    if (!result)
        return result;

    tmpD1->head[0x1b] = *a3 - *a4;
    tmpD1->head[0x1c] = a3[1] - a4[1];
    long double x87_r7_6 = a3[2] - a4[2];
    tmpD1->head[0x1d] = x87_r7_6;
    long double x87_r6_1 = tmpD1->head[0x1c];
    long double x87_r5_1 = tmpD1->head[0x1b];
    float v_30_1 = sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_6 * x87_r7_6);
    long double x87_r7_8 = 0f;
    long double f1_1 = v_30_1;
    x87_r7_8 - f1_1;
    long double x87_r7_9;

    if (*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
        | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_10 = 1f;
        long double f2_1 = v_30_1;
        x87_r7_10 - f2_1;

        x87_r7_9 = !(*(&((x87_r7_10 < f2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_10, f2_1) ? 1 : 0) << 0xa | (x87_r7_10 == f2_1 ? 1 : 0) << 0xe)
            + 1) & 1) ? v_30_1 : 1f;
    }
    else
        x87_r7_9 = 0f;

    long double x87_r7_11 = x87_r7_9 * a5;
    long double x87_r6_4 = x87_r7_11 / v_30_1;
    long double x87_r5_4 = x87_r6_4 * tmpD1->head[0x1b];
    float v_28_1 = x87_r5_4;
    tmpD1->head[0x1b] = x87_r5_4;
    long double x87_r5_6 = x87_r6_4 * tmpD1->head[0x1c];
    float v_30_2 = x87_r5_6;
    tmpD1->head[0x1c] = x87_r5_6;
    long double x87_r6_5 = x87_r6_4 * tmpD1->head[0x1d];
    tmpD1->head[0x1d] = x87_r6_5;
    float v_1c_1 = v_28_1 * a2[1] + x87_r6_5 * a2[7] + v_30_2 * a2[4];
    long double x87_r6_7 = x87_r6_5 * a2[8] + v_30_2 * a2[5];
    long double x87_r5_18 = v_28_1 * a2[2];
    tmpD1->head[0x1b] = v_28_1 * *a2 + x87_r6_5 * a2[6] + v_30_2 * a2[3];
    tmpD1->head[0x1c] = v_1c_1;
    tmpD1->head[0x1d] = x87_r6_7 + x87_r5_18;
    memcpy(&tmpD1->head[0x1e], a3, 0x18);
    memcpy(&tmpD1->head[0x24], a2, 0x28);
    tmpD1->head[0x1a] = a1;
    double* valA6 = a3;
    tmpD1->sprite[8] = 0x1e;
    tmpD1->sprite[9] = 0;
    tmpD1->sprite[0xa] = 0;
    tmpD1->sprite[0xb] = 0;
    g_57c270 = *a4 - *valA6;
    g_57c274 = a4[1] - valA6[1];
    g_57c278 = a4[2] - valA6[2];
    void* __offset(status_msg, 0x177c0) srcS4 = &tmpD1->head[0x5df0];
    int32_t v_28_2 = 0;
    float v_1c_2 = g_57c270 * a2[1] + g_57c278 * a2[7] + g_57c274 * a2[4];
    long double x87_r6_25 = g_57c270 * a2[2] + g_57c278 * a2[8];
    long double x87_r5_30 = g_57c274 * a2[5];
    g_57c270 = g_57c270 * *a2 + g_57c278 * a2[6] + g_57c274 * a2[3];
    g_57c274 = v_1c_2;
    g_57c26c = srcS4;
    g_57c228 = "333?333?333?GlassShatter";
    g_57c25c = tmpD1;
    g_57c23c = x87_r7_11;
    g_57c278 = x87_r6_25 + x87_r5_30;
    g_57c27c = &tmpD1->sprite[0xc];
    int32_t* objC8 = srcS1;
    tmpD1->sprite[4] = 0;
    tmpD1->sprite[5] = 0;
    tmpD1->sprite[6] = 0;
    tmpD1->sprite[7] = 0;

    if (*objC8 > 0)
    {
        while (true)
        {
            int32_t valA7 = objC8[4];
            int32_t dstD3 = objC8[5];
            int32_t objC9 = 0;
            objC9 = *(valA7 + (v_28_2 << 3));
            void* valA8 = valA7 + (v_28_2 << 3);
            int32_t srcS6 = 0;
            srcS6 = *(valA8 + 2);
            float* objC11 = (objC9 << 4) + dstD3;
            float* srcS8 = (srcS6 << 4) + dstD3;
            int32_t dstD4 = 0;
            dstD4 = *(valA8 + 4);
            float* dstD6 = (dstD4 << 4) + srcS1[5];
            long double x87_r7_13 = *dstD6 - *objC11;
            long double x87_r6_28 = dstD6[1] - objC11[1];
            long double x87_r5_32 = dstD6[2] - objC11[2];
            float v_20_3 = *srcS8 - *objC11;
            float v_1c_3 = srcS8[1] - objC11[1];
            long double x87_r4_19 = srcS8[2] - objC11[2];
            long double x87_r5_40 =
                (a3[2] - a4[2]) * (x87_r7_13 * v_1c_3 - v_20_3 * x87_r6_28)
                + (a3[1] - a4[1]) * -((x87_r4_19 * x87_r7_13 - v_20_3 * x87_r5_32));
            long double x87_r6_33 =
                x87_r5_40 + (*a3 - *a4) * (x87_r4_19 * x87_r6_28 - v_1c_3 * x87_r5_32);
            long double f3_1 = 0f;
            x87_r6_33 - f3_1;

            if (*(&((x87_r6_33 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_33, f3_1) ? 1 : 0) << 0xa
                | (x87_r6_33 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                Env_ActivateEntity_11(objC11, srcS8, dstD6);
                tmpD1 = v_24;
            }

            int32_t valA18 = v_28_2 + 1;
            v_28_2 = valA18;

            if (valA18 >= *srcS1)
                break;

            objC8 = srcS1;
        }

        valA6 = a3;
    }

    uint32_t tmpD2;
    tmpD2 = tmpD1->sprite[4];
    *(&tmpD2 + 1) = tmpD1->sprite[5];
    *(&tmpD2 + 2) = tmpD1->sprite[6];
    *(&tmpD2 + 3) = tmpD1->sprite[7];
    *(v_24 + 0x2b040) =
        Display_RestoreDevice_18(Level_StartMission_4(), nullptr, valA6, a2, srcS4, tmpD2, 0, 1, 0, nullptr, 0);
    return Env_GlassCrush1(a3);
}
