// Original IGI.EXE function: Menu_HandleInput_5 (VA 0x00419540; static CFG gate FAIL, CFG score 0.667).
#include "Menu_HandleInput_5.h"
int32_t Menu_HandleInput_5(int32_t* a1, float* a2)

{
    void v_2c;
    int32_t* valA = &v_2c;
    int32_t i_1 = 2;
    int32_t i;

    do
    {
        valA[-1] = 0;
        *valA = 0x3f800000;
        valA[1] = 0;
        valA[-2] = 0x3d99999a;
        valA[-4] = 0;
        valA[-3] = 0;
        valA[-5] = 0x3f800000;
        valA = &valA[9];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    float v_48;
    int32_t* v_4c = &v_48;
    int32_t ctxB = 0;
    int32_t result = *a1;
    int32_t v_58 = 0x80000;
    int32_t v_5c = 1;
    int32_t v_54 = 0;
    int32_t v_50 = 2;
    float* dstD = &a1[1];

    if (result > 0)
    {
        do
        {
            int32_t tmpD = g_a84a54;
            v_48 = dstD[1] * a2[2] + *dstD * *a2 + a2[4];
            float v_44_1 = dstD[1] * a2[3] + *dstD * a2[1] + a2[5];
            float v_24_1 = dstD[3] * a2[2] + dstD[2] * *a2 + a2[4];
            float v_20_1 = dstD[2] * a2[1] + dstD[3] * a2[3] + a2[5];
            (*((tmpD << 2) + &g_a94e84))(&v_5c);
            result = *a1;
            ctxB += 1;
            dstD = &dstD[4];
        } while (ctxB < result);
    }

    return result;
}
