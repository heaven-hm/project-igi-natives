#include "00512C30-Terrain_Draw.h"
/* 0x00512c30 Terrain_Draw full linked: callers=1 callees=30 */
❓  int32_t __stdcall sub_512c30(float a1 @ 0xd0, float a2, float a3, float a4, float a5, float a6, float a7, float a8, double a9 @ 0x188, double a10, double a11 @ 0x1e0, double a12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    sub_4a54a0(0x14f0);
    float eax = g_bcabd0;
    float ecx = g_bcabd4;
    float edx = g_bcabd8;
    float eax_1 = g_bcabdc;
    void* ecx_1 = g_bcade8;
    int32_t ebx;
    int32_t var_4 = ebx;
    int32_t ebp;
    int32_t var_8 = ebp;
    int32_t esi;
    int32_t var_c = esi;
    int32_t* edi;
    int32_t* var_10 = edi;
    long double x87_r7_3 = 1f / (1f - g_bcada0 / g_bcadc8);
    long double x87_r6_1 = g_bcad8c - g_bcadb4;
    g_a7f894 = -((x87_r6_1 * g_bcad70 * g_bcada0 * x87_r7_3));
    g_a7e074 = x87_r6_1 * x87_r7_3 + g_bcadb4;
    *(ecx_1 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    g_a7f860 = 0;
    g_a7f864 = 0;
    g_a7f868 = g_c28b44;
    long double x87_r7_6 = g_a7da30 * -255f;
    int32_t edx_3 = g_bcadb4;
    g_a7f86c = g_c28b48;
    int32_t eax_3 = g_bcad8c;
    g_a7f870 = edx_3;
    g_a7f874 = eax_3;
    int64_t arg_70 = g_a7da38 * 255f;
    g_a7e068 = arg_70 - (((x87_r7_6 << 8) + (g_a7da34 * -255f)) << 8);
    int32_t arg_198;
    __builtin_memset(&arg_198, 0, 0x40);
    int32_t* eax_6 = g_5ca114;
    arg_198 = 0x3f800000;
    int32_t arg_1ac = 0x3f800000;
    int32_t arg_1c0 = 0x3f800000;
    int32_t arg_1d4 = 0x3f800000;
    (*(*eax_6 + 0x2c))(eax_6, 1, &arg_198);
    int32_t* eax_7 = g_5ca114;
    (*(*eax_7 + 0x34))(eax_7, &g_a7f860);
    int32_t* eax_8 = g_5ca114;
    (*(*eax_8 + 0x50))(eax_8, 0x88, 1);
    int32_t* eax_9 = g_5ca114;
    (*(*eax_9 + 0x50))(eax_9, 0x26, g_a7da18);
    int32_t* eax_10 = g_5ca114;
    (*(*eax_10 + 0x50))(eax_10, 0x23, 0);
    int32_t* eax_11 = g_5ca114;
    (*(*eax_11 + 0x50))(eax_11, 0x8c, 3);
    int32_t* eax_12 = g_5ca114;
    (*(*eax_12 + 0x50))(eax_12, 0x30, 1);
    int32_t* eax_13 = g_5ca114;
    void* arg_20 = 0x46ea6000;
    (*(*eax_13 + 0x50))(eax_13, 0x24, 0x461c4000);
    int32_t* eax_14 = g_5ca114;
    (*(*eax_14 + 0x50))(eax_14, 0x25, arg_20);
    int32_t* eax_15 = g_5ca114;
    (*(*eax_15 + 0x50))(eax_15, 0x2f, 0);
    int32_t* eax_16 = g_5ca114;
    (*(*eax_16 + 0x50))(eax_16, 0x1b, 0);
    int32_t* eax_17 = g_5ca114;
    (*(*eax_17 + 0x50))(eax_17, 0x16, 1);
    int32_t* eax_18 = g_5ca114;
    (*(*eax_18 + 0x50))(eax_18, 0x89, 0);
    int32_t* eax_19 = g_5ca114;
    (*(*eax_19 + 0x50))(eax_19, 0x8d, 1);
    int32_t* eax_20 = g_5ca114;
    (*(*eax_20 + 0x50))(eax_20, 0x1a, 1);
    int32_t* eax_21 = g_5ca114;
    (*(*eax_21 + 0x50))(eax_21, 0xf, 0);
    int32_t* eax_22 = g_5ca114;
    (*(*eax_22 + 0x50))(eax_22, 7, g_bcad78);
    int32_t* eax_23 = g_5ca114;
    (*(*eax_23 + 0x50))(eax_23, 0xe, 1);
    int32_t* eax_24 = g_5ca114;
    (*(*eax_24 + 0x50))(eax_24, 0x1d, 0);
    int32_t* eax_25 = g_5ca114;
    int32_t var_4_19 = 2;
    int32_t var_8_19 = 0x11;
    int32_t var_c_18 = 0;
    int32_t ecx_19 = *eax_25;
    var_10 = eax_25;
    (*(ecx_19 + 0x94))(var_10, var_c_18, var_8_19, var_4_19);
    int32_t* eax_26 = g_5ca114;
    int32_t var_4_20 = 2;
    int32_t var_8_20 = 0x10;
    int32_t var_c_19 = 0;
    int32_t edx_16 = *eax_26;
    var_10 = eax_26;
    (*(edx_16 + 0x94))(var_10, var_c_19, var_8_20, var_4_20);
    int32_t* eax_27 = g_5ca114;
    int32_t var_4_21 = 3;
    int32_t var_8_21 = 0xc;
    int32_t var_c_20 = 0;
    int32_t ecx_20 = *eax_27;
    var_10 = eax_27;
    (*(ecx_20 + 0x94))(var_10, var_c_20, var_8_21, var_4_21);
    int32_t* eax_28 = g_5ca114;
    int32_t var_4_22 = 2;
    int32_t var_8_22 = 0x12;
    int32_t var_c_21 = 0;
    int32_t edx_17 = *eax_28;
    var_10 = eax_28;
    (*(edx_17 + 0x94))(var_10, var_c_21, var_8_22, var_4_22);
    int32_t* eax_29 = g_5ca114;
    int32_t var_4_23 = 0;
    int32_t var_8_23 = 0xb;
    int32_t var_c_22 = 0;
    int32_t ecx_21 = *eax_29;
    var_10 = eax_29;
    (*(ecx_21 + 0x94))(var_10, var_c_22, var_8_23, var_4_23);
    int32_t* eax_30 = g_5ca114;
    int32_t var_4_24 = 1;
    int32_t var_8_24 = 4;
    int32_t var_c_23 = 0;
    int32_t edx_18 = *eax_30;
    var_10 = eax_30;
    (*(edx_18 + 0x94))(var_10, var_c_23, var_8_24, var_4_24);
    int32_t* eax_31 = g_5ca114;
    int32_t var_4_25 = 4;
    int32_t ecx_22 = *eax_31;
    int32_t var_8_25 = 1;
    int32_t var_c_24 = 0;
    var_10 = eax_31;
    (*(ecx_22 + 0x94))(var_10, var_c_24, var_8_25, var_4_25);
    int32_t* eax_32 = g_5ca114;
    int32_t var_4_26 = 2;
    int32_t var_8_26 = 2;
    int32_t var_c_25 = 0;
    int32_t edx_19 = *eax_32;
    var_10 = eax_32;
    (*(edx_19 + 0x94))(var_10, var_c_25, var_8_26, var_4_26);
    int32_t* eax_33 = g_5ca114;
    int32_t var_4_27 = 0;
    int32_t var_8_27 = 3;
    int32_t var_c_26 = 0;
    int32_t ecx_23 = *eax_33;
    var_10 = eax_33;
    (*(ecx_23 + 0x94))(var_10, var_c_26, var_8_27, var_4_27);
    int32_t* eax_34 = g_5ca114;
    int32_t var_4_28 = 1;
    int32_t var_8_28 = 1;
    int32_t var_c_27 = 1;
    int32_t edx_20 = *eax_34;
    var_10 = eax_34;
    (*(edx_20 + 0x94))(var_10, var_c_27, var_8_28, var_4_28);
    int32_t* eax_35 = g_a7f890;
    int32_t var_4_29 = 0;
    g_a7e078 = 0;
    int32_t* var_8_29 = &g_a7f89c;
    int32_t ecx_24 = *eax_35;
    int32_t var_c_28 = 0x2020;
    var_10 = eax_35;
    int32_t result = (*(ecx_24 + 0xc))(var_10, var_c_28, var_8_29, var_4_29);

    if (!result)
    {
        int32_t eax_36 = g_b16c9c;
        int32_t edx_22 = g_c28fbc + eax_36;
        float arg_10c = g_c31088;
        double arg_180;
        memcpy(&arg_180, &g_bcab08, 0x18);
        g_c28fbc = edx_22;
        float edx_23 = g_c28fc0;
        g_c28fb8 = 0;
        int32_t* arg_84 = &g_b12c60;
        float arg_cc;
        memcpy(&arg_cc, &g_bcaae0, 0x28);
        int32_t arg_50 = 0;

        if (eax_36 > 0)
        {
            float arg_fc = arg_180;
            float arg_104 = a9;
            float arg_11c = a10;
            bool cond:2_1;

            do
            {
                void* eax_38 = *arg_84;
                double arg_1d8;
                memcpy(&arg_1d8, eax_38, 0x18);
                float arg_64 = -(arg_fc);
                float arg_68 = -(arg_104);
                float arg_6c = -(arg_11c);

                if (eax_38)
                {
                    __return_addr = &arg_198;
                    int32_t eax_39 = *(eax_38 + 0x18);
                    char arg_1f0[0x40];
                    char (* arg_8)[0x40] = &arg_1f0;
                    void* eax_40 = eax_39 & 0xffff;
                    int32_t ecx_27 = eax_39 >> 0x10;
                    char eax_41 = *(eax_38 + 0x1c);
                    float* ebp_3 = eax_38 + 0x20;
                    int32_t arg_4f0[0x200];
                    int32_t (* esi_2)[0x200] = &arg_4f0;
                    float i_2 = 0.375f / (1 << ((0x19 - eax_41) & 0x1f));
                    long double x87_r6_9 = (0x40000000 >> (eax_41 & 0x1f)) * 1.73000002f
                        + a8 * (a12 - a10) + a7 * (a11 - a9)
                        + a6 * (arg_1d8 - arg_180);
                    long double temp1_1 = g_bcadcc;
                    x87_r6_9 - temp1_1;

                    if (*(&((x87_r6_9 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t arg_48 = 0;
                        void* arg_4 = nullptr;
                        int32_t arg_18 = 0;
                        int32_t ebx_1 = -(&arg_4f0);
                        float* arg_28 = ebp_3;
                        void arg_cf8;
                        void* ecx_30 = &arg_cf8;
                        int32_t arg_3f0[0x40];
                        float arg_14 = &arg_3f0;
                        int32_t arg_30 = ebx_1;
                        char* arg_c;
                        int32_t arg_10;
                        int32_t arg_24;
                        void arg_cf0;
                        void* edx_39;
                        char* ebx_17;
                        char* __return_addr_1;

                        while (true)
                        {
                            long double x87_r7_28 = *ebp_3 + arg_64;
                            float eax_43 = ebp_3[2];
                            float edx_27 = ebp_3[1];
                            float edx_28 = ebp_3[3];
                            ebp_3 = &ebp_3[4];
                            long double x87_r6_10 = x87_r7_28;
                            long double temp2_1 = 0f;
                            x87_r6_10 - temp2_1;

                            if (*(&((x87_r6_10 < temp2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_10, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r6_10 == temp2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                x87_r6_10 = -(x87_r6_10);

                            long double x87_r5_9 = edx_27 + arg_68;
                            long double temp3_1 = 0f;
                            x87_r5_9 - temp3_1;
                            arg_10 = x87_r5_9;
                            arg_c = x87_r5_9;
                            bool c1_1 = /* bool c1_1 = unknown  {fst dword [esp+0x1c], st0} */;

                            if (*(&((x87_r5_9 < temp3_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                                | (FCMP_UO(x87_r5_9, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r5_9 == temp3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                            {
                                x87_r5_9 = -(x87_r5_9);
                                arg_c = x87_r5_9;
                            }

                            x87_r5_9 - x87_r6_10;

                            if (!(*(&((x87_r5_9 < x87_r6_10 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_9, x87_r6_10) ? 1 : 0) << 0xa
                                    | (x87_r5_9 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                x87_r6_10 = arg_c;

                            long double x87_r5_11 = eax_43 + arg_6c;
                            long double temp4_1 = 0f;
                            x87_r5_11 - temp4_1;
                            arg_c = x87_r5_11;
                            bool c1_2 = /* bool c1_2 = unknown  {fst dword [esp+0x1c], st0} */;

                            if (*(&((x87_r5_11 < temp4_1 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                                | (FCMP_UO(x87_r5_11, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r5_11 == temp4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                            {
                                x87_r5_11 = -(x87_r5_11);
                                arg_c = x87_r5_11;
                            }

                            x87_r5_11 - x87_r6_10;

                            if (!(*(&((x87_r5_11 < x87_r6_10 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r5_11, x87_r6_10) ? 1 : 0) << 0xa
                                    | (x87_r5_11 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                x87_r6_10 = arg_c;

                            long double x87_r6_15 = (x87_r6_10 * i_2 - arg_10c) * edx_23;
                            long double temp5_1 = 0f;
                            x87_r6_15 - temp5_1;

                            if (!(*(&((x87_r6_15 < temp5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_15, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r6_15 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                                long double temp6_1 = 1f;
                                x87_r6_15 - temp6_1;

                                if (!(*(&((x87_r6_15 < temp6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_15, temp6_1) ? 1 : 0) << 0xa
                                        | (x87_r6_15 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                    x87_r6_15 = 1f;
                            }
                            else
                                x87_r6_15 = 0f;

                            *arg_14 = x87_r6_15;
                            long double temp7_1 = 0.01;
                            x87_r6_15 - temp7_1;

                            if (!(*(&((x87_r6_15 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_15, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r6_15 == temp7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            {
                                int32_t eax_47 = arg_48;
                                eax_47 |= 2;
                                arg_48 = eax_47;
                            }

                            long double temp8_1 = 0.98999999999999999;
                            x87_r6_15 - temp8_1;

                            if (*(&((x87_r6_15 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_15, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r6_15 == temp8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            {
                                int32_t eax_48 = arg_48;
                                eax_48 |= 1;
                                arg_48 = eax_48;
                            }

                            long double x87_r6_18 = 1f - x87_r6_15;
                            long double x87_r5_17 = x87_r6_18 * 255f;
                            int32_t arg_3c = x87_r5_17;
                            int32_t edi_2 = arg_3c | (arg_3c << 8 | arg_3c) << 8;
                            arg_3c = x87_r5_17 * x87_r6_18;
                            long double x87_r6_20 = arg_10;
                            long double x87_r5_20 = x87_r6_18 * edx_28 + eax_43 + arg_6c;
                            int32_t eax_50 = arg_3c | (arg_3c << 8 | arg_3c) << 8;
                            float arg_88 = x87_r5_20 * a2 + x87_r6_20 * a1 + x87_r7_28 * arg_cc;
                            float arg_8c = x87_r5_20 * a5 + x87_r6_20 * a4 + x87_r7_28 * a3;
                            long double x87_r7_30 =
                                x87_r5_20 * a8 + x87_r6_20 * a7 + x87_r7_28 * a6;
                            float arg_90 = x87_r7_30;
                            long double temp9_1 = g_bcadc0;
                            x87_r7_30 - temp9_1;

                            if (*(&((x87_r7_30 < temp9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_30, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r7_30 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                int32_t* eax_57 = esi_2;
                                arg_18 = 1;
                                *eax_57 = arg_88;
                                eax_57[1] = arg_8c;
                                eax_57[2] = arg_90;
                                *(&var_10 + arg_30 + esi_2 + 0x50c) = 0;
                                *(&var_10 + arg_30 + esi_2 + 0x514) = 0xff000000;
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
                                *esi_2 = x87_r7_35;
                                (*esi_2)[1] = x87_r6_28;
                                *(&var_10 + ebx_1 + esi_2 + 0x50c) = arg_c * g_bcad70;
                                *(&var_10 + ebx_1 + esi_2 + 0x508) =
                                    arg_c * g_a7f894 + g_a7e074;
                                long double x87_r5_33 = arg_90 * g_bcabec * g_a7da18
                                    * (1.4426950407214463 + 1.675171316223821e-10);
                                long double x87_r4_16 = roundl(x87_r5_33);
                                long double st0_1;
                                bool c1_3;
                                st0_1 = __f2xm1(x87_r5_33 - x87_r4_16);
                                long double st0_2;
                                bool c1_4;
                                st0_2 = __fscale(st0_1 + 1, x87_r4_16);
                                long double x87_r5_36 = 1f / st0_2;
                                long double temp10_1 = 0f;
                                x87_r5_36 - temp10_1;

                                if (*(&((x87_r5_36 < temp10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r5_36, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r5_36 == temp10_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                    x87_r5_36 = 0f;

                                arg_24 = 1;
                                *(&var_10 + ebx_1 + esi_2 + 0x514) = (x87_r5_36 * 255f) << 0x18;
                                long double temp11_1 = eax;
                                x87_r7_35 - temp11_1;

                                if (!(*(&((x87_r7_35 < temp11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_35, temp11_1) ? 1 : 0) << 0xa
                                        | (x87_r7_35 == temp11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                    arg_24 = 0;

                                long double temp12_1 = ecx;
                                x87_r6_28 - temp12_1;
                                arg_c = 1;

                                if (!(*(&((x87_r6_28 < temp12_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_28, temp12_1) ? 1 : 0) << 0xa
                                        | (x87_r6_28 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    arg_c = nullptr;

                                long double temp14_1 = edx;
                                x87_r7_35 - temp14_1;
                                char ebx_4;

                                ebx_4 = *(&((x87_r7_35 < temp14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_35, temp14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_35 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                long double x87_r7_36 = arg_10;
                                long double temp17_1 = eax_1;
                                x87_r7_36 - temp17_1;
                                char eax_55;

                                eax_55 = *(&((x87_r7_36 < temp17_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_36, temp17_1) ? 1 : 0) << 0xa
                                    | (x87_r7_36 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                *arg_8 = ((eax_55 << 1 | ebx_4) << 1 | arg_c) << 1 | arg_24;
                            }

                            *(ecx_30 + 0x10) = edi_2;
                            *(ecx_30 + 0x14) = 0xffffff - edi_2;
                            ecx_30 += 0x20;
                            void* ebx_10 = arg_30 + esi_2;
                            *(ecx_30 - 0x24) = 0;
                            esi_2 = &(*esi_2)[8];
                            *(&arg_cf0 + ebx_10) = 0;
                            int32_t eax_64 = edi_2 - eax_50;
                            void* edx_38 = arg_4;
                            *(ecx_30 - 0x20) = eax_64;
                            *(ecx_30 - 0x1c) = 0xffffff - edi_2 * 2 + eax_50;
                            *(ecx_30 - 0x18) = eax_50;
                            arg_14 += 4;
                            *(ecx_30 - 0x14) = eax_64;
                            ebx_17 = &(*arg_8)[1];
                            edx_39 = edx_38 + 1;
                            *__return_addr = 1;
                            __return_addr_1 = __return_addr + 1;
                            arg_8 = ebx_17;
                            arg_4 = edx_39;
                            __return_addr = __return_addr_1;

                            if (edx_39 >= ecx_27)
                                break;

                            ebx_1 = arg_30;
                        }

                        if (edx_39 != eax_40)
                        {
                            do
                            {
                                float eax_66 = ebp_3[2];
                                long double x87_r7_37 = *ebp_3;
                                int32_t eax_67 = ebp_3[3];
                                float arg_a4 = ebp_3[1];
                                float* ecx_32 = arg_28;
                                arg_14 = arg_3f0[eax_67];
                                ebp_3 = &ebp_3[4];
                                long double x87_r7_38 =
                                    x87_r7_37 + (ecx_32[eax_67 * 4] - x87_r7_37) * arg_14;
                                arg_a4 = (ecx_32[eax_67 * 4 + 1] - arg_a4) * arg_14 + arg_a4;
                                long double x87_r7_39 = x87_r7_38 + arg_64;
                                long double x87_r6_42 = arg_a4 + arg_68;
                                long double x87_r5_41 =
                                    (ecx_32[eax_67 * 4 + 2] - eax_66) * arg_14 + eax_66 + arg_6c;
                                float arg_94 =
                                    x87_r5_41 * a2 + x87_r6_42 * a1 + x87_r7_39 * arg_cc;
                                float arg_98 =
                                    x87_r5_41 * a5 + x87_r6_42 * a4 + x87_r7_39 * a3;
                                long double x87_r7_41 =
                                    x87_r5_41 * a8 + x87_r6_42 * a7 + x87_r7_39 * a6;
                                float arg_9c = x87_r7_41;
                                long double temp13_1 = g_bcadc0;
                                x87_r7_41 - temp13_1;

                                if (*(&((x87_r7_41 < temp13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_41, temp13_1) ? 1 : 0) << 0xa
                                    | (x87_r7_41 == temp13_1 ? 1 : 0) << 0xe) + 1) & 1)
                                {
                                    float* eax_74 = esi_2;
                                    (*esi_2)[3] = 0;
                                    (*esi_2)[5] = 0xff000000;
                                    *eax_74 = arg_94;
                                    *ebx_17 = 0x10;
                                    arg_18 = 1;
                                    eax_74[1] = arg_98;
                                    eax_74[2] = arg_9c;
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
                                    *esi_2 = x87_r7_46;
                                    (*esi_2)[1] = x87_r6_50;
                                    (*esi_2)[3] = arg_8 * g_bcad70;
                                    (*esi_2)[2] = arg_8 * g_a7f894 + g_a7e074;
                                    long double x87_r5_54 = arg_9c * g_bcabec * g_a7da18
                                        * (1.4426950407214463 + 1.675171316223821e-10);
                                    long double x87_r4_32 = roundl(x87_r5_54);
                                    long double st0_3;
                                    bool c1_5;
                                    st0_3 = __f2xm1(x87_r5_54 - x87_r4_32);
                                    long double st0_4;
                                    bool c1_6;
                                    st0_4 = __fscale(st0_3 + 1, x87_r4_32);
                                    long double x87_r5_57 = 1f / st0_4;
                                    long double temp15_1 = 0f;
                                    x87_r5_57 - temp15_1;

                                    if (*(&((x87_r5_57 < temp15_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r5_57, temp15_1) ? 1 : 0) << 0xa
                                            | (x87_r5_57 == temp15_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                        x87_r5_57 = 0f;

                                    arg_14 = 1.40129846e-45f;
                                    (*esi_2)[5] = (x87_r5_57 * 255f) << 0x18;
                                    long double temp16_1 = eax;
                                    x87_r7_46 - temp16_1;

                                    if (!(*(&((x87_r7_46 < temp16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_46, temp16_1) ? 1 : 0) << 0xa
                                            | (x87_r7_46 == temp16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                        arg_14 = 0f;

                                    long double temp18_1 = ecx;
                                    x87_r6_50 - temp18_1;
                                    arg_24 = 1;

                                    if (!(*(&((x87_r6_50 < temp18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_50, temp18_1) ? 1 : 0) << 0xa
                                            | (x87_r6_50 == temp18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                        arg_24 = 0;

                                    long double temp19_1 = edx;
                                    x87_r7_46 - temp19_1;
                                    char ecx_35;

                                    ecx_35 = *(&((x87_r7_46 < temp19_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_46, temp19_1) ? 1 : 0) << 0xa
                                        | (x87_r7_46 == temp19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                    long double x87_r7_47 = arg_10;
                                    long double temp21_1 = eax_1;
                                    x87_r7_47 - temp21_1;
                                    char eax_72;

                                    eax_72 = *(&((x87_r7_47 < temp21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_47, temp21_1) ? 1 : 0) << 0xa
                                        | (x87_r7_47 == temp21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                    *ebx_17 = ((eax_72 << 1 | ecx_35) << 1 | arg_24) << 1 | arg_14;
                                }

                                esi_2 = &(*esi_2)[8];
                                ebx_17 = &ebx_17[1];
                                edx_39 += 1;
                                *__return_addr_1 = 1;
                                __return_addr_1 = &__return_addr_1[1];
                                arg_4 = edx_39;
                            } while (edx_39 < eax_40);
                        }

                        int32_t* ebp_4 = &ebp_3[4];
                        int32_t eax_78 = *ebp_3 >> 2 & 1;
                        g_a7e06c = eax_78;
                        int32_t edx_40 = ebp_4[-3];
                        int32_t ecx_40 = ebp_4[-2];
                        int32_t ecx_41 = ebp_4[-1];
                        void arg_230;

                        if (arg_18)
                        {
                            if (ecx_41 > 0)
                                __builtin_memset(
                                    __builtin_memset(&arg_230, 0x10101010, ecx_41 & 0xfffffffc),
                                    0x10, ecx_41 & 3);

                            arg_4 = nullptr;

                            if (eax_40 > 0)
                            {
                                arg_4 = eax_40;
                                __builtin_memset(
                                    __builtin_memset(&arg_198, 0, eax_40 & 0xfffffffc), 0,
                                    eax_40 & 3);
                            }

                            goto label_513b59;
                        }

                        long double x87_r7_48 = 0f;
                        char* esi_3 = nullptr;
                        __return_addr = &arg_230;
                        char* edi_6 = nullptr;
                        char ecx_43 = 0;
                        char ebx_18 = 0;
                        arg_28 = nullptr;
                        arg_24 = edx_40;
                        arg_8 = nullptr;
                        arg_18 = 0xffffffff;
                        float arg_54 = 0f;
                        float arg_58 = 0f;
                        float arg_5c = 0f;
                        float arg_80 = 1f;

                        if (eax_78)
                            arg_80 = -1f;

                        float arg_4c = arg_80;
                        int32_t arg_44;

                        while (true)
                        {
                            arg_c = edi_6;
                            arg_14 = x87_r7_48;
                            void* eax_79 = *arg_24;
                            arg_24 += 4;
                            float arg_b4 = arg_54;
                            x87_r7_48 = arg_58;
                            arg_54 = arg_5c;
                            char edx_48 = ebx_18;
                            ebx_18 = ecx_43;
                            edi_6 = esi_3;
                            arg_4f4;

                            if (!arg_8)
                            {
                                int32_t edx_49 = 0;
                                edx_49 = *(&eax_79 + 2);
                                arg_c = &var_10 + edx_49 + 0x1a8;
                                edx_48 = arg_1f0[edx_49];
                                arg_14 = arg_4f0[edx_49 * 8];
                                int32_t ecx_48 = 0;
                                arg_b4 = *(&arg_4f4 + (edx_49 << 5));
                                ecx_48 = *(&eax_79 + 1);
                                ebx_18 = arg_1f0[ecx_48];
                                edi_6 = &var_10 + ecx_48 + 0x1a8;
                                x87_r7_48 = arg_4f0[ecx_48 * 8];
                                arg_54 = *(&arg_4f4 + (ecx_48 << 5));
                            }

                            void* eax_80 = eax_79 & 0xff;
                            arg_44 = 1;
                            arg_4 = eax_80;
                            esi_3 = &var_10 + eax_80 + 0x1a8;
                            char eax_81 = *(&arg_1f0 + eax_80);
                            arg_58 = arg_4f0[eax_80 * 8];
                            arg_5c = *(&arg_4f4 + (eax_80 << 5));
                            int16_t eax_84;
                            eax_84 = eax_81;
                            int32_t ecx_55 = edx_48 | ebx_18 | eax_81 | 0x20;

                            if (!(eax_84 & edx_48 & ebx_18))
                            {
                                long double x87_r6_58 = ((x87_r7_48 - arg_58) * (arg_b4 - arg_5c)
                                    - (arg_14 - arg_58) * (arg_54 - arg_5c)) * arg_4c;
                                long double temp20_1 = -0.00100000005f;
                                x87_r6_58 - temp20_1;
                                eax_84 = (x87_r6_58 < temp20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_58, temp20_1) ? 1 : 0) << 0xa
                                    | (x87_r6_58 == temp20_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&eax_84 + 1) & 1)
                                {
                                    char* edx_50 = arg_c;
                                    *esi_3 = 0;
                                    *edi_6 = 0;
                                    ecx_55 ^= 0x20;
                                    *edx_50 = 0;
                                    arg_44 = 0;
                                }
                            }

                            *__return_addr = ecx_55;
                            __return_addr += 1;
                            arg_4c = arg_4c * -1f;
                            arg_18 &= arg_44;
                            arg_8 = &(*arg_8)[1];

                            if (eax_79 & 0x10000000)
                            {
                                arg_8 = nullptr;
                                arg_4c = arg_80;
                            }

                            bool cond:13_1 = arg_28 + 1 < ecx_41;
                            arg_28 += 1;

                            if (!cond:13_1)
                                break;

                            ecx_43 = eax_81;
                        }

                        if (!arg_18)
                        {
                        label_513b59:
                            arg_28 = nullptr;
                            arg_10 = 0;
                            void var_d4;
                            void var_94;
                            void var_54;
                            int32_t arg_78;
                            bool cond:8_1;

                            do
                            {
                                float i = 1.40129846e-45f;
                                i_2 = 1.40129846e-45f;

                                do
                                {
                                    if (!(arg_48 & i))
                                        ebp_4 = eax_40 * 0x14 - (ecx_27 << 3) + ebp_4 + 4;
                                    else
                                    {
                                        void* ecx_67 = *ebp_4;
                                        int32_t edx_55 = g_a7f89c;
                                        int32_t ecx_68 = g_a7e078;
                                        ebp_4 = &ebp_4[1];
                                        __return_addr = &arg_198;
                                        void* ecx_69 = nullptr;
                                        int32_t (* eax_94)[0x200] = &arg_4f0;
                                        arg_4 = nullptr;

                                        do
                                        {
                                            bool cond:12_1 = *__return_addr;
                                            __return_addr += 1;

                                            if (!cond:12_1)
                                            {
                                                (*eax_94)[4] = *(&arg_cf0 + *ebp_4);
                                                (*eax_94)[6] = ebp_4[1];
                                                (*eax_94)[7] = ebp_4[2];
                                                memcpy(edx_55, eax_94, 0x20);
                                                ecx_69 = arg_4;
                                            }

                                            ebp_4 = &ebp_4[3];
                                            edx_55 += 0x20;
                                            eax_94 = &(*eax_94)[8];
                                            ecx_69 += 1;
                                            arg_4 = ecx_69;
                                        } while (ecx_69 < ecx_27);

                                        if (ecx_69 != eax_40)
                                        {
                                            do
                                            {
                                                bool cond:14_1 = *__return_addr;
                                                __return_addr += 1;

                                                if (!cond:14_1)
                                                {
                                                    int32_t ecx_75 = *ebp_4;
                                                    long double x87_r7_53 = arg_3f0[ecx_75 >> 0x10];
                                                    long double x87_r6_62 = ebp_4[3] * x87_r7_53;
                                                    (*eax_94)[4] = *(&arg_cf0 + (ecx_75 & 0xffff));
                                                    (*eax_94)[6] = x87_r6_62 + ebp_4[1];
                                                    (*eax_94)[7] = ebp_4[4] * x87_r7_53 + ebp_4[2];
                                                    memcpy(edx_55, eax_94, 0x20);
                                                    ecx_69 = arg_4;
                                                }

                                                ebp_4 = &ebp_4[5];
                                                edx_55 += 0x20;
                                                eax_94 = &(*eax_94)[8];
                                                ecx_69 += 1;
                                                arg_4 = ecx_69;
                                            } while (ecx_69 < eax_40);
                                        }

                                        char (* edi_15)[0x40];

                                        if (arg_28)
                                        {
                                            edi_15 = sub_514680(ecx_67, 1);
                                            arg_8 = edi_15;
                                        }
                                        else
                                        {
                                            edi_15 = sub_514680(ecx_67, 0);
                                            arg_8 = edi_15;
                                            arg_28 = 1;
                                        }

                                        void* ecx_78 = g_a7f89c;
                                        int32_t esi_16 = ecx_68 * 0x10001;
                                        arg_20 = &arg_230;
                                        int32_t edx_57 = edx_40;
                                        arg_18 = edx_57;
                                        arg_78 = esi_16;
                                        int32_t* eax_102 = &(*edi_15)[*(edi_15 + 0x2ee8) * 6 + 8];
                                        int32_t arg_7c = edx_57 + (ecx_41 << 2);
                                        arg_14 = eax_102;

                                        do
                                        {
                                            char ecx_81 = *arg_20;
                                            arg_20 += 1;

                                            if (!ecx_81)
                                            {
                                                int32_t ecx_82 = *edx_57;
                                                *eax_102 = (ecx_82 & 0xff00ff) + esi_16;
                                                int16_t ebx_24 = 0;
                                                ebx_24 = *(&ecx_82 + 1);
                                                eax_102[1] = ebx_24 + esi_16;
                                                eax_102 += 6;
                                            }
                                            else if (!(ecx_81 & 0x20))
                                            {
                                                int32_t arg_f4;
                                                int32_t* ebx_27 = &arg_f4;
                                                int32_t ecx_83 = *arg_18;
                                                arg_44 = 3;
                                                arg_c = (eax_102 - arg_14) / 6;
                                                int16_t eax_107 = 0;
                                                eax_107 = *(&ecx_83 + 1);
                                                arg_f4 = ecx_83 & 0xff00ff;
                                                int16_t arg_f8 = eax_107;
                                                void arg_350;
                                                char* eax_108 = &arg_350;
                                                bool cond:25_1;

                                                do
                                                {
                                                    int32_t edx_64 = 0;
                                                    edx_64 = *ebx_27;
                                                    char edx_65 = arg_1f0[edx_64];
                                                    memcpy(&eax_108[0xffffffe0],
                                                        &(&var_10)[edx_64 * 8 + 0x140], 0x20);
                                                    *eax_108 = edx_65;

                                                    if (!(edx_65 & 0x10))
                                                    {
                                                        long double x87_r7_56 =
                                                            g_bcabec * *(eax_108 - 0x14);
                                                        int32_t arg_12c = 0;
                                                        int32_t arg_13c = 0;
                                                        int32_t arg_154 = 0;
                                                        int32_t arg_144 = 0;
                                                        *(eax_108 - 0x18) = x87_r7_56;
                                                        *(eax_108 + 8) =
                                                            (*(eax_108 - 0x10) >> 0x10) * x87_r7_56;
                                                        *(eax_108 + 0xc) = (*(eax_108 - 0x10) >> 8)
                                                            * *(eax_108 - 0x18);
                                                        *(eax_108 + 0x10) =
                                                            *(eax_108 - 0x10) * *(eax_108 - 0x18);
                                                        *(eax_108 + 0x14) =
                                                            *(eax_108 - 8) * *(eax_108 - 0x18);
                                                        *(eax_108 + 0x18) =
                                                            *(eax_108 - 4) * *(eax_108 - 0x18);
                                                        *(eax_108 + 0x1c) = (*(eax_108 - 0xc)
                                                            >> 0x18) * *(eax_108 - 0x18);
                                                    }

                                                    ebx_27 += 2;
                                                    eax_108 = &eax_108[0x40];
                                                    cond:25_1 = arg_44 != 1;
                                                    arg_44 -= 1;
                                                } while (cond:25_1);
                                                void** arg_15c = &arg_4;
                                                void* const arg_158;
                                                void* const* var_14_3 = &arg_158;
                                                void arg_3b0;
                                                memcpy(&var_54, &arg_3b0, 0x40);
                                                void arg_370;
                                                memcpy(&var_94, &arg_370, 0x40);
                                                arg_158 = ecx_78;
                                                float arg_160 = arg_14;
                                                void arg_330;
                                                memcpy(&var_d4, &arg_330, 0x40);
                                                char** arg_164 = &arg_c;
                                                int32_t arg_168 = ecx_68;
                                                sub_514760();
                                                esi_16 = arg_78;
                                                edi_15 = arg_8;
                                                eax_102 = arg_14 + arg_c * 6;
                                                edx_57 = arg_18;
                                            }

                                            edx_57 += 4;
                                            arg_18 = edx_57;
                                        } while (edx_57 < arg_7c);

                                        *(edi_15 + 0x2ee8) += (eax_102 - arg_14) / 6;
                                        void* eax_116 = arg_4;
                                        void* ecx_92 = g_a7e078 + eax_116;
                                        g_a7f89c += eax_116 << 5;
                                        g_a7e078 = ecx_92;
                                        i = i_2;
                                    }

                                    i += 1;
                                    i_2 = i;
                                } while (i < 3);

                                cond:8_1 = arg_10 + 1 < ecx_40;
                                arg_10 += 1;
                            } while (cond:8_1);
                            int32_t eax_124 = *ebp_4;
                            int32_t* ebp_5 = &ebp_4[1];

                            if (eax_124)
                            {
                                float ecx_94 = g_a7e078;
                                int32_t edx_83 = g_a7f89c;
                                __return_addr = &arg_198;
                                void* ecx_95 = nullptr;
                                int32_t (* eax_125)[0x200] = &arg_4f0;
                                arg_4 = nullptr;

                                do
                                {
                                    bool cond:19_1 = *__return_addr;
                                    __return_addr += 1;

                                    if (!cond:19_1)
                                    {
                                        (*eax_125)[6] = ebp_5[1];
                                        (*eax_125)[7] = ebp_5[2];
                                        (*eax_125)[4] = 0xffffff;
                                        memcpy(edx_83, eax_125, 0x20);
                                        ecx_95 = arg_4;
                                    }

                                    ebp_5 = &ebp_5[3];
                                    edx_83 += 0x20;
                                    eax_125 = &(*eax_125)[8];
                                    ecx_95 += 1;
                                    arg_4 = ecx_95;
                                } while (ecx_95 < ecx_27);

                                if (ecx_95 != eax_40)
                                {
                                    do
                                    {
                                        bool cond:20_1 = *__return_addr;
                                        __return_addr += 1;

                                        if (!cond:20_1)
                                        {
                                            int32_t ecx_99 = *ebp_5 >> 0x10;
                                            (*eax_125)[4] = 0xffffff;
                                            long double x87_r7_68 = arg_3f0[ecx_99];
                                            (*eax_125)[6] = ebp_5[3] * x87_r7_68 + ebp_5[1];
                                            (*eax_125)[7] = ebp_5[4] * x87_r7_68 + ebp_5[2];
                                            memcpy(edx_83, eax_125, 0x20);
                                            ecx_95 = arg_4;
                                        }

                                        ebp_5 = &ebp_5[5];
                                        edx_83 += 0x20;
                                        eax_125 = &(*eax_125)[8];
                                        ecx_95 += 1;
                                        arg_4 = ecx_95;
                                    } while (ecx_95 < eax_40);
                                }

                                int32_t* eax_126 = sub_514680(eax_124, 2);
                                int32_t eax_127 = g_a7f89c;
                                int32_t edi_23 = edx_40;
                                void* esi_26 = ecx_94 * 0x10001;
                                int32_t eax_129 = eax_126[0xbba];
                                arg_8 = eax_126;
                                int32_t edx_85 = &arg_230;
                                arg_18 = edi_23;
                                arg_20 = esi_26;
                                void** eax_130 = eax_126 + eax_129 * 6 + 8;
                                arg_78 = edi_23 + (ecx_41 << 2);

                                while (true)
                                {
                                    char ecx_103 = *edx_85;

                                    if (!ecx_103)
