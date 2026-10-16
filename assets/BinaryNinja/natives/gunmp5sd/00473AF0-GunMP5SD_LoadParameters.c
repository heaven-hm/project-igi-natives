#include "GunMP5SD_LoadParameters.h"
float GunMP5SD_LoadParameters(float* a1, float a2) __location("valA")

{
    void* ctxB = *(a2 + 0x2c);
    float valA = *(ctxB + 0x4ec);
    float* tmpD = *(a1[0x4a] + 0x6e4);
    (*(((AI_AlertAllies_17() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(a1, a2);

    if (!*(a2 + 0x14))
    {
        long double fp0_3;
        bool c1_3;
        bool c2_8;
        fp0_3 = __fptan(0.78539818525314331);
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        *(valA + 0x1e4) =
        /* unimplemented  {fstp dword [valA+0x1e4], fp0} */
🚫🚫        /* unimplemented  {fld fp0, qword [&g_5339c0]} */
🚫🚫🚫🚫        long double fp0_4;
        bool c1_4;
        bool c2_9;
        fp0_4 = __fptan(/* fp0_4, c1_4, c2_9 = __fptan(unimplemented  {fptan }) */);
        /* unimplemented  {fptan } */

        if (!c2_9)
            /* unimplemented  {fptan } */

🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        *(valA + 0x1e8) =
        /* unimplemented  {fstp dword [valA+0x1e8], fp0} */
        a1[0x6c] = 0;
        return valA;
    }

    long double fpu7 = *(valA + 0x1e4);
    long double x87_r6_1 = *(ctxB + 0x1cc);
    long double f0 = 0f;
    x87_r6_1 - f0;
    a2 = *(valA + 0x1e8);
    int16_t valA9 = (x87_r6_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f0) ? 1 : 0) << 0xa
        | (x87_r6_1 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (!a1[0x6c])
    {
        if (!(*(&valA9 + 1) & 0x40))
        {
            long double x87_r6_6 = *(ctxB + 0x12c);
            long double f1_1 = 0f;
            x87_r6_6 - f1_1;

            if (*(&((x87_r6_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, f1_1) ? 1 : 0) << 0xa
                    | (x87_r6_6 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                a1[0x6c] = 1;
        }

        int16_t top_2 = 0xfffe;
        long double fp0_1;
        bool c1_1;
        bool c2_4;
        fp0_1 = __fptan(0.78539818525314331);

        if (!c2_4)
            top_2 = 0xfffd;

🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫        a1 = /* a1 = unimplemented  {fstp dword [esp+0x14], fp0} */;
        /* unimplemented  {fstp dword [esp+0x14], fp0} */
        int16_t top_1 = top_2 + 2;
🚫🚫🚫🚫🚫        long double f4_1 = a1;
        /* unimplemented  {fcom fp0, dword [esp+0x14]} f- f4_1 */ - f4_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcom fp0, dword [esp+0x14]} f< f4_1 */ < f4_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcom fp0, dword [esp+0x14]}, f4_1) */, f4_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcom fp0, dword [esp+0x14]} f== f4_1 */ == f4_1;

        if (*(&((c0_4 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 1)
        {
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533520]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533520]} */
🚫🚫🚫            a2 = /* a2 = unimplemented  {fstp dword [esp+0x18], fp0} */;
            /* unimplemented  {fstp dword [esp+0x18], fp0} */
        }

🚫🚫🚫🚫🚫        long double f5_1 = a1;
        /* unimplemented  {fcom fp0, dword [esp+0x14]} f- f5_1 */ - f5_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcom fp0, dword [esp+0x14]} f< f5_1 */ < f5_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcom fp0, dword [esp+0x14]}, f5_1) */, f5_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcom fp0, dword [esp+0x14]} f== f5_1 */ == f5_1;

        if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 0x41))
        {
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fld fp0, qword [&g_5339c0]} */
🚫🚫🚫🚫            long double fp0_2;
            bool c1_2;
            bool c2_7;
            fp0_2 = __fptan(/* fp0_2, c1_2, c2_7 = __fptan(unimplemented  {fptan }) */);
            /* unimplemented  {fptan } */

            if (!c2_7)
                /* unimplemented  {fptan } */

🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫            a2 = /* a2 = unimplemented  {fstp dword [esp+0x18], fp0} */;
            /* unimplemented  {fstp dword [esp+0x18], fp0} */
        }
    }
    else
    {
        if (!(*(&valA9 + 1) & 0x40))
        {
            long double x87_r6_2 = *(ctxB + 0x12c);
            long double f3_1 = 0f;
            x87_r6_2 - f3_1;

            if (*(&((x87_r6_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                a1[0x6c] = 0;
        }

        long double f2_1 = *tmpD;
        fpu7 - f2_1;

        if (!(*(&((fpu7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2_1) ? 1 : 0) << 0xa
            | (fpu7 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            a2 = /* a2 = unimplemented  {fstp dword [esp+0x18], fp0} */;
            /* unimplemented  {fstp dword [esp+0x18], fp0} */
        }
    }

🚫🚫🚫    *(valA + 0x1e4) =
    /* unimplemented  {fstp dword [objC+0x1e4], fp0} */
    *(valA + 0x1e8) = a2;
    return a2;
}
