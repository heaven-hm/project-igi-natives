#include "0052AF10-AnimScaleTask_Setup.h"
/* 0x0052af10 AnimScaleTask_Setup full linked: callers=0 callees=3 */
char sub_52af10(int80_t a1 @ st0, int32_t a2)

{
    int32_t ebx = 0;
    int16_t top;

    if (sub_4f16c0(a2 + 0x200f8))
    {
        sub_4f16e0(a2 + 0x200f8, a2);
        top = 1;
        *(a2 + 0x200f4) = a1;
    }

    int16_t eax_3;
    eax_3 = *(a2 + 0x200f4);

    if (eax_3)
    {
🚫🚫        /* unimplemented  {fld st0, dword [esi+0x20160]} */
🚫🚫        /* unimplemented  {fadd dword [esi+0x20164]} */
🚫🚫        *(a2 + 0x20164) = /* *(a2 + 0x20164) = unimplemented  {fst dword [esi+0x20164], st0} */;
⋯        long double temp0_1 = 0.100000001f;
        /* unimplemented  {fcomp st0, dword [&g_5333c8]} f- temp0_1 */ - temp0_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp st0, dword [&g_5333c8]} f< temp0_1 */ < temp0_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333c8]}, temp0_1) */, temp0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, dword [&g_5333c8]} f== temp0_1 */ == temp0_1;
        /* unimplemented  {fcomp st0, dword [&g_5333c8]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 1))
        {
            bool c0_2;
            bool c2_2;
            bool c3_2;

            do
            {
🚫🚫                /* unimplemented  {fld st0, dword [esi+0x20164]} */
🚫🚫                /* unimplemented  {fsub st0, dword [&g_5333c8]} */
                ebx += 1;
🚫🚫                *(a2 + 0x20164) = /* *(a2 + 0x20164) =
                    unimplemented  {fst dword [esi+0x20164], st0} */;
⋯                long double temp1_1 = 0.100000001f;
                /* unimplemented  {fcomp st0, dword [&g_5333c8]} f- temp1_1 */ - temp1_1;
                c0_2 = /* c0_2 =
                    unimplemented  {fcomp st0, dword [&g_5333c8]} f< temp1_1 */ < temp1_1;
                c2_2 = FCMP_UO(/* c2_2 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333c8]}, temp1_1) */,
                    temp1_1);
                c3_2 = /* c3_2 =
                    unimplemented  {fcomp st0, dword [&g_5333c8]} f== temp1_1 */ == temp1_1;
                /* unimplemented  {fcomp st0, dword [&g_5333c8]} */
            } while (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 1));
        }

        eax_3 = sub_4f3ef0(a2, *(a2 + 0x20154) + ebx);
    }

    return eax_3;
}
