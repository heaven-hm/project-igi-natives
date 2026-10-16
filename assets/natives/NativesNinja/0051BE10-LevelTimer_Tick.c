#include "0051BE10-LevelTimer_Tick.h"
/* 0x0051be10 LevelTimer_Tick full linked: callers=0 callees=4 */
int32_t sub_51be10(int80_t a1 @ st0, void* a2)

{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_4;

            if (!esi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *esi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & esi_1;
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

    if (sub_4f16c0(a2 + 0x6c))
    {
        sub_4f16e0(a2 + 0x6c, a2);
        top = 1;
        *(a2 + 0x60) = a1;
    }

    int16_t result = sub_4f16c0(a2 + 0xbc);

    if (result)
    {
        sub_4f16e0(a2 + 0xbc, a2);
⋯        long double temp0_1 = 0.0;
        /* unimplemented  {fcomp st0, qword [&g_5333b0]} f- temp0_1 */ - temp0_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp st0, qword [&g_5333b0]} f< temp0_1 */ < temp0_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333b0]}, temp0_1) */, temp0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, qword [&g_5333b0]} f== temp0_1 */ == temp0_1;
        /* unimplemented  {fcomp st0, qword [&g_5333b0]} */
        result = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | ((top + 1) & 7) << 0xb;

        if (!(*(&result + 1) & 0x40))
            *(a2 + 0x64) = 0;
    }

    result = *(a2 + 0x60);

    if (result)
        *(a2 + 0x64) += 1;

    return result;
}
