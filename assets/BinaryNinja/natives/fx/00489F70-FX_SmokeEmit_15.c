// Original IGI.EXE function: FX_SmokeEmit_15 (VA 0x00489F70; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_15.h"
float FX_SmokeEmit_15(float a1) __location("valA")

{
    float srcS = a1;
    float result = *(srcS + 0x4ec);

    if (*(srcS + 0x64c))
    {
        float objC1 = *(result + 0x120);
        float tmpD1 = *(result + 0x12c);
        long double x87_r7_1 = objC1;
        long double f0_1 = 0f;
        x87_r7_1 - f0_1;
        int16_t top_1 = 0;
        result = (x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe;
        float v_20;
        float v_14[0x5];

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_2 = objC1;
            long double f2_1 = -0.959931135f;
            x87_r7_2 - f2_1;
            float v_24_1 = objC1;

            if (!(*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_3 = objC1;
                long double f4_1 = 0.959931135f;
                x87_r7_3 - f4_1;

                if (!(*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    v_24_1 = 0.959931135f;
            }
            else
                v_24_1 = -0.959931135f;

            int32_t tmpD2 = *(srcS + 0x84);
            int32_t valA2 = *(srcS + 0x90);
            v_20 = *(srcS + 0x78);
            int32_t v_1c_1 = tmpD2;
            int32_t v_18_1 = valA2;
            Sys_PushStack_13(&v_14, &v_20, v_24_1);
            result = Render_ComputeNormals_11(*(srcS + 0x70) + 0x84, &v_14, 0f, 0x32, 0x32);
            long double x87_r6_1 = objC1;
            long double f6_1 = -0.959931135f;
            x87_r6_1 - f6_1;
            long double x87_r6_2 = objC1;
            result = (x87_r6_1 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f6_1 ? 1 : 0) << 0xe | 0x3000;
            long double x87_r6_3;

            if (!(*(&result + 1) & 1))
            {
                long double f8_1 = 0.959931135f;
                x87_r6_2 - f8_1;
                top_1 = 0xffff;
                result = (x87_r6_2 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, f8_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f8_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 0x41))
                {
                    x87_r6_3 = objC1 - 0.959931135f;
                    goto label_48a073;
                }
            }
            else
            {
                x87_r6_3 = x87_r6_2 + 0.959931135f;
            label_48a073:
                long double f10_1 = 0f;
                x87_r6_3 - f10_1;
                top_1 = 0xffff;
                result = (x87_r6_3 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, f10_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == f10_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 0x40))
                {
                    int32_t objC4 = *(srcS + 0x84);
                    int32_t tmpD5 = *(srcS + 0x90);
                    v_20 = *(srcS + 0x78);
                    int32_t v_1c_2 = objC4;
                    int32_t v_18_2 = tmpD5;
                    Sys_PushStack_13(&v_14, &v_20, x87_r6_3);
                    result = Render_ComputeNormals_11(*(srcS + 0x70) + 0x210, &v_14, 0f, 0x32, 0x32);
                    top_1 = 0xfffe;
                }
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x4]} */
⋯        long double f1_1 = 0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f1_1 */ - f1_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f1_1 */ < f1_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f1_1) */, f1_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        result = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (!(*(&result + 1) & 0x40))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x4]} */
⋯            long double f3_1 = -0.959931135f;
            /* unimplemented  {fcomp fp0, dword [&g_534244]} f- f3_1 */ - f3_1;
            bool c0_8 = /* bool c0_8 =
                unimplemented  {fcomp fp0, dword [&g_534244]} f< f3_1 */ < f3_1;
            bool c2_8 = FCMP_UO(/* bool c2_8 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_534244]}, f3_1) */,
                f3_1);
            bool c3_8 = /* bool c3_8 =
                unimplemented  {fcomp fp0, dword [&g_534244]} f== f3_1 */ == f3_1;
            /* unimplemented  {fcomp fp0, dword [&g_534244]} */
            a1 = tmpD1;

            if (!(*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb) + 1) & 1))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x4]} */
⋯                long double f5_1 = 0.959931135f;
                /* unimplemented  {fcomp fp0, dword [&g_534240]} f- f5_1 */ - f5_1;
                bool c0_9 = /* bool c0_9 =
                    unimplemented  {fcomp fp0, dword [&g_534240]} f< f5_1 */ < f5_1;
                bool c2_9 = FCMP_UO(/* bool c2_9 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_534240]}, f5_1) */,
                    f5_1);
                bool c3_9 = /* bool c3_9 =
                    unimplemented  {fcomp fp0, dword [&g_534240]} f== f5_1 */ == f5_1;
                /* unimplemented  {fcomp fp0, dword [&g_534240]} */

                if (!(*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
                        | (top_1 & 7) << 0xb) + 1) & 0x41))
                    a1 = 0.959931135f;
            }
            else
                a1 = -0.959931135f;

            int32_t objC7 = *(srcS + 0x8c);
            v_20 = *(srcS + 0x80);
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0xc]} */
⋯            long double f7_1 = 0f;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f7_1 */ - f7_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f7_1 */ < f7_1;
            bool c2_10 = FCMP_UO(/* bool c2_10 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f7_1) */,
                f7_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f7_1 */ == f7_1;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
            int32_t v_1c_3 = objC7;
            int32_t v_18_3 = *(srcS + 0x98);

            if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb) + 1) & 0x40))
            {
🚫🚫            label_48a16e:
                /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0xc]} */
🚫🚫                /* unimplemented  {fld fp0, fp0} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫                /* unimplemented  {fld fp0, fp2} */
🚫🚫                /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫                /* unimplemented  {faddp fp1, fp0} */
                /* unimplemented  {faddp fp1, fp0} */
🚫🚫                /* unimplemented  {fld fp0, fp3} */
🚫🚫                /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫                /* unimplemented  {faddp fp1, fp0} */
                /* unimplemented  {faddp fp1, fp0} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫🚫                /* unimplemented  {fstp fp3, fp0} */
                /* unimplemented  {fstp fp3, fp0} */
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫                /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0xc]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                v_20 = /* v_20 = unimplemented  {fstp dword [esp+0xc], fp0} */;
                /* unimplemented  {fstp dword [esp+0xc], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                float v_1c_4 = /* float v_1c_4 = unimplemented  {fstp dword [esp+0x10], fp0} */;
                /* unimplemented  {fstp dword [esp+0x10], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫                /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                float v_18_4 = /* float v_18_4 = unimplemented  {fstp dword [esp+0x14], fp0} */;
                /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
            }
            else
            {
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x10]} */
⋯                long double f9_1 = 0f;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f9_1 */ - f9_1;
                bool c0_11 = /* bool c0_11 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f9_1 */ < f9_1;
                bool c2_11 = FCMP_UO(/* bool c2_11 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f9_1) */,
                    f9_1);
                bool c3_11 = /* bool c3_11 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f9_1 */ == f9_1;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

                if (!(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
                        | (top_1 & 7) << 0xb) + 1) & 0x40))
                    goto label_48a16e;

🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x14]} */
⋯                long double f12_1 = 0f;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f12_1 */ - f12_1;
                bool c0_12 = /* bool c0_12 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f12_1 */ < f12_1;
                bool c2_12 = FCMP_UO(/* bool c2_12 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f12_1) */,
                    f12_1);
                bool c3_12 = /* bool c3_12 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f12_1 */ == f12_1;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

                if (!(*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                        | (top_1 & 7) << 0xb) + 1) & 0x40))
                    goto label_48a16e;
            }

            Sys_PushStack_13(&v_14, &v_20, a1);
            result = Render_ComputeNormals_11(*(srcS + 0x70) + 0x84, &v_14, 0f, 0x32, 0x32);
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x24]} */
⋯            long double f11_1 = -0.959931135f;
            /* unimplemented  {fcomp fp0, dword [&g_534244]} f- f11_1 */ - f11_1;
            bool c0_13 = /* bool c0_13 =
                unimplemented  {fcomp fp0, dword [&g_534244]} f< f11_1 */ < f11_1;
            bool c2_13 = FCMP_UO(/* bool c2_13 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_534244]}, f11_1) */,
                f11_1);
            bool c3_13 = /* bool c3_13 =
                unimplemented  {fcomp fp0, dword [&g_534244]} f== f11_1 */ == f11_1;
            /* unimplemented  {fcomp fp0, dword [&g_534244]} */
🚫🚫            int16_t top_31 = top_1 - 2;
            /* unimplemented  {fld fp0, dword [esp+0x24]} */
            result = (c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                | (top_31 & 7) << 0xb;

            if (!(*(&result + 1) & 1))
            {
⋯                long double f13_1 = 0.959931135f;
                /* unimplemented  {fcomp fp0, dword [&g_534240]} f- f13_1 */ - f13_1;
                bool c0_14 = /* bool c0_14 =
                    unimplemented  {fcomp fp0, dword [&g_534240]} f< f13_1 */ < f13_1;
                bool c2_14 = FCMP_UO(/* bool c2_14 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_534240]}, f13_1) */,
                    f13_1);
                bool c3_14 = /* bool c3_14 =
                    unimplemented  {fcomp fp0, dword [&g_534240]} f== f13_1 */ == f13_1;
                /* unimplemented  {fcomp fp0, dword [&g_534240]} */
                result = (c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                    | ((top_31 + 1) & 7) << 0xb;

                if (!(*(&result + 1) & 0x41))
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [esp+0x4]} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [&g_534240]} */
                    goto label_48a221;
                }
            }
            else
            {
🚫🚫                /* unimplemented  {fadd dword [&g_534240]} */
🚫🚫            label_48a221:
                a1 = /* a1 = unimplemented  {fst dword [esp+0x30], fp0} */;
⋯                long double f14_1 = 0f;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f14_1 */ - f14_1;
                bool c0_15 = /* bool c0_15 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f14_1 */ < f14_1;
                bool c2_15 = FCMP_UO(/* bool c2_15 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f14_1) */,
                    f14_1);
                bool c3_15 = /* bool c3_15 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f14_1 */ == f14_1;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
                result = (c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                    | ((top_31 + 1) & 7) << 0xb;

                if (!(*(&result + 1) & 0x40))
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [valA+0x2ac]} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [valA+0x228]} */
🚫🚫🚫                    v_20 = /* v_20 = unimplemented  {fstp dword [esp+0xc], fp0} */;
                    /* unimplemented  {fstp dword [esp+0xc], fp0} */
🚫🚫                    /* unimplemented  {fld fp0, dword [valA+0x2b0]} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [valA+0x22c]} */
🚫🚫🚫                    float v_1c_5 = /* float v_1c_5 =
                        unimplemented  {fstp dword [esp+0x10], fp0} */;
                    /* unimplemented  {fstp dword [esp+0x10], fp0} */
🚫🚫                    /* unimplemented  {fld fp0, dword [valA+0x2b4]} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [valA+0x230]} */
🚫🚫🚫                    float v_18_5 = /* float v_18_5 =
                        unimplemented  {fstp dword [esp+0x14], fp0} */;
                    /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫                    /* unimplemented  {fld fp0, dword [esp+0xc]} */
⋯                    long double f15_1 = 0f;
                    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f15_1 */ - f15_1;
                    bool c0_16 = /* bool c0_16 =
                        unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f15_1 */ < f15_1;
                    bool c2_16 = FCMP_UO(/* bool c2_16 = is_unordered.t(
                        unimplemented  {fcomp fp0, dword [&g_5333ec]}, f15_1) */, f15_1);
                    bool c3_16 = /* bool c3_16 =
                        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f15_1 */
                        == f15_1;
                    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

                    if (!(*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | ((top_31 + 1) & 7) << 0xb) + 1) & 0x40))
                    {
🚫🚫                    label_48a29c:
                        /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0xc]} */
🚫🚫                        /* unimplemented  {fld fp0, fp0} */
🚫🚫                        /* unimplemented  {fmul fp0, fp1} */
🚫🚫                        /* unimplemented  {fld fp0, fp2} */
🚫🚫                        /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fld fp0, fp3} */
🚫🚫                        /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fsqrt } */
🚫🚫🚫                        /* unimplemented  {fstp fp3, fp0} */
                        /* unimplemented  {fstp fp3, fp0} */
🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
🚫🚫                        /* unimplemented  {fdivr fp0, qword [&g_5333f8]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0xc]} */
🚫🚫                        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                        v_20 = /* v_20 = unimplemented  {fstp dword [esp+0xc], fp0} */;
                        /* unimplemented  {fstp dword [esp+0xc], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫                        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                        float v_1c_6 = /* float v_1c_6 =
                            unimplemented  {fstp dword [esp+0x10], fp0} */;
                        /* unimplemented  {fstp dword [esp+0x10], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫                        /* unimplemented  {fmul fp0, fp1} */
🚫🚫🚫                        float v_18_6 = /* float v_18_6 =
                            unimplemented  {fstp dword [esp+0x14], fp0} */;
                        /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
                    }
                    else
                    {
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x10]} */
⋯                        long double f16_1 = 0f;
                        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f16_1 */
                            - f16_1;
                        bool c0_17 = /* bool c0_17 =
                            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f16_1 */
                            < f16_1;
                        bool c2_17 = FCMP_UO(/* bool c2_17 = is_unordered.t(
                            unimplemented  {fcomp fp0, dword [&g_5333ec]}, f16_1) */, f16_1);
                        bool c3_17 = /* bool c3_17 =
                            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f16_1 */
                            == f16_1;
                        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

                        if (!(*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa
                                | (c3_17 ? 1 : 0) << 0xe | ((top_31 + 1) & 7) << 0xb) + 1) & 0x40))
                            goto label_48a29c;

🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x14]} */
⋯                        long double f17_1 = 0f;
                        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f17_1 */
                            - f17_1;
                        bool c0_18 = /* bool c0_18 =
                            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f17_1 */
                            < f17_1;
                        bool c2_18 = FCMP_UO(/* bool c2_18 = is_unordered.t(
                            unimplemented  {fcomp fp0, dword [&g_5333ec]}, f17_1) */, f17_1);
                        bool c3_18 = /* bool c3_18 =
                            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f17_1 */
                            == f17_1;
                        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */

                        if (!(*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa
                                | (c3_18 ? 1 : 0) << 0xe | ((top_31 + 1) & 7) << 0xb) + 1) & 0x40))
                            goto label_48a29c;
                    }

                    Sys_PushStack_13(&v_14, &v_20, a1);
                    return Render_ComputeNormals_11(*(srcS + 0x70) + 0x210, &v_14, 0f, 0x32, 0x32);
                }
            }
        }
    }

    return result;
}
