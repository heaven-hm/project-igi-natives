#include "00437DB0-Smoke_LoadParameters.h"
/* 0x00437db0 Smoke_LoadParameters full linked: callers=0 callees=8 */
int32_t Smoke_LoadParameters(long double a1 @ st0, void* a2)

{
    double var_20;
    double var_10;
    int16_t top;

    if (*(a2 + 0x171) && *(a2 + 0x170))
    {
        void* ecx_1 = *(a2 + 0xf4);
        var_20 = *(a2 + 0x40) - *(a2 + 0x58);
        double var_18_1 = *(a2 + 0x48) - *(a2 + 0x60);
        var_10 = *(a2 + 0x50) - *(a2 + 0x68);
        top = 0;
        sub_4fe610(ecx_1, &var_20);
    }

    *(a2 + 0x171) = 1;
    memcpy(a2 + 0x58, a2 + 0x40, 0x18);
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

    if (sub_4f16c0(a2 + 0xa4))
    {
        sub_4f16e0(a2 + 0xa4, a2);
        *(a2 + 0x98) = a1;
        top = 1;
    }

🚫🚫    /* unimplemented  {fld st0, qword [ebx+0x98]} */
🚫🚫    /* unimplemented  {fadd dword [ebx+0xa0]} */
    void* edi_1 = *(a2 + 0xf4);
🚫🚫    *(a2 + 0xa0) = /* *(a2 + 0xa0) = unimplemented  {fst dword [ebx+0xa0], st0} */;
⋯    long double temp0 = 30f;
    /* unimplemented  {fcomp st0, dword [&g_5333bc]} f- temp0 */ - temp0;
    bool c0 = /* bool c0 = unimplemented  {fcomp st0, dword [&g_5333bc]} f< temp0 */ < temp0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333bc]}, temp0) */, temp0);
    bool c3 = /* bool c3 = unimplemented  {fcomp st0, dword [&g_5333bc]} f== temp0 */ == temp0;
    /* unimplemented  {fcomp st0, dword [&g_5333bc]} */
    int16_t result =
        (c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top & 7) << 0xb;

    while (!(*(&result + 1) & 0x41))
    {
🚫🚫        sub_4b4770(0x57bde8);
        /* unimplemented  {call sub_4b4770} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_5334a8]} */
🚫🚫🚫        float var_30_1 = /* float var_30_1 = unimplemented  {fstp dword [esp+0x18], st0} */;
        /* unimplemented  {fstp dword [esp+0x18], st0} */
🚫🚫        sub_4b4770(0x57bde8);
        /* unimplemented  {call sub_4b4770} */
🚫🚫        /* unimplemented  {fmul st0, dword [ebx+0x94]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_5333b8]} */
🚫🚫🚫        int32_t var_2c_1 = /* int32_t var_2c_1 = unimplemented  {fstp dword [esp+0x20], st0} */;
        /* unimplemented  {fstp dword [esp+0x20], st0} */
🚫🚫        sub_4b4770(0x57bde8);
        /* unimplemented  {call sub_4b4770} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x11c]} */
🚫🚫        /* unimplemented  {fsub st0, dword [ebx+0x120]} */
        int32_t eax_7 = *(a2 + 0x124);
        int32_t var_24_1 = eax_7;
🚫🚫🚫        /* unimplemented  {fmulp st1, st0} */
        /* unimplemented  {fmulp st1, st0} */
        var_10 = *(a2 + 0x50);
        *(&var_10 + 4) = *(a2 + 0x54);
🚫🚫        /* unimplemented  {fadd dword [ebx+0x120]} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫🚫        long double st0_1;
        bool c1_1;
        bool c2_1;
        st0_1 = __fcos(/* st0_1, c1_1, c2_1 = __fcos(unimplemented  {fcos }) */);
        /* unimplemented  {fcos } */
🚫🚫        /* unimplemented  {fmul st0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [ebx+0x40]} */
🚫🚫🚫        var_20 = /* var_20 = unimplemented  {fstp qword [esp+0x20], st0} */;
        /* unimplemented  {fstp qword [esp+0x20], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫🚫        long double st0_2;
        bool c1_2;
        bool c2_2;
        st0_2 = __fsin(/* st0_2, c1_2, c2_2 = __fsin(unimplemented  {fsin }) */);
        /* unimplemented  {fsin } */
🚫🚫        /* unimplemented  {fmul st0, dword [esp+0x14]} */
🚫🚫        /* unimplemented  {fadd qword [ebx+0x48]} */
🚫🚫🚫        double var_18_2 = /* double var_18_2 = unimplemented  {fstp qword [esp+0x28], st0} */;
        /* unimplemented  {fstp qword [esp+0x28], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x100]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_5333bc]} */
🚫🚫        /* unimplemented  {fdiv st0, dword [esp+0x1c]} */
🚫🚫🚫        var_2c_1 = /* var_2c_1.q = unimplemented  {fistp qword [esp+0x14], st0} */;
        /* unimplemented  {fistp qword [esp+0x14], st0} */
        int32_t ecx_3 = var_2c_1;
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0xfc]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_5333bc]} */
🚫🚫🚫        var_2c_1 = /* var_2c_1.q = unimplemented  {fistp qword [esp+0x18], st0} */;
        /* unimplemented  {fistp qword [esp+0x18], st0} */
        int32_t var_54_1 = ecx_3;
🚫🚫        /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫🚫        float var_54_2 = /* float var_54_2 = unimplemented  {fstp dword [esp], st0} */;
        /* unimplemented  {fstp dword [esp], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x88]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_5337e8]} */
        int32_t var_5c_1 = ecx_3;
🚫🚫🚫        float var_5c_2 = /* float var_5c_2 = unimplemented  {fstp dword [esp], st0} */;
        /* unimplemented  {fstp dword [esp], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x8c]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_5337e8]} */
        int32_t var_60_1 = ecx_3;
🚫🚫🚫        float var_60_2 = /* float var_60_2 = unimplemented  {fstp dword [esp], st0} */;
        /* unimplemented  {fstp dword [esp], st0} */
        sub_4fe210(edi_1, &var_20, a2 + 0x70, *(a2 + 0x90), var_60_2, var_5c_2, eax_7,
            var_54_2, 0, 0x3f800000, var_2c_1, ecx_3);
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0xa0]} */
🚫🚫        /* unimplemented  {fsub st0, dword [&g_5333bc]} */
🚫🚫        *(a2 + 0xa0) = /* *(a2 + 0xa0) = unimplemented  {fst dword [ebx+0xa0], st0} */;
⋯        long double temp1_1 = 30f;
        /* unimplemented  {fcomp st0, dword [&g_5333bc]} f- temp1_1 */ - temp1_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp st0, dword [&g_5333bc]} f< temp1_1 */ < temp1_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333bc]}, temp1_1) */, temp1_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, dword [&g_5333bc]} f== temp1_1 */ == temp1_1;
        /* unimplemented  {fcomp st0, dword [&g_5333bc]} */
        int16_t top_18;
        result = (c0_1 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top_18 & 7) << 0xb;
    }

    return result;
}
