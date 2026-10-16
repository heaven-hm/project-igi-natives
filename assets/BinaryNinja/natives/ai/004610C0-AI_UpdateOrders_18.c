#include "AI_UpdateOrders_18.h"
int32_t AI_UpdateOrders_18(float a1)

{
    float ctxB = a1;
    void* valA = *(ctxB + 0x76c);
    void* flagP = *(ctxB + 0x4ec);

    if (!valA)
    {
        int16_t top_1 = 0xffff;
        long double fp0_1;
        bool c1_1;
        bool c2_1;
        fp0_1 = __fptan(0.78539818525314331);

        if (!c2_1)
            top_1 = 0xfffe;

🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
⋯        long double f0_1 = *(flagP + 0x1e4);
        /* unimplemented  {fcomp fp0, dword [flagP+0x1e4]} f- f0_1 */ - f0_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, dword [flagP+0x1e4]} f< f0_1 */ < f0_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x1e4]}, f0_1) */, f0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [flagP+0x1e4]} f== f0_1 */ == f0_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x1e4]} */
🚫🚫        int16_t top_4 = top_1 + 1;
        /* unimplemented  {fld fp0, dword [ctxB+0x1b0]} */

        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fadd dword [ctxB+0x110]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_5335c0]} */
        }

        if (*(ctxB + 0x510))
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333ec]} */
        }

🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533400]} */
        *(ctxB + 0x4fc) = 0;
        *(ctxB + 0x4f8) = 0;
        *(ctxB + 0x504) = 0;
        *(ctxB + 0x500) = 0;
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fmul fp0, dword [flagP+0x1e4]} */
🚫🚫🚫        a1 = /* a1 = unimplemented  {fstp dword [esp+0x3c], fp0} */;
        /* unimplemented  {fstp dword [esp+0x3c], fp0} */
🚫🚫🚫🚫🚫        long double f1_1 = 0f;
        /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f1_1 */ - f1_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f< f1_1 */ < f1_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f1_1) */, f1_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcom fp0, dword [&g_5333ec]} f== f1_1 */ == f1_1;
🚫🚫        /* unimplemented  {fld fp0, fp0} */

        if (*(&((c0_2 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | ((top_4 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫            /* unimplemented  {fchs } */

⋯        long double f2_1 = 0.0599999987f;
        /* unimplemented  {fcomp fp0, dword [&g_533938]} f- f2_1 */ - f2_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp fp0, dword [&g_533938]} f< f2_1 */ < f2_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533938]}, f2_1) */, f2_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp fp0, dword [&g_533938]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, dword [&g_533938]} */

        if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 1))
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
        }
        else
        {
🚫🚫🚫🚫🚫            long double f3_1 = 0f;
            /* unimplemented  {fcom fp0, dword [&g_5333ec]} f- f3_1 */ - f3_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f< f3_1 */ < f3_1;
            bool c2_5 = FCMP_UO(/* bool c2_5 =
                is_unordered.t(unimplemented  {fcom fp0, dword [&g_5333ec]}, f3_1) */,
                f3_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcom fp0, dword [&g_5333ec]} f== f3_1 */ == f3_1;

            if (*(&((c0_4 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | (top_4 & 7) << 0xb) + 1) & 1)
🚫🚫                /* unimplemented  {fchs } */

🚫🚫            /* unimplemented  {fmul fp0, qword [&g_533930]} */
🚫🚫            /* unimplemented  {fsubr fp0, qword [&g_533924[4]]} */
🚫🚫            /* unimplemented  {fdivr fp0, dword [esp+0x3c]} */
🚫🚫🚫            a1 = /* a1 = unimplemented  {fstp dword [esp+0x3c], fp0} */;
            /* unimplemented  {fstp dword [esp+0x3c], fp0} */
        }

🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫        /* unimplemented  {fadd dword [ctxB+0x764]} */
🚫🚫        /* unimplemented  {fadd dword [ctxB+0x50c]} */
🚫🚫        *(ctxB + 0x50c) =
🚫🚫        /* unimplemented  {fadd dword [flagP+0x134]} */
🚫🚫🚫        *(ctxB + 0x508) =
        /* unimplemented  {fstp dword [ctxB+0x508], fp0} */
    }
    else
    {
        long double x87_r7_3 = *(ctxB + 0x7a0) * *(valA + 0x78) + *(valA + 0x74) * *(ctxB + 0x794)
            + *(ctxB + 0x788) * *(valA + 0x70);
        float v_28 = x87_r7_3;
        long double x87_r7_7 = *(ctxB + 0x7a4) * *(valA + 0x78) + *(valA + 0x74) * *(ctxB + 0x798)
            + *(ctxB + 0x78c) * *(valA + 0x70);
        float v_24_1 = x87_r7_7;
        long double x87_r7_11 = *(ctxB + 0x7a8) * *(valA + 0x78) + *(valA + 0x74) * *(ctxB + 0x79c)
            + *(ctxB + 0x790) * *(valA + 0x70);
        float v_20_1 = x87_r7_11;
        long double x87_r7_15 = *(ctxB + 0x788) * *(valA + 0x7c) + *(ctxB + 0x7a0) * *(valA + 0x84)
            + *(ctxB + 0x794) * *(valA + 0x80);
        float v_1c_1 = x87_r7_15;
        long double x87_r7_19 = *(ctxB + 0x78c) * *(valA + 0x7c) + *(ctxB + 0x7a4) * *(valA + 0x84)
            + *(ctxB + 0x798) * *(valA + 0x80);
        float v_18_1 = x87_r7_19;
        long double x87_r7_23 = *(ctxB + 0x790) * *(valA + 0x7c) + *(ctxB + 0x7a8) * *(valA + 0x84)
            + *(ctxB + 0x79c) * *(valA + 0x80);
        float v_14_1 = x87_r7_23;
        long double x87_r7_27 = *(ctxB + 0x7a0) * *(valA + 0x90) + *(ctxB + 0x794) * *(valA + 0x8c)
            + *(ctxB + 0x788) * *(valA + 0x88);
        float v_10_1 = x87_r7_27;
        long double x87_r7_31 = *(ctxB + 0x7a4) * *(valA + 0x90) + *(ctxB + 0x798) * *(valA + 0x8c)
            + *(ctxB + 0x78c) * *(valA + 0x88);
        float v_c_1 = x87_r7_31;
        long double x87_r7_35 = *(ctxB + 0x7a8) * *(valA + 0x90) + *(ctxB + 0x79c) * *(valA + 0x8c)
            + *(ctxB + 0x790) * *(valA + 0x88);
        float v_8_1 = x87_r7_35;
        int32_t v_4_1 = *(ctxB + 0x7ac) + *(valA + 0x94) + 1;
        memcpy(&v_28, &v_28, 0x28);
        float v_2c;
        float* v_44_1 = &v_2c;
        float v_30;
        float* v_48_1 = &v_30;
        float* v_4c_1 = &a1;
        float* v_50 = &v_28;
        Sys_Atan2UndefinedInOrig(v_50, v_4c_1, v_48_1, v_44_1);
        float tmpD2 = a1;
        float objC2 = v_30;
        long double x87_r7_36 = v_2c;
        *(ctxB + 0x4fc) = tmpD2;
        *(ctxB + 0x4f8) = tmpD2;
        float valA3 = v_2c;
        *(ctxB + 0x504) = objC2;
        *(ctxB + 0x500) = objC2;
        *(ctxB + 0x50c) = valA3;
        *(ctxB + 0x508) = x87_r7_36 + *(flagP + 0x134);
    }

    return Sys_ReadFileBlock_12(ctxB + 0x78, *(ctxB + 0x4f8), *(ctxB + 0x500), *(ctxB + 0x508));
}
