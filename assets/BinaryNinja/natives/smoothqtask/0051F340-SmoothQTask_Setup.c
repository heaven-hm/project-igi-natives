#include "SmoothQTask_Setup.h"
int32_t* SmoothQTask_Setup(long double a1 @ fp0, int32_t a2)

{
    int32_t srcS = a2;
    int32_t* i = *(srcS + 8);

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

    int32_t* result = Script_FormatString_6(srcS + 0xa8);
    int16_t idx;

    if (!result)
    {
        int32_t tmpD3 = *(srcS + 0x74);
        *(srcS + 0x60) = *(srcS + 0x70);
        *(srcS + 0x64) = tmpD3;
    }
    else
    {
        result = Script_SpawnNewTask_7(srcS + 0xa8, srcS);
        *(srcS + 0x60) = a1;
        idx = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x68]} */
⋯    long double f0 = *(srcS + 0x60);
    /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */
    result = (c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb;
    int16_t top_4;

    if (!(*(&result + 1) & 1))
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x68]} */
⋯        long double f1_1 = *(srcS + 0x60);
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f1_1 */ - f1_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f1_1 */ < f1_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f1_1) */, f1_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f1_1 */ == f1_1;
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */
        top_4 = idx;
        result = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
        {
🚫🚫            /* unimplemented  {fld fp0, qword [srcS+0x68]} */
🚫🚫            /* unimplemented  {fsub fp0, qword [srcS+0x88]} */
🚫🚫            *(srcS + 0x68) =
⋯            long double f5_1 = *(srcS + 0x60);
            /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f5_1 */ - f5_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f5_1 */ < f5_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f5_1) */, f5_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f5_1 */ == f5_1;
            /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */
            result = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_4 & 7) << 0xb;

            if (*(&result + 1) & 1)
            {
                result = *(srcS + 0x64);
                *(srcS + 0x68) = *(srcS + 0x60);
                *(srcS + 0x6c) = result;
            }
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x80]} */
🚫🚫        /* unimplemented  {fadd qword [srcS+0x68]} */
🚫🚫        *(srcS + 0x68) =
⋯        long double f2_1 = *(srcS + 0x60);
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} f- f2_1 */ - f2_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f< f2_1 */ < f2_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [srcS+0x60]}, f2_1) */, f2_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, qword [srcS+0x60]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, qword [srcS+0x60]} */
        top_4 = idx;
        result = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
        {
            result = *(srcS + 0x60);
            int32_t objC1 = *(srcS + 0x64);
            *(srcS + 0x68) = result;
            *(srcS + 0x6c) = objC1;
        }
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0xa0]} */
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
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x68]} */
🚫🚫        /* unimplemented  {fdiv fp0, qword [srcS+0xa0]} */
🚫🚫🚫        int32_t v_8_1 = /* int32_t v_8_1 = (unimplemented  {fistp qword [esp+0x8], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0x8], fp0} */
        a2 = v_8_1;
🚫🚫        /* unimplemented  {fild fp0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [srcS+0xa0]} */
🚫🚫🚫        *(srcS + 0x68) =
        /* unimplemented  {fstp qword [srcS+0x68], fp0} */
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x90]} */
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
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x90]} */
🚫🚫🚫        *(srcS + 0x68) =
        /* unimplemented  {fstp qword [srcS+0x68], fp0} */
        return result;
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x68]} */
🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x98]} */
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
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x98]} */
🚫🚫🚫        *(srcS + 0x68) =
        /* unimplemented  {fstp qword [srcS+0x68], fp0} */
    }

    return result;
}
