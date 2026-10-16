#include "Terrain_ConnectGraphNode.h"
int32_t Terrain_ConnectGraphNode(double* a1)

{
    double v_a0 = g_bcab28;
    double v_d0 = g_bcab2c;
    long double x87_r7_2 = g_bcabb8;
    int32_t v_224 = 0;
    double v_b8 = x87_r7_2;
    long double fpu6 = g_bcabbc;
    double v_198 = fpu6;
    double v_c8 = g_bcabc0 + x87_r7_2;
    double v_a8 = g_bcabc4 + fpu6;
    double v_c0 = g_bcabc8 + x87_r7_2;
    double v_b0 = g_bcabcc + v_198;
    long double x87_r7_9 = (a1[3] + *a1 + a1[6]) * 0.33333333333333331;
    double v_1f0 = x87_r7_9;
    long double x87_r6_7 = (a1[1] + a1[4] + a1[7]) * 0.33333333333333331;
    long double x87_r5_7 = (a1[5] + a1[8] + a1[2]) * 0.33333333333333331;
    double v_1e0 = x87_r5_7;
    double v_160 = *a1 - x87_r7_9;
    double v_158 = a1[1] - x87_r6_7;
    double v_150 = a1[2] - x87_r5_7;
    double v_148 = a1[3] - x87_r7_9;
    double v_140 = a1[4] - x87_r6_7;
    double v_138 = a1[5] - v_1e0;
    double v_130 = a1[6] - x87_r7_9;
    double v_128 = a1[7] - x87_r6_7;
    double v_120 = a1[8] - v_1e0;
    int16_t idx = 0;
    int32_t valA = a1[0x11];
    double v_1b0;
    double v_190;
    double v_188;
    double v_180;
    double v_170;

    if (!valA)
    {
        int32_t v_210_2 = 0x3f500000;
        Camera_ApplyHandiCam_5();
        v_1b0 = 204800.0 * 0.0012451171874999999;
        Camera_ApplyHandiCam_5();
        long double x87_r5_14 = 204800.0 * 0.0012451171874999999;
        long double x87_r4_6 = v_1b0;
        v_190 = v_160 * 0.0012451171874999999 + x87_r4_6;
        v_188 = v_158 * 0.0012451171874999999 + x87_r5_14;
        v_180 = v_148 * 0.0012451171874999999 + x87_r4_6;
        double v_178_2 = v_140 * 0.0012451171874999999 + x87_r5_14;
        v_170 = v_130 * 0.0012451171874999999 + x87_r4_6;
        double v_168_2 = v_128 * 0.0012451171874999999 + x87_r5_14;
        idx = 0xfffe;
    }
    else if (valA == 1)
    {
        int32_t v_210_1 = 0x3ea9fbe7;
        v_190 = *(a1 + 0x6c);
        v_188 = a1[0xe];
        v_180 = *(a1 + 0x74);
        double v_178_1 = a1[0xf];
        v_170 = *(a1 + 0x7c);
        double v_168_1 = a1[0x10];
        idx = 0;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x30]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [&g_bcab08]} */
🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x38]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [&g_bcab10]} */
🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x40]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [&g_bcab18]} */
    int32_t i = 0;
    int32_t v_1d8;
    memcpy(&v_1d8, &g_bcaae0, 0x28);
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    v_1b0 = /* v_1b0 = unimplemented  {fstp qword [esp+0x70], fp0} */;
    /* unimplemented  {fstp qword [esp+0x70], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    int32_t v_1a8 = /* int32_t v_1a8 = (unimplemented  {fstp qword [esp+0x78], fp0}).d */;
    /* unimplemented  {fstp qword [esp+0x78], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp3, fp0} */
    /* unimplemented  {fstp fp3, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
    int16_t top_23 = idx - 1;

    do
    {
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x50]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xd0]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x48]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xc0]} */
        int32_t saved_dst;
        double* tmpD1 = &saved_dst + i + 0x108;
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x4c]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xc8]} */
        i += 0x18;
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫        v_1f0 = /* v_1f0 = unimplemented  {fstp qword [esp+0x30], fp0} */;
        /* unimplemented  {fstp qword [esp+0x30], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x5c]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xb8]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x54]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xa8]} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x58]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xb0]} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫        double v_1e8_1 = /* double v_1e8_1 = unimplemented  {fstp qword [esp+0x38], fp0} */;
        /* unimplemented  {fstp qword [esp+0x38], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x68]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xb8]} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x60]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xa8]} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x64]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [esp+valA+0xb0]} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫        double v_1e0_1 = /* double v_1e0_1 = unimplemented  {fstp qword [esp+0x40], fp0} */;
        /* unimplemented  {fstp qword [esp+0x40], fp0} */
🚫🚫        /* unimplemented  {fld fp0, qword [esp+0x70]} */
        memcpy(tmpD1, &v_1f0, 0x18);
🚫🚫        /* unimplemented  {fadd qword [tmpD]} */
🚫🚫🚫        *tmpD1 =
        /* unimplemented  {fstp qword [tmpD], fp0} */
🚫🚫        /* unimplemented  {fld fp0, qword [esp+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [esp+valA+0xf8]} */
🚫🚫🚫        *(&v_128 + i) =
        /* unimplemented  {fstp qword [esp+valA+0xf8], fp0} */
🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fadd qword [esp+valA+0x100]} */
🚫🚫🚫        *(&v_120 + i) =
        /* unimplemented  {fstp qword [esp+valA+0x100], fp0} */
    } while (i < 0x48);

🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x118]} */
🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x130]} */
⋯    double v_108;
    long double f3 = v_108;
    /* unimplemented  {fcomp fp0, qword [esp+0x118]} f- f3 */ - f3;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, qword [esp+0x118]} f< f3 */ < f3;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x118]}, f3) */, f3);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, qword [esp+0x118]} f== f3 */ == f3;
    /* unimplemented  {fcomp fp0, qword [esp+0x118]} */

    if (!(*(
        &((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top_23 & 7) << 0xb) + 1)
        & 0x41))
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, qword [esp+0x148]} */
⋯        double v_f0;
        long double f5_1 = v_f0;
        /* unimplemented  {fcomp fp0, qword [esp+0x130]} f- f5_1 */ - f5_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, qword [esp+0x130]} f< f5_1 */ < f5_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x130]}, f5_1) */, f5_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, qword [esp+0x130]} f== f5_1 */ == f5_1;
        /* unimplemented  {fcomp fp0, qword [esp+0x130]} */

        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | ((top_23 + 1) & 7) << 0xb) + 1) & 0x41)
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x130]} */
        else
🚫🚫            /* unimplemented  {fld fp0, qword [esp+0x148]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, qword [&g_534bf0]} */
🚫🚫🚫🚫🚫    long double f4 = 1.0;
    /* unimplemented  {fcom fp0, qword [&g_5333f8]} f- f4 */ - f4;
    bool c0_2 = /* bool c0_2 = unimplemented  {fcom fp0, qword [&g_5333f8]} f< f4 */ < f4;
    bool c2_2 = FCMP_UO(/* bool c2_2 =
        is_unordered.t(unimplemented  {fcom fp0, qword [&g_5333f8]}, f4) */, f4);
    bool c3_2 = /* bool c3_2 =
        unimplemented  {fcom fp0, qword [&g_5333f8]} f== f4 */ == f4;

    if (!(*(
        &((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top_23 & 7) << 0xb)
        + 1) & 1))
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, qword [&g_5333f8]} */
    }

🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333e0]} */
🚫🚫    /* unimplemented  {fsub fp0, dword [esp+0x10]} */
🚫🚫🚫🚫    /* unimplemented  {fxch fp0, fp1} */
    /* unimplemented  {fxch fp0, fp1} */
🚫🚫🚫    /* unimplemented  {fmulp fp1, fp0} */
    /* unimplemented  {fmulp fp1, fp0} */
🚫🚫    /* unimplemented  {fadd dword [esp+0x10]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
🚫🚫🚫    int64_t v_20c = /* int64_t v_20c = unimplemented  {fistp qword [esp+0x14], fp0} */;
    /* unimplemented  {fistp qword [esp+0x14], fp0} */
    int16_t top_57 = top_23 + 1;
    int32_t v_224_1 = v_20c << 0x18;
    double* v_1f8 = &v_1b0;
    void v_74;
    float* objC = &v_74;
    double* dstD2 = &v_188;
    double* srcS = &v_108;
    v_20c = 3;
    int32_t i_1;

    do
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS]} */
⋯        long double f6_1 = 409.60000610351562;
        /* unimplemented  {fcomp fp0, qword [&g_534be8]} f- f6_1 */ - f6_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp fp0, qword [&g_534be8]} f< f6_1 */ < f6_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [&g_534be8]}, f6_1) */, f6_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp fp0, qword [&g_534be8]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, qword [&g_534be8]} */
        int32_t tmpD2;

        if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_57 & 7) << 0xb) + 1) & 0x41)
            tmpD2 = 0x10;
        else
        {
🚫🚫            /* unimplemented  {fld fp0, qword [&g_5333f8]} */
🚫🚫            /* unimplemented  {fdiv fp0, qword [srcS]} */
            tmpD2 = 0;
🚫🚫            float v_210_3 = /* float v_210_3 = unimplemented  {fst dword [esp+0x10], fp0} */;
🚫🚫            /* unimplemented  {fmul fp0, qword [srcS-0x10]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [esp+0x180]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x160]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [srcS-0x8]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [esp+0x150]} */
🚫🚫            /* unimplemented  {fadd qword [esp+0x170]} */
🚫🚫            float v_1f4_1 = /* float v_1f4_1 = unimplemented  {fst dword [esp+0x2c], fp0} */;
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533954]} */
🚫🚫            /* unimplemented  {fld fp0, qword [dstD-0x8]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            objC[-1] = /* objC[-1] = unimplemented  {fstp dword [objC-0x4], fp0} */;
            /* unimplemented  {fstp dword [objC-0x4], fp0} */
🚫🚫            /* unimplemented  {fld fp0, qword [dstD]} */
🚫🚫            /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫            *objC =
            /* unimplemented  {fstp dword [objC], fp0} */
🚫🚫            /* unimplemented  {fld fp0, fp2} */
🚫🚫🚫            objC[-9] = /* objC[-9] = unimplemented  {fstp dword [objC-0x24], fp0} */;
            /* unimplemented  {fstp dword [objC-0x24], fp0} */
🚫🚫🚫🚫            /* unimplemented  {fxch fp0, fp1} */
            /* unimplemented  {fxch fp0, fp1} */
🚫🚫🚫            objC[-8] = /* objC[-8] = unimplemented  {fstp dword [objC-0x20], fp0} */;
            /* unimplemented  {fstp dword [objC-0x20], fp0} */
🚫🚫🚫            objC[-7] = /* objC[-7] = unimplemented  {fstp dword [objC-0x1c], fp0} */;
            /* unimplemented  {fstp dword [objC-0x1c], fp0} */
🚫🚫🚫🚫🚫            long double f7_1 = v_c8;
            /* unimplemented  {fcom fp0, qword [esp+0x158]} f- f7_1 */ - f7_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcom fp0, qword [esp+0x158]} f< f7_1 */ < f7_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcom fp0, qword [esp+0x158]}, f7_1) */, f7_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcom fp0, qword [esp+0x158]} f== f7_1 */ == f7_1;

            if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | ((top_57 - 1) & 7) << 0xb) + 1) & 1))
                tmpD2 = 1;

⋯            long double f9_1 = v_b8;
            /* unimplemented  {fcomp fp0, qword [esp+0x168]} f- f9_1 */ - f9_1;
            bool c0_5 = /* bool c0_5 =
                unimplemented  {fcomp fp0, qword [esp+0x168]} f< f9_1 */ < f9_1;
            bool c2_5 = FCMP_UO(/* bool c2_5 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x168]}, f9_1) */, f9_1);
            bool c3_5 = /* bool c3_5 =
                unimplemented  {fcomp fp0, qword [esp+0x168]} f== f9_1 */ == f9_1;
            /* unimplemented  {fcomp fp0, qword [esp+0x168]} */

            if (*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                    | (top_57 & 7) << 0xb) + 1) & 1)
                tmpD2 |= 2;

🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x2c]} */
⋯            long double f11_1 = v_a8;
            /* unimplemented  {fcomp fp0, qword [esp+0x178]} f- f11_1 */ - f11_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp fp0, qword [esp+0x178]} f< f11_1 */ < f11_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x178]}, f11_1) */,
                f11_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp fp0, qword [esp+0x178]} f== f11_1 */ == f11_1;
            /* unimplemented  {fcomp fp0, qword [esp+0x178]} */

            if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                    | (top_57 & 7) << 0xb) + 1) & 1))
                tmpD2 |= 4;

🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x2c]} */
⋯            long double f12_1 = v_198;
            /* unimplemented  {fcomp fp0, qword [esp+0x88]} f- f12_1 */ - f12_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp fp0, qword [esp+0x88]} f< f12_1 */ < f12_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x88]}, f12_1) */,
                f12_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp fp0, qword [esp+0x88]} f== f12_1 */ == f12_1;
            /* unimplemented  {fcomp fp0, qword [esp+0x88]} */

            if (*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                    | (top_57 & 7) << 0xb) + 1) & 1)
                tmpD2 |= 8;
        }

        srcS = &srcS[3];
        dstD2 = &dstD2[2];
        objC = &objC[0xc];
        *v_1f8 = tmpD2;
        v_1f8 += 4;
        i_1 = v_20c;
        v_20c = i_1 - 1;
    } while (i_1 != 1);
🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x118]} */
🚫🚫    v_20c = /* v_20c.d = unimplemented  {fst dword [esp+0x14], fp0} */;
⋯    long double f10 = 0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f10 */ - f10;
    bool c0_8 = /* bool c0_8 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f10 */ < f10;
    bool c2_8 = FCMP_UO(/* bool c2_8 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f10) */, f10);
    bool c3_8 = /* bool c3_8 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f10 */ == f10;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    float v_200;

    if (*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
            | (top_57 & 7) << 0xb) + 1) & 0x41)
        v_200 = 0f;
    else
    {
        int32_t v_224_2 = a1[0x12];
        Render_SetupLighting_12(&v_200, a1, v_20c, g_a7da18, *(a1 + 0x84));
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x38]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_534be4]} */
🚫🚫🚫        v_200 = /* v_200 = unimplemented  {fstp dword [esp+0x20], fp0} */;
        /* unimplemented  {fstp dword [esp+0x20], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x130]} */
🚫🚫    v_20c = /* v_20c.d = unimplemented  {fst dword [esp+0x14], fp0} */;
⋯    long double f13 = 0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f13 */ - f13;
    bool c0_9 = /* bool c0_9 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f13 */ < f13;
    bool c2_9 = FCMP_UO(/* bool c2_9 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f13) */, f13);
    bool c3_9 = /* bool c3_9 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f13 */ == f13;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    float v_204;

    if (*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
            | (top_57 & 7) << 0xb) + 1) & 0x41)
        v_204 = 0f;
    else
    {
        int32_t v_224_3 = a1[0x12];
        Render_SetupLighting_12(&v_204, &a1[3], v_20c, g_a7da18, *(a1 + 0x84));
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_534be4]} */
🚫🚫🚫        v_204 = /* v_204 = unimplemented  {fstp dword [esp+0x1c], fp0} */;
        /* unimplemented  {fstp dword [esp+0x1c], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [esp+0x148]} */
🚫🚫    v_20c = /* v_20c.d = unimplemented  {fst dword [esp+0x14], fp0} */;
⋯    long double f14 = 0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f14 */ - f14;
    bool c0_10 = /* bool c0_10 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f14 */ < f14;
    bool c2_10 = FCMP_UO(/* bool c2_10 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f14) */, f14);
    bool c3_10 = /* bool c3_10 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f14 */ == f14;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    float v_1fc;
    int16_t top_82;

    if (*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
        | (top_57 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        top_82 = top_57 - 1;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }
    else
    {
        int32_t v_224_4 = a1[0x12];
        Render_SetupLighting_12(&v_1fc, &a1[6], v_20c, g_a7da18, *(a1 + 0x84));
🚫🚫        top_82 = top_57 - 1;
        /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_534be4]} */
    }

🚫🚫    v_1fc = /* v_1fc = unimplemented  {fst dword [esp+0x24], fp0} */;
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2030]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x48]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_11 = /* bool c0_11 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_11 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_11 = FCMP_UO(/* bool c2_11 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_11 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_11 = /* bool c3_11 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_11 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_87;

    if (*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
        | ((top_82 - 1) & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_12 = /* bool c0_12 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_12 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_12 = FCMP_UO(/* bool c2_12 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_12 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_12 = /* bool c3_12 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_12 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_87 = top_82 - 1;

        if (*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
            | (top_87 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_87 = top_82 - 1;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
🚫🚫🚫    float v_8c = /* float v_8c = unimplemented  {fstp dword [esp+0x194], fp0} */;
    /* unimplemented  {fstp dword [esp+0x194], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2034]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x4c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_13 = /* bool c0_13 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_13 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_13 = FCMP_UO(/* bool c2_13 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_13 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_13 = /* bool c3_13 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_13 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_95;

    if (*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
        | (top_87 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_14 = /* bool c0_14 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_14 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_14 = FCMP_UO(/* bool c2_14 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_14 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_14 = /* bool c3_14 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_14 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_95 = top_87;

        if (*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
            | (top_95 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_95 = top_87;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
🚫🚫🚫    float v_88 = /* float v_88 = unimplemented  {fstp dword [esp+0x198], fp0} */;
    /* unimplemented  {fstp dword [esp+0x198], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2038]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x50]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_15 = /* bool c0_15 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_15 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_15 = FCMP_UO(/* bool c2_15 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_15 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_15 = /* bool c3_15 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_15 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_103;

    if (*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
        | (top_95 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_16 = /* bool c0_16 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_16 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_16 = FCMP_UO(/* bool c2_16 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_16 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_16 = /* bool c3_16 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_16 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_103 = top_95;

        if (*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
            | (top_103 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_103 = top_95;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
    float v_80 = v_200;
🚫🚫🚫    float v_84 = /* float v_84 = unimplemented  {fstp dword [esp+0x19c], fp0} */;
    /* unimplemented  {fstp dword [esp+0x19c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2030]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x54]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_17 = /* bool c0_17 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_17 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_17 = FCMP_UO(/* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_17 = /* bool c3_17 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_17 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_111;

    if (*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
        | (top_103 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_18 = /* bool c0_18 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_18 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_18 = FCMP_UO(/* bool c2_18 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_18 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_18 = /* bool c3_18 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_18 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_111 = top_103;

        if (*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa | (c3_18 ? 1 : 0) << 0xe
            | (top_111 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_111 = top_103;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
🚫🚫🚫    float v_5c = /* float v_5c = unimplemented  {fstp dword [esp+0x1c4], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1c4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2034]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x58]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_19 = /* bool c0_19 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_19 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_19 = FCMP_UO(/* bool c2_19 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_19 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_19 = /* bool c3_19 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_19 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_119;

    if (*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
        | (top_111 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_20 = /* bool c0_20 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_20 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_20 = FCMP_UO(/* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_20 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_20 = /* bool c3_20 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_20 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_119 = top_111;

        if (*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
            | (top_119 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_119 = top_111;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
🚫🚫🚫    float v_58 = /* float v_58 = unimplemented  {fstp dword [esp+0x1c8], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1c8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2038]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x5c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_21 = /* bool c0_21 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_21 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_21 = FCMP_UO(/* bool c2_21 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_21 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_21 = /* bool c3_21 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_21 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_127;

    if (*(&((c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
        | (top_119 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_22 = /* bool c0_22 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_22 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_22 = FCMP_UO(/* bool c2_22 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_22 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_22 = /* bool c3_22 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_22 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_127 = top_119;

        if (*(&((c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
            | (top_127 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_127 = top_119;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
    float v_50 = v_204;
🚫🚫🚫    float v_54 = /* float v_54 = unimplemented  {fstp dword [esp+0x1cc], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1cc], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2030]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x60]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_23 = /* bool c0_23 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_23 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_23 = FCMP_UO(/* bool c2_23 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_23 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_23 = /* bool c3_23 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_23 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_135;

    if (*(&((c0_23 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa | (c3_23 ? 1 : 0) << 0xe
        | (top_127 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_24 = /* bool c0_24 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_24 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_24 = FCMP_UO(/* bool c2_24 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_24 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_24 = /* bool c3_24 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_24 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_135 = top_127;

        if (*(&((c0_24 ? 1 : 0) << 8 | (c2_24 ? 1 : 0) << 0xa | (c3_24 ? 1 : 0) << 0xe
            | (top_135 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_135 = top_127;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
🚫🚫🚫    float v_2c = /* float v_2c = unimplemented  {fstp dword [esp+0x1f4], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1f4], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2034]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x64]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_25 = /* bool c0_25 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_25 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_25 = FCMP_UO(/* bool c2_25 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_25 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_25 = /* bool c3_25 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_25 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */
    int16_t top_143;

    if (*(&((c0_25 ? 1 : 0) << 8 | (c2_25 ? 1 : 0) << 0xa | (c3_25 ? 1 : 0) << 0xe
        | (top_135 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_26 = /* bool c0_26 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_26 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_26 = FCMP_UO(/* bool c2_26 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_26 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_26 = /* bool c3_26 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_26 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
        top_143 = top_135;

        if (*(&((c0_26 ? 1 : 0) << 8 | (c2_26 ? 1 : 0) << 0xa | (c3_26 ? 1 : 0) << 0xe
            | (top_143 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        top_143 = top_135;
        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
🚫🚫🚫    float v_28 = /* float v_28 = unimplemented  {fstp dword [esp+0x1f8], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1f8], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_ba2038]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [ctxB+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, dword [&g_5333ec]} */
⋯    /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
        - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
    bool c0_27 = /* bool c0_27 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_27 =
        unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
    bool c2_27 = FCMP_UO(/* bool c2_27 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
        /* bool c2_27 =
        is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
    bool c3_27 = /* bool c3_27 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */ == /* bool c3_27 =
        unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
    /* unimplemented  {fcomp fp0, fp1} */

    if (*(&((c0_27 ? 1 : 0) << 8 | (c2_27 ? 1 : 0) << 0xa | (c3_27 ? 1 : 0) << 0xe
        | (top_143 & 7) << 0xb) + 1) & 0x41)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333e0]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_28 = /* bool c0_28 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_28 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_28 = FCMP_UO(/* bool c2_28 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_28 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_28 = /* bool c3_28 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_28 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */

        if (*(&((c0_28 ? 1 : 0) << 8 | (c2_28 ? 1 : 0) << 0xa | (c3_28 ? 1 : 0) << 0xe
            | (top_143 & 7) << 0xb) + 1) & 1)
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333e0]} */
        }
    }
    else
    {
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [&g_5333ec]} */
    }

    int32_t srcS1 = *(&v_1b0 + 4);
    int32_t dstD3 = v_1b0;
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_5336d4]} */
    int32_t objC8 = (v_1a8 | srcS1 | dstD3) & 0x10;
    int32_t result = v_1a8 & srcS1 & dstD3;
🚫🚫🚫    float v_24 = /* float v_24 = unimplemented  {fstp dword [esp+0x1fc], fp0} */;
    /* unimplemented  {fstp dword [esp+0x1fc], fp0} */
🚫🚫🚫    float v_20 = /* float v_20 = unimplemented  {fstp dword [esp+0x200], fp0} */;
    /* unimplemented  {fstp dword [esp+0x200], fp0} */
    void v_118;
    void v_100;
    void v_e8;
    void v_98;
    void v_68;
    void v_38;

    if (objC8 | result && !(result & 0x10) && objC8)
        return Terrain_SampleHeightmap(&v_98, &v_68, &v_38, &v_118, &v_100, &v_e8, &v_190,
            &v_180, &v_170, dstD3, srcS1, v_1a8);
    return result;
}
