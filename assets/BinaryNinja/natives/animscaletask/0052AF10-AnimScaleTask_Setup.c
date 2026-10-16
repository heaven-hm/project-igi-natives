#include "AnimScaleTask_Setup.h"
char AnimScaleTask_Setup(int80_t a1 @ fp0, int32_t a2)

{
    int32_t ctxB = 0;
    int16_t idx;

    if (Script_FormatString_6(a2 + 0x200f8))
    {
        Script_SpawnNewTask_7(a2 + 0x200f8, a2);
        idx = 1;
        *(a2 + 0x200f4) = a1;
    }

    int16_t valA3;
    valA3 = *(a2 + 0x200f4);

    if (valA3)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [srcS+0x20160]} */
🚫🚫        /* unimplemented  {fadd dword [srcS+0x20164]} */
🚫🚫        *(a2 + 0x20164) =
⋯        long double f0_1 = 0.100000001f;
        /* unimplemented  {fcomp fp0, dword [&g_5333c8]} f- f0_1 */ - f0_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, dword [&g_5333c8]} f< f0_1 */ < f0_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333c8]}, f0_1) */, f0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [&g_5333c8]} f== f0_1 */ == f0_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333c8]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
            bool c0_2;
            bool c2_2;
            bool c3_2;

            do
            {
🚫🚫                /* unimplemented  {fld fp0, dword [srcS+0x20164]} */
🚫🚫                /* unimplemented  {fsub fp0, dword [&g_5333c8]} */
                ctxB += 1;
🚫🚫                *(a2 + 0x20164) = /* *(a2 + 0x20164) =
                    unimplemented  {fst dword [srcS+0x20164], fp0} */;
⋯                long double f1_1 = 0.100000001f;
                /* unimplemented  {fcomp fp0, dword [&g_5333c8]} f- f1_1 */ - f1_1;
                c0_2 = /* c0_2 =
                    unimplemented  {fcomp fp0, dword [&g_5333c8]} f< f1_1 */ < f1_1;
                c2_2 = FCMP_UO(/* c2_2 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333c8]}, f1_1) */,
                    f1_1);
                c3_2 = /* c3_2 =
                    unimplemented  {fcomp fp0, dword [&g_5333c8]} f== f1_1 */ == f1_1;
                /* unimplemented  {fcomp fp0, dword [&g_5333c8]} */
            } while (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 1));
        }

        valA3 = Script_FormatString_14(a2, *(a2 + 0x20154) + ctxB);
    }

    return valA3;
}
