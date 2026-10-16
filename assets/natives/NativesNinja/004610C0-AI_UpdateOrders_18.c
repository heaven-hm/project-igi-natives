#include "004610C0-AI_UpdateOrders_18.h"
/* 0x004610c0 AI_UpdateOrders_18 full linked: callers=5 callees=3 */
int32_t sub_4610c0(float a1)

{
    float ebx = a1;
    void* eax = *(ebx + 0x76c);
    void* ebp = *(ebx + 0x4ec);

    if (!eax)
    {
        int16_t top_1 = 0xffff;
        long double st0_1;
        bool c1_1;
        bool c2_1;
        st0_1 = __fptan(0.78539818525314331);

        if (!c2_1)
            top_1 = 0xfffe;

🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
⋯        long double temp0_1 = *(ebp + 0x1e4);
        /* unimplemented  {fcomp st0, dword [ebp+0x1e4]} f- temp0_1 */ - temp0_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp st0, dword [ebp+0x1e4]} f< temp0_1 */ < temp0_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x1e4]}, temp0_1) */, temp0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, dword [ebp+0x1e4]} f== temp0_1 */ == temp0_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x1e4]} */
🚫🚫        int16_t top_4 = top_1 + 1;
        /* unimplemented  {fld st0, dword [ebx+0x1b0]} */

        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fadd dword [ebx+0x110]} */
🚫🚫            /* unimplemented  {fmul st0, qword [&g_5335c0]} */
        }

        if (*(ebx + 0x510))
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [&g_5333ec]} */
        }

🚫🚫        /* unimplemented  {fld st0, st0} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_533400]} */
        *(ebx + 0x4fc) = 0;
        *(ebx + 0x4f8) = 0;
        *(ebx + 0x504) = 0;
        *(ebx + 0x500) = 0;
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fmul st0, dword [ebp+0x1e4]} */
🚫🚫🚫        a1 = /* a1 = unimplemented  {fstp dword [esp+0x3c], st0} */;
        /* unimplemented  {fstp dword [esp+0x3c], st0} */
🚫🚫🚫🚫🚫        long double temp1_1 = 0f;
        /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp1_1 */ - temp1_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f< temp1_1 */ < temp1_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp1_1) */, temp1_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcom st0, dword [&g_5333ec]} f== temp1_1 */ == temp1_1;
🚫🚫        /* unimplemented  {fld st0, st0} */

        if (*(&((c0_2 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | ((top_4 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

⋯        long double temp2_1 = 0.0599999987f;
        /* unimplemented  {fcomp st0, dword [&g_533938]} f- temp2_1 */ - temp2_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp st0, dword [&g_533938]} f< temp2_1 */ < temp2_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_533938]}, temp2_1) */, temp2_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp st0, dword [&g_533938]} f== temp2_1 */ == temp2_1;
        /* unimplemented  {fcomp st0, dword [&g_533938]} */

        if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 1))
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
        }
        else
        {
🚫🚫🚫🚫🚫            long double temp3_1 = 0f;
            /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp3_1 */ - temp3_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcom st0, dword [&g_5333ec]} f< temp3_1 */ < temp3_1;
            bool c2_5 = FCMP_UO(/* bool c2_5 =
                is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp3_1) */,
                temp3_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcom st0, dword [&g_5333ec]} f== temp3_1 */ == temp3_1;

            if (*(&((c0_4 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | (top_4 & 7) << 0xb) + 1) & 1)
🚫🚫                /* unimplemented  {fchs } */

🚫🚫            /* unimplemented  {fmul st0, qword [&g_533930]} */
🚫🚫            /* unimplemented  {fsubr st0, qword [&g_533924[4]]} */
🚫🚫            /* unimplemented  {fdivr st0, dword [esp+0x3c]} */
🚫🚫🚫            a1 = /* a1 = unimplemented  {fstp dword [esp+0x3c], st0} */;
            /* unimplemented  {fstp dword [esp+0x3c], st0} */
        }

🚫🚫        /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fadd dword [ebx+0x764]} */
🚫🚫        /* unimplemented  {fadd dword [ebx+0x50c]} */
🚫🚫        *(ebx + 0x50c) = /* *(ebx i+ 0x50c) = unimplemented  {fst dword [ebx+0x50c], st0} */;
🚫🚫        /* unimplemented  {fadd dword [ebp+0x134]} */
🚫🚫🚫        *(ebx + 0x508) = /* *(ebx i+ 0x508) = unimplemented  {fstp dword [ebx+0x508], st0} */;
        /* unimplemented  {fstp dword [ebx+0x508], st0} */
    }
    else
    {
        long double x87_r7_3 = *(ebx + 0x7a0) * *(eax + 0x78) + *(eax + 0x74) * *(ebx + 0x794)
            + *(ebx + 0x788) * *(eax + 0x70);
        float var_28 = x87_r7_3;
        long double x87_r7_7 = *(ebx + 0x7a4) * *(eax + 0x78) + *(eax + 0x74) * *(ebx + 0x798)
            + *(ebx + 0x78c) * *(eax + 0x70);
        float var_24_1 = x87_r7_7;
        long double x87_r7_11 = *(ebx + 0x7a8) * *(eax + 0x78) + *(eax + 0x74) * *(ebx + 0x79c)
            + *(ebx + 0x790) * *(eax + 0x70);
        float var_20_1 = x87_r7_11;
        long double x87_r7_15 = *(ebx + 0x788) * *(eax + 0x7c) + *(ebx + 0x7a0) * *(eax + 0x84)
            + *(ebx + 0x794) * *(eax + 0x80);
        float var_1c_1 = x87_r7_15;
        long double x87_r7_19 = *(ebx + 0x78c) * *(eax + 0x7c) + *(ebx + 0x7a4) * *(eax + 0x84)
            + *(ebx + 0x798) * *(eax + 0x80);
        float var_18_1 = x87_r7_19;
        long double x87_r7_23 = *(ebx + 0x790) * *(eax + 0x7c) + *(ebx + 0x7a8) * *(eax + 0x84)
            + *(ebx + 0x79c) * *(eax + 0x80);
        float var_14_1 = x87_r7_23;
        long double x87_r7_27 = *(ebx + 0x7a0) * *(eax + 0x90) + *(ebx + 0x794) * *(eax + 0x8c)
            + *(ebx + 0x788) * *(eax + 0x88);
        float var_10_1 = x87_r7_27;
        long double x87_r7_31 = *(ebx + 0x7a4) * *(eax + 0x90) + *(ebx + 0x798) * *(eax + 0x8c)
            + *(ebx + 0x78c) * *(eax + 0x88);
        float var_c_1 = x87_r7_31;
        long double x87_r7_35 = *(ebx + 0x7a8) * *(eax + 0x90) + *(ebx + 0x79c) * *(eax + 0x8c)
            + *(ebx + 0x790) * *(eax + 0x88);
        float var_8_1 = x87_r7_35;
        int32_t var_4_1 = *(ebx + 0x7ac) + *(eax + 0x94) + 1;
        memcpy(&var_28, &var_28, 0x28);
        float var_2c;
        float* var_44_1 = &var_2c;
        float var_30;
        float* var_48_1 = &var_30;
        float* var_4c_1 = &a1;
        float* var_50 = &var_28;
        sub_4b3c50(var_50, var_4c_1, var_48_1, var_44_1);
        float edx_2 = a1;
        float ecx_2 = var_30;
        long double x87_r7_36 = var_2c;
        *(ebx + 0x4fc) = edx_2;
        *(ebx + 0x4f8) = edx_2;
        float eax_3 = var_2c;
        *(ebx + 0x504) = ecx_2;
        *(ebx + 0x500) = ecx_2;
        *(ebx + 0x50c) = eax_3;
        *(ebx + 0x508) = x87_r7_36 + *(ebp + 0x134);
    }

    return sub_4b38e0(ebx + 0x78, *(ebx + 0x4f8), *(ebx + 0x500), *(ebx + 0x508));
}
