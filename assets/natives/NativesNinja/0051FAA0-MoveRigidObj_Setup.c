#include "0051FAA0-MoveRigidObj_Setup.h"
/* 0x0051faa0 MoveRigidObj_Setup full linked: callers=0 callees=3 */
int32_t sub_51faa0(int80_t a1 @ st0, float a2)

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

    if (sub_4f16c0(a2 + 0x1b4))
    {
        sub_4f16e0(a2 + 0x1b4, a2);
        *(a2 + 0x1a0) = a1;
        top = 1;
    }

🚫🚫    /* unimplemented  {fld st0, qword [edi+0x1a0]} */
⋯    long double temp0 = 0.0;
    /* unimplemented  {fcomp st0, qword [&g_5333b0]} f- temp0 */ - temp0;
    bool c0 = /* bool c0 = unimplemented  {fcomp st0, qword [&g_5333b0]} f< temp0 */ < temp0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333b0]}, temp0) */, temp0);
    bool c3 = /* bool c3 = unimplemented  {fcomp st0, qword [&g_5333b0]} f== temp0 */ == temp0;
    /* unimplemented  {fcomp st0, qword [&g_5333b0]} */

    if (*(&((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top & 7) << 0xb) + 1)
        & 1)
    {
        bool c0_1;
        bool c2_1;
        bool c3_1;

        do
        {
🚫🚫            /* unimplemented  {fld st0, qword [edi+0x1a0]} */
🚫🚫            /* unimplemented  {fadd qword [&g_533924[4]]} */
🚫🚫            *(a2 + 0x1a0) = /* *(a2 i+ 0x1a0) = unimplemented  {fst qword [edi+0x1a0], st0} */;
⋯            long double temp2_1 = 0.0;
            /* unimplemented  {fcomp st0, qword [&g_5333b0]} f- temp2_1 */ - temp2_1;
            c0_1 = /* c0_1 =
                unimplemented  {fcomp st0, qword [&g_5333b0]} f< temp2_1 */ < temp2_1;
            c2_1 = FCMP_UO(/* c2_1 =
                is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333b0]}, temp2_1) */,
                temp2_1);
            c3_1 = /* c3_1 =
                unimplemented  {fcomp st0, qword [&g_5333b0]} f== temp2_1 */ == temp2_1;
            /* unimplemented  {fcomp st0, qword [&g_5333b0]} */
        } while (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 1);
    }

🚫🚫    /* unimplemented  {fld st0, qword [edi+0x1a0]} */
⋯    long double temp1 = 1.0;
    /* unimplemented  {fcomp st0, qword [&g_5333f8]} f- temp1 */ - temp1;
    bool c0_2 = /* bool c0_2 = unimplemented  {fcomp st0, qword [&g_5333f8]} f< temp1 */ < temp1;
    bool c2_2 = FCMP_UO(/* bool c2_2 =
        is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333f8]}, temp1) */, temp1);
    bool c3_2 = /* bool c3_2 =
        unimplemented  {fcomp st0, qword [&g_5333f8]} f== temp1 */ == temp1;
    /* unimplemented  {fcomp st0, qword [&g_5333f8]} */

    if (!(*(
        &((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb)
        + 1) & 0x41))
    {
        bool c0_3;
        bool c2_3;
        bool c3_3;

        do
        {
🚫🚫            /* unimplemented  {fld st0, qword [edi+0x1a0]} */
🚫🚫            /* unimplemented  {fsub st0, qword [&g_5333f8]} */
🚫🚫            *(a2 + 0x1a0) = /* *(a2 i+ 0x1a0) = unimplemented  {fst qword [edi+0x1a0], st0} */;
⋯            long double temp3_1 = 1.0;
            /* unimplemented  {fcomp st0, qword [&g_5333f8]} f- temp3_1 */ - temp3_1;
            c0_3 = /* c0_3 =
                unimplemented  {fcomp st0, qword [&g_5333f8]} f< temp3_1 */ < temp3_1;
            c2_3 = FCMP_UO(/* c2_3 =
                is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333f8]}, temp3_1) */,
                temp3_1);
            c3_3 = /* c3_3 =
                unimplemented  {fcomp st0, qword [&g_5333f8]} f== temp3_1 */ == temp3_1;
            /* unimplemented  {fcomp st0, qword [&g_5333f8]} */
        } while (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 0x41));
    }

    return sub_51fba0(a2, a2, 0);
}
