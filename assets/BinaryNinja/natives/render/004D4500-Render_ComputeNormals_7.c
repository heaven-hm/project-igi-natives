#include "Render_ComputeNormals_7.h"
int32_t Render_ComputeNormals_7(float* a1, float a2, float a3, float a4)

{
    long double fpu7 = a4;
    long double f1 = 0.00100000005f;
    fpu7 - f1;
    int16_t valA = (fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe;

    if (*(&valA + 1) & 0x41)
    {
        memcpy(a1, a3, 0x14);
        return valA;
    }

    long double x87_r7_1 = a4;
    long double f2 = 0.999000013f;
    x87_r7_1 - f2;
    valA = (x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 1))
    {
        memcpy(a1, a2, 0x14);
        return valA;
    }

    float srcS2 = a3;
    float ctxB = a2;
    float v_28 = srcS2;
    int32_t v_18 = 0;
    Sys_CloseFileStream_13(&v_18, &a3, &a2, ctxB, v_28);
    int32_t valA1 = v_18;
    float v_14;
    float v_10;
    float v_c;
    float v_8;
    int32_t srcS3;

    if (!valA1)
    {
        memcpy(&v_14, srcS2, 0x14);
        int32_t v_4;
        srcS3 = v_4;
    }
    else
    {
        v_14 = -(*srcS2);
        v_10 = -(*(srcS2 + 4));
        v_c = -(*(srcS2 + 8));
        srcS3 = *(srcS2 + 0x10);
        v_8 = -(*(srcS2 + 0xc));
    }

    a4 = 1f - a4;
    long double x87_r7_12 = a3;
    long double f3 = 0f;
    x87_r7_12 - f3;
    valA1 = (x87_r7_12 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f3) ? 1 : 0) << 0xa
        | (x87_r7_12 == f3 ? 1 : 0) << 0xe;

    if (*(&valA1 + 1) & 0x40)
    {
        memcpy(a1, ctxB, 0x14);
        return valA1;
    }

    long double x87_r7_13 = a3;
    long double f4 = 0.00999999978f;
    x87_r7_13 - f4;
    long double fpu6;
    long double x87_r7_15;

    if (!(*(&((x87_r7_13 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f4) ? 1 : 0) << 0xa
        | (x87_r7_13 == f4 ? 1 : 0) << 0xe) + 1) & 1))
    {
        a4 = a4 * a3;
        long double fp0_1;
        bool c1_1;
        bool c2_4;
        fp0_1 = __fsin(a3 - a4);
        x87_r7_15 = fp0_1 * a2;
        long double fp0_2;
        bool c1_2;
        bool c2_5;
        fp0_2 = __fsin(a4);
        fpu6 = fp0_2 * a2;
    }
    else
    {
        x87_r7_15 = 1f - a4;
        fpu6 = a4;
    }

    *a1 = x87_r7_15 * *ctxB + fpu6 * v_14;
    a1[1] = x87_r7_15 * *(ctxB + 4) + fpu6 * v_10;
    a1[2] = x87_r7_15 * *(ctxB + 8) + fpu6 * v_c;
    a1[3] = x87_r7_15 * *(ctxB + 0xc) + fpu6 * v_8;
    a1[4] = *(ctxB + 0x10) + srcS3 + 1;
    return a1;
}
