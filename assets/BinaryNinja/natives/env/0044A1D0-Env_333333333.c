// Original IGI.EXE function: Env_333333333 (VA 0x0044A1D0; static CFG gate PASS, CFG score 0.917).
#include "Env_333333333.h"
struct status_msg* Env_333333333(uint32_t a1, int32_t* a2, double* a3, float* a4, void* a5)

{
    int32_t* kind = a1;
    void* objC = *kind;
    kind = g_57c240;
    void* srcS = *(*(objC + 0xc) + 0xc);
    struct status_msg* valA1 = QTask_HandleInput(Script_FormatString(), kind, 0);
    g_57c244 = 0;
    int32_t* srcS1 = *(srcS + 0x2c);
    struct status_msg* result = *srcS1;

    if (!result)
        return result;

    valA1->head[0x1b] = *a2;
    valA1->head[0x1c] = a2[1];
    valA1->head[0x1d] = a2[2];
    long double x87_r7_1 = valA1->head[0x1d];
    long double x87_r6_1 = valA1->head[0x1c];
    long double x87_r5_1 = valA1->head[0x1b];
    long double x87_r7_3 =
        10f / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1);
    long double x87_r6_4 = valA1->head[0x1b] * x87_r7_3;
    float v_20_1 = x87_r6_4;
    valA1->head[0x1b] = x87_r6_4;
    long double x87_r6_6 = valA1->head[0x1c] * x87_r7_3;
    float v_1c_1 = x87_r6_6;
    valA1->head[0x1c] = x87_r6_6;
    long double x87_r7_4 = x87_r7_3 * valA1->head[0x1d];
    valA1->head[0x1d] = x87_r7_4;
    float v_14_1 = x87_r7_4 * a4[7] + v_1c_1 * a4[4] + v_20_1 * a4[1];
    long double x87_r7_6 = v_20_1 * a4[2] + x87_r7_4 * a4[8];
    long double x87_r6_20 = v_1c_1 * a4[5];
    valA1->head[0x1b] = x87_r7_4 * a4[6] + v_1c_1 * a4[3] + v_20_1 * *a4;
    valA1->head[0x1c] = v_14_1;
    valA1->head[0x1d] = x87_r7_6 + x87_r6_20;
    double* tmpD4 = a3;
    memcpy(&valA1->head[0x1e], tmpD4, 0x18);
    memcpy(&valA1->head[0x24], a4, 0x28);
    valA1->head[0x1a] = a1;
    valA1->sprite[8] = 0x1e;
    valA1->sprite[9] = 0;
    valA1->sprite[0xa] = 0;
    valA1->sprite[0xb] = 0;
    g_57c270 = *(a5 + 8) - *tmpD4;
    g_57c274 = *(a5 + 0x10) - tmpD4[1];
    long double x87_r7_13 = *(a5 + 0x18) - tmpD4[2];
    g_57c278 = x87_r7_13;
    float v_14_2 = g_57c278 * a4[7] + g_57c274 * a4[4] + g_57c270 * a4[1];
    long double x87_r7_23 = g_57c270 * a4[2] + g_57c278 * a4[8];
    long double x87_r6_32 = g_57c274 * a4[5];
    g_57c270 = x87_r7_13 * a4[6] + g_57c274 * a4[3] + g_57c270 * *a4;
    g_57c274 = v_14_2;
    g_57c278 = x87_r7_23 + x87_r6_32;
    g_57c250 = *(a5 + 8) - *tmpD4;
    g_57c254 = *(a5 + 0x10) - tmpD4[1];
    long double x87_r7_30 = *(a5 + 0x18) - tmpD4[2];
    g_57c258 = x87_r7_30;
    float v_14_3 = g_57c258 * a4[7] + g_57c254 * a4[4] + g_57c250 * a4[1];
    long double x87_r7_40 = g_57c250 * a4[2] + g_57c258 * a4[8];
    long double x87_r6_44 = g_57c254 * a4[5];
    g_57c250 = x87_r7_30 * a4[6] + g_57c254 * a4[3] + g_57c250 * *a4;
    g_57c254 = v_14_3;
    g_57c258 = x87_r7_40 + x87_r6_44;
    long double x87_r7_45 =
        *(a5 + 0x40) * a4[6] + *(a5 + 0x3c) * a4[3] + *a4 * *(a5 + 0x38);
    long double x87_r7_52 = a4[2] * *(a5 + 0x38) + *(a5 + 0x40) * a4[8];
    long double x87_r6_56 = *(a5 + 0x3c) * a4[5];
    g_57c264 = *(a5 + 0x40) * a4[7] + *(a5 + 0x3c) * a4[4] + *(a5 + 0x38) * a4[1];
    g_57c260 = x87_r7_45;
    g_57c27c = &valA1->sprite[0xc];
    int32_t* objC12 = srcS1;
    g_57c23c = 0x41200000;
    g_57c228 = "333?333?333?";
    g_57c25c = valA1;
    g_57c268 = x87_r7_52 + x87_r6_56;
    g_57c26c = &valA1->head[0x5df0];
    valA1->sprite[4] = 0;
    valA1->sprite[5] = 0;
    valA1->sprite[6] = 0;
    valA1->sprite[7] = 0;
    a1 = 0;

    if (*objC12 > 0)
    {
        while (true)
        {
            int32_t valA8 = objC12[4];
            int32_t dstD3 = objC12[5];
            int32_t objC13 = 0;
            objC13 = *(valA8 + (a1 << 3));
            void* valA9 = valA8 + (a1 << 3);
            int32_t srcS8 = 0;
            srcS8 = *(valA9 + 2);
            float* objC15 = (objC13 << 4) + dstD3;
            float* srcS10 = (srcS8 << 4) + dstD3;
            int32_t dstD4 = 0;
            dstD4 = *(valA9 + 4);
            float* dstD6 = (dstD4 << 4) + srcS1[5];
            long double x87_r7_55 = *dstD6 - *objC15;
            long double x87_r6_58 = dstD6[1] - objC15[1];
            long double x87_r5_12 = dstD6[2] - objC15[2];
            float v_18_5 = *srcS10 - *objC15;
            float v_14_5 = srcS10[1] - objC15[1];
            long double x87_r4_11 = srcS10[2] - objC15[2];
            long double x87_r7_60 = (x87_r4_11 * x87_r6_58 - v_14_5 * x87_r5_12) * *a2
                + (x87_r7_55 * v_14_5 - v_18_5 * x87_r6_58) * a2[2] +
                -((x87_r4_11 * x87_r7_55 - v_18_5 * x87_r5_12)) * a2[1];
            long double f1_1 = 0f;
            x87_r7_60 - f1_1;

            if (*(&((x87_r7_60 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_60, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_60 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                Env_ActivateEntity_11(objC15, srcS10, dstD6);
                tmpD4 = a3;
            }

            uint32_t valA14 = a1 + 1;
            a1 = valA14;

            if (valA14 >= *srcS1)
                break;

            objC12 = srcS1;
        }
    }

    uint32_t valA15;
    valA15 = valA1->sprite[4];
    *(&valA15 + 1) = valA1->sprite[5];
    *(&valA15 + 2) = valA1->sprite[6];
    *(&valA15 + 3) = valA1->sprite[7];
    *(valA1 + 0x2b040) = Display_RestoreDevice_18(Level_StartMission_4(), nullptr, tmpD4, a4,
        &valA1->head[0x5df0], valA15, 0, 1, 0, nullptr, 0);
    return Env_GlassCrush1(a3);
}
