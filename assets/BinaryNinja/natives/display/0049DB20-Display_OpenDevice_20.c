// Original IGI.EXE function: Display_OpenDevice_20 (VA 0x0049DB20; static CFG gate FAIL, CFG score 0.667).
#include "Display_OpenDevice_20.h"
int32_t Display_OpenDevice_20()

{
    int32_t valA = g_b46d04;
    int32_t i = 0;
    int32_t v_68;
    __builtin_memset(&v_68, 0, 0x68);

    if (g_b041e8 > 0)
    {
        do
        {
            long double x87_r7_1 = g_bcabec;
            float* valA4 = *(g_b041e4 + (i << 2)) * g_b041f0 + g_b041e0;
            v_68 = 3;
            float v_64_1 = x87_r7_1 * valA4[3];
            float v_60_1 = g_bcabec * valA4[4];
            float v_5c_1 = g_bcabec * valA4[5];
            float v_28_1 = -(*valA4);
            float v_24_1 = -(valA4[1]);
            int32_t* valA5 = g_5ca114;
            float v_20_1 = -(valA4[2]);
            (*(*valA5 + 0x48))(valA5, i, &v_68);
            int32_t* valA6 = g_5ca114;
            (*(*valA6 + 0xb0))(valA6, i, 1);
            i += 1;
        } while (i < g_b041e8);
    }

    int32_t v_ac;
    __builtin_memset(&v_ac, 0, 0x44);
    int32_t* valA8 = g_5ca114;
    v_ac = 0x3f800000;
    int32_t v_a8 = 0x3f800000;
    int32_t v_a4 = 0x3f800000;
    int32_t v_9c = 0x3f800000;
    int32_t v_98 = 0x3f800000;
    int32_t v_94 = 0x3f800000;
    (*(*valA8 + 0x40))(valA8, &v_ac);
    int32_t* valA9 = g_5ca114;
    (*(*valA9 + 0x50))(valA9, 0x22,
        g_b818f4 * 255f - ((((g_b818ec * -255f) << 8) + g_b818f0 * -255f) << 8));
    int32_t* valA10 = g_5ca114;
    (*(*valA10 + 0x50))(valA10, 0x26, valA);
    int32_t* valA11 = g_5ca114;
    (*(*valA11 + 0x50))(valA11, 0x23, 0);
    int32_t* valA12 = g_5ca114;
    (*(*valA12 + 0x50))(valA12, 0x8c, 3);
    int32_t* valA13 = g_5ca114;
    (*(*valA13 + 0x50))(valA13, 0x1c, g_5470b4);
    int32_t* valA14 = g_5ca114;
    (*(*valA14 + 0x50))(valA14, 0x2f, 3);
    int32_t* valA15 = g_5ca114;
    (*(*valA15 + 0x50))(valA15, 0x1d, 0);
    int32_t* valA16 = g_5ca114;
    (*(*valA16 + 0x50))(valA16, 0x8b,
        ((g_b818ac * 255f) << 8 | (g_b818b0 * 255f)) << 8 | (g_b818b4 * 255f));
    int32_t* valA17 = g_5ca114;
    (*(*valA17 + 0x50))(valA17, 0x16, 3);
    int32_t* valA18 = g_5ca114;
    (*(*valA18 + 0x50))(valA18, 0x89, 1);
    int32_t* valA19 = g_5ca114;
    (*(*valA19 + 0x50))(valA19, 0x8d, 0);
    int32_t* valA20 = g_5ca114;
    (*(*valA20 + 0x50))(valA20, 0x1a, 1);
    int32_t* valA21 = g_5ca114;
    (*(*valA21 + 0x50))(valA21, 0xf, 1);
    int32_t* valA22 = g_5ca114;
    (*(*valA22 + 0x50))(valA22, 0x18, 1);
    int32_t* valA23 = g_5ca114;
    (*(*valA23 + 0x50))(valA23, 0x19, 5);
    int32_t* valA24 = g_5ca114;
    (*(*valA24 + 0x50))(valA24, 7, g_bcad78);
    int32_t* valA25 = g_5ca114;
    (*(*valA25 + 0x50))(valA25, 0xe, 0);
    int32_t* valA26 = g_5ca114;
    return (*(*valA26 + 0x50))(valA26, 0x17, 4);
}
