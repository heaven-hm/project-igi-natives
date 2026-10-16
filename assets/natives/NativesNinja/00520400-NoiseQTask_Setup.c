#include "00520400-NoiseQTask_Setup.h"
/* 0x00520400 NoiseQTask_Setup full linked: callers=0 callees=5 */
int32_t sub_520400(long double a1 @ st0, void* a2)

{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* edi_1 = *i;
            void* eax_4;

            if (!edi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_4;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = edx_2;
            eax_5 = i[7];
            int32_t eax_6 = *((eax_5 << 2) + &g_a970e0);

            if (eax_6)
            {
                eax_6(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    int16_t top;

    if (!sub_4f16c0(a2 + 0xd8))
    {
        int32_t edx_3 = *(a2 + 0x8c);
        *(a2 + 0x60) = *(a2 + 0x88);
        *(a2 + 0x64) = edx_3;
    }
    else
    {
        sub_4f16e0(a2 + 0xd8, a2);
        *(a2 + 0x60) = a1;
        top = 1;
    }

🚫🚫    /* unimplemented  {fld st0, qword [esi+0x70]} */
⋯    long double temp0 = *(a2 + 0x60);
    /* unimplemented  {fcomp st0, qword [esi+0x60]} f- temp0 */ - temp0;
    bool c0 = /* bool c0 = unimplemented  {fcomp st0, qword [esi+0x60]} f< temp0 */ < temp0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp st0, qword [esi+0x60]}, temp0) */, temp0);
    bool c3 = /* bool c3 = unimplemented  {fcomp st0, qword [esi+0x60]} f== temp0 */ == temp0;
    /* unimplemented  {fcomp st0, qword [esi+0x60]} */
    int16_t top_4;

    if (!(*(&((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top & 7) << 0xb) + 1)
        & 1))
    {
🚫🚫        /* unimplemented  {fld st0, qword [esi+0x70]} */
⋯        long double temp1_1 = *(a2 + 0x60);
        /* unimplemented  {fcomp st0, qword [esi+0x60]} f- temp1_1 */ - temp1_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp st0, qword [esi+0x60]} f< temp1_1 */ < temp1_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp st0, qword [esi+0x60]}, temp1_1) */, temp1_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp st0, qword [esi+0x60]} f== temp1_1 */ == temp1_1;
        /* unimplemented  {fcomp st0, qword [esi+0x60]} */
        top_4 = top;

        if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            /* unimplemented  {fld st0, qword [esi+0x70]} */
🚫🚫            /* unimplemented  {fsub st0, qword [esi+0xa0]} */
🚫🚫            *(a2 + 0x70) = /* *(a2 + 0x70) = unimplemented  {fst qword [esi+0x70], st0} */;
⋯            long double temp4_1 = *(a2 + 0x60);
            /* unimplemented  {fcomp st0, qword [esi+0x60]} f- temp4_1 */ - temp4_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp st0, qword [esi+0x60]} f< temp4_1 */ < temp4_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp st0, qword [esi+0x60]}, temp4_1) */, temp4_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp st0, qword [esi+0x60]} f== temp4_1 */ == temp4_1;
            /* unimplemented  {fcomp st0, qword [esi+0x60]} */

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_4 & 7) << 0xb) + 1) & 1)
            {
                int32_t eax_10 = *(a2 + 0x64);
                *(a2 + 0x70) = *(a2 + 0x60);
                *(a2 + 0x74) = eax_10;
            }
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld st0, qword [esi+0x98]} */
🚫🚫        /* unimplemented  {fadd qword [esi+0x70]} */
🚫🚫        *(a2 + 0x70) = /* *(a2 + 0x70) = unimplemented  {fst qword [esi+0x70], st0} */;
⋯        long double temp2_1 = *(a2 + 0x60);
        /* unimplemented  {fcomp st0, qword [esi+0x60]} f- temp2_1 */ - temp2_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp st0, qword [esi+0x60]} f< temp2_1 */ < temp2_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp st0, qword [esi+0x60]}, temp2_1) */, temp2_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, qword [esi+0x60]} f== temp2_1 */ == temp2_1;
        /* unimplemented  {fcomp st0, qword [esi+0x60]} */
        top_4 = top;

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
            int32_t ecx_1 = *(a2 + 0x64);
            *(a2 + 0x70) = *(a2 + 0x60);
            *(a2 + 0x74) = ecx_1;
        }
    }

    int32_t eax_11 = *(a2 + 0x80);

    if (eax_11 > 0)
        *(a2 + 0x80) = eax_11 - 1;
    else
    {
🚫🚫        /* unimplemented  {fld st0, qword [esi+0xb0]} */
🚫🚫        /* unimplemented  {fsub st0, qword [esi+0xa8]} */
        int32_t ecx_2 = *(a2 + 0xb8);
        int32_t eax_12 = *(a2 + 0xbc);
        *(a2 + 0x80) = ecx_2;
🚫🚫🚫        double var_10_1 = /* double var_10_1 = unimplemented  {fstp qword [esp+0x8], st0} */;
        /* unimplemented  {fstp qword [esp+0x8], st0} */

        if (eax_12 != ecx_2)
        {
            uint32_t eax_13 = sub_4b47c0(0xa83840, eax_12 - ecx_2 + 1);
            *(a2 + 0x80) += eax_13;
        }

🚫🚫        /* unimplemented  {fld st0, qword [esp+0x8]} */
⋯        long double temp6_1 = 0.0;
        /* unimplemented  {fcomp st0, qword [&g_5333b0]} f- temp6_1 */ - temp6_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp st0, qword [&g_5333b0]} f< temp6_1 */ < temp6_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333b0]}, temp6_1) */, temp6_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp st0, qword [&g_5333b0]} f== temp6_1 */ == temp6_1;
        /* unimplemented  {fcomp st0, qword [&g_5333b0]} */
        int32_t edx_5 = *(a2 + 0xac);
        *(a2 + 0x78) = *(a2 + 0xa8);
        *(a2 + 0x7c) = edx_5;

        if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            sub_4b4770(0xa83840);
            /* unimplemented  {call sub_4b4770} */
🚫🚫            /* unimplemented  {fmul st0, qword [esp+0xc]} */
🚫🚫            /* unimplemented  {fadd qword [esi+0x78]} */
🚫🚫🚫            *(a2 + 0x78) = /* *(a2 + 0x78) = unimplemented  {fstp qword [esi+0x78], st0} */;
            /* unimplemented  {fstp qword [esi+0x78], st0} */
        }
    }

    int32_t ecx_6 = *(a2 + 0x74);
    *(a2 + 0x68) = *(a2 + 0x70);
    *(a2 + 0x6c) = ecx_6;

    if (sub_4ee940())
    {
🚫🚫        /* unimplemented  {fld st0, qword [esi+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [esi+0x68]} */
🚫🚫🚫        *(a2 + 0x68) = /* *(a2 + 0x68) = unimplemented  {fstp qword [esi+0x68], st0} */;
        /* unimplemented  {fstp qword [esi+0x68], st0} */
    }

🚫🚫    /* unimplemented  {fld st0, qword [esi+0xd0]} */
⋯    long double temp7 = 0.0;
    /* unimplemented  {fcomp st0, qword [&g_5333b0]} f- temp7 */ - temp7;
    bool c0_5 = /* bool c0_5 = unimplemented  {fcomp st0, qword [&g_5333b0]} f< temp7 */ < temp7;
    bool c2_5 = FCMP_UO(/* bool c2_5 =
        is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333b0]}, temp7) */, temp7);
    bool c3_5 = /* bool c3_5 =
        unimplemented  {fcomp st0, qword [&g_5333b0]} f== temp7 */ == temp7;
    /* unimplemented  {fcomp st0, qword [&g_5333b0]} */

    if (!(*(
        &((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld st0, qword [esi+0x68]} */
🚫🚫        /* unimplemented  {fdiv st0, qword [esi+0xd0]} */
🚫🚫🚫        int32_t var_10_2 = /* int32_t var_10_2 = (unimplemented  {fistp qword [esp+0x8], st0}).d */;
        /* unimplemented  {fistp qword [esp+0x8], st0} */
🚫🚫        /* unimplemented  {fild st0, dword [esp+0x8]} */
🚫🚫        /* unimplemented  {fmul st0, qword [esi+0xd0]} */
🚫🚫🚫        *(a2 + 0x68) = /* *(a2 + 0x68) = unimplemented  {fstp qword [esi+0x68], st0} */;
        /* unimplemented  {fstp qword [esi+0x68], st0} */
    }

🚫🚫    /* unimplemented  {fld st0, qword [esi+0x68]} */
🚫🚫    /* unimplemented  {fld st0, qword [esi+0xc0]} */
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
🚫🚫        /* unimplemented  {fld st0, qword [esi+0xc0]} */
🚫🚫🚫        *(a2 + 0x68) = /* *(a2 + 0x68) = unimplemented  {fstp qword [esi+0x68], st0} */;
        /* unimplemented  {fstp qword [esi+0x68], st0} */
        return result;
    }

🚫🚫    /* unimplemented  {fld st0, qword [esi+0x68]} */
🚫🚫    /* unimplemented  {fld st0, qword [esi+0xc8]} */
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
🚫🚫        /* unimplemented  {fld st0, qword [esi+0xc8]} */
🚫🚫🚫        *(a2 + 0x68) = /* *(a2 + 0x68) = unimplemented  {fstp qword [esi+0x68], st0} */;
        /* unimplemented  {fstp qword [esi+0x68], st0} */
    }

    return result;
}
