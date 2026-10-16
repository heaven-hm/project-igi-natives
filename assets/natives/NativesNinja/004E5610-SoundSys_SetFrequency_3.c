#include "004E5610-SoundSys_SetFrequency_3.h"
/* 0x004e5610 SoundSys_SetFrequency_3 full linked: callers=4 callees=1 */
int32_t sub_4e5610(float a1, float a2, float a3, int32_t a4, float a5, int32_t a6, float a7)

{
    long double x87_r7 = a3;
    long double temp1 = a5;
    x87_r7 - temp1;
    int32_t result = a2;
    g_a5e404 = result;
    result = (x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe;
    long double x87_r7_1;

    x87_r7_1 = !(*(&result + 1) & 1) ? a5 : a3;

    long double temp2 = a7;
    x87_r7_1 - temp2;
    result = (x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe;
    long double x87_r7_3;

    if (!(*(&result + 1) & 1))
        x87_r7_3 = a7;
    else
    {
        long double x87_r7_2 = a3;
        long double temp3_1 = a5;
        x87_r7_2 - temp3_1;
        result = (x87_r7_2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe;

        x87_r7_3 = !(*(&result + 1) & 1) ? a5 : a3;
    }

    long double x87_r6 = a3;
    long double temp4 = a5;
    x87_r6 - temp4;
    result = (x87_r6 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp4) ? 1 : 0) << 0xa
        | (x87_r6 == temp4 ? 1 : 0) << 0xe | 0x3800;
    long double x87_r6_1;

    x87_r6_1 = *(&result + 1) & 0x41 ? a5 : a3;

    long double temp5 = a7;
    x87_r6_1 - temp5;
    result = (x87_r6_1 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp5) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp5 ? 1 : 0) << 0xe | 0x3800;
    long double x87_r6_3;

    if (*(&result + 1) & 0x41)
        x87_r6_3 = a7;
    else
    {
        long double x87_r6_2 = a3;
        long double temp6_1 = a5;
        x87_r6_2 - temp6_1;
        result = (x87_r6_2 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp6_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == temp6_1 ? 1 : 0) << 0xe | 0x3800;

        x87_r6_3 = *(&result + 1) & 0x41 ? a5 : a3;
    }

    int32_t edi = x87_r7_3;
    int32_t var_24 = edi;
    int16_t top = 0;
    int32_t ecx = x87_r6_3;
    int32_t var_8_1 = ecx;

    if (edi <= ecx)
    {
        float ebx_1 = a1;

        do
        {
🚫🚫            /* unimplemented  {fild st0, dword [esp+0x10]} */
🚫🚫🚫            a1 = /* a1 = unimplemented  {fstp dword [esp+0x38], st0} */;
            /* unimplemented  {fstp dword [esp+0x38], st0} */

            if (edi >= 0 && edi < *(ebx_1 + 8))
            {
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                long double temp7_1 = a3;
                /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp7_1 */ - temp7_1;
                bool c0_6 = /* bool c0_6 =
                    unimplemented  {fcomp st0, dword [esp+0x40]} f< temp7_1 */ < temp7_1;
                bool c2_6 = FCMP_UO(/* bool c2_6 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x40]}, temp7_1) */,
                    temp7_1);
                bool c3_6 = /* bool c3_6 =
                    unimplemented  {fcomp st0, dword [esp+0x40]} f== temp7_1 */ == temp7_1;
                /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                int16_t top_3 = top;
                float result_2 = 3.40282347e+38f;
                int32_t var_c_1 = 0xff7fffff;
                result = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                    | (top_3 & 7) << 0xb;

                if (!(*(&result + 1) & 1))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                    long double temp9_1 = a5;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp9_1 */ - temp9_1;
                    bool c0_7 = /* bool c0_7 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f< temp9_1 */ < temp9_1;
                    bool c2_7 = FCMP_UO(/* bool c2_7 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x48]}, temp9_1) */,
                        temp9_1);
                    bool c3_7 = /* bool c3_7 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f== temp9_1 */ == temp9_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                    result = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                        | (top_3 & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                        goto label_4e5713;

🚫🚫                label_4e5731:
                    /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x40]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x44]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x3c]} */
🚫🚫🚫                    /* unimplemented  {fmulp st1, st0} */
                    /* unimplemented  {fmulp st1, st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x40]} */
🚫🚫🚫                    /* unimplemented  {fdivp st1, st0} */
                    /* unimplemented  {fdivp st1, st0} */
🚫🚫                    /* unimplemented  {fadd dword [esp+0x3c]} */
🚫🚫                    /* unimplemented  {fld st0, dword [&g_534b3c]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_10 = /* bool c0_10 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_10 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_10 = FCMP_UO(/* bool c2_10 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_10 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_10 = /* bool c3_10 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_10 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                        | ((top_3 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
🚫🚫                        result_2 = /* result_2 = unimplemented  {fst dword [esp+0x24], st0} */;

🚫🚫                    /* unimplemented  {fld st0, dword [&g_534b38]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_11 = /* bool c0_11 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_11 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_11 = FCMP_UO(/* bool c2_11 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_11 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_11 = /* bool c3_11 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_11 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
                        | ((top_3 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
                    }
                    else
                    {
🚫🚫🚫                        float var_c_2 = /* float var_c_2 =
                            unimplemented  {fstp dword [esp+0x28], st0} */;
                        /* unimplemented  {fstp dword [esp+0x28], st0} */
                    }

                    goto label_4e577b;
                }

🚫🚫            label_4e5713:
                /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                long double temp8_1 = a5;
                /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp8_1 */ - temp8_1;
                bool c0_8 = /* bool c0_8 =
                    unimplemented  {fcomp st0, dword [esp+0x48]} f< temp8_1 */ < temp8_1;
                bool c2_8 = FCMP_UO(/* bool c2_8 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x48]}, temp8_1) */,
                    temp8_1);
                bool c3_8 = /* bool c3_8 =
                    unimplemented  {fcomp st0, dword [esp+0x48]} f== temp8_1 */ == temp8_1;
                /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                int16_t top_6 = top_3;
                result = (c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                    | (top_6 & 7) << 0xb;

                if (!(*(&result + 1) & 1))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                    long double temp11_1 = a3;
                    /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp11_1 */ - temp11_1;
                    bool c0_9 = /* bool c0_9 =
                        unimplemented  {fcomp st0, dword [esp+0x40]} f< temp11_1 */ < temp11_1;
                    bool c2_9 = FCMP_UO(/* bool c2_9 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x40]}, temp11_1) */,
                        temp11_1);
                    bool c3_9 = /* bool c3_9 =
                        unimplemented  {fcomp st0, dword [esp+0x40]} f== temp11_1 */ == temp11_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                    top_3 = top_6;
                    result = (c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
                        | (top_3 & 7) << 0xb;

                    if (*(&result + 1) & 0x41)
                        goto label_4e5731;

🚫🚫                label_4e577b:
                    /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                    long double temp14_1 = a5;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp14_1 */ - temp14_1;
                    bool c0_12 = /* bool c0_12 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f< temp14_1 */ < temp14_1;
                    bool c2_12 = FCMP_UO(/* bool c2_12 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x48]}, temp14_1) */,
                        temp14_1);
                    bool c3_12 = /* bool c3_12 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f== temp14_1 */ == temp14_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                    top_6 = top_3;
                    result = (c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                        | (top_6 & 7) << 0xb;

                    if (*(&result + 1) & 1)
                        goto label_4e5799;

🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                    long double temp18_1 = a7;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp18_1 */ - temp18_1;
                    bool c0_13 = /* bool c0_13 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f< temp18_1 */ < temp18_1;
                    bool c2_13 = FCMP_UO(/* bool c2_13 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x50]}, temp18_1) */,
                        temp18_1);
                    bool c3_13 = /* bool c3_13 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f== temp18_1 */ == temp18_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                    result = (c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                        | (top_6 & 7) << 0xb;

                    if (*(&result + 1) & 0x41)
                        goto label_4e57b7;

                    goto label_4e5799;
                }

🚫🚫            label_4e5799:
                /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                long double temp10_1 = a7;
                /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp10_1 */ - temp10_1;
                bool c0_14 = /* bool c0_14 =
                    unimplemented  {fcomp st0, dword [esp+0x50]} f< temp10_1 */ < temp10_1;
                bool c2_14 = FCMP_UO(/* bool c2_14 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x50]}, temp10_1) */,
                    temp10_1);
                bool c3_14 = /* bool c3_14 =
                    unimplemented  {fcomp st0, dword [esp+0x50]} f== temp10_1 */ == temp10_1;
                /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                int16_t top_20 = top_6;
                result = (c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                    | (top_20 & 7) << 0xb;

                if (!(*(&result + 1) & 1))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                    long double temp13_1 = a5;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp13_1 */ - temp13_1;
                    bool c0_15 = /* bool c0_15 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f< temp13_1 */ < temp13_1;
                    bool c2_15 = FCMP_UO(/* bool c2_15 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x48]}, temp13_1) */,
                        temp13_1);
                    bool c3_15 = /* bool c3_15 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f== temp13_1 */ == temp13_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                    top_6 = top_20;
                    result = (c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                        | (top_6 & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫                    label_4e57fd:
                        /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                        long double temp17_1 = a7;
                        /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp17_1 */ - temp17_1;
                        bool c0_18 = /* bool c0_18 =
                            unimplemented  {fcomp st0, dword [esp+0x50]} f< temp17_1 */ < temp17_1;
                        bool c2_18 = FCMP_UO(/* bool c2_18 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [esp+0x50]}, temp17_1) */, temp17_1);
                        bool c3_18 = /* bool c3_18 =
                            unimplemented  {fcomp st0, dword [esp+0x50]} f== temp17_1 */
                            == temp17_1;
                        /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                        top_20 = top_6;
                        result = (c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa
                            | (c3_18 ? 1 : 0) << 0xe | (top_20 & 7) << 0xb;

                        if (*(&result + 1) & 1)
                            goto label_4e581b;

🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                        long double temp21_1 = a3;
                        /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp21_1 */ - temp21_1;
                        bool c0_19 = /* bool c0_19 =
                            unimplemented  {fcomp st0, dword [esp+0x40]} f< temp21_1 */ < temp21_1;
                        bool c2_19 = FCMP_UO(/* bool c2_19 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [esp+0x40]}, temp21_1) */, temp21_1);
                        bool c3_19 = /* bool c3_19 =
                            unimplemented  {fcomp st0, dword [esp+0x40]} f== temp21_1 */
                            == temp21_1;
                        /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                        result = (c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa
                            | (c3_19 ? 1 : 0) << 0xe | (top_20 & 7) << 0xb;

                        if (*(&result + 1) & 0x41)
                            goto label_4e5839;

                        goto label_4e581b;
                    }

🚫🚫                label_4e57b7:
                    /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x48]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x44]} */
🚫🚫🚫                    /* unimplemented  {fmulp st1, st0} */
                    /* unimplemented  {fmulp st1, st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x48]} */
🚫🚫🚫                    /* unimplemented  {fdivp st1, st0} */
                    /* unimplemented  {fdivp st1, st0} */
🚫🚫                    /* unimplemented  {fadd dword [esp+0x44]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x24]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_16 = /* bool c0_16 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_16 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_16 = FCMP_UO(/* bool c2_16 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_16 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_16 = /* bool c3_16 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_16 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | ((top_6 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
🚫🚫                        result_2 = /* result_2 = unimplemented  {fst dword [esp+0x24], st0} */;

🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x28]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_17 = /* bool c0_17 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_17 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_17 = FCMP_UO(/* bool c2_17 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_17 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_17 = /* bool c3_17 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_17 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
                        | ((top_6 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
                    }
                    else
                    {
🚫🚫🚫                        float var_c_3 = /* float var_c_3 =
                            unimplemented  {fstp dword [esp+0x28], st0} */;
                        /* unimplemented  {fstp dword [esp+0x28], st0} */
                    }

                    goto label_4e57fd;
                }

🚫🚫            label_4e581b:
                /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                long double temp12_1 = a3;
                /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp12_1 */ - temp12_1;
                bool c0_20 = /* bool c0_20 =
                    unimplemented  {fcomp st0, dword [esp+0x40]} f< temp12_1 */ < temp12_1;
                bool c2_20 = FCMP_UO(/* bool c2_20 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x40]}, temp12_1) */,
                    temp12_1);
                bool c3_20 = /* bool c3_20 =
                    unimplemented  {fcomp st0, dword [esp+0x40]} f== temp12_1 */ == temp12_1;
                /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                result = (c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
                    | (top_20 & 7) << 0xb;

                if (!(*(&result + 1) & 1))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x38]} */
⋯                    long double temp16_1 = a7;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp16_1 */ - temp16_1;
                    bool c0_21 = /* bool c0_21 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f< temp16_1 */ < temp16_1;
                    bool c2_21 = FCMP_UO(/* bool c2_21 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x50]}, temp16_1) */,
                        temp16_1);
                    bool c3_21 = /* bool c3_21 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f== temp16_1 */ == temp16_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                    result = (c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
                        | (top_20 & 7) << 0xb;

                    if (*(&result + 1) & 0x41)
                    {
🚫🚫                    label_4e5839:
                        /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫                        /* unimplemented  {fsub st0, dword [esp+0x50]} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫                        /* unimplemented  {fsub st0, dword [esp+0x4c]} */
🚫🚫🚫                        /* unimplemented  {fmulp st1, st0} */
                        /* unimplemented  {fmulp st1, st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x40]} */
🚫🚫                        /* unimplemented  {fsub st0, dword [esp+0x50]} */
🚫🚫🚫                        /* unimplemented  {fdivp st1, st0} */
                        /* unimplemented  {fdivp st1, st0} */
🚫🚫                        /* unimplemented  {fadd dword [esp+0x4c]} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x24]} */
⋯                        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                            - /* unimplemented  {fcomp st0, st1}
                            f- unimplemented  {fcomp st0, st1} */;
                        bool c0_22 = /* bool c0_22 =
                            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                            < /* bool c0_22 =
                            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                        bool c2_22 = FCMP_UO(/* bool c2_22 = is_unordered.t(
                            unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                            /* bool c2_22 = is_unordered.t(unimplemented  {fcomp st0, st1},
                            unimplemented  {fcomp st0, st1}) */);
                        bool c3_22 = /* bool c3_22 =
                            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                            == /* bool c3_22 =
                            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                        /* unimplemented  {fcomp st0, st1} */
                        result = (c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa
                            | (c3_22 ? 1 : 0) << 0xe | ((top_20 - 1) & 7) << 0xb;

                        if (!(*(&result + 1) & 1))
🚫🚫                            result_2 = /* result_2 = unimplemented  {fst dword [esp+0x24], st0} */;

🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x28]} */
⋯                        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                            - /* unimplemented  {fcomp st0, st1}
                            f- unimplemented  {fcomp st0, st1} */;
                        bool c0_23 = /* bool c0_23 =
                            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                            < /* bool c0_23 =
                            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                        bool c2_23 = FCMP_UO(/* bool c2_23 = is_unordered.t(
                            unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                            /* bool c2_23 = is_unordered.t(unimplemented  {fcomp st0, st1},
                            unimplemented  {fcomp st0, st1}) */);
                        bool c3_23 = /* bool c3_23 =
                            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                            == /* bool c3_23 =
                            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                        /* unimplemented  {fcomp st0, st1} */
                        result = (c0_23 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa
                            | (c3_23 ? 1 : 0) << 0xe | ((top_20 - 1) & 7) << 0xb;

                        if (!(*(&result + 1) & 0x41))
                        {
🚫🚫🚫                            /* unimplemented  {fstp st0, st0} */
                            /* unimplemented  {fstp st0, st0} */
                        }
                        else
                        {
🚫🚫🚫                            float var_c_4 = /* float var_c_4 =
                                unimplemented  {fstp dword [esp+0x28], st0} */;
                            /* unimplemented  {fstp dword [esp+0x28], st0} */
                        }
                    }
                }

🚫🚫                /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5333e0]} */
                float var_18_1 = 3.40282347e+38f;
                int32_t result_1 = result_2;
                float var_14_1 = -3.40282347e+38f;
🚫🚫                float var_24_1 = /* float var_24_1 = unimplemented  {fst dword [esp+0x10], st0} */;
⋯                long double temp15_1 = a3;
                /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp15_1 */ - temp15_1;
                bool c0_24 = /* bool c0_24 =
                    unimplemented  {fcomp st0, dword [esp+0x40]} f< temp15_1 */ < temp15_1;
                bool c2_24 = FCMP_UO(/* bool c2_24 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x40]}, temp15_1) */,
                    temp15_1);
                bool c3_24 = /* bool c3_24 =
                    unimplemented  {fcomp st0, dword [esp+0x40]} f== temp15_1 */ == temp15_1;
                /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                int16_t top_46 = top_20 - 1;
                result = (c0_24 ? 1 : 0) << 8 | (c2_24 ? 1 : 0) << 0xa | (c3_24 ? 1 : 0) << 0xe
                    | (top_46 & 7) << 0xb;

                if (*(&result + 1) & 1)
                {
🚫🚫                label_4e58c3:
                    /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                    long double temp19_1 = a5;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp19_1 */ - temp19_1;
                    bool c0_26 = /* bool c0_26 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f< temp19_1 */ < temp19_1;
                    bool c2_26 = FCMP_UO(/* bool c2_26 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x48]}, temp19_1) */,
                        temp19_1);
                    bool c3_26 = /* bool c3_26 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f== temp19_1 */ == temp19_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                    result = (c0_26 ? 1 : 0) << 8 | (c2_26 ? 1 : 0) << 0xa | (c3_26 ? 1 : 0) << 0xe
                        | (top_46 & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
                    {
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                        long double temp23_1 = a3;
                        /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp23_1 */ - temp23_1;
                        bool c0_27 = /* bool c0_27 =
                            unimplemented  {fcomp st0, dword [esp+0x40]} f< temp23_1 */ < temp23_1;
                        bool c2_27 = FCMP_UO(/* bool c2_27 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [esp+0x40]}, temp23_1) */, temp23_1);
                        bool c3_27 = /* bool c3_27 =
                            unimplemented  {fcomp st0, dword [esp+0x40]} f== temp23_1 */
                            == temp23_1;
                        /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                        result = (c0_27 ? 1 : 0) << 8 | (c2_27 ? 1 : 0) << 0xa
                            | (c3_27 ? 1 : 0) << 0xe | (top_46 & 7) << 0xb;

                        if (*(&result + 1) & 0x41)
                            goto label_4e58e1;
                    }
                }
                else
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                    long double temp20_1 = a5;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp20_1 */ - temp20_1;
                    bool c0_25 = /* bool c0_25 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f< temp20_1 */ < temp20_1;
                    bool c2_25 = FCMP_UO(/* bool c2_25 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x48]}, temp20_1) */,
                        temp20_1);
                    bool c3_25 = /* bool c3_25 =
                        unimplemented  {fcomp st0, dword [esp+0x48]} f== temp20_1 */ == temp20_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                    result = (c0_25 ? 1 : 0) << 8 | (c2_25 ? 1 : 0) << 0xa | (c3_25 ? 1 : 0) << 0xe
                        | (top_46 & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                        goto label_4e58c3;

🚫🚫                label_4e58e1:
                    /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x40]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x44]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x3c]} */
🚫🚫🚫                    /* unimplemented  {fmulp st1, st0} */
                    /* unimplemented  {fmulp st1, st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x40]} */
🚫🚫🚫                    /* unimplemented  {fdivp st1, st0} */
                    /* unimplemented  {fdivp st1, st0} */
🚫🚫                    /* unimplemented  {fadd dword [esp+0x3c]} */
🚫🚫                    /* unimplemented  {fld st0, dword [&g_534b3c]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_28 = /* bool c0_28 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_28 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_28 = FCMP_UO(/* bool c2_28 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_28 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_28 = /* bool c3_28 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_28 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_28 ? 1 : 0) << 8 | (c2_28 ? 1 : 0) << 0xa | (c3_28 ? 1 : 0) << 0xe
                        | ((top_46 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
🚫🚫                        var_18_1 = /* var_18_1 = unimplemented  {fst dword [esp+0x1c], st0} */;

🚫🚫                    /* unimplemented  {fld st0, dword [&g_534b38]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_29 = /* bool c0_29 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_29 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_29 = FCMP_UO(/* bool c2_29 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_29 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_29 = /* bool c3_29 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_29 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_29 ? 1 : 0) << 8 | (c2_29 ? 1 : 0) << 0xa | (c3_29 ? 1 : 0) << 0xe
                        | ((top_46 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
                    }
                    else
                    {
🚫🚫🚫                        var_14_1 = /* var_14_1 = unimplemented  {fstp dword [esp+0x20], st0} */;
                        /* unimplemented  {fstp dword [esp+0x20], st0} */
                    }
                }

🚫🚫                /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                long double temp22_1 = a5;
                /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp22_1 */ - temp22_1;
                bool c0_30 = /* bool c0_30 =
                    unimplemented  {fcomp st0, dword [esp+0x48]} f< temp22_1 */ < temp22_1;
                bool c2_30 = FCMP_UO(/* bool c2_30 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x48]}, temp22_1) */,
                    temp22_1);
                bool c3_30 = /* bool c3_30 =
                    unimplemented  {fcomp st0, dword [esp+0x48]} f== temp22_1 */ == temp22_1;
                /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                result = (c0_30 ? 1 : 0) << 8 | (c2_30 ? 1 : 0) << 0xa | (c3_30 ? 1 : 0) << 0xe
                    | (top_46 & 7) << 0xb;

                if (*(&result + 1) & 1)
                {
🚫🚫                label_4e5949:
                    /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                    long double temp24_1 = a7;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp24_1 */ - temp24_1;
                    bool c0_32 = /* bool c0_32 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f< temp24_1 */ < temp24_1;
                    bool c2_32 = FCMP_UO(/* bool c2_32 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x50]}, temp24_1) */,
                        temp24_1);
                    bool c3_32 = /* bool c3_32 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f== temp24_1 */ == temp24_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                    result = (c0_32 ? 1 : 0) << 8 | (c2_32 ? 1 : 0) << 0xa | (c3_32 ? 1 : 0) << 0xe
                        | (top_46 & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
                    {
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                        long double temp27_1 = a5;
                        /* unimplemented  {fcomp st0, dword [esp+0x48]} f- temp27_1 */ - temp27_1;
                        bool c0_33 = /* bool c0_33 =
                            unimplemented  {fcomp st0, dword [esp+0x48]} f< temp27_1 */ < temp27_1;
                        bool c2_33 = FCMP_UO(/* bool c2_33 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [esp+0x48]}, temp27_1) */, temp27_1);
                        bool c3_33 = /* bool c3_33 =
                            unimplemented  {fcomp st0, dword [esp+0x48]} f== temp27_1 */
                            == temp27_1;
                        /* unimplemented  {fcomp st0, dword [esp+0x48]} */
                        result = (c0_33 ? 1 : 0) << 8 | (c2_33 ? 1 : 0) << 0xa
                            | (c3_33 ? 1 : 0) << 0xe | (top_46 & 7) << 0xb;

                        if (*(&result + 1) & 0x41)
                            goto label_4e5967;
                    }
                }
                else
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                    long double temp25_1 = a7;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp25_1 */ - temp25_1;
                    bool c0_31 = /* bool c0_31 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f< temp25_1 */ < temp25_1;
                    bool c2_31 = FCMP_UO(/* bool c2_31 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x50]}, temp25_1) */,
                        temp25_1);
                    bool c3_31 = /* bool c3_31 =
                        unimplemented  {fcomp st0, dword [esp+0x50]} f== temp25_1 */ == temp25_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                    result = (c0_31 ? 1 : 0) << 8 | (c2_31 ? 1 : 0) << 0xa | (c3_31 ? 1 : 0) << 0xe
                        | (top_46 & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                        goto label_4e5949;

🚫🚫                label_4e5967:
                    /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x48]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x44]} */
🚫🚫🚫                    /* unimplemented  {fmulp st1, st0} */
                    /* unimplemented  {fmulp st1, st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x48]} */
🚫🚫🚫                    /* unimplemented  {fdivp st1, st0} */
                    /* unimplemented  {fdivp st1, st0} */
🚫🚫                    /* unimplemented  {fadd dword [esp+0x44]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x1c]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_34 = /* bool c0_34 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_34 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_34 = FCMP_UO(/* bool c2_34 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_34 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_34 = /* bool c3_34 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_34 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_34 ? 1 : 0) << 8 | (c2_34 ? 1 : 0) << 0xa | (c3_34 ? 1 : 0) << 0xe
                        | ((top_46 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
🚫🚫                        var_18_1 = /* var_18_1 = unimplemented  {fst dword [esp+0x1c], st0} */;

🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x20]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_35 = /* bool c0_35 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_35 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_35 = FCMP_UO(/* bool c2_35 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_35 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_35 = /* bool c3_35 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_35 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_35 ? 1 : 0) << 8 | (c2_35 ? 1 : 0) << 0xa | (c3_35 ? 1 : 0) << 0xe
                        | ((top_46 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
                    }
                    else
                    {
🚫🚫🚫                        var_14_1 = /* var_14_1 = unimplemented  {fstp dword [esp+0x20], st0} */;
                        /* unimplemented  {fstp dword [esp+0x20], st0} */
                    }
                }

🚫🚫                /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                long double temp26_1 = a7;
                /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp26_1 */ - temp26_1;
                bool c0_36 = /* bool c0_36 =
                    unimplemented  {fcomp st0, dword [esp+0x50]} f< temp26_1 */ < temp26_1;
                bool c2_36 = FCMP_UO(/* bool c2_36 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x50]}, temp26_1) */,
                    temp26_1);
                bool c3_36 = /* bool c3_36 =
                    unimplemented  {fcomp st0, dword [esp+0x50]} f== temp26_1 */ == temp26_1;
                /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                result = (c0_36 ? 1 : 0) << 8 | (c2_36 ? 1 : 0) << 0xa | (c3_36 ? 1 : 0) << 0xe
                    | (top_46 & 7) << 0xb;

                if (*(&result + 1) & 1)
                {
🚫🚫                label_4e59cb:
                    /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                    long double temp28_1 = a3;
                    /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp28_1 */ - temp28_1;
                    bool c0_38 = /* bool c0_38 =
                        unimplemented  {fcomp st0, dword [esp+0x40]} f< temp28_1 */ < temp28_1;
                    bool c2_38 = FCMP_UO(/* bool c2_38 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x40]}, temp28_1) */,
                        temp28_1);
                    bool c3_38 = /* bool c3_38 =
                        unimplemented  {fcomp st0, dword [esp+0x40]} f== temp28_1 */ == temp28_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                    result = (c0_38 ? 1 : 0) << 8 | (c2_38 ? 1 : 0) << 0xa | (c3_38 ? 1 : 0) << 0xe
                        | (top_46 & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
                    {
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                        long double temp31_1 = a7;
                        /* unimplemented  {fcomp st0, dword [esp+0x50]} f- temp31_1 */ - temp31_1;
                        bool c0_39 = /* bool c0_39 =
                            unimplemented  {fcomp st0, dword [esp+0x50]} f< temp31_1 */ < temp31_1;
                        bool c2_39 = FCMP_UO(/* bool c2_39 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [esp+0x50]}, temp31_1) */, temp31_1);
                        bool c3_39 = /* bool c3_39 =
                            unimplemented  {fcomp st0, dword [esp+0x50]} f== temp31_1 */
                            == temp31_1;
                        /* unimplemented  {fcomp st0, dword [esp+0x50]} */
                        result = (c0_39 ? 1 : 0) << 8 | (c2_39 ? 1 : 0) << 0xa
                            | (c3_39 ? 1 : 0) << 0xe | (top_46 & 7) << 0xb;

                        if (*(&result + 1) & 0x41)
                            goto label_4e59e9;
                    }
                }
                else
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯                    long double temp29_1 = a3;
                    /* unimplemented  {fcomp st0, dword [esp+0x40]} f- temp29_1 */ - temp29_1;
                    bool c0_37 = /* bool c0_37 =
                        unimplemented  {fcomp st0, dword [esp+0x40]} f< temp29_1 */ < temp29_1;
                    bool c2_37 = FCMP_UO(/* bool c2_37 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x40]}, temp29_1) */,
                        temp29_1);
                    bool c3_37 = /* bool c3_37 =
                        unimplemented  {fcomp st0, dword [esp+0x40]} f== temp29_1 */ == temp29_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x40]} */
                    result = (c0_37 ? 1 : 0) << 8 | (c2_37 ? 1 : 0) << 0xa | (c3_37 ? 1 : 0) << 0xe
                        | (top_46 & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                        goto label_4e59cb;

🚫🚫                label_4e59e9:
                    /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x50]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x4c]} */
🚫🚫🚫                    /* unimplemented  {fmulp st1, st0} */
                    /* unimplemented  {fmulp st1, st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x40]} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x50]} */
🚫🚫🚫                    /* unimplemented  {fdivp st1, st0} */
                    /* unimplemented  {fdivp st1, st0} */
🚫🚫                    /* unimplemented  {fadd dword [esp+0x4c]} */
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x1c]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_40 = /* bool c0_40 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_40 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_40 = FCMP_UO(/* bool c2_40 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_40 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_40 = /* bool c3_40 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_40 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_40 ? 1 : 0) << 8 | (c2_40 ? 1 : 0) << 0xa | (c3_40 ? 1 : 0) << 0xe
                        | ((top_46 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 1))
🚫🚫                        var_18_1 = /* var_18_1 = unimplemented  {fst dword [esp+0x1c], st0} */;

🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x20]} */
⋯                    /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                        - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                    bool c0_41 = /* bool c0_41 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                        < /* bool c0_41 =
                        unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                    bool c2_41 = FCMP_UO(/* bool c2_41 = is_unordered.t(
                        unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
                        /* bool c2_41 = is_unordered.t(unimplemented  {fcomp st0, st1},
                        unimplemented  {fcomp st0, st1}) */);
                    bool c3_41 = /* bool c3_41 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                        == /* bool c3_41 =
                        unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                    /* unimplemented  {fcomp st0, st1} */
                    result = (c0_41 ? 1 : 0) << 8 | (c2_41 ? 1 : 0) << 0xa | (c3_41 ? 1 : 0) << 0xe
                        | ((top_46 - 1) & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
                    }
                    else
                    {
🚫🚫🚫                        var_14_1 = /* var_14_1 = unimplemented  {fstp dword [esp+0x20], st0} */;
                        /* unimplemented  {fstp dword [esp+0x20], st0} */
                    }
                }

🚫🚫                /* unimplemented  {fld st0, dword [esp+0x40]} */
⋯                long double temp30_1 = a1;
                /* unimplemented  {fcomp st0, dword [esp+0x38]} f- temp30_1 */ - temp30_1;
                bool c0_42 = /* bool c0_42 =
                    unimplemented  {fcomp st0, dword [esp+0x38]} f< temp30_1 */ < temp30_1;
                bool c2_42 = FCMP_UO(/* bool c2_42 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x38]}, temp30_1) */,
                    temp30_1);
                bool c3_42 = /* bool c3_42 =
                    unimplemented  {fcomp st0, dword [esp+0x38]} f== temp30_1 */ == temp30_1;
                /* unimplemented  {fcomp st0, dword [esp+0x38]} */
                result = (c0_42 ? 1 : 0) << 8 | (c2_42 ? 1 : 0) << 0xa | (c3_42 ? 1 : 0) << 0xe
                    | (top_46 & 7) << 0xb;

                if (!(*(&result + 1) & 1))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [esp+0x40]} */
⋯                    long double temp33_1 = var_24_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x10]} f- temp33_1 */ - temp33_1;
                    bool c0_43 = /* bool c0_43 =
                        unimplemented  {fcomp st0, dword [esp+0x10]} f< temp33_1 */ < temp33_1;
                    bool c2_43 = FCMP_UO(/* bool c2_43 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x10]}, temp33_1) */,
                        temp33_1);
                    bool c3_43 = /* bool c3_43 =
                        unimplemented  {fcomp st0, dword [esp+0x10]} f== temp33_1 */ == temp33_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x10]} */
                    result = (c0_43 ? 1 : 0) << 8 | (c2_43 ? 1 : 0) << 0xa | (c3_43 ? 1 : 0) << 0xe
                        | (top_46 & 7) << 0xb;

                    if (*(&result + 1) & 0x41)
                    {
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x24]} */
⋯                        long double temp36_1 = a2;
                        /* unimplemented  {fcomp st0, dword [esp+0x3c]} f- temp36_1 */ - temp36_1;
                        bool c0_44 = /* bool c0_44 =
                            unimplemented  {fcomp st0, dword [esp+0x3c]} f< temp36_1 */ < temp36_1;
                        bool c2_44 = FCMP_UO(/* bool c2_44 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [esp+0x3c]}, temp36_1) */, temp36_1);
                        bool c3_44 = /* bool c3_44 =
                            unimplemented  {fcomp st0, dword [esp+0x3c]} f== temp36_1 */
                            == temp36_1;
                        /* unimplemented  {fcomp st0, dword [esp+0x3c]} */
                        result = (c0_44 ? 1 : 0) << 8 | (c2_44 ? 1 : 0) << 0xa
                            | (c3_44 ? 1 : 0) << 0xe | (top_46 & 7) << 0xb;

                        if (!(*(&result + 1) & 1))
                        {
                            result = a2;
                            result_1 = result;
                        }

🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x28]} */
⋯                        long double temp40_1 = a2;
                        /* unimplemented  {fcomp st0, dword [esp+0x3c]} f- temp40_1 */ - temp40_1;
                        bool c0_45 = /* bool c0_45 =
                            unimplemented  {fcomp st0, dword [esp+0x3c]} f< temp40_1 */ < temp40_1;
                        bool c2_45 = FCMP_UO(/* bool c2_45 = is_unordered.t(
                            unimplemented  {fcomp st0, dword [esp+0x3c]}, temp40_1) */, temp40_1);
                        bool c3_45 = /* bool c3_45 =
                            unimplemented  {fcomp st0, dword [esp+0x3c]} f== temp40_1 */
                            == temp40_1;
                        /* unimplemented  {fcomp st0, dword [esp+0x3c]} */
                        result = (c0_45 ? 1 : 0) << 8 | (c2_45 ? 1 : 0) << 0xa
                            | (c3_45 ? 1 : 0) << 0xe | (top_46 & 7) << 0xb;

                        if (*(&result + 1) & 0x41)
                        {
🚫🚫🚫                            /* unimplemented  {fstp st0, st0} */
                            /* unimplemented  {fstp st0, st0} */
🚫🚫                            /* unimplemented  {fld st0, dword [esp+0x3c]} */
                        }
                    }
                }

🚫🚫                /* unimplemented  {fld st0, dword [esp+0x48]} */
⋯                long double temp32_1 = a1;
                /* unimplemented  {fcomp st0, dword [esp+0x38]} f- temp32_1 */ - temp32_1;
                bool c0_46 = /* bool c0_46 =
                    unimplemented  {fcomp st0, dword [esp+0x38]} f< temp32_1 */ < temp32_1;
                bool c2_46 = FCMP_UO(/* bool c2_46 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x38]}, temp32_1) */,
                    temp32_1);
                bool c3_46 = /* bool c3_46 =
                    unimplemented  {fcomp st0, dword [esp+0x38]} f== temp32_1 */ == temp32_1;
