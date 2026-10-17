// Original IGI.EXE function: Terrain_Draw (VA 0x00512C30; static CFG gate FAIL, CFG score 0.778).
#include "Terrain_Draw.h"
❓  int32_t __stdcall Terrain_Draw(float a1 @ 0xd0, float a2, float a3, float a4, float a5, float a6, float a7, float a8, double a9 @ 0x188, double a10, double a11 @ 0x1e0, double a12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x14f0);
    float valA = g_bcabd0;
    float objC = g_bcabd4;
    float tmpD = g_bcabd8;
    float valA1 = g_bcabdc;
    void* objC1 = g_bcade8;
    int32_t ctxB;
    int32_t v_4 = ctxB;
    int32_t flagP;
    int32_t v_8 = flagP;
    int32_t srcS;
    int32_t v_c = srcS;
    int32_t* dstD;
    int32_t* v_10 = dstD;
    long double x87_r7_3 = 1f / (1f - g_bcada0 / g_bcadc8);
    long double x87_r6_1 = g_bcad8c - g_bcadb4;
    g_a7f894 = -((x87_r6_1 * g_bcad70 * g_bcada0 * x87_r7_3));
    g_a7e074 = x87_r6_1 * x87_r7_3 + g_bcadb4;
    *(objC1 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    g_a7f860 = 0;
    g_a7f864 = 0;
    g_a7f868 = g_c28b44;
    long double x87_r7_6 = g_a7da30 * -255f;
    int32_t tmpD3 = g_bcadb4;
    g_a7f86c = g_c28b48;
    int32_t valA3 = g_bcad8c;
    g_a7f870 = tmpD3;
    g_a7f874 = valA3;
    int64_t arg_70 = g_a7da38 * 255f;
    g_a7e068 = arg_70 - (((x87_r7_6 << 8) + (g_a7da34 * -255f)) << 8);
    int32_t arg_198;
    __builtin_memset(&arg_198, 0, 0x40);
    int32_t* valA6 = g_5ca114;
    arg_198 = 0x3f800000;
    int32_t arg_1ac = 0x3f800000;
    int32_t arg_1c0 = 0x3f800000;
    int32_t arg_1d4 = 0x3f800000;
    (*(*valA6 + 0x2c))(valA6, 1, &arg_198);
    int32_t* valA7 = g_5ca114;
    (*(*valA7 + 0x34))(valA7, &g_a7f860);
    int32_t* valA8 = g_5ca114;
    (*(*valA8 + 0x50))(valA8, 0x88, 1);
    int32_t* valA9 = g_5ca114;
    (*(*valA9 + 0x50))(valA9, 0x26, g_a7da18);
    int32_t* valA10 = g_5ca114;
    (*(*valA10 + 0x50))(valA10, 0x23, 0);
    int32_t* valA11 = g_5ca114;
    (*(*valA11 + 0x50))(valA11, 0x8c, 3);
    int32_t* valA12 = g_5ca114;
    (*(*valA12 + 0x50))(valA12, 0x30, 1);
    int32_t* valA13 = g_5ca114;
    void* arg_20 = 0x46ea6000;
    (*(*valA13 + 0x50))(valA13, 0x24, 0x461c4000);
    int32_t* valA14 = g_5ca114;
    (*(*valA14 + 0x50))(valA14, 0x25, arg_20);
    int32_t* valA15 = g_5ca114;
    (*(*valA15 + 0x50))(valA15, 0x2f, 0);
    int32_t* valA16 = g_5ca114;
    (*(*valA16 + 0x50))(valA16, 0x1b, 0);
    int32_t* valA17 = g_5ca114;
    (*(*valA17 + 0x50))(valA17, 0x16, 1);
    int32_t* valA18 = g_5ca114;
    (*(*valA18 + 0x50))(valA18, 0x89, 0);
    int32_t* valA19 = g_5ca114;
    (*(*valA19 + 0x50))(valA19, 0x8d, 1);
    int32_t* valA20 = g_5ca114;
    (*(*valA20 + 0x50))(valA20, 0x1a, 1);
    int32_t* valA21 = g_5ca114;
    (*(*valA21 + 0x50))(valA21, 0xf, 0);
    int32_t* valA22 = g_5ca114;
    (*(*valA22 + 0x50))(valA22, 7, g_bcad78);
    int32_t* valA23 = g_5ca114;
    (*(*valA23 + 0x50))(valA23, 0xe, 1);
    int32_t* valA24 = g_5ca114;
    (*(*valA24 + 0x50))(valA24, 0x1d, 0);
    int32_t* valA25 = g_5ca114;
    int32_t v_4_19 = 2;
    int32_t v_8_19 = 0x11;
    int32_t v_c_18 = 0;
    int32_t objC19 = *valA25;
    v_10 = valA25;
    (*(objC19 + 0x94))(v_10, v_c_18, v_8_19, v_4_19);
    int32_t* valA26 = g_5ca114;
    int32_t v_4_20 = 2;
    int32_t v_8_20 = 0x10;
    int32_t v_c_19 = 0;
    int32_t tmpD16 = *valA26;
    v_10 = valA26;
    (*(tmpD16 + 0x94))(v_10, v_c_19, v_8_20, v_4_20);
    int32_t* valA27 = g_5ca114;
    int32_t v_4_21 = 3;
    int32_t v_8_21 = 0xc;
    int32_t v_c_20 = 0;
    int32_t objC20 = *valA27;
    v_10 = valA27;
    (*(objC20 + 0x94))(v_10, v_c_20, v_8_21, v_4_21);
    int32_t* valA28 = g_5ca114;
    int32_t v_4_22 = 2;
    int32_t v_8_22 = 0x12;
    int32_t v_c_21 = 0;
    int32_t tmpD17 = *valA28;
    v_10 = valA28;
    (*(tmpD17 + 0x94))(v_10, v_c_21, v_8_22, v_4_22);
    int32_t* valA29 = g_5ca114;
    int32_t v_4_23 = 0;
    int32_t v_8_23 = 0xb;
    int32_t v_c_22 = 0;
    int32_t objC21 = *valA29;
    v_10 = valA29;
    (*(objC21 + 0x94))(v_10, v_c_22, v_8_23, v_4_23);
    int32_t* valA30 = g_5ca114;
    int32_t v_4_24 = 1;
    int32_t v_8_24 = 4;
    int32_t v_c_23 = 0;
    int32_t tmpD18 = *valA30;
    v_10 = valA30;
    (*(tmpD18 + 0x94))(v_10, v_c_23, v_8_24, v_4_24);
    int32_t* valA31 = g_5ca114;
    int32_t v_4_25 = 4;
    int32_t objC22 = *valA31;
    int32_t v_8_25 = 1;
    int32_t v_c_24 = 0;
    v_10 = valA31;
    (*(objC22 + 0x94))(v_10, v_c_24, v_8_25, v_4_25);
    int32_t* valA32 = g_5ca114;
    int32_t v_4_26 = 2;
    int32_t v_8_26 = 2;
    int32_t v_c_25 = 0;
    int32_t tmpD19 = *valA32;
    v_10 = valA32;
    (*(tmpD19 + 0x94))(v_10, v_c_25, v_8_26, v_4_26);
    int32_t* valA33 = g_5ca114;
    int32_t v_4_27 = 0;
    int32_t v_8_27 = 3;
    int32_t v_c_26 = 0;
    int32_t objC23 = *valA33;
    v_10 = valA33;
    (*(objC23 + 0x94))(v_10, v_c_26, v_8_27, v_4_27);
    int32_t* valA34 = g_5ca114;
    int32_t v_4_28 = 1;
    int32_t v_8_28 = 1;
    int32_t v_c_27 = 1;
    int32_t tmpD20 = *valA34;
    v_10 = valA34;
    (*(tmpD20 + 0x94))(v_10, v_c_27, v_8_28, v_4_28);
    int32_t* valA35 = g_a7f890;
    int32_t v_4_29 = 0;
    g_a7e078 = 0;
    int32_t* v_8_29 = &g_a7f89c;
    int32_t objC24 = *valA35;
    int32_t v_c_28 = 0x2020;
    v_10 = valA35;
    int32_t result = (*(objC24 + 0xc))(v_10, v_c_28, v_8_29, v_4_29);

    if (!result)
    {
        int32_t valA36 = g_b16c9c;
        int32_t tmpD22 = g_c28fbc + valA36;
        float arg_10c = g_c31088;
        double arg_180;
        memcpy(&arg_180, &g_bcab08, 0x18);
        g_c28fbc = tmpD22;
        float tmpD23 = g_c28fc0;
        g_c28fb8 = 0;
        int32_t* arg_84 = &g_b12c60;
        float arg_cc;
        memcpy(&arg_cc, &g_bcaae0, 0x28);
        int32_t arg_50 = 0;

        if (valA36 > 0)
        {
            float arg_fc = arg_180;
            float arg_104 = a9;
            float arg_11c = a10;
            bool cond_2_1;

            do
            {
                void* valA38 = *arg_84;
                double arg_1d8;
                memcpy(&arg_1d8, valA38, 0x18);
                float arg_64 = -(arg_fc);
                float arg_68 = -(arg_104);
                float arg_6c = -(arg_11c);

                if (valA38)
                {
                    __return_addr = &arg_198;
                    int32_t valA39 = *(valA38 + 0x18);
                    char arg_1f0[0x40];
                    char (* arg_8)[0x40] = &arg_1f0;
                    void* valA40 = valA39 & 0xffff;
                    int32_t objC27 = valA39 >> 0x10;
                    char valA41 = *(valA38 + 0x1c);
                    float* flagP3 = valA38 + 0x20;
                    int32_t arg_4f0[0x200];
                    int32_t (* srcS2)[0x200] = &arg_4f0;
                    float i_2 = 0.375f / (1 << ((0x19 - valA41) & 0x1f));
                    long double x87_r6_9 = (0x40000000 >> (valA41 & 0x1f)) * 1.73000002f
                        + a8 * (a12 - a10) + a7 * (a11 - a9)
                        + a6 * (arg_1d8 - arg_180);
                    long double f1_1 = g_bcadcc;
                    x87_r6_9 - f1_1;

                    if (*(&((x87_r6_9 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, f1_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t arg_48 = 0;
                        void* arg_4 = nullptr;
                        int32_t arg_18 = 0;
                        int32_t ctxB1 = -(&arg_4f0);
                        float* arg_28 = flagP3;
                        void arg_cf8;
                        void* objC30 = &arg_cf8;
                        int32_t arg_3f0[0x40];
                        float arg_14 = &arg_3f0;
                        int32_t arg_30 = ctxB1;
                        char* arg_c;
                        int32_t arg_10;
                        int32_t arg_24;
                        void arg_cf0;
                        void* tmpD39;
                        char* ctxB17;
                        char* __return_addr_1;

                        while (true)
                        {
                            long double x87_r7_28 = *flagP3 + arg_64;
                            float valA43 = flagP3[2];
                            float tmpD27 = flagP3[1];
                            float tmpD28 = flagP3[3];
                            flagP3 = &flagP3[4];
                            long double x87_r6_10 = x87_r7_28;
                            long double f2_1 = 0f;
                            x87_r6_10 - f2_1;

                            if (*(&((x87_r6_10 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_10, f2_1) ? 1 : 0) << 0xa
                                    | (x87_r6_10 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                x87_r6_10 = -(x87_r6_10);

                            long double x87_r5_9 = tmpD27 + arg_68;
                            long double f3_1 = 0f;
                            x87_r5_9 - f3_1;
                            arg_10 = x87_r5_9;
                            arg_c = x87_r5_9;
                            bool c1_1 = /* bool c1_1 = unknown  {fst dword [esp+0x1c], fp0} */;

                            if (*(&((x87_r5_9 < f3_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                                | (FCMP_UO(x87_r5_9, f3_1) ? 1 : 0) << 0xa
                                | (x87_r5_9 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                            {
                                x87_r5_9 = -(x87_r5_9);
                                arg_c = x87_r5_9;
                            }

                            x87_r5_9 - x87_r6_10;

                            if (!(*(&((x87_r5_9 < x87_r6_10 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_9, x87_r6_10) ? 1 : 0) << 0xa
                                    | (x87_r5_9 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                x87_r6_10 = arg_c;

                            long double x87_r5_11 = valA43 + arg_6c;
                            long double f4_1 = 0f;
                            x87_r5_11 - f4_1;
                            arg_c = x87_r5_11;
                            bool c1_2 = /* bool c1_2 = unknown  {fst dword [esp+0x1c], fp0} */;

                            if (*(&((x87_r5_11 < f4_1 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                                | (FCMP_UO(x87_r5_11, f4_1) ? 1 : 0) << 0xa
                                | (x87_r5_11 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                            {
                                x87_r5_11 = -(x87_r5_11);
                                arg_c = x87_r5_11;
                            }

                            x87_r5_11 - x87_r6_10;

                            if (!(*(&((x87_r5_11 < x87_r6_10 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_11, x87_r6_10) ? 1 : 0) << 0xa
                                    | (x87_r5_11 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                x87_r6_10 = arg_c;

                            long double x87_r6_15 = (x87_r6_10 * i_2 - arg_10c) * tmpD23;
                            long double f5_1 = 0f;
                            x87_r6_15 - f5_1;

                            if (!(*(&((x87_r6_15 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_15, f5_1) ? 1 : 0) << 0xa
                                | (x87_r6_15 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                                long double f6_1 = 1f;
                                x87_r6_15 - f6_1;

                                if (!(*(&((x87_r6_15 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_15, f6_1) ? 1 : 0) << 0xa
                                        | (x87_r6_15 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                    x87_r6_15 = 1f;
                            }
                            else
                                x87_r6_15 = 0f;

                            *arg_14 = x87_r6_15;
                            long double f7_1 = 0.01;
                            x87_r6_15 - f7_1;

                            if (!(*(&((x87_r6_15 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_15, f7_1) ? 1 : 0) << 0xa
                                | (x87_r6_15 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            {
                                int32_t valA47 = arg_48;
                                valA47 |= 2;
                                arg_48 = valA47;
                            }

                            long double f8_1 = 0.98999999999999999;
                            x87_r6_15 - f8_1;

                            if (*(&((x87_r6_15 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_15, f8_1) ? 1 : 0) << 0xa
                                | (x87_r6_15 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            {
                                int32_t valA48 = arg_48;
                                valA48 |= 1;
                                arg_48 = valA48;
                            }

                            long double x87_r6_18 = 1f - x87_r6_15;
                            long double x87_r5_17 = x87_r6_18 * 255f;
                            int32_t arg_3c = x87_r5_17;
                            int32_t dstD2 = arg_3c | (arg_3c << 8 | arg_3c) << 8;
                            arg_3c = x87_r5_17 * x87_r6_18;
                            long double x87_r6_20 = arg_10;
                            long double x87_r5_20 = x87_r6_18 * tmpD28 + valA43 + arg_6c;
                            int32_t valA50 = arg_3c | (arg_3c << 8 | arg_3c) << 8;
                            float arg_88 = x87_r5_20 * a2 + x87_r6_20 * a1 + x87_r7_28 * arg_cc;
                            float arg_8c = x87_r5_20 * a5 + x87_r6_20 * a4 + x87_r7_28 * a3;
                            long double x87_r7_30 =
                                x87_r5_20 * a8 + x87_r6_20 * a7 + x87_r7_28 * a6;
                            float arg_90 = x87_r7_30;
                            long double f9_1 = g_bcadc0;
                            x87_r7_30 - f9_1;

                            if (*(&((x87_r7_30 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_30, f9_1) ? 1 : 0) << 0xa
                                | (x87_r7_30 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                int32_t* valA57 = srcS2;
                                arg_18 = 1;
                                *valA57 = arg_88;
                                valA57[1] = arg_8c;
                                valA57[2] = arg_90;
                                *(&v_10 + arg_30 + srcS2 + 0x50c) = 0;
                                *(&v_10 + arg_30 + srcS2 + 0x514) = 0xff000000;
                                *arg_8 = 0x10;
                            }
                            else
                            {
                                long double x87_r7_32 = 1f / arg_90;
                                arg_c = x87_r7_32;
                                long double x87_r7_35 =
                                    x87_r7_32 * arg_88 * g_c311a4 + g_c311b0;
                                long double x87_r6_28 = arg_c * arg_8c * g_c311a0 + g_c311b4;
                                arg_10 = x87_r6_28;
                                *srcS2 = x87_r7_35;
                                (*srcS2)[1] = x87_r6_28;
                                *(&v_10 + ctxB1 + srcS2 + 0x50c) = arg_c * g_bcad70;
                                *(&v_10 + ctxB1 + srcS2 + 0x508) =
                                    arg_c * g_a7f894 + g_a7e074;
                                long double x87_r5_33 = arg_90 * g_bcabec * g_a7da18
                                    * (1.4426950407214463 + 1.675171316223821e-10);
                                long double x87_r4_16 = roundl(x87_r5_33);
                                long double fp0_1;
                                bool c1_3;
                                fp0_1 = __f2xm1(x87_r5_33 - x87_r4_16);
                                long double fp0_2;
                                bool c1_4;
                                fp0_2 = __fscale(fp0_1 + 1, x87_r4_16);
                                long double x87_r5_36 = 1f / fp0_2;
                                long double f10_1 = 0f;
                                x87_r5_36 - f10_1;

                                if (*(&((x87_r5_36 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_36, f10_1) ? 1 : 0) << 0xa
                                        | (x87_r5_36 == f10_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                    x87_r5_36 = 0f;

                                arg_24 = 1;
                                *(&v_10 + ctxB1 + srcS2 + 0x514) = (x87_r5_36 * 255f) << 0x18;
                                long double f11_1 = valA;
                                x87_r7_35 - f11_1;

                                if (!(*(&((x87_r7_35 < f11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_35, f11_1) ? 1 : 0) << 0xa
                                        | (x87_r7_35 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                    arg_24 = 0;

                                long double f12_1 = objC;
                                x87_r6_28 - f12_1;
                                arg_c = 1;

                                if (!(*(&((x87_r6_28 < f12_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_28, f12_1) ? 1 : 0) << 0xa
                                        | (x87_r6_28 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    arg_c = nullptr;

                                long double f14_1 = tmpD;
                                x87_r7_35 - f14_1;
                                char ctxB4;

                                ctxB4 = *(&((x87_r7_35 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_35, f14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_35 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                long double x87_r7_36 = arg_10;
                                long double f17_1 = valA1;
                                x87_r7_36 - f17_1;
                                char valA55;

                                valA55 = *(&((x87_r7_36 < f17_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_36, f17_1) ? 1 : 0) << 0xa
                                    | (x87_r7_36 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                *arg_8 = ((valA55 << 1 | ctxB4) << 1 | arg_c) << 1 | arg_24;
                            }

                            *(objC30 + 0x10) = dstD2;
                            *(objC30 + 0x14) = 0xffffff - dstD2;
                            objC30 += 0x20;
                            void* ctxB10 = arg_30 + srcS2;
                            *(objC30 - 0x24) = 0;
                            srcS2 = &(*srcS2)[8];
                            *(&arg_cf0 + ctxB10) = 0;
                            int32_t valA64 = dstD2 - valA50;
                            void* tmpD38 = arg_4;
                            *(objC30 - 0x20) = valA64;
                            *(objC30 - 0x1c) = 0xffffff - dstD2 * 2 + valA50;
                            *(objC30 - 0x18) = valA50;
                            arg_14 += 4;
                            *(objC30 - 0x14) = valA64;
                            ctxB17 = &(*arg_8)[1];
                            tmpD39 = tmpD38 + 1;
                            *__return_addr = 1;
                            __return_addr_1 = __return_addr + 1;
                            arg_8 = ctxB17;
                            arg_4 = tmpD39;
                            __return_addr = __return_addr_1;

                            if (tmpD39 >= objC27)
                                break;

                            ctxB1 = arg_30;
                        }

                        if (tmpD39 != valA40)
                        {
                            do
                            {
                                float valA66 = flagP3[2];
                                long double x87_r7_37 = *flagP3;
                                int32_t valA67 = flagP3[3];
                                float arg_a4 = flagP3[1];
                                float* objC32 = arg_28;
                                arg_14 = arg_3f0[valA67];
                                flagP3 = &flagP3[4];
                                long double x87_r7_38 =
                                    x87_r7_37 + (objC32[valA67 * 4] - x87_r7_37) * arg_14;
                                arg_a4 = (objC32[valA67 * 4 + 1] - arg_a4) * arg_14 + arg_a4;
                                long double x87_r7_39 = x87_r7_38 + arg_64;
                                long double x87_r6_42 = arg_a4 + arg_68;
                                long double x87_r5_41 =
                                    (objC32[valA67 * 4 + 2] - valA66) * arg_14 + valA66 + arg_6c;
                                float arg_94 =
                                    x87_r5_41 * a2 + x87_r6_42 * a1 + x87_r7_39 * arg_cc;
                                float arg_98 =
                                    x87_r5_41 * a5 + x87_r6_42 * a4 + x87_r7_39 * a3;
                                long double x87_r7_41 =
                                    x87_r5_41 * a8 + x87_r6_42 * a7 + x87_r7_39 * a6;
                                float arg_9c = x87_r7_41;
                                long double f13_1 = g_bcadc0;
                                x87_r7_41 - f13_1;

                                if (*(&((x87_r7_41 < f13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_41, f13_1) ? 1 : 0) << 0xa
                                    | (x87_r7_41 == f13_1 ? 1 : 0) << 0xe) + 1) & 1)
                                {
                                    float* valA74 = srcS2;
                                    (*srcS2)[3] = 0;
                                    (*srcS2)[5] = 0xff000000;
                                    *valA74 = arg_94;
                                    *ctxB17 = 0x10;
                                    arg_18 = 1;
                                    valA74[1] = arg_98;
                                    valA74[2] = arg_9c;
                                }
                                else
                                {
                                    long double x87_r7_43 = 1f / arg_9c;
                                    arg_8 = x87_r7_43;
                                    long double x87_r7_46 =
                                        x87_r7_43 * arg_94 * g_c311a4 + g_c311b0;
                                    long double x87_r6_50 =
                                        arg_8 * arg_98 * g_c311a0 + g_c311b4;
                                    arg_10 = x87_r6_50;
                                    *srcS2 = x87_r7_46;
                                    (*srcS2)[1] = x87_r6_50;
                                    (*srcS2)[3] = arg_8 * g_bcad70;
                                    (*srcS2)[2] = arg_8 * g_a7f894 + g_a7e074;
                                    long double x87_r5_54 = arg_9c * g_bcabec * g_a7da18
                                        * (1.4426950407214463 + 1.675171316223821e-10);
                                    long double x87_r4_32 = roundl(x87_r5_54);
                                    long double fp0_3;
                                    bool c1_5;
                                    fp0_3 = __f2xm1(x87_r5_54 - x87_r4_32);
                                    long double fp0_4;
                                    bool c1_6;
                                    fp0_4 = __fscale(fp0_3 + 1, x87_r4_32);
                                    long double x87_r5_57 = 1f / fp0_4;
                                    long double f15_1 = 0f;
                                    x87_r5_57 - f15_1;

                                    if (*(&((x87_r5_57 < f15_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_57, f15_1) ? 1 : 0) << 0xa
                                            | (x87_r5_57 == f15_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                        x87_r5_57 = 0f;

                                    arg_14 = 1.40129846e-45f;
                                    (*srcS2)[5] = (x87_r5_57 * 255f) << 0x18;
                                    long double f16_1 = valA;
                                    x87_r7_46 - f16_1;

                                    if (!(*(&((x87_r7_46 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_46, f16_1) ? 1 : 0) << 0xa
                                            | (x87_r7_46 == f16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                        arg_14 = 0f;

                                    long double f18_1 = objC;
                                    x87_r6_50 - f18_1;
                                    arg_24 = 1;

                                    if (!(*(&((x87_r6_50 < f18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_50, f18_1) ? 1 : 0) << 0xa
                                            | (x87_r6_50 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                        arg_24 = 0;

                                    long double f19_1 = tmpD;
                                    x87_r7_46 - f19_1;
                                    char objC35;

                                    objC35 = *(&((x87_r7_46 < f19_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_46, f19_1) ? 1 : 0) << 0xa
                                        | (x87_r7_46 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                    long double x87_r7_47 = arg_10;
                                    long double f21_1 = valA1;
                                    x87_r7_47 - f21_1;
                                    char valA72;

                                    valA72 = *(&((x87_r7_47 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_47, f21_1) ? 1 : 0) << 0xa
                                        | (x87_r7_47 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                    *ctxB17 = ((valA72 << 1 | objC35) << 1 | arg_24) << 1 | arg_14;
                                }

                                srcS2 = &(*srcS2)[8];
                                ctxB17 = &ctxB17[1];
                                tmpD39 += 1;
                                *__return_addr_1 = 1;
                                __return_addr_1 = &__return_addr_1[1];
                                arg_4 = tmpD39;
                            } while (tmpD39 < valA40);
                        }

                        int32_t* flagP4 = &flagP3[4];
                        int32_t valA78 = *flagP3 >> 2 & 1;
                        g_a7e06c = valA78;
                        int32_t tmpD40 = flagP4[-3];
                        int32_t objC40 = flagP4[-2];
                        int32_t objC41 = flagP4[-1];
                        void arg_230;

                        if (arg_18)
                        {
                            if (objC41 > 0)
                                __builtin_memset(
                                    __builtin_memset(&arg_230, 0x10101010, objC41 & 0xfffffffc),
                                    0x10, objC41 & 3);

                            arg_4 = nullptr;

                            if (valA40 > 0)
                            {
                                arg_4 = valA40;
                                __builtin_memset(
                                    __builtin_memset(&arg_198, 0, valA40 & 0xfffffffc), 0,
                                    valA40 & 3);
                            }

                            goto label_513b59;
                        }

                        long double x87_r7_48 = 0f;
                        char* srcS3 = nullptr;
                        __return_addr = &arg_230;
                        char* dstD6 = nullptr;
                        char objC43 = 0;
                        char ctxB18 = 0;
                        arg_28 = nullptr;
                        arg_24 = tmpD40;
                        arg_8 = nullptr;
                        arg_18 = 0xffffffff;
                        float arg_54 = 0f;
                        float arg_58 = 0f;
                        float arg_5c = 0f;
                        float arg_80 = 1f;

                        if (valA78)
                            arg_80 = -1f;

                        float arg_4c = arg_80;
                        int32_t arg_44;

                        while (true)
                        {
                            arg_c = dstD6;
                            arg_14 = x87_r7_48;
                            void* valA79 = *arg_24;
                            arg_24 += 4;
                            float arg_b4 = arg_54;
                            x87_r7_48 = arg_58;
                            arg_54 = arg_5c;
                            char tmpD48 = ctxB18;
                            ctxB18 = objC43;
                            dstD6 = srcS3;
                            arg_4f4;

                            if (!arg_8)
                            {
                                int32_t tmpD49 = 0;
                                tmpD49 = *(&valA79 + 2);
                                arg_c = &v_10 + tmpD49 + 0x1a8;
                                tmpD48 = arg_1f0[tmpD49];
                                arg_14 = arg_4f0[tmpD49 * 8];
                                int32_t objC48 = 0;
                                arg_b4 = *(&arg_4f4 + (tmpD49 << 5));
                                objC48 = *(&valA79 + 1);
                                ctxB18 = arg_1f0[objC48];
                                dstD6 = &v_10 + objC48 + 0x1a8;
                                x87_r7_48 = arg_4f0[objC48 * 8];
                                arg_54 = *(&arg_4f4 + (objC48 << 5));
                            }

                            void* valA80 = valA79 & 0xff;
                            arg_44 = 1;
                            arg_4 = valA80;
                            srcS3 = &v_10 + valA80 + 0x1a8;
                            char valA81 = *(&arg_1f0 + valA80);
                            arg_58 = arg_4f0[valA80 * 8];
                            arg_5c = *(&arg_4f4 + (valA80 << 5));
                            int16_t valA84;
                            valA84 = valA81;
                            int32_t objC55 = tmpD48 | ctxB18 | valA81 | 0x20;

                            if (!(valA84 & tmpD48 & ctxB18))
                            {
                                long double x87_r6_58 = ((x87_r7_48 - arg_58) * (arg_b4 - arg_5c)
                                    - (arg_14 - arg_58) * (arg_54 - arg_5c)) * arg_4c;
                                long double f20_1 = -0.00100000005f;
                                x87_r6_58 - f20_1;
                                valA84 = (x87_r6_58 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_58, f20_1) ? 1 : 0) << 0xa
                                    | (x87_r6_58 == f20_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&valA84 + 1) & 1)
                                {
                                    char* tmpD50 = arg_c;
                                    *srcS3 = 0;
                                    *dstD6 = 0;
                                    objC55 ^= 0x20;
                                    *tmpD50 = 0;
                                    arg_44 = 0;
                                }
                            }

                            *__return_addr = objC55;
                            __return_addr += 1;
                            arg_4c = arg_4c * -1f;
                            arg_18 &= arg_44;
                            arg_8 = &(*arg_8)[1];

                            if (valA79 & 0x10000000)
                            {
                                arg_8 = nullptr;
                                arg_4c = arg_80;
                            }

                            bool cond_13_1 = arg_28 + 1 < objC41;
                            arg_28 += 1;

                            if (!cond_13_1)
                                break;

                            objC43 = valA81;
                        }

                        if (!arg_18)
                        {
                        label_513b59:
                            arg_28 = nullptr;
                            arg_10 = 0;
                            void v_d4;
                            void v_94;
                            void v_54;
                            int32_t arg_78;
                            bool cond_8_1;

                            do
                            {
                                float i = 1.40129846e-45f;
                                i_2 = 1.40129846e-45f;

                                do
                                {
                                    if (!(arg_48 & i))
                                        flagP4 = valA40 * 0x14 - (objC27 << 3) + flagP4 + 4;
                                    else
                                    {
                                        void* objC67 = *flagP4;
                                        int32_t tmpD55 = g_a7f89c;
                                        int32_t objC68 = g_a7e078;
                                        flagP4 = &flagP4[1];
                                        __return_addr = &arg_198;
                                        void* objC69 = nullptr;
                                        int32_t (* valA94)[0x200] = &arg_4f0;
                                        arg_4 = nullptr;

                                        do
                                        {
                                            bool cond_12_1 = *__return_addr;
                                            __return_addr += 1;

                                            if (!cond_12_1)
                                            {
                                                (*valA94)[4] = *(&arg_cf0 + *flagP4);
                                                (*valA94)[6] = flagP4[1];
                                                (*valA94)[7] = flagP4[2];
                                                memcpy(tmpD55, valA94, 0x20);
                                                objC69 = arg_4;
                                            }

                                            flagP4 = &flagP4[3];
                                            tmpD55 += 0x20;
                                            valA94 = &(*valA94)[8];
                                            objC69 += 1;
                                            arg_4 = objC69;
                                        } while (objC69 < objC27);

                                        if (objC69 != valA40)
                                        {
                                            do
                                            {
                                                bool cond_14_1 = *__return_addr;
                                                __return_addr += 1;

                                                if (!cond_14_1)
                                                {
                                                    int32_t objC75 = *flagP4;
                                                    long double x87_r7_53 = arg_3f0[objC75 >> 0x10];
                                                    long double x87_r6_62 = flagP4[3] * x87_r7_53;
                                                    (*valA94)[4] = *(&arg_cf0 + (objC75 & 0xffff));
                                                    (*valA94)[6] = x87_r6_62 + flagP4[1];
                                                    (*valA94)[7] = flagP4[4] * x87_r7_53 + flagP4[2];
                                                    memcpy(tmpD55, valA94, 0x20);
                                                    objC69 = arg_4;
                                                }

                                                flagP4 = &flagP4[5];
                                                tmpD55 += 0x20;
                                                valA94 = &(*valA94)[8];
                                                objC69 += 1;
                                                arg_4 = objC69;
                                            } while (objC69 < valA40);
                                        }

                                        char (* dstD15)[0x40];

                                        if (arg_28)
                                        {
                                            dstD15 = Terrain_OutOfTerrainRenderch(objC67, 1);
                                            arg_8 = dstD15;
                                        }
                                        else
                                        {
                                            dstD15 = Terrain_OutOfTerrainRenderch(objC67, 0);
                                            arg_8 = dstD15;
                                            arg_28 = 1;
                                        }

                                        void* objC78 = g_a7f89c;
                                        int32_t srcS16 = objC68 * 0x10001;
                                        arg_20 = &arg_230;
                                        int32_t tmpD57 = tmpD40;
                                        arg_18 = tmpD57;
                                        arg_78 = srcS16;
                                        int32_t* valA102 = &(*dstD15)[*(dstD15 + 0x2ee8) * 6 + 8];
                                        int32_t arg_7c = tmpD57 + (objC41 << 2);
                                        arg_14 = valA102;

                                        do
                                        {
                                            char objC81 = *arg_20;
                                            arg_20 += 1;

                                            if (!objC81)
                                            {
                                                int32_t objC82 = *tmpD57;
                                                *valA102 = (objC82 & 0xff00ff) + srcS16;
                                                int16_t ctxB24 = 0;
                                                ctxB24 = *(&objC82 + 1);
                                                valA102[1] = ctxB24 + srcS16;
                                                valA102 += 6;
                                            }
                                            else if (!(objC81 & 0x20))
                                            {
                                                int32_t arg_f4;
                                                int32_t* ctxB27 = &arg_f4;
                                                int32_t objC83 = *arg_18;
                                                arg_44 = 3;
                                                arg_c = (valA102 - arg_14) / 6;
                                                int16_t valA107 = 0;
                                                valA107 = *(&objC83 + 1);
                                                arg_f4 = objC83 & 0xff00ff;
                                                int16_t arg_f8 = valA107;
                                                void arg_350;
                                                char* valA108 = &arg_350;
                                                bool cond_25_1;

                                                do
                                                {
                                                    int32_t tmpD64 = 0;
                                                    tmpD64 = *ctxB27;
                                                    char tmpD65 = arg_1f0[tmpD64];
                                                    memcpy(&valA108[0xffffffe0],
                                                        &(&v_10)[tmpD64 * 8 + 0x140], 0x20);
                                                    *valA108 = tmpD65;

                                                    if (!(tmpD65 & 0x10))
                                                    {
                                                        long double x87_r7_56 =
                                                            g_bcabec * *(valA108 - 0x14);
                                                        int32_t arg_12c = 0;
                                                        int32_t arg_13c = 0;
                                                        int32_t arg_154 = 0;
                                                        int32_t arg_144 = 0;
                                                        *(valA108 - 0x18) = x87_r7_56;
                                                        *(valA108 + 8) =
                                                            (*(valA108 - 0x10) >> 0x10) * x87_r7_56;
                                                        *(valA108 + 0xc) = (*(valA108 - 0x10) >> 8)
                                                            * *(valA108 - 0x18);
                                                        *(valA108 + 0x10) =
                                                            *(valA108 - 0x10) * *(valA108 - 0x18);
                                                        *(valA108 + 0x14) =
                                                            *(valA108 - 8) * *(valA108 - 0x18);
                                                        *(valA108 + 0x18) =
                                                            *(valA108 - 4) * *(valA108 - 0x18);
                                                        *(valA108 + 0x1c) = (*(valA108 - 0xc)
                                                            >> 0x18) * *(valA108 - 0x18);
                                                    }

                                                    ctxB27 += 2;
                                                    valA108 = &valA108[0x40];
                                                    cond_25_1 = arg_44 != 1;
                                                    arg_44 -= 1;
                                                } while (cond_25_1);
                                                void** arg_15c = &arg_4;
                                                void* const arg_158;
                                                void* const* v_14_3 = &arg_158;
                                                void arg_3b0;
                                                memcpy(&v_54, &arg_3b0, 0x40);
                                                void arg_370;
                                                memcpy(&v_94, &arg_370, 0x40);
                                                arg_158 = objC78;
                                                float arg_160 = arg_14;
                                                void arg_330;
                                                memcpy(&v_d4, &arg_330, 0x40);
                                                char** arg_164 = &arg_c;
                                                int32_t arg_168 = objC68;
                                                Terrain_BuildMipMaps_2();
                                                srcS16 = arg_78;
                                                dstD15 = arg_8;
                                                valA102 = arg_14 + arg_c * 6;
                                                tmpD57 = arg_18;
                                            }

                                            tmpD57 += 4;
                                            arg_18 = tmpD57;
                                        } while (tmpD57 < arg_7c);

                                        *(dstD15 + 0x2ee8) += (valA102 - arg_14) / 6;
                                        void* valA116 = arg_4;
                                        void* objC92 = g_a7e078 + valA116;
                                        g_a7f89c += valA116 << 5;
                                        g_a7e078 = objC92;
                                        i = i_2;
                                    }

                                    i += 1;
                                    i_2 = i;
                                } while (i < 3);

                                cond_8_1 = arg_10 + 1 < objC40;
                                arg_10 += 1;
                            } while (cond_8_1);
                            int32_t valA124 = *flagP4;
                            int32_t* flagP5 = &flagP4[1];

                            if (valA124)
                            {
                                float objC94 = g_a7e078;
                                int32_t tmpD83 = g_a7f89c;
                                __return_addr = &arg_198;
                                void* objC95 = nullptr;
                                int32_t (* valA125)[0x200] = &arg_4f0;
                                arg_4 = nullptr;

                                do
                                {
                                    bool cond_19_1 = *__return_addr;
                                    __return_addr += 1;

                                    if (!cond_19_1)
                                    {
                                        (*valA125)[6] = flagP5[1];
                                        (*valA125)[7] = flagP5[2];
                                        (*valA125)[4] = 0xffffff;
                                        memcpy(tmpD83, valA125, 0x20);
                                        objC95 = arg_4;
                                    }

                                    flagP5 = &flagP5[3];
                                    tmpD83 += 0x20;
                                    valA125 = &(*valA125)[8];
                                    objC95 += 1;
                                    arg_4 = objC95;
                                } while (objC95 < objC27);

                                if (objC95 != valA40)
                                {
                                    do
                                    {
                                        bool cond_20_1 = *__return_addr;
                                        __return_addr += 1;

                                        if (!cond_20_1)
                                        {
                                            int32_t objC99 = *flagP5 >> 0x10;
                                            (*valA125)[4] = 0xffffff;
                                            long double x87_r7_68 = arg_3f0[objC99];
                                            (*valA125)[6] = flagP5[3] * x87_r7_68 + flagP5[1];
                                            (*valA125)[7] = flagP5[4] * x87_r7_68 + flagP5[2];
                                            memcpy(tmpD83, valA125, 0x20);
                                            objC95 = arg_4;
                                        }

                                        flagP5 = &flagP5[5];
                                        tmpD83 += 0x20;
                                        valA125 = &(*valA125)[8];
                                        objC95 += 1;
                                        arg_4 = objC95;
                                    } while (objC95 < valA40);
                                }

                                int32_t* valA126 = Terrain_OutOfTerrainRenderch(valA124, 2);
                                int32_t valA127 = g_a7f89c;
                                int32_t dstD23 = tmpD40;
                                void* srcS26 = objC94 * 0x10001;
                                int32_t valA129 = valA126[0xbba];
                                arg_8 = valA126;
                                int32_t tmpD85 = &arg_230;
                                arg_18 = dstD23;
                                arg_20 = srcS26;
                                void** valA130 = valA126 + valA129 * 6 + 8;
                                arg_78 = dstD23 + (objC41 << 2);

                                while (true)
                                {
                                    char objC103 = *tmpD85;

                                    if (!objC103)
