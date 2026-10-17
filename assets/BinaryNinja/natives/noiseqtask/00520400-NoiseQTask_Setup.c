// Original IGI.EXE function: NoiseQTask_Setup (VA 0x00520400; static CFG gate PASS, CFG score 1.000).
#include "NoiseQTask_Setup.h"
int32_t NoiseQTask_Setup(long double context , void* param_2)

{
    int32_t* i = *(param_2 + 8);

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

    int16_t idx;

    if (!Script_FormatString_6(param_2 + 0xd8))
    {
        int32_t temp_3 = *(param_2 + 0x8c);
        *(param_2 + 0x60) = *(param_2 + 0x88);
        *(param_2 + 0x64) = temp_3;
    }
    else
    {
        Script_SpawnNewTask_7(param_2 + 0xd8, param_2);
        *(param_2 + 0x60) = context;
        idx = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x70]} */
⋯    long double f0 = *(param_2 + 0x60);
    /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */
    int16_t top_4;

    if (!(*(&((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb) + 1)
        & 1))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x70]} */
⋯        long double f1_1 = *(param_2 + 0x60);
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f1_1 */ - f1_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f1_1 */ < f1_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f1_1) */, f1_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */
        top_4 = idx;

        if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            /* unimplemented  {fld fp0, qword [source_val+0x70]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [source_val+0xa0]} */
🚫🚫            *(param_2 + 0x70) =
⋯            long double f4_1 = *(param_2 + 0x60);
            /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f4_1 */ - f4_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f4_1 */ < f4_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f4_1) */, f4_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f4_1 */ == f4_1;
            /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_4 & 7) << 0xb) + 1) & 1)
            {
                int32_t data_10 = *(param_2 + 0x64);
                *(param_2 + 0x70) = *(param_2 + 0x60);
                *(param_2 + 0x74) = data_10;
            }
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x98]} */
🚫🚫        /* unimplemented  {fadd qword [source_val+0x70]} */
🚫🚫        *(param_2 + 0x70) =
⋯        long double f2_1 = *(param_2 + 0x60);
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} f- f2_1 */ - f2_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f< f2_1 */ < f2_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [source_val+0x60]}, f2_1) */, f2_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, qword [source_val+0x60]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, qword [source_val+0x60]} */
        top_4 = idx;

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
            int32_t entity_1 = *(param_2 + 0x64);
            *(param_2 + 0x70) = *(param_2 + 0x60);
            *(param_2 + 0x74) = entity_1;
        }
    }

    int32_t data_11 = *(param_2 + 0x80);

    if (data_11 > 0)
        *(param_2 + 0x80) = data_11 - 1;
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0xb0]} */
🚫🚫        /* unimplemented  {fsub fp0, qword [source_val+0xa8]} */
        int32_t entity_2 = *(param_2 + 0xb8);
        int32_t data_12 = *(param_2 + 0xbc);
        *(param_2 + 0x80) = entity_2;
🚫🚫🚫        double item_10_1 = /* double item_10_1 = unimplemented  {fstp qword [stack_ptr+0x8], fp0} */;
        /* unimplemented  {fstp qword [stack_ptr+0x8], fp0} */

        if (data_12 != entity_2)
        {
            uint32_t data_13 = Sys_FreeMemory_14(0xa83840, data_12 - entity_2 + 1);
            *(param_2 + 0x80) += data_13;
        }

🚫🚫        /* unimplemented  {fld fp0, qword [stack_ptr+0x8]} */
⋯        long double f6_1 = 0.0;
        /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f6_1 */ - f6_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f6_1 */ < f6_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f6_1) */, f6_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */
        int32_t temp_5 = *(param_2 + 0xac);
        *(param_2 + 0x78) = *(param_2 + 0xa8);
        *(param_2 + 0x7c) = temp_5;

        if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            Sys_AllocateMemory_14(0xa83840);
            /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫            /* unimplemented  {fmul fp0, qword [stack_ptr+0xc]} */
🚫🚫            /* unimplemented  {fadd qword [source_val+0x78]} */
🚫🚫🚫            *(param_2 + 0x78) =
            /* unimplemented  {fstp qword [source_val+0x78], fp0} */
        }
    }

    int32_t entity_6 = *(param_2 + 0x74);
    *(param_2 + 0x68) = *(param_2 + 0x70);
    *(param_2 + 0x6c) = entity_6;

    if (SoundSys_SetFrequency_19())
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [source_val+0x68]} */
🚫🚫🚫        *(param_2 + 0x68) =
        /* unimplemented  {fstp qword [source_val+0x68], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0xd0]} */
⋯    long double f7 = 0.0;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f7 */ - f7;
    bool c0_5 = /* bool c0_5 = unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f7 */ < f7;
    bool c2_5 = FCMP_UO(/* bool c2_5 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f7) */, f7);
    bool c3_5 = /* bool c3_5 =
        unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f7 */ == f7;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */

    if (!(*(
        &((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x68]} */
🚫🚫        /* unimplemented  {fdiv fp0, qword [source_val+0xd0]} */
🚫🚫🚫        int32_t item_10_2 = /* int32_t item_10_2 = (unimplemented  {fistp qword [stack_ptr+0x8], fp0}).d */;
        /* unimplemented  {fistp qword [stack_ptr+0x8], fp0} */
🚫🚫        /* unimplemented  {fild fp0, dword [stack_ptr+0x8]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [source_val+0xd0]} */
🚫🚫🚫        *(param_2 + 0x68) =
        /* unimplemented  {fstp qword [source_val+0x68], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0xc0]} */
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
    int16_t result =
        (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb;

    if (!(*(&result + 1) & 0x41))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0xc0]} */
🚫🚫🚫        *(param_2 + 0x68) =
        /* unimplemented  {fstp qword [source_val+0x68], fp0} */
        return result;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0xc8]} */
⋯    /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
        - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
    bool c0_7 = /* bool c0_7 =
        unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_7 =
        unimplemented  {fcompp } f< unimplemented  {fcompp } */;
    bool c2_7 = FCMP_UO(/* bool c2_7 =
        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */, /* bool c2_7 =
        is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
    bool c3_7 = /* bool c3_7 =
        unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_7 =
        unimplemented  {fcompp } f== unimplemented  {fcompp } */;
    /* unimplemented  {fcompp } */
    /* unimplemented  {fcompp } */
    result =
        (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb;

    if (*(&result + 1) & 1)
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0xc8]} */
🚫🚫🚫        *(param_2 + 0x68) =
        /* unimplemented  {fstp qword [source_val+0x68], fp0} */
    }

    return result;
}
