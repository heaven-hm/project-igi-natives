#include "00489F70-FX_SmokeEmit_15.h"
/* 0x00489f70 FX_SmokeEmit_15 full linked: callers=1 callees=8 */
float sub_489f70(float a1) __location("eax")

{
    float esi = a1;
    float result = *(esi + 0x4ec);

    if (*(esi + 0x64c))
    {
        float ecx_1 = *(result + 0x120);
        float edx_1 = *(result + 0x12c);
        long double x87_r7_1 = ecx_1;
        long double temp0_1 = 0f;
        x87_r7_1 - temp0_1;
        int16_t top_1 = 0;
        result = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe;
        float var_20;
        float var_14[0x5];

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_2 = ecx_1;
            long double temp2_1 = -0.959931135f;
            x87_r7_2 - temp2_1;
            float var_24_1 = ecx_1;

            if (!(*(&((x87_r7_2 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_3 = ecx_1;
                long double temp4_1 = 0.959931135f;
                x87_r7_3 - temp4_1;

                if (!(*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    var_24_1 = 0.959931135f;
            }
            else
                var_24_1 = -0.959931135f;

            int32_t edx_2 = *(esi + 0x84);
            int32_t eax_2 = *(esi + 0x90);
            var_20 = *(esi + 0x78);
            int32_t var_1c_1 = edx_2;
            int32_t var_18_1 = eax_2;
            sub_4b4660(&var_14, &var_20, var_24_1);
            result = sub_4d7070(*(esi + 0x70) + 0x84, &var_14, 0f, 0x32, 0x32);
            long double x87_r6_1 = ecx_1;
            long double temp6_1 = -0.959931135f;
            x87_r6_1 - temp6_1;
            long double x87_r6_2 = ecx_1;
            result = (x87_r6_1 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp6_1 ? 1 : 0) << 0xe | 0x3000;
            long double x87_r6_3;

            if (!(*(&result + 1) & 1))
            {
                long double temp8_1 = 0.959931135f;
                x87_r6_2 - temp8_1;
                top_1 = 0xffff;
                result = (x87_r6_2 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp8_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 0x41))
                {
                    x87_r6_3 = ecx_1 - 0.959931135f;
                    goto label_48a073;
                }
            }
            else
            {
                x87_r6_3 = x87_r6_2 + 0.959931135f;
            label_48a073:
                long double temp10_1 = 0f;
                x87_r6_3 - temp10_1;
                top_1 = 0xffff;
                result = (x87_r6_3 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == temp10_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&result + 1) & 0x40))
                {
                    int32_t ecx_4 = *(esi + 0x84);
                    int32_t edx_5 = *(esi + 0x90);
                    var_20 = *(esi + 0x78);
                    int32_t var_1c_2 = ecx_4;
                    int32_t var_18_2 = edx_5;
                    sub_4b4660(&var_14, &var_20, x87_r6_3);
                    result = sub_4d7070(*(esi + 0x70) + 0x210, &var_14, 0f, 0x32, 0x32);
                    top_1 = 0xfffe;
                }
            }
        }

🚫🚫        /* unimplemented  {fld st0, dword [esp+0x4]} */
⋯        long double temp1_1 = 0f;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp1_1 */ - temp1_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp1_1 */ < temp1_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp1_1) */, temp1_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp1_1 */ == temp1_1;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
        result = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (!(*(&result + 1) & 0x40))
        {
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x4]} */
⋯            long double temp3_1 = -0.959931135f;
            /* unimplemented  {fcomp st0, dword [&g_534244]} f- temp3_1 */ - temp3_1;
            bool c0_8 = /* bool c0_8 =
                unimplemented  {fcomp st0, dword [&g_534244]} f< temp3_1 */ < temp3_1;
            bool c2_8 = FCMP_UO(/* bool c2_8 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_534244]}, temp3_1) */,
                temp3_1);
            bool c3_8 = /* bool c3_8 =
                unimplemented  {fcomp st0, dword [&g_534244]} f== temp3_1 */ == temp3_1;
            /* unimplemented  {fcomp st0, dword [&g_534244]} */
            a1 = edx_1;

            if (!(*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb) + 1) & 1))
            {
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x4]} */
⋯                long double temp5_1 = 0.959931135f;
                /* unimplemented  {fcomp st0, dword [&g_534240]} f- temp5_1 */ - temp5_1;
                bool c0_9 = /* bool c0_9 =
                    unimplemented  {fcomp st0, dword [&g_534240]} f< temp5_1 */ < temp5_1;
                bool c2_9 = FCMP_UO(/* bool c2_9 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_534240]}, temp5_1) */,
                    temp5_1);
                bool c3_9 = /* bool c3_9 =
                    unimplemented  {fcomp st0, dword [&g_534240]} f== temp5_1 */ == temp5_1;
                /* unimplemented  {fcomp st0, dword [&g_534240]} */

                if (!(*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
                        | (top_1 & 7) << 0xb) + 1) & 0x41))
                    a1 = 0.959931135f;
            }
            else
                a1 = -0.959931135f;

            int32_t ecx_7 = *(esi + 0x8c);
            var_20 = *(esi + 0x80);
🚫🚫            /* unimplemented  {fld st0, dword [esp+0xc]} */
⋯            long double temp7_1 = 0f;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp7_1 */ - temp7_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp7_1 */ < temp7_1;
            bool c2_10 = FCMP_UO(/* bool c2_10 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp7_1) */,
                temp7_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp7_1 */ == temp7_1;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
            int32_t var_1c_3 = ecx_7;
            int32_t var_18_3 = *(esi + 0x98);

            if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb) + 1) & 0x40))
            {
🚫🚫            label_48a16e:
                /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0xc]} */
🚫🚫                /* unimplemented  {fld st0, st0} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫                /* unimplemented  {fld st0, st2} */
🚫🚫                /* unimplemented  {fmul st0, st3} */
🚫🚫🚫                /* unimplemented  {faddp st1, st0} */
                /* unimplemented  {faddp st1, st0} */
🚫🚫                /* unimplemented  {fld st0, st3} */
🚫🚫                /* unimplemented  {fmul st0, st4} */
🚫🚫🚫                /* unimplemented  {faddp st1, st0} */
                /* unimplemented  {faddp st1, st0} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫🚫                /* unimplemented  {fstp st3, st0} */
                /* unimplemented  {fstp st3, st0} */
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
🚫🚫                /* unimplemented  {fdivr st0, qword [&g_5333f8]} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0xc]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫🚫                var_20 = /* var_20 = unimplemented  {fstp dword [esp+0xc], st0} */;
                /* unimplemented  {fstp dword [esp+0xc], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫🚫                float var_1c_4 = /* float var_1c_4 = unimplemented  {fstp dword [esp+0x10], st0} */;
                /* unimplemented  {fstp dword [esp+0x10], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫🚫                float var_18_4 = /* float var_18_4 = unimplemented  {fstp dword [esp+0x14], st0} */;
                /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
            }
            else
            {
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                long double temp9_1 = 0f;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp9_1 */ - temp9_1;
                bool c0_11 = /* bool c0_11 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp9_1 */ < temp9_1;
                bool c2_11 = FCMP_UO(/* bool c2_11 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp9_1) */,
                    temp9_1);
                bool c3_11 = /* bool c3_11 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp9_1 */ == temp9_1;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} */

                if (!(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
                        | (top_1 & 7) << 0xb) + 1) & 0x40))
                    goto label_48a16e;

🚫🚫                /* unimplemented  {fld st0, dword [esp+0x14]} */
⋯                long double temp12_1 = 0f;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp12_1 */ - temp12_1;
                bool c0_12 = /* bool c0_12 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp12_1 */ < temp12_1;
                bool c2_12 = FCMP_UO(/* bool c2_12 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp12_1) */,
                    temp12_1);
                bool c3_12 = /* bool c3_12 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp12_1 */ == temp12_1;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} */

                if (!(*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                        | (top_1 & 7) << 0xb) + 1) & 0x40))
                    goto label_48a16e;
            }

            sub_4b4660(&var_14, &var_20, a1);
            result = sub_4d7070(*(esi + 0x70) + 0x84, &var_14, 0f, 0x32, 0x32);
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x24]} */
⋯            long double temp11_1 = -0.959931135f;
            /* unimplemented  {fcomp st0, dword [&g_534244]} f- temp11_1 */ - temp11_1;
            bool c0_13 = /* bool c0_13 =
                unimplemented  {fcomp st0, dword [&g_534244]} f< temp11_1 */ < temp11_1;
            bool c2_13 = FCMP_UO(/* bool c2_13 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_534244]}, temp11_1) */,
                temp11_1);
            bool c3_13 = /* bool c3_13 =
                unimplemented  {fcomp st0, dword [&g_534244]} f== temp11_1 */ == temp11_1;
            /* unimplemented  {fcomp st0, dword [&g_534244]} */
🚫🚫            int16_t top_31 = top_1 - 2;
            /* unimplemented  {fld st0, dword [esp+0x24]} */
            result = (c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                | (top_31 & 7) << 0xb;

            if (!(*(&result + 1) & 1))
            {
⋯                long double temp13_1 = 0.959931135f;
                /* unimplemented  {fcomp st0, dword [&g_534240]} f- temp13_1 */ - temp13_1;
                bool c0_14 = /* bool c0_14 =
                    unimplemented  {fcomp st0, dword [&g_534240]} f< temp13_1 */ < temp13_1;
                bool c2_14 = FCMP_UO(/* bool c2_14 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_534240]}, temp13_1) */,
                    temp13_1);
                bool c3_14 = /* bool c3_14 =
                    unimplemented  {fcomp st0, dword [&g_534240]} f== temp13_1 */ == temp13_1;
                /* unimplemented  {fcomp st0, dword [&g_534240]} */
                result = (c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                    | ((top_31 + 1) & 7) << 0xb;

                if (!(*(&result + 1) & 0x41))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x4]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [&g_534240]} */
                    goto label_48a221;
                }
            }
            else
            {
🚫🚫                /* unimplemented  {fadd dword [&g_534240]} */
🚫🚫            label_48a221:
                a1 = /* a1 = unimplemented  {fst dword [esp+0x30], st0} */;
⋯                long double temp14_1 = 0f;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp14_1 */ - temp14_1;
                bool c0_15 = /* bool c0_15 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp14_1 */ < temp14_1;
                bool c2_15 = FCMP_UO(/* bool c2_15 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp14_1) */,
                    temp14_1);
                bool c3_15 = /* bool c3_15 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp14_1 */ == temp14_1;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
                result = (c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                    | ((top_31 + 1) & 7) << 0xb;

                if (!(*(&result + 1) & 0x40))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [eax+0x2ac]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [eax+0x228]} */
🚫🚫🚫                    var_20 = /* var_20 = unimplemented  {fstp dword [esp+0xc], st0} */;
                    /* unimplemented  {fstp dword [esp+0xc], st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [eax+0x2b0]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [eax+0x22c]} */
🚫🚫🚫                    float var_1c_5 = /* float var_1c_5 =
                        unimplemented  {fstp dword [esp+0x10], st0} */;
                    /* unimplemented  {fstp dword [esp+0x10], st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [eax+0x2b4]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [eax+0x230]} */
🚫🚫🚫                    float var_18_5 = /* float var_18_5 =
                        unimplemented  {fstp dword [esp+0x14], st0} */;
                    /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0xc]} */
⋯                    long double temp15_1 = 0f;
                    /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp15_1 */ - temp15_1;
                    bool c0_16 = /* bool c0_16 =
                        unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp15_1 */ < temp15_1;
                    bool c2_16 = FCMP_UO(/* bool c2_16 = is_unordered.t(
                        unimplemented  {fcomp st0, dword [&g_5333ec]}, temp15_1) */, temp15_1);
                    bool c3_16 = /* bool c3_16 =
                        unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp15_1 */
                        == temp15_1;
                    /* unimplemented  {fcomp st0, dword [&g_5333ec]} */

                    if (!(*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | ((top_31 + 1) & 7) << 0xb) + 1) & 0x40))
                    {
🚫🚫                    label_48a29c:
                        /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0xc]} */
🚫🚫                        /* unimplemented  {fld st0, st0} */
🚫🚫                        /* unimplemented  {fmul st0, st1} */
🚫🚫                        /* unimplemented  {fld st0, st2} */
🚫🚫                        /* unimplemented  {fmul st0, st3} */
🚫🚫🚫                        /* unimplemented  {faddp st1, st0} */
                        /* unimplemented  {faddp st1, st0} */
🚫🚫                        /* unimplemented  {fld st0, st3} */
🚫🚫                        /* unimplemented  {fmul st0, st4} */
🚫🚫🚫                        /* unimplemented  {faddp st1, st0} */
                        /* unimplemented  {faddp st1, st0} */
🚫🚫                        /* unimplemented  {fsqrt } */
🚫🚫🚫                        /* unimplemented  {fstp st3, st0} */
                        /* unimplemented  {fstp st3, st0} */
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
🚫🚫                        /* unimplemented  {fdivr st0, qword [&g_5333f8]} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0xc]} */
🚫🚫                        /* unimplemented  {fmul st0, st1} */
🚫🚫🚫                        var_20 = /* var_20 = unimplemented  {fstp dword [esp+0xc], st0} */;
                        /* unimplemented  {fstp dword [esp+0xc], st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                        /* unimplemented  {fmul st0, st1} */
🚫🚫🚫                        float var_1c_6 = /* float var_1c_6 =
                            unimplemented  {fstp dword [esp+0x10], st0} */;
                        /* unimplemented  {fstp dword [esp+0x10], st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫                        /* unimplemented  {fmul st0, st1} */
🚫🚫🚫                        float var_18_6 = /* float var_18_6 =
                            unimplemented  {fstp dword [esp+0x14], st0} */;
                        /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
                    }
                    else
                    {
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                        long double temp16_1 = 0f;
                        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp16_1 */
                            - temp16_1;
                        bool c0_17 = /* bool c0_17 =
                            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp16_1 */
                            < temp16_1;
                        bool c2_17 = FCMP_UO(/* bool c2_17 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [&g_5333ec]}, temp16_1) */, temp16_1);
                        bool c3_17 = /* bool c3_17 =
                            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp16_1 */
                            == temp16_1;
                        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */

                        if (!(*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa
                                | (c3_17 ? 1 : 0) << 0xe | ((top_31 + 1) & 7) << 0xb) + 1) & 0x40))
                            goto label_48a29c;

🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x14]} */
⋯                        long double temp17_1 = 0f;
                        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp17_1 */
                            - temp17_1;
                        bool c0_18 = /* bool c0_18 =
                            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp17_1 */
                            < temp17_1;
                        bool c2_18 = FCMP_UO(/* bool c2_18 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [&g_5333ec]}, temp17_1) */, temp17_1);
                        bool c3_18 = /* bool c3_18 =
                            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp17_1 */
                            == temp17_1;
                        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */

                        if (!(*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa
                                | (c3_18 ? 1 : 0) << 0xe | ((top_31 + 1) & 7) << 0xb) + 1) & 0x40))
                            goto label_48a29c;
                    }

                    sub_4b4660(&var_14, &var_20, a1);
                    return sub_4d7070(*(esi + 0x70) + 0x210, &var_14, 0f, 0x32, 0x32);
                }
            }
        }
    }

    return result;
}
