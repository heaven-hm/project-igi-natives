#include "00462390-Human_GroundQuery.h"
/* 0x00462390 Human_GroundQuery full linked: callers=2 callees=40 */
int32_t* sub_462390(void* a1, double* a2, int32_t* a3, int32_t* a4 @ 0x14, float a5)

{
    int32_t var_23c = 0;
    *(a1 + 0x710) = 0;
    float var_1d0;
    float* var_244 = &var_1d0;
    char var_225 = 0;
    *(a1 + 0x714) = 0x41d00000;
    float* eax = sub_48a340(var_244, a1, var_23c);
    float var_210 = *eax;
    int32_t var_20c = eax[1];
    float var_208 = eax[2];
    long double x87_r7;

    if (!*(a1 + 0x33d))
        x87_r7 = 1638.4000000000001;
    else
        x87_r7 = 819.20000000000005;

    int32_t* esi = a3;
    long double x87_r7_2 = x87_r7 - var_208 + *(esi + 0x10);
    int32_t eax_3 = esi[2];
    int32_t var_a4 = esi[1];
    void* edx_2 = *(a1 + 0x800);
    int32_t var_a8 = *esi;
    int32_t var_a0 = eax_3;
    double var_98 = x87_r7_2;
    int16_t top = 0;
    int32_t var_9c = esi[3];
    double var_1f8;
    int32_t var_1e8;
    int32_t* var_188;
    double var_180;
    double var_170;
    float var_150;
    int32_t var_14c;
    int32_t var_148;
    int32_t* var_130;
    int32_t* eax_4;
    float var_220[0x4];

    if (!edx_2)
    {
        int32_t var_23c_14 = 1;
        int32_t var_240_10 = 0xffffffff;
        void var_1b4;
        double* var_244_2 = &var_1b4;
        void var_90;
        memcpy(&var_90, esi, 0x18);
        int32_t var_1e0 = 0;
        int32_t var_1dc_1 = 0xc14f4000;
        void* var_1b0_1 = a1;
        int32_t var_1d8_1 = 0;
        int32_t var_1d4_1 = 0x40c00000;
        char eax_25 = Level_CheckQTaskID_3();
        sub_4cbe40(Level_StartMission_4(), &var_188, &var_a8, 2, &var_1e0, eax_25, var_244_2,
            var_240_10, var_23c_14);
        int32_t var_c0;

        if (var_c0)
        {
            float var_d8;
            long double x87_r7_22 = var_d8;
            long double temp1_1 = 0f;
            x87_r7_22 - temp1_1;
            top = 0;

            if (*(&((x87_r7_22 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                float* eax_29 = sub_48a340(&var_220, a1, 0);
                var_1d0 = *eax_29;
                int32_t var_1cc_1 = eax_29[1];
                double var_b8;
                long double x87_r7_24 = eax_29[2] + var_b8;
                *(a1 + 0x720) = x87_r7_24;
                long double temp2_1 = 7372.8000000000002;
                x87_r7_24 - temp2_1;
                top = 0;

                if (*(&((x87_r7_24 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_24, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_24 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                    *a4 |= 0x10;
            }
        }

        if (var_130)
        {
            esi = a3;

            if (*(a1 + 0x800))
                goto label_462984;

            goto label_462866;
        }

        int32_t var_23c_16 = 1;
        int32_t var_240_12 = 0xffffffff;
        double* var_244_4 = &var_1b4;
        var_1e0 = 0;
        int32_t var_1dc_2 = 0x414f4000;
        char eax_32 = Level_CheckQTaskID_3();
        sub_4cbe40(Level_StartMission_4(), &var_188, &var_a8, 1, &var_1e0, eax_32, var_244_4,
            var_240_12, var_23c_16);
    label_462841:
        esi = a3;
    }
    else
    {
        var_225 = 0;
        __builtin_memset(&var_188, 0, 0xe0);
        *(a1 + 0x710) = 0;
        *(a1 + 0x714) = 0;
        eax_4 = *(edx_2 + 0x3b6c);

        if (eax_4)
        {
            void* eax_5 = sub_4f9720(eax_4, *(edx_2 + 0x3e2c));
            memcpy(&var_180, esi, 0x18);
            var_170 = var_170 - var_208;
            top = 0;

            if (eax_5)
            {
                var_130 = 1;
                int32_t var_13c_1 = *(eax_5 + 0x138);
                var_150 = 0f;
                var_14c = 0;
                var_148 = 0x3f800000;
            }

            void* esi_1 = edx_2;

            if (sub_4af9b0(esi_1 + 0xe0) <= 0)
            {
                void* eax_22 = sub_4f9720(*(esi_1 + 0x3b6c), *(esi_1 + 0x3e2c));

                if (eax_22)
                {
                    sub_4f9770(&var_1f8, eax_22);
                    var_170 = var_1e8;
                    int32_t var_1e4;
                    *(&var_170 + 4) = var_1e4;
                }
            }
            else
            {
                int32_t* edi_2 = *(esi_1 + 0xe0);
                var_220[0] = edi_2;

                if (*edi_2)
                {
                    if (sub_4b3320(a1 + 0x820))
                    {
                        memcpy(a1 + 0x808, &var_180, 0x18);
                        memcpy(a1 + 0x820, &var_180, 0x18);
                        edi_2 = var_220[0];
                    }

                    long double st0_1 = sub_4b32b0(sub_452920(edi_2), a1 + 0x820);
                    long double temp5_1 = 100.0;
                    st0_1 - temp5_1;

                    if (!(*(&((st0_1 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(st0_1, temp5_1) ? 1 : 0) << 0xa
                        | (st0_1 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        memcpy(a1 + 0x808, a1 + 0x820, 0x18);
                        memcpy(a1 + 0x820, sub_452920(var_220[0]), 0x18);
                    }

                    double* var_23c_6 = &var_1f8;
                    var_1f8 = *(a1 + 0x820) - var_180;
                    double var_178;
                    double var_1f0_1 = *(a1 + 0x828) - var_178;
                    var_1e8 = *(a1 + 0x830) - var_170;
                    top = 0;

                    if (!sub_4b3320(var_23c_6))
                    {
                        var_220[0] = sub_4b3130(&var_1f8);
                        var_1d0 = *(a1 + 0x830) - *(a1 + 0x818);
                        long double st0_3 = sub_4b32b0(a1 + 0x820, a1 + 0x808);
                        long double x87_r7_16 = var_220[0] / st0_3;
                        long double temp6_1 = 0.0;
                        x87_r7_16 - temp6_1;
                        long double x87_r7_17;

                        if (!(*(&((x87_r7_16 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_16, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_16 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double st0_4 = sub_4b32b0(a1 + 0x820, a1 + 0x808);
                            long double x87_r7_19 = var_220[0] / st0_4;
                            long double temp8_1 = 1.0;
                            x87_r7_19 - temp8_1;

                            if (*(&((x87_r7_19 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_19, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_19 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double st0_5 = sub_4b32b0(a1 + 0x820, a1 + 0x808);
                                x87_r7_17 = var_220[0] / st0_5;
                            }
                            else
                                x87_r7_17 = 1.0;
                        }
                        else
                            x87_r7_17 = 0.0;

                        esi_1 = edx_2;
                        var_170 = (1.0 - x87_r7_17) * var_1d0 + *(a1 + 0x818);
                        top = 0;
                    }
                    else
                    {
                        esi_1 = edx_2;
                        var_170 = *(a1 + 0x830);
                        *(&var_170 + 4) = *(a1 + 0x834);
                    }
                }
            }

            void* esi_5 = *(esi_1 + 0x3b6c);

            if (!*(esi_5 + 0x64))
            {
                sub_463550(a1);
                var_225 = 1;
            }
            else if (*(a1 + 0x76c))
                var_225 = 1;
            else
            {
                sub_463310(a1, *(esi_5 + 0x14));
                var_225 = 1;
            }

            goto label_462841;
        }
    }
    int32_t* edx_7;

    if (var_130 && !*(a1 + 0x800))
    {
    label_462866:
        edx_7 = var_188;

        if (edx_7)
        {
            memcpy(&var_1f8, &var_180, 0x18);
            var_1e8 = var_170 + 204.80000000000001;
            long double x87_r7_28 = var_1e8 - 2048.0;
            double* var_1ac = &var_1f8;
            float* var_1a8_1 = &var_1d0;
            memcpy(&var_1d0, &var_1f8, 0x18);
            double var_1c0_1 = x87_r7_28;
            int32_t var_78;
            int32_t* var_18c_1 = &var_78;
            int32_t eax_34 = 0;
            int32_t* var_20_1 = nullptr;
            var_78 = 0;
            char var_1a0_1 = 0xff;
            int32_t var_19c_1 = 0;
            int32_t var_1a4_1 = 1;
            int32_t var_198 = 0;
            int32_t var_194_1 = 0;
            int32_t var_190;
            __builtin_strncpy(&var_190, "DCBA", 4);
            eax_34 = edx_7[7];
            eax_4 = *((eax_34 << 2) + &g_a9a6e0);

            if (eax_4)
            {
                eax_4(edx_7, &var_1ac);
                int32_t var_2c;

                if (var_20_1)
                    int32_t var_13c_2 = var_2c;
                edx_7 = var_188;
            }

            esi = a3;
        }

        long double x87_r7_31 = *(esi + 0x10) - var_170 - var_208;
        *(a1 + 0x710) = x87_r7_31;
        long double x87_r6_5 = a5;
        x87_r7_31 - x87_r6_5;
        top = 0;

        if (*(&((x87_r7_31 < x87_r6_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_31, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r7_31 == x87_r6_5 ? 1 : 0) << 0xe) + 1) & 0x41 || var_225)
            goto label_4629ac;

        goto label_462a6b;
    }

label_462984:
    edx_7 = var_188;

    if (!var_225)
    {
    label_462a6b:
        int32_t* var_23c_21 = nullptr;
        *a4 &= 0xfffffffb;
        sub_463640(a1, var_23c_21);
        *(a1 + 0x728) = 0;
        *(a1 + 0x72c) = 0;
        *(a1 + 0x730) = 0;
    }
    else
    {
    label_4629ac:
        *a4 |= 4;
        *(esi + 0x10) = var_208 + var_170;
        int32_t ecx_10;

        if (!edx_7)
        {
            ecx_10 = sub_463640(a1, nullptr);
            *(a1 + 0x728) = 0;
            *(a1 + 0x72c) = 0;
            *(a1 + 0x730) = 0;
        }
        else
            ecx_10 = sub_463640(a1, edx_7);

        int32_t var_200_1 = 0;
        long double x87_r7_36 = *esi - *a2;
        int32_t var_1fc_1 = 0;
        var_210 = x87_r7_36;
        var_208 = *(esi + 8) - a2[1];
        long double temp3_1 = 0.0;
        x87_r7_36 - temp3_1;
        long double x87_r7_37;
        long double temp4_1;

        if (*(&((x87_r7_36 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_36, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_36 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            x87_r7_37 = var_208;
            temp4_1 = 0.0;
            x87_r7_37 - temp4_1;
        }

        int16_t top_1;

        if (!(*(&((x87_r7_36 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_36, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_36 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !(*(&(
            (x87_r7_37 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_37, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_37 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double st0_6 = sub_4b3130(&var_210);
            long double x87_r6_10 = *(esi + 0x10) - a2[2];
            int32_t var_240_16 = ecx_10;
            var_240_16 = x87_r6_10 / sqrtl(x87_r6_10 * x87_r6_10 + st0_6 * st0_6);
            top_1 = 0;
            sub_4b2840(var_240_16);
        }
        else
            top_1 = 0xffff;

🚫🚫        *(a1 + 0x718) = /* *(a1 + 0x718) = unimplemented  {fst dword [ebx+0x718], st0} */;
🚫🚫        /* unimplemented  {fmul st0, dword [&g_533988]} */
🚫🚫🚫        *(a1 + 0x71c) = /* *(a1 + 0x71c) = unimplemented  {fstp dword [ebx+0x71c], st0} */;
        /* unimplemented  {fstp dword [ebx+0x71c], st0} */
        top = top_1 + 1;
    }

    memcpy(a1 + 0x6a0, &var_188, 0x70);

    if (!var_130)
    {
        *(a1 + 0x7ec) = 0;
        return var_130;
    }

    memcpy(a1 + 0x7d0, &var_180, 0x18);
🚫🚫    /* unimplemented  {fld st0, qword [ebx+0x710]} */
🚫🚫🚫    *(a1 + 0x7f0) = /* *(a1 + 0x7f0) = unimplemented  {fstp dword [ebx+0x7f0], st0} */;
    /* unimplemented  {fstp dword [ebx+0x7f0], st0} */
    *(a1 + 0x7f4) = var_150;
    *(a1 + 0x7f8) = var_14c;
    int32_t eax_44 = var_148;
    *(a1 + 0x7fc) = eax_44;
🚫🚫    /* unimplemented  {fld st0, dword [ecx]} */
⋯    long double temp7 = 0f;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp7 */ - temp7;
    bool c0_9 = /* bool c0_9 = unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp7 */ < temp7;
    bool c2_9 = FCMP_UO(/* bool c2_9 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp7) */, temp7);
    bool c3_9 = /* bool c3_9 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp7 */ == temp7;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
    eax_44 = (c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe | (top & 7) << 0xb;

    if (!(*(&eax_44 + 1) & 0x40))
    {
🚫🚫    label_462b27:
        /* unimplemented  {fld st0, dword [ebx+0x7fc]} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x7f8]} */
🚫🚫        /* unimplemented  {fld st0, dword [ecx]} */
🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fmul st0, st1} */
🚫🚫        /* unimplemented  {fld st0, st2} */
🚫🚫        /* unimplemented  {fmul st0, st3} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, st3} */
🚫🚫        /* unimplemented  {fmul st0, st4} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫        /* unimplemented  {fsqrt } */
🚫🚫🚫        /* unimplemented  {fstp st3, st0} */
        /* unimplemented  {fstp st3, st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fdivr st0, qword [&g_5333f8]} */
🚫🚫        /* unimplemented  {fld st0, dword [ecx]} */
🚫🚫        /* unimplemented  {fmul st0, st1} */
🚫🚫🚫        *(a1 + 0x7f4) = /* *(a1 + 0x7f4) = unimplemented  {fstp dword [ecx], st0} */;
        /* unimplemented  {fstp dword [ecx], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x7f8]} */
🚫🚫        /* unimplemented  {fmul st0, st1} */
🚫🚫🚫        *(a1 + 0x7f8) = /* *(a1 + 0x7f8) = unimplemented  {fstp dword [ebx+0x7f8], st0} */;
        /* unimplemented  {fstp dword [ebx+0x7f8], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x7fc]} */
🚫🚫        /* unimplemented  {fmul st0, st1} */
🚫🚫🚫        *(a1 + 0x7fc) = /* *(a1 + 0x7fc) = unimplemented  {fstp dword [ebx+0x7fc], st0} */;
        /* unimplemented  {fstp dword [ebx+0x7fc], st0} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
    }
    else
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x7f8]} */
⋯        long double temp9_1 = 0f;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp9_1 */ - temp9_1;
        bool c0_10 = /* bool c0_10 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp9_1 */ < temp9_1;
        bool c2_10 = FCMP_UO(/* bool c2_10 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp9_1) */, temp9_1);
        bool c3_10 = /* bool c3_10 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp9_1 */ == temp9_1;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
        eax_44 = (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
            | (top & 7) << 0xb;

        if (!(*(&eax_44 + 1) & 0x40))
            goto label_462b27;

🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x7fc]} */
⋯        long double temp10_1 = 0f;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp10_1 */ - temp10_1;
        bool c0_11 = /* bool c0_11 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp10_1 */ < temp10_1;
        bool c2_11 = FCMP_UO(/* bool c2_11 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp10_1) */,
            temp10_1);
        bool c3_11 = /* bool c3_11 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp10_1 */ == temp10_1;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
        eax_44 = (c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
            | (top & 7) << 0xb;

        if (!(*(&eax_44 + 1) & 0x40))
            goto label_462b27;
    }

    *(a1 + 0x7ec) = 1;
    return eax_44;
}
