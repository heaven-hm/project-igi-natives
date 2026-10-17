// Original IGI.EXE function: NoiseQTask_Setup (VA 0x00520400; static CFG gate PASS, CFG score 1.000).
#include "NoiseQTask_Setup.h"
int32_t NoiseQTask_Setup(long double a1 @ fp0, void* a2)

{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* dstD1 = *i;
            void* valA4;

            if (!dstD1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *dstD1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & dstD1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA6 = *((valA5 << 2) + &g_a970e0);

            if (valA6)
            {
                valA6(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    int16_t idx;

    if (!Script_FormatString_6(a2 + 0xd8))
    {
        int32_t tmpD3 = *(a2 + 0x8c);
        *(a2 + 0x60) = *(a2 + 0x88);
        *(a2 + 0x64) = tmpD3;
    }
    else
    {
        Script_SpawnNewTask_7(a2 + 0xd8, a2);
        *(a2 + 0x60) = a1;
        idx = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x70]} */
⋯    long double f0 = *(a2 + 0x60);
    /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */
    int16_t top_4;

    if (!(*(&((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb) + 1)
        & 1))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x70]} */
⋯        long double f1_1 = *(a2 + 0x60);
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f1_1 */ - f1_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f1_1 */ < f1_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f1_1) */, f1_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */
        top_4 = idx;

        if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            /* unimplemented  {fld fp0, qword [srcS+0x70]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [srcS+0xa0]} */
🚫🚫            *(a2 + 0x70) =
⋯            long double f4_1 = *(a2 + 0x60);
            /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f4_1 */ - f4_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f4_1 */ < f4_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f4_1) */, f4_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f4_1 */ == f4_1;
            /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_4 & 7) << 0xb) + 1) & 1)
            {
                int32_t valA10 = *(a2 + 0x64);
                *(a2 + 0x70) = *(a2 + 0x60);
                *(a2 + 0x74) = valA10;
            }
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x98]} */
🚫🚫        /* unimplemented  {fadd qword [srcS+0x70]} */
🚫🚫        *(a2 + 0x70) =
⋯        long double f2_1 = *(a2 + 0x60);
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f2_1 */ - f2_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f2_1 */ < f2_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f2_1) */, f2_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */
        top_4 = idx;

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
            int32_t objC1 = *(a2 + 0x64);
            *(a2 + 0x70) = *(a2 + 0x60);
            *(a2 + 0x74) = objC1;
        }
    }

    int32_t valA11 = *(a2 + 0x80);

    if (valA11 > 0)
        *(a2 + 0x80) = valA11 - 1;
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0xb0]} */
🚫🚫        /* unimplemented  {fsub fp0, qword [srcS+0xa8]} */
        int32_t objC2 = *(a2 + 0xb8);
        int32_t valA12 = *(a2 + 0xbc);
        *(a2 + 0x80) = objC2;
🚫🚫🚫        double v_10_1 = /* double v_10_1 = unimplemented  {fstp qword [esp+0x8], fp0} */;
        /* unimplemented  {fstp qword [esp+0x8], fp0} */

        if (valA12 != objC2)
        {
            uint32_t valA13 = Sys_FreeMemory_14(0xa83840, valA12 - objC2 + 1);
            *(a2 + 0x80) += valA13;
        }

🚫🚫        /* unimplemented  {fld fp0, qword [esp+0x8]} */
⋯        long double f6_1 = 0.0;
        /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f6_1 */ - f6_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f6_1 */ < f6_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f6_1) */, f6_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */
        int32_t tmpD5 = *(a2 + 0xac);
        *(a2 + 0x78) = *(a2 + 0xa8);
        *(a2 + 0x7c) = tmpD5;

        if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫            Sys_AllocateMemory_14(0xa83840);
            /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫            /* unimplemented  {fmul fp0, qword [esp+0xc]} */
🚫🚫            /* unimplemented  {fadd qword [srcS+0x78]} */
🚫🚫🚫            *(a2 + 0x78) =
            /* unimplemented  {fstp qword [srcS+0x78], fp0} */
        }
    }

    int32_t objC6 = *(a2 + 0x74);
    *(a2 + 0x68) = *(a2 + 0x70);
    *(a2 + 0x6c) = objC6;

    if (SoundSys_SetFrequency_19())
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [srcS+0x68]} */
🚫🚫🚫        *(a2 + 0x68) =
        /* unimplemented  {fstp qword [srcS+0x68], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0xd0]} */
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
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x68]} */
🚫🚫        /* unimplemented  {fdiv fp0, qword [srcS+0xd0]} */
🚫🚫🚫        int32_t v_10_2 = /* int32_t v_10_2 = (unimplemented  {fistp qword [esp+0x8], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0x8], fp0} */
🚫🚫        /* unimplemented  {fild fp0, dword [esp+0x8]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [srcS+0xd0]} */
🚫🚫🚫        *(a2 + 0x68) =
        /* unimplemented  {fstp qword [srcS+0x68], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0xc0]} */
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
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0xc0]} */
🚫🚫🚫        *(a2 + 0x68) =
        /* unimplemented  {fstp qword [srcS+0x68], fp0} */
        return result;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0xc8]} */
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
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0xc8]} */
🚫🚫🚫        *(a2 + 0x68) =
        /* unimplemented  {fstp qword [srcS+0x68], fp0} */
    }

    return result;
}
