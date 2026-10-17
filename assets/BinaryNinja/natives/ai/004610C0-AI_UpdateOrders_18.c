// Original IGI.EXE function: AI_UpdateOrders_18 (VA 0x004610C0; static CFG gate PASS, CFG score 0.889).
#include "AI_UpdateOrders_18.h"
int32_t AI_UpdateOrders_18(float context)

{
    float context_val = context;
    void* data_val = *(context_val + 0x76c);
    void* flagP = *(context_val + 0x4ec);

    if (!data_val)
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
        /* unimplemented  {fld fp0, dword [context_val+0x1b0]} */

        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fadd dword [context_val+0x110]} */
🚫🚫            /* unimplemented  {fmul fp0, qword [&g_5335c0]} */
        }

        if (*(context_val + 0x510))
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [&g_5333ec]} */
        }

🚫🚫        /* unimplemented  {fld fp0, fp0} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_533400]} */
        *(context_val + 0x4fc) = 0;
        *(context_val + 0x4f8) = 0;
        *(context_val + 0x504) = 0;
        *(context_val + 0x500) = 0;
🚫🚫        /* unimplemented  {fchs } */
🚫🚫        /* unimplemented  {fmul fp0, dword [flagP+0x1e4]} */
🚫🚫🚫        context = /* context = unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */
🚫🚫🚫🚫🚫        long double f1_1 = 0.0f;
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
🚫🚫🚫🚫🚫            long double f3_1 = 0.0f;
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
🚫🚫            /* unimplemented  {fdivr fp0, dword [stack_ptr+0x3c]} */
🚫🚫🚫            context = /* context = unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */
        }

🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫        /* unimplemented  {fadd dword [context_val+0x764]} */
🚫🚫        /* unimplemented  {fadd dword [context_val+0x50c]} */
🚫🚫        *(context_val + 0x50c) =
🚫🚫        /* unimplemented  {fadd dword [flagP+0x134]} */
🚫🚫🚫        *(context_val + 0x508) =
        /* unimplemented  {fstp dword [context_val+0x508], fp0} */
    }
    else
    {
        long double fpu_val_7_3 = *(context_val + 0x7a0) * *(data_val + 0x78) + *(data_val + 0x74) * *(context_val + 0x794)
            + *(context_val + 0x788) * *(data_val + 0x70);
        float item_28 = fpu_val_7_3;
        long double fpu_val_7_7 = *(context_val + 0x7a4) * *(data_val + 0x78) + *(data_val + 0x74) * *(context_val + 0x798)
            + *(context_val + 0x78c) * *(data_val + 0x70);
        float item_24_1 = fpu_val_7_7;
        long double fpu_val_7_11 = *(context_val + 0x7a8) * *(data_val + 0x78) + *(data_val + 0x74) * *(context_val + 0x79c)
            + *(context_val + 0x790) * *(data_val + 0x70);
        float item_20_1 = fpu_val_7_11;
        long double fpu_val_7_15 = *(context_val + 0x788) * *(data_val + 0x7c) + *(context_val + 0x7a0) * *(data_val + 0x84)
            + *(context_val + 0x794) * *(data_val + 0x80);
        float item_1c_1 = fpu_val_7_15;
        long double fpu_val_7_19 = *(context_val + 0x78c) * *(data_val + 0x7c) + *(context_val + 0x7a4) * *(data_val + 0x84)
            + *(context_val + 0x798) * *(data_val + 0x80);
        float item_18_1 = fpu_val_7_19;
        long double fpu_val_7_23 = *(context_val + 0x790) * *(data_val + 0x7c) + *(context_val + 0x7a8) * *(data_val + 0x84)
            + *(context_val + 0x79c) * *(data_val + 0x80);
        float item_14_1 = fpu_val_7_23;
        long double fpu_val_7_27 = *(context_val + 0x7a0) * *(data_val + 0x90) + *(context_val + 0x794) * *(data_val + 0x8c)
            + *(context_val + 0x788) * *(data_val + 0x88);
        float item_10_1 = fpu_val_7_27;
        long double fpu_val_7_31 = *(context_val + 0x7a4) * *(data_val + 0x90) + *(context_val + 0x798) * *(data_val + 0x8c)
            + *(context_val + 0x78c) * *(data_val + 0x88);
        float item_c_1 = fpu_val_7_31;
        long double fpu_val_7_35 = *(context_val + 0x7a8) * *(data_val + 0x90) + *(context_val + 0x79c) * *(data_val + 0x8c)
            + *(context_val + 0x790) * *(data_val + 0x88);
        float item_8_1 = fpu_val_7_35;
        int32_t item_4_1 = *(context_val + 0x7ac) + *(data_val + 0x94) + 1;
        memcpy(&item_28, &item_28, 0x28);
        float item_2c;
        float* item_44_1 = &item_2c;
        float item_30;
        float* item_48_1 = &item_30;
        float* item_4c_1 = &context;
        float* item_50 = &item_28;
        Sys_Atan2UndefinedInOrig(item_50, item_4c_1, item_48_1, item_44_1);
        float temp_2 = context;
        float entity_2 = item_30;
        long double fpu_val_7_36 = item_2c;
        *(context_val + 0x4fc) = temp_2;
        *(context_val + 0x4f8) = temp_2;
        float data_3 = item_2c;
        *(context_val + 0x504) = entity_2;
        *(context_val + 0x500) = entity_2;
        *(context_val + 0x50c) = data_3;
        *(context_val + 0x508) = fpu_val_7_36 + *(flagP + 0x134);
    }

    return Sys_ReadFileBlock_12(context_val + 0x78, *(context_val + 0x4f8), *(context_val + 0x500), *(context_val + 0x508));
}
