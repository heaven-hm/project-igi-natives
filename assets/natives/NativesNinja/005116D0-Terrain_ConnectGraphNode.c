#include "005116D0-Terrain_ConnectGraphNode.h"
/* 0x005116d0 Terrain_ConnectGraphNode full linked: callers=5 callees=10 */
int32_t sub_5116d0(double* a1)

{
    double var_a0 = g_bcab28;
    double var_d0 = g_bcab2c;
    long double x87_r7_2 = g_bcabb8;
    int32_t var_224 = 0;
    double var_b8 = x87_r7_2;
    long double x87_r6 = g_bcabbc;
    double var_198 = x87_r6;
    double var_c8 = g_bcabc0 + x87_r7_2;
    double var_a8 = g_bcabc4 + x87_r6;
    double var_c0 = g_bcabc8 + x87_r7_2;
    double var_b0 = g_bcabcc + var_198;
    long double x87_r7_9 = (a1[3] + *a1 + a1[6]) * 0.33333333333333331;
    double var_1f0 = x87_r7_9;
    long double x87_r6_7 = (a1[1] + a1[4] + a1[7]) * 0.33333333333333331;
    long double x87_r5_7 = (a1[5] + a1[8] + a1[2]) * 0.33333333333333331;
    double var_1e0 = x87_r5_7;
    double var_160 = *a1 - x87_r7_9;
    double var_158 = a1[1] - x87_r6_7;
    double var_150 = a1[2] - x87_r5_7;
    double var_148 = a1[3] - x87_r7_9;
    double var_140 = a1[4] - x87_r6_7;
    double var_138 = a1[5] - var_1e0;
    double var_130 = a1[6] - x87_r7_9;
    double var_128 = a1[7] - x87_r6_7;
    double var_120 = a1[8] - var_1e0;
    int16_t top = 0;
    int32_t eax = a1[0x11];
    double var_1b0;
    double var_190;
    double var_188;
    double var_180;
    double var_170;

    if (!eax)
    {
        int32_t var_210_2 = 0x3f500000;
        sub_4a56da();
        var_1b0 = 204800.0 * 0.0012451171874999999;
        sub_4a56da();
        long double x87_r5_14 = 204800.0 * 0.0012451171874999999;
        long double x87_r4_6 = var_1b0;
        var_190 = var_160 * 0.0012451171874999999 + x87_r4_6;
        var_188 = var_158 * 0.0012451171874999999 + x87_r5_14;
        var_180 = var_148 * 0.0012451171874999999 + x87_r4_6;
        double var_178_2 = var_140 * 0.0012451171874999999 + x87_r5_14;
        var_170 = var_130 * 0.0012451171874999999 + x87_r4_6;
        double var_168_2 = var_128 * 0.0012451171874999999 + x87_r5_14;
        top = 0xfffe;
    }
    else if (eax == 1)
    {
        int32_t var_210_1 = 0x3ea9fbe7;
        var_190 = *(a1 + 0x6c);
        var_188 = a1[0xe];
        var_180 = *(a1 + 0x74);
        double var_178_1 = a1[0xf];
        var_170 = *(a1 + 0x7c);
        double var_168_1 = a1[0x10];
        top = 0;
    }

🚫🚫    /* unimplemented  {fld st0, qword [esp+0x30]} */
🚫🚫    /* unimplemented  {fsub st0, qword [&g_bcab08]} */
🚫🚫    /* unimplemented  {fld st0, qword [esp+0x38]} */
🚫🚫    /* unimplemented  {fsub st0, qword [&g_bcab10]} */
🚫🚫    /* unimplemented  {fld st0, qword [esp+0x40]} */
🚫🚫    /* unimplemented  {fsub st0, qword [&g_bcab18]} */
    int32_t i = 0;
    int32_t var_1d8;
    memcpy(&var_1d8, &g_bcaae0, 0x28);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul st0, st4} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    var_1b0 = /* var_1b0 = unimplemented  {fstp qword [esp+0x70], st0} */;
    /* unimplemented  {fstp qword [esp+0x70], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul st0, st4} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    int32_t var_1a8 = /* int32_t var_1a8 = (unimplemented  {fstp qword [esp+0x78], st0}).d */;
    /* unimplemented  {fstp qword [esp+0x78], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul st0, st4} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    /* unimplemented  {fstp st3, st0} */
    /* unimplemented  {fstp st3, st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
    int16_t top_23 = top - 1;

    do
    {
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xd0]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xc0]} */
        int32_t __saved_edi;
        double* edx_1 = &__saved_edi + i + 0x108;
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xc8]} */
        i += 0x18;
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫🚫        var_1f0 = /* var_1f0 = unimplemented  {fstp qword [esp+0x30], st0} */;
        /* unimplemented  {fstp qword [esp+0x30], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x5c]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xb8]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xa8]} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x58]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xb0]} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫🚫        double var_1e8_1 = /* double var_1e8_1 = unimplemented  {fstp qword [esp+0x38], st0} */;
        /* unimplemented  {fstp qword [esp+0x38], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x68]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xb8]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x60]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xa8]} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x64]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esp+eax+0xb0]} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫🚫        double var_1e0_1 = /* double var_1e0_1 = unimplemented  {fstp qword [esp+0x40], st0} */;
        /* unimplemented  {fstp qword [esp+0x40], st0} */
🚫🚫        /* unimplemented  {fld st0, qword [esp+0x70]} */
        memcpy(edx_1, &var_1f0, 0x18);
🚫🚫        /* unimplemented  {fadd qword [edx]} */
🚫🚫🚫        *edx_1 = /* *edx_1 = unimplemented  {fstp qword [edx], st0} */;
        /* unimplemented  {fstp qword [edx], st0} */
🚫🚫        /* unimplemented  {fld st0, qword [esp+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [esp+eax+0xf8]} */
🚫🚫🚫        *(&var_128 + i) = /* *(&var_128 + i) = unimplemented  {fstp qword [esp+eax+0xf8], st0} */;
        /* unimplemented  {fstp qword [esp+eax+0xf8], st0} */
🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fadd qword [esp+eax+0x100]} */
🚫🚫🚫        *(&var_120 + i) = /* *(&var_120 + i) = unimplemented  {fstp qword [esp+eax+0x100], st0} */;
        /* unimplemented  {fstp qword [esp+eax+0x100], st0} */
    } while (i < 0x48);

🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fld st0, qword [esp+0x118]} */
🚫🚫    /* unimplemented  {fld st0, qword [esp+0x130]} */
⋯    double var_108;
    long double temp3 = var_108;
    /* unimplemented  {fcomp st0, qword [esp+0x118]} f- temp3 */ - temp3;
    bool c0 = /* bool c0 = unimplemented  {fcomp st0, qword [esp+0x118]} f< temp3 */ < temp3;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x118]}, temp3) */, temp3);
    bool c3 = /* bool c3 = unimplemented  {fcomp st0, qword [esp+0x118]} f== temp3 */ == temp3;
    /* unimplemented  {fcomp st0, qword [esp+0x118]} */

    if (!(*(
        &((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top_23 & 7) << 0xb) + 1)
        & 0x41))
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fld st0, qword [esp+0x148]} */
⋯        double var_f0;
        long double temp5_1 = var_f0;
        /* unimplemented  {fcomp st0, qword [esp+0x130]} f- temp5_1 */ - temp5_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp st0, qword [esp+0x130]} f< temp5_1 */ < temp5_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x130]}, temp5_1) */, temp5_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, qword [esp+0x130]} f== temp5_1 */ == temp5_1;
        /* unimplemented  {fcomp st0, qword [esp+0x130]} */

        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | ((top_23 + 1) & 7) << 0xb) + 1) & 0x41)
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x130]} */
        else
🚫🚫            /* unimplemented  {fld st0, qword [esp+0x148]} */
    }

🚫🚫    /* unimplemented  {fmul st0, qword [&g_534bf0]} */
🚫🚫🚫🚫🚫    long double temp4 = 1.0;
    /* unimplemented  {fcom st0, qword [&g_5333f8]} f- temp4 */ - temp4;
    bool c0_2 = /* bool c0_2 = unimplemented  {fcom st0, qword [&g_5333f8]} f< temp4 */ < temp4;
    bool c2_2 = FCMP_UO(/* bool c2_2 =
        is_unordered.t(unimplemented  {fcom st0, qword [&g_5333f8]}, temp4) */, temp4);
    bool c3_2 = /* bool c3_2 =
        unimplemented  {fcom st0, qword [&g_5333f8]} f== temp4 */ == temp4;

    if (!(*(
        &((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top_23 & 7) << 0xb)
        + 1) & 1))
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fld st0, qword [&g_5333f8]} */
    }

🚫🚫    /* unimplemented  {fld st0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fsub st0, dword [esp+0x10]} */
🚫🚫🚫🚫    /* unimplemented  {fxch st0, st1} */
    /* unimplemented  {fxch st0, st1} */
🚫🚫🚫    /* unimplemented  {fmulp st1, st0} */
    /* unimplemented  {fmulp st1, st0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x10]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
🚫🚫🚫    int64_t var_20c = /* int64_t var_20c = unimplemented  {fistp qword [esp+0x14], st0} */;
    /* unimplemented  {fistp qword [esp+0x14], st0} */
    int16_t top_57 = top_23 + 1;
    int32_t var_224_1 = var_20c << 0x18;
    double* var_1f8 = &var_1b0;
    void var_74;
    float* ecx = &var_74;
    double* edi_2 = &var_188;
    double* esi = &var_108;
    var_20c = 3;
    int32_t i_1;

    do
    {
🚫🚫        /* unimplemented  {fld st0, qword [esi]} */
⋯        long double temp6_1 = 409.60000610351562;
        /* unimplemented  {fcomp st0, qword [&g_534be8]} f- temp6_1 */ - temp6_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp st0, qword [&g_534be8]} f< temp6_1 */ < temp6_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp st0, qword [&g_534be8]}, temp6_1) */, temp6_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp st0, qword [&g_534be8]} f== temp6_1 */ == temp6_1;
        /* unimplemented  {fcomp st0, qword [&g_534be8]} */
        int32_t edx_2;

        if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_57 & 7) << 0xb) + 1) & 0x41)
            edx_2 = 0x10;
        else
        {
🚫🚫            /* unimplemented  {fld st0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fdiv st0, qword [esi]} */
            edx_2 = 0;
🚫🚫            float var_210_3 = /* float var_210_3 = unimplemented  {fst dword [esp+0x10], st0} */;
🚫🚫            /* unimplemented  {fmul st0, qword [esi-0x10]} */
🚫🚫            /* unimplemented  {fmul st0, qword [esp+0x180]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x160]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul st0, qword [esi-0x8]} */
🚫🚫            /* unimplemented  {fmul st0, qword [esp+0x150]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x170]} */
🚫🚫            float var_1f4_1 = /* float var_1f4_1 = unimplemented  {fst dword [esp+0x2c], st0} */;
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533954]} */
🚫🚫            /* unimplemented  {fld st0, qword [edi-0x8]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            ecx[-1] = /* ecx[-1] = unimplemented  {fstp dword [ecx-0x4], st0} */;
            /* unimplemented  {fstp dword [ecx-0x4], st0} */
🚫🚫            /* unimplemented  {fld st0, qword [edi]} */
🚫🚫            /* unimplemented  {fmul st0, st1} */
🚫🚫🚫            *ecx = /* *ecx = unimplemented  {fstp dword [ecx], st0} */;
            /* unimplemented  {fstp dword [ecx], st0} */
🚫🚫            /* unimplemented  {fld st0, st2} */
🚫🚫🚫            ecx[-9] = /* ecx[-9] = unimplemented  {fstp dword [ecx-0x24], st0} */;
            /* unimplemented  {fstp dword [ecx-0x24], st0} */
🚫🚫🚫🚫            /* unimplemented  {fxch st0, st1} */
            /* unimplemented  {fxch st0, st1} */
🚫🚫🚫            ecx[-8] = /* ecx[-8] = unimplemented  {fstp dword [ecx-0x20], st0} */;
            /* unimplemented  {fstp dword [ecx-0x20], st0} */
🚫🚫🚫            ecx[-7] = /* ecx[-7] = unimplemented  {fstp dword [ecx-0x1c], st0} */;
            /* unimplemented  {fstp dword [ecx-0x1c], st0} */
🚫🚫🚫🚫🚫            long double temp7_1 = var_c8;
            /* unimplemented  {fcom st0, qword [esp+0x158]} f- temp7_1 */ - temp7_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcom st0, qword [esp+0x158]} f< temp7_1 */ < temp7_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcom st0, qword [esp+0x158]}, temp7_1) */, temp7_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcom st0, qword [esp+0x158]} f== temp7_1 */ == temp7_1;

            if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | ((top_57 - 1) & 7) << 0xb) + 1) & 1))
                edx_2 = 1;

⋯            long double temp9_1 = var_b8;
            /* unimplemented  {fcomp st0, qword [esp+0x168]} f- temp9_1 */ - temp9_1;
            bool c0_5 = /* bool c0_5 =
                unimplemented  {fcomp st0, qword [esp+0x168]} f< temp9_1 */ < temp9_1;
            bool c2_5 = FCMP_UO(/* bool c2_5 =
                is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x168]}, temp9_1) */, temp9_1);
            bool c3_5 = /* bool c3_5 =
                unimplemented  {fcomp st0, qword [esp+0x168]} f== temp9_1 */ == temp9_1;
            /* unimplemented  {fcomp st0, qword [esp+0x168]} */

            if (*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                    | (top_57 & 7) << 0xb) + 1) & 1)
                edx_2 |= 2;

🚫🚫            /* unimplemented  {fld st0, dword [esp+0x2c]} */
⋯            long double temp11_1 = var_a8;
            /* unimplemented  {fcomp st0, qword [esp+0x178]} f- temp11_1 */ - temp11_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp st0, qword [esp+0x178]} f< temp11_1 */ < temp11_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x178]}, temp11_1) */,
                temp11_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp st0, qword [esp+0x178]} f== temp11_1 */ == temp11_1;
            /* unimplemented  {fcomp st0, qword [esp+0x178]} */

            if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                    | (top_57 & 7) << 0xb) + 1) & 1))
                edx_2 |= 4;

🚫🚫            /* unimplemented  {fld st0, dword [esp+0x2c]} */
⋯            long double temp12_1 = var_198;
            /* unimplemented  {fcomp st0, qword [esp+0x88]} f- temp12_1 */ - temp12_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp st0, qword [esp+0x88]} f< temp12_1 */ < temp12_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x88]}, temp12_1) */,
                temp12_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp st0, qword [esp+0x88]} f== temp12_1 */ == temp12_1;
            /* unimplemented  {fcomp st0, qword [esp+0x88]} */

            if (*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                    | (top_57 & 7) << 0xb) + 1) & 1)
                edx_2 |= 8;
        }

        esi = &esi[3];
        edi_2 = &edi_2[2];
        ecx = &ecx[0xc];
        *var_1f8 = edx_2;
        var_1f8 += 4;
        i_1 = var_20c;
        var_20c = i_1 - 1;
    } while (i_1 != 1);
🚫🚫    /* unimplemented  {fld st0, qword [esp+0x118]} */
🚫🚫    var_20c = /* var_20c.d = unimplemented  {fst dword [esp+0x14], st0} */;
⋯    long double temp10 = 0f;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp10 */ - temp10;
    bool c0_8 = /* bool c0_8 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp10 */ < temp10;
    bool c2_8 = FCMP_UO(/* bool c2_8 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp10) */, temp10);
    bool c3_8 = /* bool c3_8 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp10 */ == temp10;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
    float var_200;

    if (*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
            | (top_57 & 7) << 0xb) + 1) & 0x41)
        var_200 = 0f;
    else
    {
        int32_t var_224_2 = a1[0x12];
        sub_4da790(&var_200, a1, var_20c, g_a7da18, *(a1 + 0x84));
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_534be4]} */
🚫🚫🚫        var_200 = /* var_200 = unimplemented  {fstp dword [esp+0x20], st0} */;
        /* unimplemented  {fstp dword [esp+0x20], st0} */
    }

🚫🚫    /* unimplemented  {fld st0, qword [esp+0x130]} */
🚫🚫    var_20c = /* var_20c.d = unimplemented  {fst dword [esp+0x14], st0} */;
⋯    long double temp13 = 0f;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp13 */ - temp13;
    bool c0_9 = /* bool c0_9 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp13 */ < temp13;
    bool c2_9 = FCMP_UO(/* bool c2_9 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp13) */, temp13);
    bool c3_9 = /* bool c3_9 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp13 */ == temp13;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
    float var_204;

    if (*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
            | (top_57 & 7) << 0xb) + 1) & 0x41)
        var_204 = 0f;
    else
    {
        int32_t var_224_3 = a1[0x12];
        sub_4da790(&var_204, &a1[3], var_20c, g_a7da18, *(a1 + 0x84));
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_534be4]} */
🚫🚫🚫        var_204 = /* var_204 = unimplemented  {fstp dword [esp+0x1c], st0} */;
        /* unimplemented  {fstp dword [esp+0x1c], st0} */
    }

🚫🚫    /* unimplemented  {fld st0, qword [esp+0x148]} */
🚫🚫    var_20c = /* var_20c.d = unimplemented  {fst dword [esp+0x14], st0} */;
⋯    long double temp14 = 0f;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp14 */ - temp14;
    bool c0_10 = /* bool c0_10 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp14 */ < temp14;
    bool c2_10 = FCMP_UO(/* bool c2_10 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp14) */, temp14);
    bool c3_10 = /* bool c3_10 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp14 */ == temp14;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
    float var_1fc;
    int16_t top_82;

    if (*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
        | (top_57 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        top_82 = top_57 - 1;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }
    else
    {
        int32_t var_224_4 = a1[0x12];
        sub_4da790(&var_1fc, &a1[6], var_20c, g_a7da18, *(a1 + 0x84));
🚫🚫        top_82 = top_57 - 1;
        /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_534be4]} */
    }

🚫🚫    var_1fc = /* var_1fc = unimplemented  {fst dword [esp+0x24], st0} */;
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2030]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x48]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_11 = /* bool c0_11 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_11 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_11 = FCMP_UO(/* bool c2_11 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_11 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_11 = /* bool c3_11 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_11 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_87;

    if (*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
        | ((top_82 - 1) & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_12 = /* bool c0_12 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_12 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_12 = FCMP_UO(/* bool c2_12 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_12 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_12 = /* bool c3_12 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_12 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_87 = top_82 - 1;

        if (*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
            | (top_87 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_87 = top_82 - 1;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
🚫🚫🚫    float var_8c = /* float var_8c = unimplemented  {fstp dword [esp+0x194], st0} */;
    /* unimplemented  {fstp dword [esp+0x194], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2034]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x4c]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_13 = /* bool c0_13 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_13 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_13 = FCMP_UO(/* bool c2_13 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_13 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_13 = /* bool c3_13 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_13 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_95;

    if (*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
        | (top_87 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_14 = /* bool c0_14 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_14 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_14 = FCMP_UO(/* bool c2_14 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_14 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_14 = /* bool c3_14 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_14 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_95 = top_87;

        if (*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
            | (top_95 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_95 = top_87;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
🚫🚫🚫    float var_88 = /* float var_88 = unimplemented  {fstp dword [esp+0x198], st0} */;
    /* unimplemented  {fstp dword [esp+0x198], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2038]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x50]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_15 = /* bool c0_15 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_15 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_15 = FCMP_UO(/* bool c2_15 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_15 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_15 = /* bool c3_15 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_15 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_103;

    if (*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
        | (top_95 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_16 = /* bool c0_16 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_16 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_16 = FCMP_UO(/* bool c2_16 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_16 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_16 = /* bool c3_16 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_16 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_103 = top_95;

        if (*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
            | (top_103 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_103 = top_95;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
    float var_80 = var_200;
🚫🚫🚫    float var_84 = /* float var_84 = unimplemented  {fstp dword [esp+0x19c], st0} */;
    /* unimplemented  {fstp dword [esp+0x19c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2030]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x54]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_17 = /* bool c0_17 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_17 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_17 = FCMP_UO(/* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_17 = /* bool c3_17 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_17 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_111;

    if (*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
        | (top_103 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_18 = /* bool c0_18 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_18 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_18 = FCMP_UO(/* bool c2_18 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_18 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_18 = /* bool c3_18 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_18 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_111 = top_103;

        if (*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa | (c3_18 ? 1 : 0) << 0xe
            | (top_111 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_111 = top_103;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
🚫🚫🚫    float var_5c = /* float var_5c = unimplemented  {fstp dword [esp+0x1c4], st0} */;
    /* unimplemented  {fstp dword [esp+0x1c4], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2034]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x58]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_19 = /* bool c0_19 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_19 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_19 = FCMP_UO(/* bool c2_19 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_19 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_19 = /* bool c3_19 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_19 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_119;

    if (*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
        | (top_111 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_20 = /* bool c0_20 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_20 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_20 = FCMP_UO(/* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_20 = /* bool c3_20 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_20 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_119 = top_111;

        if (*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
            | (top_119 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_119 = top_111;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
🚫🚫🚫    float var_58 = /* float var_58 = unimplemented  {fstp dword [esp+0x1c8], st0} */;
    /* unimplemented  {fstp dword [esp+0x1c8], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2038]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x5c]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_21 = /* bool c0_21 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_21 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_21 = FCMP_UO(/* bool c2_21 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_21 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_21 = /* bool c3_21 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_21 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_127;

    if (*(&((c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
        | (top_119 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_22 = /* bool c0_22 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_22 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_22 = FCMP_UO(/* bool c2_22 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_22 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_22 = /* bool c3_22 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_22 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_127 = top_119;

        if (*(&((c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
            | (top_127 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_127 = top_119;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
    float var_50 = var_204;
🚫🚫🚫    float var_54 = /* float var_54 = unimplemented  {fstp dword [esp+0x1cc], st0} */;
    /* unimplemented  {fstp dword [esp+0x1cc], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2030]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x60]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_23 = /* bool c0_23 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_23 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_23 = FCMP_UO(/* bool c2_23 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_23 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_23 = /* bool c3_23 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_23 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_135;

    if (*(&((c0_23 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa | (c3_23 ? 1 : 0) << 0xe
        | (top_127 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_24 = /* bool c0_24 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_24 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_24 = FCMP_UO(/* bool c2_24 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_24 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_24 = /* bool c3_24 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_24 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_135 = top_127;

        if (*(&((c0_24 ? 1 : 0) << 8 | (c2_24 ? 1 : 0) << 0xa | (c3_24 ? 1 : 0) << 0xe
            | (top_135 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_135 = top_127;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
🚫🚫🚫    float var_2c = /* float var_2c = unimplemented  {fstp dword [esp+0x1f4], st0} */;
    /* unimplemented  {fstp dword [esp+0x1f4], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2034]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x64]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_25 = /* bool c0_25 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_25 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_25 = FCMP_UO(/* bool c2_25 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_25 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_25 = /* bool c3_25 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_25 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */
    int16_t top_143;

    if (*(&((c0_25 ? 1 : 0) << 8 | (c2_25 ? 1 : 0) << 0xa | (c3_25 ? 1 : 0) << 0xe
        | (top_135 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_26 = /* bool c0_26 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_26 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_26 = FCMP_UO(/* bool c2_26 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_26 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_26 = /* bool c3_26 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_26 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
        top_143 = top_135;

        if (*(&((c0_26 ? 1 : 0) << 8 | (c2_26 ? 1 : 0) << 0xa | (c3_26 ? 1 : 0) << 0xe
            | (top_143 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        top_143 = top_135;
        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
🚫🚫🚫    float var_28 = /* float var_28 = unimplemented  {fstp dword [esp+0x1f8], st0} */;
    /* unimplemented  {fstp dword [esp+0x1f8], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_ba2038]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebx+0x68]} */
🚫🚫    /* unimplemented  {fld st0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
    bool c0_27 = /* bool c0_27 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_27 =
        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
    bool c2_27 = FCMP_UO(/* bool c2_27 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
        /* bool c2_27 =
        is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
    bool c3_27 = /* bool c3_27 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */ == /* bool c3_27 =
        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
    /* unimplemented  {fcomp st0, st1} */

    if (*(&((c0_27 ? 1 : 0) << 8 | (c2_27 ? 1 : 0) << 0xa | (c3_27 ? 1 : 0) << 0xe
        | (top_143 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_28 = /* bool c0_28 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_28 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_28 = FCMP_UO(/* bool c2_28 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_28 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_28 = /* bool c3_28 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_28 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */

        if (*(&((c0_28 ? 1 : 0) << 8 | (c2_28 ? 1 : 0) << 0xa | (c3_28 ? 1 : 0) << 0xe
            | (top_143 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [&g_5333ec]} */
    }

    int32_t esi_1 = *(&var_1b0 + 4);
    int32_t edi_3 = var_1b0;
🚫🚫    /* unimplemented  {fmul st0, dword [&g_5336d4]} */
    int32_t ecx_8 = (var_1a8 | esi_1 | edi_3) & 0x10;
    int32_t result = var_1a8 & esi_1 & edi_3;
🚫🚫🚫    float var_24 = /* float var_24 = unimplemented  {fstp dword [esp+0x1fc], st0} */;
    /* unimplemented  {fstp dword [esp+0x1fc], st0} */
🚫🚫🚫    float var_20 = /* float var_20 = unimplemented  {fstp dword [esp+0x200], st0} */;
    /* unimplemented  {fstp dword [esp+0x200], st0} */
    void var_118;
    void var_100;
    void var_e8;
    void var_98;
    void var_68;
    void var_38;

    if (ecx_8 | result && !(result & 0x10) && ecx_8)
        return sub_512040(&var_98, &var_68, &var_38, &var_118, &var_100, &var_e8, &var_190,
            &var_180, &var_170, edi_3, esi_1, var_1a8);
    return result;
}
