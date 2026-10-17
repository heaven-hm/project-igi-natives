// Original IGI.EXE function: Light_SetLightColor_9 (VA 0x0052D060; static CFG gate PASS, CFG score 1.000).
#include "Light_SetLightColor_9.h"
int32_t Light_SetLightColor_9(void* a1)

{
    float v_44 = 0f;

    if (g_b041e8)
    {
        int32_t objC1 = g_b041e0;
        float* valA3 = **&g_b041e4 * g_b041f0;
        long double fp1_1;
        bool c1_1;
        fp1_1 = __fpatan(*(valA3 + objC1 + 4), *(valA3 + objC1));
        v_44 = fp1_1 + 1.57079637f;
    }

    *(g_bcade8 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* valA4 = g_5ca114;
    (*(*valA4 + 0x50))(valA4, 0x1b, 0);
    int32_t* valA5 = g_5ca114;
    (*(*valA5 + 0x50))(valA5, 0x1c, 0);
    int32_t* valA6 = g_5ca114;
    (*(*valA6 + 0x50))(valA6, 7, 0);
    int32_t* valA7 = g_5ca114;
    (*(*valA7 + 0x50))(valA7, 0x17, 2);
    int32_t* valA8 = g_5ca114;
    (*(*valA8 + 0x50))(valA8, 0xe, 0);
    int32_t* valA9 = g_5ca114;
    (*(*valA9 + 0x50))(valA9, 0x16, 3);
    int32_t* valA10 = g_5ca114;
    (*(*valA10 + 0x50))(valA10, 0x1d, 0);
    int32_t* valA11 = g_5ca114;
    (*(*valA11 + 0x50))(valA11, 0x89, 0);
    int32_t* valA12 = g_5ca114;
    (*(*valA12 + 0x50))(valA12, 0x1a, 1);
    int32_t* valA13 = g_5ca114;
    (*(*valA13 + 0x50))(valA13, 0xf, 0);
    int32_t* valA14 = g_5ca114;
    (*(*valA14 + 0x50))(valA14, 0x88, 1);
    int32_t* valA15 = g_5ca114;
    (*(*valA15 + 0x94))(valA15, 0, 1, 3);
    int32_t* valA16 = g_5ca114;
    (*(*valA16 + 0x94))(valA16, 0, 2, 2);
    int32_t* valA17 = g_5ca114;
    (*(*valA17 + 0x94))(valA17, 0, 3, 0);
    int32_t* valA18 = g_5ca114;
    (*(*valA18 + 0x94))(valA18, 0, 4, 1);
    int32_t* valA19 = g_5ca114;
    (*(*valA19 + 0x94))(valA19, 1, 1, 1);
    long double fp0;
    bool c1_2;
    bool c2;
    fp0 = __fcos(v_44);
    int32_t v_18 = g_bcabec;
    int32_t* valA21 = g_5ca114;
    int32_t v_38 = 0;
    int32_t v_34 = 0;
    int32_t v_28 = 0;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    int32_t v_8 = 0;
    int32_t v_4 = 0x3f800000;
    long double x87_r7_6 = fp0 * g_bcabec;
    float v_40 = x87_r7_6;
    long double fp0_1;
    bool c1_3;
    bool c2_1;
    fp0_1 = __fsin(v_44);
    long double x87_r6_4 = fp0_1 * g_bcabec;
    float v_3c = -(x87_r6_4);
    float v_30 = x87_r6_4;
    float v_2c = x87_r7_6;
    (*(*valA21 + 0x2c))(valA21, 1, &v_40);
    int32_t* valA22 = g_5ca114;
    return (*(*valA22 + 0x80))(valA22, 4, *(a1 + 0x50), 0, 0x141, a1 + 0x54, 0x744, 0);
}
