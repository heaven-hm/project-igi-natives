#include "Display_SyncVSync_20.h"
int32_t* Display_SyncVSync_20(double* a1)

{
    void* srcS = a1[0xa];
    Render_DrawLightmapMesh_3(srcS, a1[0xc]);
    Render_ClipMesh_2(srcS);
    int32_t* objC = *(a1 + 0x54);
    void* valA1 = g_bcade8;
    void* flagP = a1[0xb];
    int32_t objC1 = g_7205b0;

    if (*(valA1 + 4) != objC1)
    {
        *(valA1 + 4) = objC1;
        (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
    }

    void* objC2 = g_bcad7c;
    int32_t valA3 = g_7ac09c;

    if (*(objC2 + 4) != valA3)
    {
        *(objC2 + 4) = valA3;
        (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
    }

    void* valA4 = g_bcadac;
    int32_t objC4 = g_7234b8;

    if (*(valA4 + 4) != objC4)
    {
        *(valA4 + 4) = objC4;
        (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
    }

    void* valA6 = g_bcadc4;
    int32_t objC6 = g_bcacec;

    if (*(valA6 + 4) != objC6)
    {
        *(valA6 + 4) = objC6;
        (*(g_bcadc4 + (g_bcacec << 2) + 0x14))(0);
    }

    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    int32_t* valA10 = g_5ca114;
    int32_t objC8 = *valA10;

    if (!(*(flagP + 0x18) & 1))
    {
        (*(objC8 + 0x50))(valA10, 0x89, 1);
        int32_t* valA16 = g_5ca114;
        (*(*valA16 + 0x94))(valA16, 0, 1, 4);
        int32_t* valA17 = g_5ca114;
        (*(*valA17 + 0x50))(valA17, 0x1b, 1);
        int32_t* valA18 = g_5ca114;
        (*(*valA18 + 0x50))(valA18, 0x13, 5);
        int32_t* valA19 = g_5ca114;
        (*(*valA19 + 0x50))(valA19, 0x14, 6);
        void* objC13 = a1[0xa];
        void* valA20 = *(*(objC13 + 0xc) + 0xc);
        long double x87_r7_4 = a1[4] * *(valA20 + 0x38) + *(a1 + 0x1c) * *(valA20 + 0x34)
            + a1[3] * *(valA20 + 0x30);
        long double x87_r6_8 = *(a1 + 0x2c) * *(valA20 + 0x38) + a1[5] * *(valA20 + 0x34)
            + *(a1 + 0x24) * *(valA20 + 0x30);
        float v_1f0_1 = x87_r6_8;
        long double x87_r6_12 = a1[7] * *(valA20 + 0x38) + *(a1 + 0x34) * *(valA20 + 0x34)
            + a1[6] * *(valA20 + 0x30);
        float v_1ec_1 = x87_r6_12;
        double v_1a8 = x87_r7_4 + *a1;
        double v_1a0_1 = v_1f0_1 + a1[1];
        double v_198_1 = v_1ec_1 + a1[2];
        Display_CreateSurface_18(&v_1a8, *(*(*(objC13 + 0xc) + 0xc) + 0x3c));
    }
    else
    {
        (*(objC8 + 0x50))(valA10, 0x89, 0);
        int32_t* valA11 = g_5ca114;
        (*(*valA11 + 0x94))(valA11, 0, 1, 2);
        int32_t* valA12 = g_5ca114;
        (*(*valA12 + 0x50))(valA12, 0x1b, 1);
        int32_t* valA13 = g_5ca114;
        (*(*valA13 + 0x50))(valA13, 0x13, 2);
        int32_t* valA14 = g_5ca114;
        (*(*valA14 + 0x50))(valA14, 0x14, 2);
        int32_t* valA15 = g_5ca114;
        (*(*valA15 + 0x50))(valA15, 0x1c, 0);
    }

    int32_t* valA22 = g_5ca114;
    (*(*valA22 + 0x50))(valA22, 0xf, 1);
    int32_t* valA23 = g_5ca114;
    (*(*valA23 + 0x50))(valA23, 0x18, 1);
    int32_t* valA24 = g_5ca114;
    (*(*valA24 + 0x50))(valA24, 0x19, 5);
    int32_t* valA25 = g_5ca114;
    (*(*valA25 + 0x50))(valA25, 0xe, 0);
    int32_t* valA26 = g_5ca114;
    int32_t tmpD14 = 0;
    tmpD14 = *(flagP + 0x1b);
    (*(*valA26 + 0x50))(valA26, 0x3c, -((tmpD14 + 1)) << 0x18);
    float v_1e0 = a1[1] - g_bcab10;
    float v_1dc = a1[2] - g_bcab18;
    long double x87_r6_18 = g_bcabec * (*a1 - g_bcab08);
    float v_1d8;
    memcpy(&v_1d8, &a1[3], 0x28);
    float v_1e4 = x87_r6_18;
    float v_1e0_1 = g_bcabec * v_1e0;
    float v_1dc_1 = g_bcabec * v_1dc;
    long double x87_r7_18 = g_bcabec * a1[8];
    float v_1f0_2 = g_bcabec * *(a1 + 0x44);
    float v_1ec_2 = g_bcabec * a1[9];
    v_1d8 = v_1d8 * x87_r7_18;
    float v_1d4;
    float v_1d4_1 = v_1d4 * v_1f0_2;
    float v_1d0;
    float v_1d0_1 = v_1d0 * v_1ec_2;
    float v_1cc;
    float v_1cc_1 = v_1cc * x87_r7_18;
    float v_1c8;
    float v_1c8_1 = v_1c8 * v_1f0_2;
    float v_1c4;
    float v_1c4_1 = v_1c4 * v_1ec_2;
    float v_1c0;
    float v_1c0_1 = v_1c0 * x87_r7_18;
    float v_1bc;
    float v_1bc_1 = v_1bc * v_1f0_2;
    float v_1b8;
    float v_1b8_1 = v_1b8 * v_1ec_2;
    void v_e8;
    Display_SetGammaRamp_7(&v_e8, &v_1d8, &v_1e4);
    int32_t* valA27 = g_5ca114;
    (*(*valA27 + 0x2c))(valA27, 1, &v_e8);
    void v_a8;

    if (!*(a1 + 0x5c))
    {
        long double x87_r7_25 = g_b81700 * g_bcabc4;
        float valA29 = g_b81700;
        memcpy(&v_a8, &g_bcaae0, 0xa8);
        float v_1b0_1 = x87_r7_25;
        void v_190;
        memcpy(&v_190, &v_a8, 0xa8);
        float v_150 = valA29;
        float v_14c_1 = v_1b0_1 / (Display_ClearSurfaces_4() * g_bcabc0);
        int32_t v_130_1 = 0;
        int32_t* v_208_24 = &v_190;
        float v_144_1 = Display_ClearSurfaces_4() * g_bcabc8 / v_150;
        Transcontext_SetActiveTransContext(v_208_24);
    }

    int16_t valA30 = *(flagP + 0x10);

    if (valA30 == 0xffff)
    {
        int32_t* valA39 = g_5ca114;
        (*(*valA39 + 0x94))(valA39, 0, 1, 3);
        int32_t* valA40 = g_5ca114;
        (*(*valA40 + 0x8c))(valA40, 0, 0);
        int32_t valA41 = 0;
        valA41 = *(flagP + 0xc);
        int32_t srcS8 = 0;
        int32_t valA43 = 0;
        valA43 = *(flagP + 0x14);
        int32_t dstD1 = 0;
        dstD1 = *(flagP + 0x12);
        int32_t* objC22 = g_5ca114;
        srcS8 = objC[9];
        (*(*objC22 + 0x80))(objC22, *objC, *objC[0xa], srcS8 + dstD1, valA43, flagP + 0x1c, valA41, 0);
        int32_t* valA46 = g_5ca114;
        (*(*valA46 + 0x94))(valA46, 0, 1, 4);
    }
    else
    {
        int32_t* objC19 = g_5ca114;
        (*(*objC19 + 0x8c))(objC19, 0, *(*(*(a1[0xa] + 0x10) + (valA30 << 2)) + 0x20));
        int32_t valA34 = 0;
        valA34 = *(flagP + 0xc);
        int32_t srcS4 = 0;
        int32_t valA36 = 0;
        valA36 = *(flagP + 0x14);
        int32_t dstD = 0;
        dstD = *(flagP + 0x12);
        int32_t* objC20 = g_5ca114;
        srcS4 = objC[9];
        (*(*objC20 + 0x80))(objC20, *objC, *objC[0xa], srcS4 + dstD, valA36, flagP + 0x1c, valA34, 0);
    }

    if (!*(a1 + 0x5c))
        Transcontext_SetActiveTransContext(&v_a8);

    return Render_DrawRigidMesh_3(srcS);
}
