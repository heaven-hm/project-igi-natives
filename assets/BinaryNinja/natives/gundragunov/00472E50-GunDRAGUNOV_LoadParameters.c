#include "GunDRAGUNOV_LoadParameters.h"
void* GunDRAGUNOV_LoadParameters(float* a1, void* a2)

{
    void* dstD = *(a2 + 0x2c);
    float* tmpD = *(a1[0x4a] + 0x6e4);
    void* valA = *(dstD + 0x4ec);
    (*(((AI_AlertAllies_17() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(a1, a2);
    void* result = *(a2 + 0x1c);
    a1[0x6c] = result;

    if (*(a2 + 0x14))
    {
        if (!result)
        {
            long double x87_r7_17 = *(dstD + 0x1cc);
            long double f0_1 = 0f;
            x87_r7_17 - f0_1;
            result = (x87_r7_17 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
                long double x87_r7_18 = *(dstD + 0x12c);
                long double f2_1 = 0f;
                x87_r7_18 - f2_1;
                result = (x87_r7_18 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_18, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_18 == f2_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 0x40)
                    return AI_CombatTarget_24(*(dstD + 0x4ec));
            }
        }
        else
        {
            *(a2 + 0x20) = *(a2 + 0x20) * 0.0500000007f;
            *(a2 + 0x24) = *(a2 + 0x24) * 0.0500000007f;
            long double x87_r7_5 = *(dstD + 0x1cc);
            long double f1_1 = 0f;
            x87_r7_5 - f1_1;
            result = (x87_r7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
                long double x87_r7_6 = *(dstD + 0x12c);
                long double f4_1 = 0f;
                x87_r7_6 - f4_1;
                result = (x87_r7_6 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe;

                if (*(&result + 1) & 0x40)
                    result = Human_TaskViewReset(*(dstD + 0x4ec));
            }

            long double x87_r7_7 = *(dstD + 0x1e8);
            long double f3_1 = 0f;
            x87_r7_7 - f3_1;
            result = (x87_r7_7 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
            {
            label_472fc4:
                long double x87_r7_12 = *(valA + 0x1e4);
                long double f5_1 = *tmpD;
                x87_r7_12 - f5_1;
                result = (x87_r7_12 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == f5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    *(valA + 0x1e4) = *(valA + 0x1e4) * 0.959999979f;
                    *(valA + 0x1e8) = *(valA + 0x1e8) * 0.959999979f;
                }
            }
            else
            {
                long double x87_r7_8 = *(dstD + 0x12c);
                long double f6_1 = 0f;
                x87_r7_8 - f6_1;
                result = (x87_r7_8 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == f6_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                    goto label_472fc4;

                long double x87_r7_9 = *(dstD + 0x1ec);
                long double f7_1 = 0f;
                x87_r7_9 - f7_1;
                result = (x87_r7_9 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f7_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                    int16_t top_1 = 0xffff;
                    long double fp0_1;
                    bool c1_1;
                    bool c2_6;
                    fp0_1 = __fptan(0.78539818525314331);

                    if (!c2_6)
                        top_1 = 0xfffe;

🚫🚫🚫                    /* unimplemented  {fstp fp0, fp0} */
                    /* unimplemented  {fstp fp0, fp0} */
                    int16_t top_2 = top_1 + 1;
🚫🚫🚫🚫🚫                    long double f8_1 = *(valA + 0x1e4);
                    /* unimplemented  {fcom fp0, dword [objC+0x1e4]} f- f8_1 */ - f8_1;
                    bool c0_6 = /* bool c0_6 =
                        unimplemented  {fcom fp0, dword [objC+0x1e4]} f< f8_1 */ < f8_1;
                    bool c2_7 = FCMP_UO(/* bool c2_7 =
                        is_unordered.t(unimplemented  {fcom fp0, dword [objC+0x1e4]}, f8_1) */,
                        f8_1);
                    bool c3_6 = /* bool c3_6 =
                        unimplemented  {fcom fp0, dword [objC+0x1e4]} f== f8_1 */ == f8_1;
                    result = (c0_6 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                        | (top_2 & 7) << 0xb;

                    if (!(*(&result + 1) & 0x41))
                    {
🚫🚫                        /* unimplemented  {fld fp0, dword [objC+0x1e4]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [&g_533a80]} */
🚫🚫🚫                        *(valA + 0x1e4) = /* *(valA + 0x1e4) =
                            unimplemented  {fstp dword [objC+0x1e4], fp0} */;
                        /* unimplemented  {fstp dword [objC+0x1e4], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [objC+0x1e8]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [&g_533a80]} */
🚫🚫🚫                        *(valA + 0x1e8) = /* *(valA + 0x1e8) =
                            unimplemented  {fstp dword [objC+0x1e8], fp0} */;
                        /* unimplemented  {fstp dword [objC+0x1e8], fp0} */
                    }

🚫🚫🚫🚫🚫                    long double f9_1 = *(valA + 0x1e4);
                    /* unimplemented  {fcom fp0, dword [objC+0x1e4]} f- f9_1 */ - f9_1;
                    bool c0_7 = /* bool c0_7 =
                        unimplemented  {fcom fp0, dword [objC+0x1e4]} f< f9_1 */ < f9_1;
                    bool c2_8 = FCMP_UO(/* bool c2_8 =
                        is_unordered.t(unimplemented  {fcom fp0, dword [objC+0x1e4]}, f9_1) */,
                        f9_1);
                    bool c3_7 = /* bool c3_7 =
                        unimplemented  {fcom fp0, dword [objC+0x1e4]} f== f9_1 */ == f9_1;
                    result = (c0_7 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                        | (top_2 & 7) << 0xb;

                    if (*(&result + 1) & 1)
                    {
🚫🚫🚫                        *(valA + 0x1e4) = /* *(valA + 0x1e4) =
                            unimplemented  {fstp dword [objC+0x1e4], fp0} */;
                        /* unimplemented  {fstp dword [objC+0x1e4], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [&g_5339c0]} */
🚫🚫🚫🚫                        long double fp0_2;
                        bool c1_2;
                        bool c2_9;
                        fp0_2 = __fptan(/* fp0_2, c1_2, c2_9 = __fptan(unimplemented  {fptan }) */);
                        /* unimplemented  {fptan } */

                        if (!c2_9)
                            /* unimplemented  {fptan } */

🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫                        *(valA + 0x1e8) = /* *(valA + 0x1e8) =
                            unimplemented  {fstp dword [objC+0x1e8], fp0} */;
                        /* unimplemented  {fstp dword [objC+0x1e8], fp0} */
                        return result;
                    }

🚫🚫🚫                    /* unimplemented  {fstp fp0, fp0} */
                    /* unimplemented  {fstp fp0, fp0} */
                }
            }
        }
    }

    return result;
}
