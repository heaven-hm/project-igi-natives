#include "00473AF0-GunMP5SD_LoadParameters.h"
/* 0x00473af0 GunMP5SD_LoadParameters full linked: callers=0 callees=2 */
float sub_473af0(float* a1, float a2) __location("eax")

{
    void* ebx = *(a2 + 0x2c);
    float eax = *(ebx + 0x4ec);
    float* edx = *(a1[0x4a] + 0x6e4);
    (*(((sub_460bf0() * 0x180 + sub_477bf0()) << 2) + &g_a96ae0))(a1, a2);

    if (!*(a2 + 0x14))
    {
        long double st0_3;
        bool c1_3;
        bool c2_8;
        st0_3 = __fptan(0.78539818525314331);
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        *(eax + 0x1e4) = /* *(eax i+ 0x1e4) = unimplemented  {fstp dword [eax+0x1e4], st0} */;
        /* unimplemented  {fstp dword [eax+0x1e4], st0} */
🚫🚫        /* unimplemented  {fld st0, qword [&g_5339c0]} */
🚫🚫🚫🚫        long double st0_4;
        bool c1_4;
        bool c2_9;
        st0_4 = __fptan(/* st0_4, c1_4, c2_9 = __fptan(unimplemented  {fptan }) */);
        /* unimplemented  {fptan } */

        if (!c2_9)
            /* unimplemented  {fptan } */

🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        *(eax + 0x1e8) = /* *(eax i+ 0x1e8) = unimplemented  {fstp dword [eax+0x1e8], st0} */;
        /* unimplemented  {fstp dword [eax+0x1e8], st0} */
        a1[0x6c] = 0;
        return eax;
    }

    long double x87_r7 = *(eax + 0x1e4);
    long double x87_r6_1 = *(ebx + 0x1cc);
    long double temp0 = 0f;
    x87_r6_1 - temp0;
    a2 = *(eax + 0x1e8);
    int16_t eax_9 = (x87_r6_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp0) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp0 ? 1 : 0) << 0xe | 0x3800;

    if (!a1[0x6c])
    {
        if (!(*(&eax_9 + 1) & 0x40))
        {
            long double x87_r6_6 = *(ebx + 0x12c);
            long double temp1_1 = 0f;
            x87_r6_6 - temp1_1;

            if (*(&((x87_r6_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r6_6 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                a1[0x6c] = 1;
        }

        int16_t top_2 = 0xfffe;
        long double st0_1;
        bool c1_1;
        bool c2_4;
        st0_1 = __fptan(0.78539818525314331);

        if (!c2_4)
            top_2 = 0xfffd;

🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        a1 = /* a1 = unimplemented  {fstp dword [esp+0x14], st0} */;
        /* unimplemented  {fstp dword [esp+0x14], st0} */
        int16_t top_1 = top_2 + 2;
🚫🚫🚫🚫🚫        long double temp4_1 = a1;
        /* unimplemented  {fcom st0, dword [esp+0x14]} f- temp4_1 */ - temp4_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcom st0, dword [esp+0x14]} f< temp4_1 */ < temp4_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcom st0, dword [esp+0x14]}, temp4_1) */, temp4_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcom st0, dword [esp+0x14]} f== temp4_1 */ == temp4_1;

        if (*(&((c0_4 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 1)
        {
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533520]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533520]} */
🚫🚫🚫            a2 = /* a2 = unimplemented  {fstp dword [esp+0x18], st0} */;
            /* unimplemented  {fstp dword [esp+0x18], st0} */
        }

🚫🚫🚫🚫🚫        long double temp5_1 = a1;
        /* unimplemented  {fcom st0, dword [esp+0x14]} f- temp5_1 */ - temp5_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcom st0, dword [esp+0x14]} f< temp5_1 */ < temp5_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcom st0, dword [esp+0x14]}, temp5_1) */, temp5_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcom st0, dword [esp+0x14]} f== temp5_1 */ == temp5_1;

        if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fld st0, qword [&g_5339c0]} */
🚫🚫🚫🚫            long double st0_2;
            bool c1_2;
            bool c2_7;
            st0_2 = __fptan(/* st0_2, c1_2, c2_7 = __fptan(unimplemented  {fptan }) */);
            /* unimplemented  {fptan } */

            if (!c2_7)
                /* unimplemented  {fptan } */

🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫🚫            a2 = /* a2 = unimplemented  {fstp dword [esp+0x18], st0} */;
            /* unimplemented  {fstp dword [esp+0x18], st0} */
        }
    }
    else
    {
        if (!(*(&eax_9 + 1) & 0x40))
        {
            long double x87_r6_2 = *(ebx + 0x12c);
            long double temp3_1 = 0f;
            x87_r6_2 - temp3_1;

            if (*(&((x87_r6_2 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                a1[0x6c] = 0;
        }

        long double temp2_1 = *edx;
        x87_r7 - temp2_1;

        if (!(*(&((x87_r7 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            a2 = /* a2 = unimplemented  {fstp dword [esp+0x18], st0} */;
            /* unimplemented  {fstp dword [esp+0x18], st0} */
        }
    }

🚫🚫🚫    *(eax + 0x1e4) = /* *(eax i+ 0x1e4) = unimplemented  {fstp dword [ecx+0x1e4], st0} */;
    /* unimplemented  {fstp dword [ecx+0x1e4], st0} */
    *(eax + 0x1e8) = a2;
    return a2;
}
