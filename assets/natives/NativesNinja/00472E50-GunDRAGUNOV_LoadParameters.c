#include "00472E50-GunDRAGUNOV_LoadParameters.h"
/* 0x00472e50 GunDRAGUNOV_LoadParameters full linked: callers=0 callees=4 */
void* sub_472e50(float* a1, void* a2)

{
    void* edi = *(a2 + 0x2c);
    float* edx = *(a1[0x4a] + 0x6e4);
    void* eax = *(edi + 0x4ec);
    (*(((sub_460bf0() * 0x180 + sub_477bf0()) << 2) + &g_a96ae0))(a1, a2);
    void* result = *(a2 + 0x1c);
    a1[0x6c] = result;

    if (*(a2 + 0x14))
    {
        if (!result)
        {
            long double x87_r7_17 = *(edi + 0x1cc);
            long double temp0_1 = 0f;
            x87_r7_17 - temp0_1;
            result = (x87_r7_17 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
                long double x87_r7_18 = *(edi + 0x12c);
                long double temp2_1 = 0f;
                x87_r7_18 - temp2_1;
                result = (x87_r7_18 < temp2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == temp2_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 0x40)
                    return sub_4659d0(*(edi + 0x4ec));
            }
        }
        else
        {
            *(a2 + 0x20) = *(a2 + 0x20) * 0.0500000007f;
            *(a2 + 0x24) = *(a2 + 0x24) * 0.0500000007f;
            long double x87_r7_5 = *(edi + 0x1cc);
            long double temp1_1 = 0f;
            x87_r7_5 - temp1_1;
            result = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
                long double x87_r7_6 = *(edi + 0x12c);
                long double temp4_1 = 0f;
                x87_r7_6 - temp4_1;
                result = (x87_r7_6 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 0x40)
                    result = Human_TaskViewReset(*(edi + 0x4ec));
            }

            long double x87_r7_7 = *(edi + 0x1e8);
            long double temp3_1 = 0f;
            x87_r7_7 - temp3_1;
            result = (x87_r7_7 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_472fc4:
                long double x87_r7_12 = *(eax + 0x1e4);
                long double temp5_1 = *edx;
                x87_r7_12 - temp5_1;
                result = (x87_r7_12 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == temp5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    *(eax + 0x1e4) = *(eax + 0x1e4) * 0.959999979f;
                    *(eax + 0x1e8) = *(eax + 0x1e8) * 0.959999979f;
                }
            }
            else
            {
                long double x87_r7_8 = *(edi + 0x12c);
                long double temp6_1 = 0f;
                x87_r7_8 - temp6_1;
                result = (x87_r7_8 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp6_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_472fc4;

                long double x87_r7_9 = *(edi + 0x1ec);
                long double temp7_1 = 0f;
                x87_r7_9 - temp7_1;
                result = (x87_r7_9 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                    int16_t top_1 = 0xffff;
                    long double st0_1;
                    bool c1_1;
                    bool c2_6;
                    st0_1 = __fptan(0.78539818525314331);

                    if (!c2_6)
                        top_1 = 0xfffe;

🚫🚫🚫                    /* unimplemented  {fstp st0, st0} */
                    /* unimplemented  {fstp st0, st0} */
                    int16_t top_2 = top_1 + 1;
🚫🚫🚫🚫🚫                    long double temp8_1 = *(eax + 0x1e4);
                    /* unimplemented  {fcom st0, dword [ecx+0x1e4]} f- temp8_1 */ - temp8_1;
                    bool c0_6 = /* bool c0_6 =
                        unimplemented  {fcom st0, dword [ecx+0x1e4]} f< temp8_1 */ < temp8_1;
                    bool c2_7 = FCMP_UO(/* bool c2_7 =
                        is_unordered.t(unimplemented  {fcom st0, dword [ecx+0x1e4]}, temp8_1) */,
                        temp8_1);
                    bool c3_6 = /* bool c3_6 =
                        unimplemented  {fcom st0, dword [ecx+0x1e4]} f== temp8_1 */ == temp8_1;
                    result = (c0_6 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                        | (top_2 & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫                        /* unimplemented  {fld st0, dword [ecx+0x1e4]} */
🚫🚫                        /* unimplemented  {fmul st0, dword [&g_533a80]} */
🚫🚫🚫                        *(eax + 0x1e4) = /* *(eax + 0x1e4) =
                            unimplemented  {fstp dword [ecx+0x1e4], st0} */;
                        /* unimplemented  {fstp dword [ecx+0x1e4], st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [ecx+0x1e8]} */
🚫🚫                        /* unimplemented  {fmul st0, dword [&g_533a80]} */
🚫🚫🚫                        *(eax + 0x1e8) = /* *(eax + 0x1e8) =
                            unimplemented  {fstp dword [ecx+0x1e8], st0} */;
                        /* unimplemented  {fstp dword [ecx+0x1e8], st0} */
                    }

🚫🚫🚫🚫🚫                    long double temp9_1 = *(eax + 0x1e4);
                    /* unimplemented  {fcom st0, dword [ecx+0x1e4]} f- temp9_1 */ - temp9_1;
                    bool c0_7 = /* bool c0_7 =
                        unimplemented  {fcom st0, dword [ecx+0x1e4]} f< temp9_1 */ < temp9_1;
                    bool c2_8 = FCMP_UO(/* bool c2_8 =
                        is_unordered.t(unimplemented  {fcom st0, dword [ecx+0x1e4]}, temp9_1) */,
                        temp9_1);
                    bool c3_7 = /* bool c3_7 =
                        unimplemented  {fcom st0, dword [ecx+0x1e4]} f== temp9_1 */ == temp9_1;
                    result = (c0_7 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                        | (top_2 & 7) << 0xb;

                    if (*(&result + 1) & 1)
                    {
🚫🚫🚫                        *(eax + 0x1e4) = /* *(eax + 0x1e4) =
                            unimplemented  {fstp dword [ecx+0x1e4], st0} */;
                        /* unimplemented  {fstp dword [ecx+0x1e4], st0} */
🚫🚫                        /* unimplemented  {fld st0, qword [&g_5339c0]} */
🚫🚫🚫🚫                        long double st0_2;
                        bool c1_2;
                        bool c2_9;
                        st0_2 = __fptan(/* st0_2, c1_2, c2_9 = __fptan(unimplemented  {fptan }) */);
                        /* unimplemented  {fptan } */

                        if (!c2_9)
                            /* unimplemented  {fptan } */

🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫                        *(eax + 0x1e8) = /* *(eax + 0x1e8) =
                            unimplemented  {fstp dword [ecx+0x1e8], st0} */;
                        /* unimplemented  {fstp dword [ecx+0x1e8], st0} */
                        return result;
                    }

🚫🚫🚫                    /* unimplemented  {fstp st0, st0} */
                    /* unimplemented  {fstp st0, st0} */
                }
            }
        }
    }

    return result;
}
