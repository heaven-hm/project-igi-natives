// Original IGI.EXE function: Terrain_Draw (VA 0x00512C30; static CFG gate FAIL, CFG score 0.778).
#include "Terrain_Draw.h"
❓  int32_t __stdcall Terrain_Draw(float context , float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, double param_9 , double param_10, double param_11 , double param_12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x14f0);
    float data_val = g_bcabd0;
    float entity_val = g_bcabd4;
    float temp_val = g_bcabd8;
    float data_1 = g_bcabdc;
    void* entity_1 = g_bcade8;
    int32_t context_val;
    int32_t item_4 = context_val;
    int32_t flagP;
    int32_t item_8 = flagP;
    int32_t source_val;
    int32_t item_c = source_val;
    int32_t* dest_val;
    int32_t* item_10 = dest_val;
    long double fpu_val_7_3 = 1.0f / (1.0f - g_bcada0 / g_bcadc8);
    long double fpu_val_6_1 = g_bcad8c - g_bcadb4;
    g_a7f894 = -((fpu_val_6_1 * g_bcad70 * g_bcada0 * fpu_val_7_3));
    g_a7e074 = fpu_val_6_1 * fpu_val_7_3 + g_bcadb4;
    *(entity_1 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    g_a7f860 = 0;
    g_a7f864 = 0;
    g_a7f868 = g_c28b44;
    long double fpu_val_7_6 = g_a7da30 * -255.0f;
    int32_t temp_3 = g_bcadb4;
    g_a7f86c = g_c28b48;
    int32_t data_3 = g_bcad8c;
    g_a7f870 = temp_3;
    g_a7f874 = data_3;
    int64_t arg_70 = g_a7da38 * 255.0f;
    g_a7e068 = arg_70 - (((fpu_val_7_6 << 8) + (g_a7da34 * -255.0f)) << 8);
    int32_t arg_198;
    memset(&arg_198, 0, 0x40);
    int32_t* data_6 = g_5ca114;
    arg_198 = 0x3f800000;
    int32_t arg_1ac = 0x3f800000;
    int32_t arg_1c0 = 0x3f800000;
    int32_t arg_1d4 = 0x3f800000;
    (*(*data_6 + 0x2c))(data_6, 1, &arg_198);
    int32_t* data_7 = g_5ca114;
    (*(*data_7 + 0x34))(data_7, &g_a7f860);
    int32_t* data_8 = g_5ca114;
    (*(*data_8 + 0x50))(data_8, 0x88, 1);
    int32_t* data_9 = g_5ca114;
    (*(*data_9 + 0x50))(data_9, 0x26, g_a7da18);
    int32_t* data_10 = g_5ca114;
    (*(*data_10 + 0x50))(data_10, 0x23, 0);
    int32_t* data_11 = g_5ca114;
    (*(*data_11 + 0x50))(data_11, 0x8c, 3);
    int32_t* data_12 = g_5ca114;
    (*(*data_12 + 0x50))(data_12, 0x30, 1);
    int32_t* data_13 = g_5ca114;
    void* arg_20 = 0x46ea6000;
    (*(*data_13 + 0x50))(data_13, 0x24, 0x461c4000);
    int32_t* data_14 = g_5ca114;
    (*(*data_14 + 0x50))(data_14, 0x25, arg_20);
    int32_t* data_15 = g_5ca114;
    (*(*data_15 + 0x50))(data_15, 0x2f, 0);
    int32_t* data_16 = g_5ca114;
    (*(*data_16 + 0x50))(data_16, 0x1b, 0);
    int32_t* data_17 = g_5ca114;
    (*(*data_17 + 0x50))(data_17, 0x16, 1);
    int32_t* data_18 = g_5ca114;
    (*(*data_18 + 0x50))(data_18, 0x89, 0);
    int32_t* data_19 = g_5ca114;
    (*(*data_19 + 0x50))(data_19, 0x8d, 1);
    int32_t* data_20 = g_5ca114;
    (*(*data_20 + 0x50))(data_20, 0x1a, 1);
    int32_t* data_21 = g_5ca114;
    (*(*data_21 + 0x50))(data_21, 0xf, 0);
    int32_t* data_22 = g_5ca114;
    (*(*data_22 + 0x50))(data_22, 7, g_bcad78);
    int32_t* data_23 = g_5ca114;
    (*(*data_23 + 0x50))(data_23, 0xe, 1);
    int32_t* data_24 = g_5ca114;
    (*(*data_24 + 0x50))(data_24, 0x1d, 0);
    int32_t* data_25 = g_5ca114;
    int32_t item_4_19 = 2;
    int32_t item_8_19 = 0x11;
    int32_t item_c_18 = 0;
    int32_t entity_19 = *data_25;
    item_10 = data_25;
    (*(entity_19 + 0x94))(item_10, item_c_18, item_8_19, item_4_19);
    int32_t* data_26 = g_5ca114;
    int32_t item_4_20 = 2;
    int32_t item_8_20 = 0x10;
    int32_t item_c_19 = 0;
    int32_t temp_16 = *data_26;
    item_10 = data_26;
    (*(temp_16 + 0x94))(item_10, item_c_19, item_8_20, item_4_20);
    int32_t* data_27 = g_5ca114;
    int32_t item_4_21 = 3;
    int32_t item_8_21 = 0xc;
    int32_t item_c_20 = 0;
    int32_t entity_20 = *data_27;
    item_10 = data_27;
    (*(entity_20 + 0x94))(item_10, item_c_20, item_8_21, item_4_21);
    int32_t* data_28 = g_5ca114;
    int32_t item_4_22 = 2;
    int32_t item_8_22 = 0x12;
    int32_t item_c_21 = 0;
    int32_t temp_17 = *data_28;
    item_10 = data_28;
    (*(temp_17 + 0x94))(item_10, item_c_21, item_8_22, item_4_22);
    int32_t* data_29 = g_5ca114;
    int32_t item_4_23 = 0;
    int32_t item_8_23 = 0xb;
    int32_t item_c_22 = 0;
    int32_t entity_21 = *data_29;
    item_10 = data_29;
    (*(entity_21 + 0x94))(item_10, item_c_22, item_8_23, item_4_23);
    int32_t* data_30 = g_5ca114;
    int32_t item_4_24 = 1;
    int32_t item_8_24 = 4;
    int32_t item_c_23 = 0;
    int32_t temp_18 = *data_30;
    item_10 = data_30;
    (*(temp_18 + 0x94))(item_10, item_c_23, item_8_24, item_4_24);
    int32_t* data_31 = g_5ca114;
    int32_t item_4_25 = 4;
    int32_t entity_22 = *data_31;
    int32_t item_8_25 = 1;
    int32_t item_c_24 = 0;
    item_10 = data_31;
    (*(entity_22 + 0x94))(item_10, item_c_24, item_8_25, item_4_25);
    int32_t* data_32 = g_5ca114;
    int32_t item_4_26 = 2;
    int32_t item_8_26 = 2;
    int32_t item_c_25 = 0;
    int32_t temp_19 = *data_32;
    item_10 = data_32;
    (*(temp_19 + 0x94))(item_10, item_c_25, item_8_26, item_4_26);
    int32_t* data_33 = g_5ca114;
    int32_t item_4_27 = 0;
    int32_t item_8_27 = 3;
    int32_t item_c_26 = 0;
    int32_t entity_23 = *data_33;
    item_10 = data_33;
    (*(entity_23 + 0x94))(item_10, item_c_26, item_8_27, item_4_27);
    int32_t* data_34 = g_5ca114;
    int32_t item_4_28 = 1;
    int32_t item_8_28 = 1;
    int32_t item_c_27 = 1;
    int32_t temp_20 = *data_34;
    item_10 = data_34;
    (*(temp_20 + 0x94))(item_10, item_c_27, item_8_28, item_4_28);
    int32_t* data_35 = g_a7f890;
    int32_t item_4_29 = 0;
    g_a7e078 = 0;
    int32_t* item_8_29 = &g_a7f89c;
    int32_t entity_24 = *data_35;
    int32_t item_c_28 = 0x2020;
    item_10 = data_35;
    int32_t result = (*(entity_24 + 0xc))(item_10, item_c_28, item_8_29, item_4_29);

    if (!result)
    {
        int32_t data_36 = g_b16c9c;
        int32_t temp_22 = g_c28fbc + data_36;
        float arg_10c = g_c31088;
        double arg_180;
        memcpy(&arg_180, &g_bcab08, 0x18);
        g_c28fbc = temp_22;
        float temp_23 = g_c28fc0;
        g_c28fb8 = 0;
        int32_t* arg_84 = &g_b12c60;
        float arg_cc;
        memcpy(&arg_cc, &g_bcaae0, 0x28);
        int32_t arg_50 = 0;

        if (data_36 > 0)
        {
            float arg_fc = arg_180;
            float arg_104 = param_9;
            float arg_11c = param_10;
            bool flag_2_1;

            do
            {
                void* data_38 = *arg_84;
                double arg_1d8;
                memcpy(&arg_1d8, data_38, 0x18);
                float arg_64 = -(arg_fc);
                float arg_68 = -(arg_104);
                float arg_6c = -(arg_11c);

                if (data_38)
                {
                    return_addr = &arg_198;
                    int32_t data_39 = *(data_38 + 0x18);
                    char arg_1f0[0x40];
                    char (* arg_8)[0x40] = &arg_1f0;
                    void* data_40 = data_39 & 0xffff;
                    int32_t entity_27 = data_39 >> 0x10;
                    char data_41 = *(data_38 + 0x1c);
                    float* flagP3 = data_38 + 0x20;
                    int32_t arg_4f0[0x200];
                    int32_t (* source_2)[0x200] = &arg_4f0;
                    float i_2 = 0.375f / (1 << ((0x19 - data_41) & 0x1f));
                    long double fpu_val_6_9 = (0x40000000 >> (data_41 & 0x1f)) * 1.73000002f
                        + param_8 * (param_12 - param_10) + param_7 * (param_11 - param_9)
                        + param_6 * (arg_1d8 - arg_180);
                    long double f1_1 = g_bcadcc;
                    fpu_val_6_9 - f1_1;

                    if (*(&((fpu_val_6_9 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_9, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t arg_48 = 0;
                        void* arg_4 = nullptr;
                        int32_t arg_18 = 0;
                        int32_t context_1 = -(&arg_4f0);
                        float* arg_28 = flagP3;
                        void arg_cf8;
                        void* entity_30 = &arg_cf8;
                        int32_t arg_3f0[0x40];
                        float arg_14 = &arg_3f0;
                        int32_t arg_30 = context_1;
                        char* arg_c;
                        int32_t arg_10;
                        int32_t arg_24;
                        void arg_cf0;
                        void* temp_39;
                        char* context_17;
                        char* return_addr_1;

                        while (true)
                        {
                            long double fpu_val_7_28 = *flagP3 + arg_64;
                            float data_43 = flagP3[2];
                            float temp_27 = flagP3[1];
                            float temp_28 = flagP3[3];
                            flagP3 = &flagP3[4];
                            long double fpu_val_6_10 = fpu_val_7_28;
                            long double f2_1 = 0.0f;
                            fpu_val_6_10 - f2_1;

                            if (*(&((fpu_val_6_10 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_10, f2_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_10 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                fpu_val_6_10 = -(fpu_val_6_10);

                            long double fpu_val_5_9 = temp_27 + arg_68;
                            long double f3_1 = 0.0f;
                            fpu_val_5_9 - f3_1;
                            arg_10 = fpu_val_5_9;
                            arg_c = fpu_val_5_9;
                            bool c1_1 = /* bool c1_1 = unknown  {fst dword [stack_ptr+0x1c], fp0} */;

                            if (*(&((fpu_val_5_9 < f3_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                                | (FCMP_UO(fpu_val_5_9, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_9 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                            {
                                fpu_val_5_9 = -(fpu_val_5_9);
                                arg_c = fpu_val_5_9;
                            }

                            fpu_val_5_9 - fpu_val_6_10;

                            if (!(*(&((fpu_val_5_9 < fpu_val_6_10 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_5_9, fpu_val_6_10) ? 1 : 0) << 0xa
                                    | (fpu_val_5_9 == fpu_val_6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                fpu_val_6_10 = arg_c;

                            long double fpu_val_5_11 = data_43 + arg_6c;
                            long double f4_1 = 0.0f;
                            fpu_val_5_11 - f4_1;
                            arg_c = fpu_val_5_11;
                            bool c1_2 = /* bool c1_2 = unknown  {fst dword [stack_ptr+0x1c], fp0} */;

                            if (*(&((fpu_val_5_11 < f4_1 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                                | (FCMP_UO(fpu_val_5_11, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_11 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                            {
                                fpu_val_5_11 = -(fpu_val_5_11);
                                arg_c = fpu_val_5_11;
                            }

                            fpu_val_5_11 - fpu_val_6_10;

                            if (!(*(&((fpu_val_5_11 < fpu_val_6_10 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_5_11, fpu_val_6_10) ? 1 : 0) << 0xa
                                    | (fpu_val_5_11 == fpu_val_6_10 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                fpu_val_6_10 = arg_c;

                            long double fpu_val_6_15 = (fpu_val_6_10 * i_2 - arg_10c) * temp_23;
                            long double f5_1 = 0.0f;
                            fpu_val_6_15 - f5_1;

                            if (!(*(&((fpu_val_6_15 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_15, f5_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_15 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                                long double f6_1 = 1.0f;
                                fpu_val_6_15 - f6_1;

                                if (!(*(&((fpu_val_6_15 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_15, f6_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_15 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                                    fpu_val_6_15 = 1.0f;
                            }
                            else
                                fpu_val_6_15 = 0.0f;

                            *arg_14 = fpu_val_6_15;
                            long double f7_1 = 0.01;
                            fpu_val_6_15 - f7_1;

                            if (!(*(&((fpu_val_6_15 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_15, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_15 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            {
                                int32_t data_47 = arg_48;
                                data_47 |= 2;
                                arg_48 = data_47;
                            }

                            long double f8_1 = 0.98999999999999999;
                            fpu_val_6_15 - f8_1;

                            if (*(&((fpu_val_6_15 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_15, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_15 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                            {
                                int32_t data_48 = arg_48;
                                data_48 |= 1;
                                arg_48 = data_48;
                            }

                            long double fpu_val_6_18 = 1.0f - fpu_val_6_15;
                            long double fpu_val_5_17 = fpu_val_6_18 * 255.0f;
                            int32_t arg_3c = fpu_val_5_17;
                            int32_t dest_2 = arg_3c | (arg_3c << 8 | arg_3c) << 8;
                            arg_3c = fpu_val_5_17 * fpu_val_6_18;
                            long double fpu_val_6_20 = arg_10;
                            long double fpu_val_5_20 = fpu_val_6_18 * temp_28 + data_43 + arg_6c;
                            int32_t data_50 = arg_3c | (arg_3c << 8 | arg_3c) << 8;
                            float arg_88 = fpu_val_5_20 * param_2 + fpu_val_6_20 * context + fpu_val_7_28 * arg_cc;
                            float arg_8c = fpu_val_5_20 * param_5 + fpu_val_6_20 * param_4 + fpu_val_7_28 * param_3;
                            long double fpu_val_7_30 =
                                fpu_val_5_20 * param_8 + fpu_val_6_20 * param_7 + fpu_val_7_28 * param_6;
                            float arg_90 = fpu_val_7_30;
                            long double f9_1 = g_bcadc0;
                            fpu_val_7_30 - f9_1;

                            if (*(&((fpu_val_7_30 < f9_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_30, f9_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_30 == f9_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                int32_t* data_57 = source_2;
                                arg_18 = 1;
                                *data_57 = arg_88;
                                data_57[1] = arg_8c;
                                data_57[2] = arg_90;
                                *(&item_10 + arg_30 + source_2 + 0x50c) = 0;
                                *(&item_10 + arg_30 + source_2 + 0x514) = 0xff000000;
                                *arg_8 = 0x10;
                            }
                            else
                            {
                                long double fpu_val_7_32 = 1.0f / arg_90;
                                arg_c = fpu_val_7_32;
                                long double fpu_val_7_35 =
                                    fpu_val_7_32 * arg_88 * g_c311a4 + g_c311b0;
                                long double fpu_val_6_28 = arg_c * arg_8c * g_c311a0 + g_c311b4;
                                arg_10 = fpu_val_6_28;
                                *source_2 = fpu_val_7_35;
                                (*source_2)[1] = fpu_val_6_28;
                                *(&item_10 + context_1 + source_2 + 0x50c) = arg_c * g_bcad70;
                                *(&item_10 + context_1 + source_2 + 0x508) =
                                    arg_c * g_a7f894 + g_a7e074;
                                long double fpu_val_5_33 = arg_90 * g_bcabec * g_a7da18
                                    * (1.4426950407214463 + 1.675171316223821e-10);
                                long double fpu_val_4_16 = roundl(fpu_val_5_33);
                                long double fp0_1;
                                bool c1_3;
                                fp0_1 = __f2xm1(fpu_val_5_33 - fpu_val_4_16);
                                long double fp0_2;
                                bool c1_4;
                                fp0_2 = __fscale(fp0_1 + 1, fpu_val_4_16);
                                long double fpu_val_5_36 = 1.0f / fp0_2;
                                long double f10_1 = 0.0f;
                                fpu_val_5_36 - f10_1;

                                if (*(&((fpu_val_5_36 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_5_36, f10_1) ? 1 : 0) << 0xa
                                        | (fpu_val_5_36 == f10_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                    fpu_val_5_36 = 0.0f;

                                arg_24 = 1;
                                *(&item_10 + context_1 + source_2 + 0x514) = (fpu_val_5_36 * 255.0f) << 0x18;
                                long double f11_1 = data_val;
                                fpu_val_7_35 - f11_1;

                                if (!(*(&((fpu_val_7_35 < f11_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_35, f11_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_35 == f11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                    arg_24 = 0;

                                long double f12_1 = entity_val;
                                fpu_val_6_28 - f12_1;
                                arg_c = 1;

                                if (!(*(&((fpu_val_6_28 < f12_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_28, f12_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_28 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    arg_c = nullptr;

                                long double f14_1 = temp_val;
                                fpu_val_7_35 - f14_1;
                                char context_4;

                                context_4 = *(&((fpu_val_7_35 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_35, f14_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_35 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                long double fpu_val_7_36 = arg_10;
                                long double f17_1 = data_1;
                                fpu_val_7_36 - f17_1;
                                char data_55;

                                data_55 = *(&((fpu_val_7_36 < f17_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_36, f17_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_36 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                *arg_8 = ((data_55 << 1 | context_4) << 1 | arg_c) << 1 | arg_24;
                            }

                            *(entity_30 + 0x10) = dest_2;
                            *(entity_30 + 0x14) = 0xffffff - dest_2;
                            entity_30 += 0x20;
                            void* context_10 = arg_30 + source_2;
                            *(entity_30 - 0x24) = 0;
                            source_2 = &(*source_2)[8];
                            *(&arg_cf0 + context_10) = 0;
                            int32_t data_64 = dest_2 - data_50;
                            void* temp_38 = arg_4;
                            *(entity_30 - 0x20) = data_64;
                            *(entity_30 - 0x1c) = 0xffffff - dest_2 * 2 + data_50;
                            *(entity_30 - 0x18) = data_50;
                            arg_14 += 4;
                            *(entity_30 - 0x14) = data_64;
                            context_17 = &(*arg_8)[1];
                            temp_39 = temp_38 + 1;
                            *return_addr = 1;
                            return_addr_1 = return_addr + 1;
                            arg_8 = context_17;
                            arg_4 = temp_39;
                            return_addr = return_addr_1;

                            if (temp_39 >= entity_27)
                                break;

                            context_1 = arg_30;
                        }

                        if (temp_39 != data_40)
                        {
                            do
                            {
                                float data_66 = flagP3[2];
                                long double fpu_val_7_37 = *flagP3;
                                int32_t data_67 = flagP3[3];
                                float arg_a4 = flagP3[1];
                                float* entity_32 = arg_28;
                                arg_14 = arg_3f0[data_67];
                                flagP3 = &flagP3[4];
                                long double fpu_val_7_38 =
                                    fpu_val_7_37 + (entity_32[data_67 * 4] - fpu_val_7_37) * arg_14;
                                arg_a4 = (entity_32[data_67 * 4 + 1] - arg_a4) * arg_14 + arg_a4;
                                long double fpu_val_7_39 = fpu_val_7_38 + arg_64;
                                long double fpu_val_6_42 = arg_a4 + arg_68;
                                long double fpu_val_5_41 =
                                    (entity_32[data_67 * 4 + 2] - data_66) * arg_14 + data_66 + arg_6c;
                                float arg_94 =
                                    fpu_val_5_41 * param_2 + fpu_val_6_42 * context + fpu_val_7_39 * arg_cc;
                                float arg_98 =
                                    fpu_val_5_41 * param_5 + fpu_val_6_42 * param_4 + fpu_val_7_39 * param_3;
                                long double fpu_val_7_41 =
                                    fpu_val_5_41 * param_8 + fpu_val_6_42 * param_7 + fpu_val_7_39 * param_6;
                                float arg_9c = fpu_val_7_41;
                                long double f13_1 = g_bcadc0;
                                fpu_val_7_41 - f13_1;

                                if (*(&((fpu_val_7_41 < f13_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_41, f13_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_41 == f13_1 ? 1 : 0) << 0xe) + 1) & 1)
                                {
                                    float* data_74 = source_2;
                                    (*source_2)[3] = 0;
                                    (*source_2)[5] = 0xff000000;
                                    *data_74 = arg_94;
                                    *context_17 = 0x10;
                                    arg_18 = 1;
                                    data_74[1] = arg_98;
                                    data_74[2] = arg_9c;
                                }
                                else
                                {
                                    long double fpu_val_7_43 = 1.0f / arg_9c;
                                    arg_8 = fpu_val_7_43;
                                    long double fpu_val_7_46 =
                                        fpu_val_7_43 * arg_94 * g_c311a4 + g_c311b0;
                                    long double fpu_val_6_50 =
                                        arg_8 * arg_98 * g_c311a0 + g_c311b4;
                                    arg_10 = fpu_val_6_50;
                                    *source_2 = fpu_val_7_46;
                                    (*source_2)[1] = fpu_val_6_50;
                                    (*source_2)[3] = arg_8 * g_bcad70;
                                    (*source_2)[2] = arg_8 * g_a7f894 + g_a7e074;
                                    long double fpu_val_5_54 = arg_9c * g_bcabec * g_a7da18
                                        * (1.4426950407214463 + 1.675171316223821e-10);
                                    long double fpu_val_4_32 = roundl(fpu_val_5_54);
                                    long double fp0_3;
                                    bool c1_5;
                                    fp0_3 = __f2xm1(fpu_val_5_54 - fpu_val_4_32);
                                    long double fp0_4;
                                    bool c1_6;
                                    fp0_4 = __fscale(fp0_3 + 1, fpu_val_4_32);
                                    long double fpu_val_5_57 = 1.0f / fp0_4;
                                    long double f15_1 = 0.0f;
                                    fpu_val_5_57 - f15_1;

                                    if (*(&((fpu_val_5_57 < f15_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_5_57, f15_1) ? 1 : 0) << 0xa
                                            | (fpu_val_5_57 == f15_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                                        fpu_val_5_57 = 0.0f;

                                    arg_14 = 1.40129846e-45.0f;
                                    (*source_2)[5] = (fpu_val_5_57 * 255.0f) << 0x18;
                                    long double f16_1 = data_val;
                                    fpu_val_7_46 - f16_1;

                                    if (!(*(&((fpu_val_7_46 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_46, f16_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_46 == f16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                        arg_14 = 0.0f;

                                    long double f18_1 = entity_val;
                                    fpu_val_6_50 - f18_1;
                                    arg_24 = 1;

                                    if (!(*(&((fpu_val_6_50 < f18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_50, f18_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_50 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                        arg_24 = 0;

                                    long double f19_1 = temp_val;
                                    fpu_val_7_46 - f19_1;
                                    char entity_35;

                                    entity_35 = *(&((fpu_val_7_46 < f19_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_46, f19_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_46 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                    long double fpu_val_7_47 = arg_10;
                                    long double f21_1 = data_1;
                                    fpu_val_7_47 - f21_1;
                                    char data_72;

                                    data_72 = *(&((fpu_val_7_47 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_47, f21_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_47 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                                    *context_17 = ((data_72 << 1 | entity_35) << 1 | arg_24) << 1 | arg_14;
                                }

                                source_2 = &(*source_2)[8];
                                context_17 = &context_17[1];
                                temp_39 += 1;
                                *return_addr_1 = 1;
                                return_addr_1 = &return_addr_1[1];
                                arg_4 = temp_39;
                            } while (temp_39 < data_40);
                        }

                        int32_t* flagP4 = &flagP3[4];
                        int32_t data_78 = *flagP3 >> 2 & 1;
                        g_a7e06c = data_78;
                        int32_t temp_40 = flagP4[-3];
                        int32_t entity_40 = flagP4[-2];
                        int32_t entity_41 = flagP4[-1];
                        void arg_230;

                        if (arg_18)
                        {
                            if (entity_41 > 0)
                                memset(
                                    memset(&arg_230, 0x10101010, entity_41 & 0xfffffffc),
                                    0x10, entity_41 & 3);

                            arg_4 = nullptr;

                            if (data_40 > 0)
                            {
                                arg_4 = data_40;
                                memset(
                                    memset(&arg_198, 0, data_40 & 0xfffffffc), 0,
                                    data_40 & 3);
                            }

                            goto label_513b59;
                        }

                        long double fpu_val_7_48 = 0.0f;
                        char* source_3 = nullptr;
                        return_addr = &arg_230;
                        char* dest_6 = nullptr;
                        char entity_43 = 0;
                        char context_18 = 0;
                        arg_28 = nullptr;
                        arg_24 = temp_40;
                        arg_8 = nullptr;
                        arg_18 = 0xffffffff;
                        float arg_54 = 0.0f;
                        float arg_58 = 0.0f;
                        float arg_5c = 0.0f;
                        float arg_80 = 1.0f;

                        if (data_78)
                            arg_80 = -1.0f;

                        float arg_4c = arg_80;
                        int32_t arg_44;

                        while (true)
                        {
                            arg_c = dest_6;
                            arg_14 = fpu_val_7_48;
                            void* data_79 = *arg_24;
                            arg_24 += 4;
                            float arg_b4 = arg_54;
                            fpu_val_7_48 = arg_58;
                            arg_54 = arg_5c;
                            char temp_48 = context_18;
                            context_18 = entity_43;
                            dest_6 = source_3;
                            arg_4f4;

                            if (!arg_8)
                            {
                                int32_t temp_49 = 0;
                                temp_49 = *(&data_79 + 2);
                                arg_c = &item_10 + temp_49 + 0x1a8;
                                temp_48 = arg_1f0[temp_49];
                                arg_14 = arg_4f0[temp_49 * 8];
                                int32_t entity_48 = 0;
                                arg_b4 = *(&arg_4f4 + (temp_49 << 5));
                                entity_48 = *(&data_79 + 1);
                                context_18 = arg_1f0[entity_48];
                                dest_6 = &item_10 + entity_48 + 0x1a8;
                                fpu_val_7_48 = arg_4f0[entity_48 * 8];
                                arg_54 = *(&arg_4f4 + (entity_48 << 5));
                            }

                            void* data_80 = data_79 & 0xff;
                            arg_44 = 1;
                            arg_4 = data_80;
                            source_3 = &item_10 + data_80 + 0x1a8;
                            char data_81 = *(&arg_1f0 + data_80);
                            arg_58 = arg_4f0[data_80 * 8];
                            arg_5c = *(&arg_4f4 + (data_80 << 5));
                            int16_t data_84;
                            data_84 = data_81;
                            int32_t entity_55 = temp_48 | context_18 | data_81 | 0x20;

                            if (!(data_84 & temp_48 & context_18))
                            {
                                long double fpu_val_6_58 = ((fpu_val_7_48 - arg_58) * (arg_b4 - arg_5c)
                                    - (arg_14 - arg_58) * (arg_54 - arg_5c)) * arg_4c;
                                long double f20_1 = -0.00100000005f;
                                fpu_val_6_58 - f20_1;
                                data_84 = (fpu_val_6_58 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_58, f20_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_58 == f20_1 ? 1 : 0) << 0xe | 0x3800;

                                if (*(&data_84 + 1) & 1)
                                {
                                    char* temp_50 = arg_c;
                                    *source_3 = 0;
                                    *dest_6 = 0;
                                    entity_55 ^= 0x20;
                                    *temp_50 = 0;
                                    arg_44 = 0;
                                }
                            }

                            *return_addr = entity_55;
                            return_addr += 1;
                            arg_4c = arg_4c * -1.0f;
                            arg_18 &= arg_44;
                            arg_8 = &(*arg_8)[1];

                            if (data_79 & 0x10000000)
                            {
                                arg_8 = nullptr;
                                arg_4c = arg_80;
                            }

                            bool flag_13_1 = arg_28 + 1 < entity_41;
                            arg_28 += 1;

                            if (!flag_13_1)
                                break;

                            entity_43 = data_81;
                        }

                        if (!arg_18)
                        {
                        label_513b59:
                            arg_28 = nullptr;
                            arg_10 = 0;
                            void item_d4;
                            void item_94;
                            void item_54;
                            int32_t arg_78;
                            bool flag_8_1;

                            do
                            {
                                float i = 1.40129846e-45.0f;
                                i_2 = 1.40129846e-45.0f;

                                do
                                {
                                    if (!(arg_48 & i))
                                        flagP4 = data_40 * 0x14 - (entity_27 << 3) + flagP4 + 4;
                                    else
                                    {
                                        void* entity_67 = *flagP4;
                                        int32_t temp_55 = g_a7f89c;
                                        int32_t entity_68 = g_a7e078;
                                        flagP4 = &flagP4[1];
                                        return_addr = &arg_198;
                                        void* entity_69 = nullptr;
                                        int32_t (* data_94)[0x200] = &arg_4f0;
                                        arg_4 = nullptr;

                                        do
                                        {
                                            bool flag_12_1 = *return_addr;
                                            return_addr += 1;

                                            if (!flag_12_1)
                                            {
                                                (*data_94)[4] = *(&arg_cf0 + *flagP4);
                                                (*data_94)[6] = flagP4[1];
                                                (*data_94)[7] = flagP4[2];
                                                memcpy(temp_55, data_94, 0x20);
                                                entity_69 = arg_4;
                                            }

                                            flagP4 = &flagP4[3];
                                            temp_55 += 0x20;
                                            data_94 = &(*data_94)[8];
                                            entity_69 += 1;
                                            arg_4 = entity_69;
                                        } while (entity_69 < entity_27);

                                        if (entity_69 != data_40)
                                        {
                                            do
                                            {
                                                bool flag_14_1 = *return_addr;
                                                return_addr += 1;

                                                if (!flag_14_1)
                                                {
                                                    int32_t entity_75 = *flagP4;
                                                    long double fpu_val_7_53 = arg_3f0[entity_75 >> 0x10];
                                                    long double fpu_val_6_62 = flagP4[3] * fpu_val_7_53;
                                                    (*data_94)[4] = *(&arg_cf0 + (entity_75 & 0xffff));
                                                    (*data_94)[6] = fpu_val_6_62 + flagP4[1];
                                                    (*data_94)[7] = flagP4[4] * fpu_val_7_53 + flagP4[2];
                                                    memcpy(temp_55, data_94, 0x20);
                                                    entity_69 = arg_4;
                                                }

                                                flagP4 = &flagP4[5];
                                                temp_55 += 0x20;
                                                data_94 = &(*data_94)[8];
                                                entity_69 += 1;
                                                arg_4 = entity_69;
                                            } while (entity_69 < data_40);
                                        }

                                        char (* dest_15)[0x40];

                                        if (arg_28)
                                        {
                                            dest_15 = Terrain_OutOfTerrainRenderch(entity_67, 1);
                                            arg_8 = dest_15;
                                        }
                                        else
                                        {
                                            dest_15 = Terrain_OutOfTerrainRenderch(entity_67, 0);
                                            arg_8 = dest_15;
                                            arg_28 = 1;
                                        }

                                        void* entity_78 = g_a7f89c;
                                        int32_t source_16 = entity_68 * 0x10001;
                                        arg_20 = &arg_230;
                                        int32_t temp_57 = temp_40;
                                        arg_18 = temp_57;
                                        arg_78 = source_16;
                                        int32_t* data_102 = &(*dest_15)[*(dest_15 + 0x2ee8) * 6 + 8];
                                        int32_t arg_7c = temp_57 + (entity_41 << 2);
                                        arg_14 = data_102;

                                        do
                                        {
                                            char entity_81 = *arg_20;
                                            arg_20 += 1;

                                            if (!entity_81)
                                            {
                                                int32_t entity_82 = *temp_57;
                                                *data_102 = (entity_82 & 0xff00ff) + source_16;
                                                int16_t context_24 = 0;
                                                context_24 = *(&entity_82 + 1);
                                                data_102[1] = context_24 + source_16;
                                                data_102 += 6;
                                            }
                                            else if (!(entity_81 & 0x20))
                                            {
                                                int32_t arg_f4;
                                                int32_t* context_27 = &arg_f4;
                                                int32_t entity_83 = *arg_18;
                                                arg_44 = 3;
                                                arg_c = (data_102 - arg_14) / 6;
                                                int16_t data_107 = 0;
                                                data_107 = *(&entity_83 + 1);
                                                arg_f4 = entity_83 & 0xff00ff;
                                                int16_t arg_f8 = data_107;
                                                void arg_350;
                                                char* data_108 = &arg_350;
                                                bool flag_25_1;

                                                do
                                                {
                                                    int32_t temp_64 = 0;
                                                    temp_64 = *context_27;
                                                    char temp_65 = arg_1f0[temp_64];
                                                    memcpy(&data_108[0xffffffe0],
                                                        &(&item_10)[temp_64 * 8 + 0x140], 0x20);
                                                    *data_108 = temp_65;

                                                    if (!(temp_65 & 0x10))
                                                    {
                                                        long double fpu_val_7_56 =
                                                            g_bcabec * *(data_108 - 0x14);
                                                        int32_t arg_12c = 0;
                                                        int32_t arg_13c = 0;
                                                        int32_t arg_154 = 0;
                                                        int32_t arg_144 = 0;
                                                        *(data_108 - 0x18) = fpu_val_7_56;
                                                        *(data_108 + 8) =
                                                            (*(data_108 - 0x10) >> 0x10) * fpu_val_7_56;
                                                        *(data_108 + 0xc) = (*(data_108 - 0x10) >> 8)
                                                            * *(data_108 - 0x18);
                                                        *(data_108 + 0x10) =
                                                            *(data_108 - 0x10) * *(data_108 - 0x18);
                                                        *(data_108 + 0x14) =
                                                            *(data_108 - 8) * *(data_108 - 0x18);
                                                        *(data_108 + 0x18) =
                                                            *(data_108 - 4) * *(data_108 - 0x18);
                                                        *(data_108 + 0x1c) = (*(data_108 - 0xc)
                                                            >> 0x18) * *(data_108 - 0x18);
                                                    }

                                                    context_27 += 2;
                                                    data_108 = &data_108[0x40];
                                                    flag_25_1 = arg_44 != 1;
                                                    arg_44 -= 1;
                                                } while (flag_25_1);
                                                void** arg_15c = &arg_4;
                                                void* const arg_158;
                                                void* const* item_14_3 = &arg_158;
                                                void arg_3b0;
                                                memcpy(&item_54, &arg_3b0, 0x40);
                                                void arg_370;
                                                memcpy(&item_94, &arg_370, 0x40);
                                                arg_158 = entity_78;
                                                float arg_160 = arg_14;
                                                void arg_330;
                                                memcpy(&item_d4, &arg_330, 0x40);
                                                char** arg_164 = &arg_c;
                                                int32_t arg_168 = entity_68;
                                                Terrain_BuildMipMaps_2();
                                                source_16 = arg_78;
                                                dest_15 = arg_8;
                                                data_102 = arg_14 + arg_c * 6;
                                                temp_57 = arg_18;
                                            }

                                            temp_57 += 4;
                                            arg_18 = temp_57;
                                        } while (temp_57 < arg_7c);

                                        *(dest_15 + 0x2ee8) += (data_102 - arg_14) / 6;
                                        void* data_116 = arg_4;
                                        void* entity_92 = g_a7e078 + data_116;
                                        g_a7f89c += data_116 << 5;
                                        g_a7e078 = entity_92;
                                        i = i_2;
                                    }

                                    i += 1;
                                    i_2 = i;
                                } while (i < 3);

                                flag_8_1 = arg_10 + 1 < entity_40;
                                arg_10 += 1;
                            } while (flag_8_1);
                            int32_t data_124 = *flagP4;
                            int32_t* flagP5 = &flagP4[1];

                            if (data_124)
                            {
                                float entity_94 = g_a7e078;
                                int32_t temp_83 = g_a7f89c;
                                return_addr = &arg_198;
                                void* entity_95 = nullptr;
                                int32_t (* data_125)[0x200] = &arg_4f0;
                                arg_4 = nullptr;

                                do
                                {
                                    bool flag_19_1 = *return_addr;
                                    return_addr += 1;

                                    if (!flag_19_1)
                                    {
                                        (*data_125)[6] = flagP5[1];
                                        (*data_125)[7] = flagP5[2];
                                        (*data_125)[4] = 0xffffff;
                                        memcpy(temp_83, data_125, 0x20);
                                        entity_95 = arg_4;
                                    }

                                    flagP5 = &flagP5[3];
                                    temp_83 += 0x20;
                                    data_125 = &(*data_125)[8];
                                    entity_95 += 1;
                                    arg_4 = entity_95;
                                } while (entity_95 < entity_27);

                                if (entity_95 != data_40)
                                {
                                    do
                                    {
                                        bool flag_20_1 = *return_addr;
                                        return_addr += 1;

                                        if (!flag_20_1)
                                        {
                                            int32_t entity_99 = *flagP5 >> 0x10;
                                            (*data_125)[4] = 0xffffff;
                                            long double fpu_val_7_68 = arg_3f0[entity_99];
                                            (*data_125)[6] = flagP5[3] * fpu_val_7_68 + flagP5[1];
                                            (*data_125)[7] = flagP5[4] * fpu_val_7_68 + flagP5[2];
                                            memcpy(temp_83, data_125, 0x20);
                                            entity_95 = arg_4;
                                        }

                                        flagP5 = &flagP5[5];
                                        temp_83 += 0x20;
                                        data_125 = &(*data_125)[8];
                                        entity_95 += 1;
                                        arg_4 = entity_95;
                                    } while (entity_95 < data_40);
                                }

                                int32_t* data_126 = Terrain_OutOfTerrainRenderch(data_124, 2);
                                int32_t data_127 = g_a7f89c;
                                int32_t dest_23 = temp_40;
                                void* source_26 = entity_94 * 0x10001;
                                int32_t data_129 = data_126[0xbba];
                                arg_8 = data_126;
                                int32_t temp_85 = &arg_230;
                                arg_18 = dest_23;
                                arg_20 = source_26;
                                void** data_130 = data_126 + data_129 * 6 + 8;
                                arg_78 = dest_23 + (entity_41 << 2);

                                while (true)
                                {
                                    char entity_103 = *temp_85;

                                    if (!entity_103)
