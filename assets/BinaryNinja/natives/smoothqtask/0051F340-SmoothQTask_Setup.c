// Original IGI.EXE function: SmoothQTask_Setup (VA 0x0051F340; static CFG gate PASS, CFG score 1.000).
#include "SmoothQTask_Setup.h"
int32_t* SmoothQTask_Setup(long double context , int32_t param_2)

{
    int32_t source_val = param_2;
    int32_t* i = *(source_val + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* dest_1 = *i;
            void* data_4;

            if (!dest_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *dest_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & dest_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_6 = *((data_5 << 2) + &g_a970e0);

            if (data_6)
            {
                data_6(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    int32_t* result = Script_FormatString_6(source_val + 0xa8);
    int16_t idx;

    if (!result)
    {
        int32_t temp_3 = *(source_val + 0x74);
        *(source_val + 0x60) = *(source_val + 0x70);
        *(source_val + 0x64) = temp_3;
    }
    else
    {
        result = Script_SpawnNewTask_7(source_val + 0xa8, source_val);
        *(source_val + 0x60) = context;
        idx = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x68]} */
⋯    long double f0 = *(source_val + 0x60);
    /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */
    result = (c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb;
    int16_t top_4;

    if (!(*(&result + 1) & 1))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x68]} */
⋯        long double f1_1 = *(source_val + 0x60);
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f1_1 */ - f1_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f1_1 */ < f1_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f1_1) */, f1_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */
        top_4 = idx;
        result = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
        {
🚫🚫            /* unimplemented  {fld fp0, qword [source_val+0x68]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [source_val+0x88]} */
🚫🚫            *(source_val + 0x68) =
⋯            long double f5_1 = *(source_val + 0x60);
            /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f5_1 */ - f5_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f5_1 */ < f5_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f5_1) */, f5_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f5_1 */ == f5_1;
            /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */
            result = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_4 & 7) << 0xb;

            if (*(&result + 1) & 1)
            {
                result = *(source_val + 0x64);
                *(source_val + 0x68) = *(source_val + 0x60);
                *(source_val + 0x6c) = result;
            }
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x80]} */
🚫🚫        /* unimplemented  {fadd qword [source_val+0x68]} */
🚫🚫        *(source_val + 0x68) =
⋯        long double f2_1 = *(source_val + 0x60);
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f2_1 */ - f2_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f2_1 */ < f2_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f2_1) */, f2_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */
        top_4 = idx;
        result = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
        {
            result = *(source_val + 0x60);
            int32_t entity_1 = *(source_val + 0x64);
            *(source_val + 0x68) = result;
            *(source_val + 0x6c) = entity_1;
        }
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0xa0]} */
⋯    long double f4 = 0.0;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f4 */ - f4;
    bool c0_4 = /* bool c0_4 = unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f4 */ < f4;
    bool c2_4 = FCMP_UO(/* bool c2_4 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f4) */, f4);
    bool c3_4 = /* bool c3_4 =
        unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f4 */ == f4;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */
    result =
        (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb;

    if (!(*(&result + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x68]} */
🚫🚫        /* unimplemented  {fdiv fp0, qword [source_val+0xa0]} */
🚫🚫🚫        int32_t item_8_1 = /* int32_t item_8_1 = (unimplemented  {fistp qword [stack_ptr+0x8], fp0}).d */;
        /* unimplemented  {fistp qword [stack_ptr+0x8], fp0} */
        param_2 = item_8_1;
🚫🚫        /* unimplemented  {fild fp0, dword [stack_ptr+0x14]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [source_val+0xa0]} */
🚫🚫🚫        *(source_val + 0x68) =
        /* unimplemented  {fstp qword [source_val+0x68], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x90]} */
⋯    /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
        - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
    bool c0_5 = /* bool c0_5 =
        unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_5 =
        unimplemented  {fcompp } f< unimplemented  {fcompp } */;
    bool c2_5 = FCMP_UO(/* bool c2_5 =
        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */, /* bool c2_5 =
        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
    bool c3_5 = /* bool c3_5 =
        unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_5 =
        unimplemented  {fcompp } f== unimplemented  {fcompp } */;
    /* unimplemented  {fcompp } */
    /* unimplemented  {fcompp } */
    result =
        (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb;

    if (!(*(&result + 1) & 0x41))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x90]} */
🚫🚫🚫        *(source_val + 0x68) =
        /* unimplemented  {fstp qword [source_val+0x68], fp0} */
        return result;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x98]} */
⋯    /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
        - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
    bool c0_6 = /* bool c0_6 =
        unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_6 =
        unimplemented  {fcompp } f< unimplemented  {fcompp } */;
    bool c2_6 = FCMP_UO(/* bool c2_6 =
        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */, /* bool c2_6 =
        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
    bool c3_6 = /* bool c3_6 =
        unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_6 =
        unimplemented  {fcompp } f== unimplemented  {fcompp } */;
    /* unimplemented  {fcompp } */
    /* unimplemented  {fcompp } */
    result =
        (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb;

    if (*(&result + 1) & 1)
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x98]} */
🚫🚫🚫        *(source_val + 0x68) =
        /* unimplemented  {fstp qword [source_val+0x68], fp0} */
    }

    return result;
}
