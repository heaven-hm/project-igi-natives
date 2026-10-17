// Original IGI.EXE function: SCamera_Cleanup_3 (VA 0x004420D0; static CFG gate PASS, CFG score 0.939).
#include "SCamera_Cleanup_3.h"
int32_t SCamera_Cleanup_3(float a1)

{
    double* srcS = a1;
    void* ctxB = srcS[0x4ba];
    char* v_30 = ctxB + 0x128;
    char* valA1 = DynObj_Missing(v_30);

    if (valA1)
    {
        v_30 = valA1;
        DynObj_CreateMagicObject_5(srcS, v_30);
    }

    double* objC = srcS[0x4ba];
    v_30 = nullptr;
    double v_18;
    WeaponType_UpdateAnim(&v_18, objC, v_30);
    v_18 = v_18 + *(ctxB + 0x20);
    double v_10;
    double v_10_1 = v_10 + *(ctxB + 0x28);
    double v_8;
    double v_8_1 = v_8 + *(ctxB + 0x30);
    long double x87_r7_6 = *(srcS + 0x9c);
    long double fpu6 = srcS[0x14];
    fpu6 - x87_r7_6;
    long double x87_r7_7;

    if (!(*(&((fpu6 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_6) ? 1 : 0) << 0xa
            | (fpu6 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_7 = srcS[0x14];
    else
        x87_r7_7 = *(srcS + 0x9c);

    long double x87_r6_1 = srcS[0x13];
    x87_r6_1 - x87_r7_7;
    long double x87_r7_9;

    if (*(&((x87_r6_1 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_7) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_10 = *(srcS + 0x9c);
        long double x87_r6_2 = srcS[0x14];
        x87_r6_2 - x87_r7_10;

        if (!(*(&((x87_r6_2 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_9 = srcS[0x14];
        else
            x87_r7_9 = *(srcS + 0x9c);
    }
    else
        x87_r7_9 = srcS[0x13];

    v_30 = *(srcS + 0x6c);
    long double x87_r7_12 = Render_ComputeNormals(v_30) * x87_r7_9;
    void* tmpD = srcS[0xd];
    v_30 = x87_r7_12;
    WorldObject_CommitTransform(tmpD, srcS, &v_18, v_30);
    double* valA5 = DynObj_UpdateDynTree_4(srcS);
    Render_BindTexture_14(srcS[0xd], srcS, valA5);
    long double x87_r7_13 = *(ctxB + 0x120);
    srcS[0x1e] = x87_r7_13;
    v_30 = *(ctxB + 0x108) + *(ctxB + 0x124);
    Sys_ReadFileBlock_12(&srcS[0xe], x87_r7_13, 0f, v_30);
    WeaponType_UpdateAnim(&v_18, srcS, 1);
    v_18 = v_18 + srcS[4];
    double v_10_2 = v_10_1 + srcS[5];
    double v_8_2 = v_8_1 + srcS[6];
    memcpy(&srcS[0x22], &v_18, 0x18);
    memcpy(&srcS[0x25], &srcS[0xe], 0x28);
    int32_t valA9;
    int32_t tmpD1;
    tmpD1 = HIGHD(*(ctxB + 0x154));
    valA9 = LOWD(*(ctxB + 0x154));
    srcS[0x2a] = ((valA9 - tmpD1) >> 1) * 0.0174532924f;
    int32_t valA13;
    int32_t tmpD2;
    tmpD2 = HIGHD(*(ctxB + 0x156));
    valA13 = LOWD(*(ctxB + 0x156));
    int32_t result = (valA13 - tmpD2) >> 1;
    srcS[0x2b] = result * 0.0174532924f;
    srcS[0x2c] = *(ctxB + 0x158) * 4096f;
    return result;
}
