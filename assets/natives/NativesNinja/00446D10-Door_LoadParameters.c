#include "00446D10-Door_LoadParameters.h"
/* 0x00446d10 Door_LoadParameters full linked: callers=0 callees=24 */
struct status_msg* sub_446d10(long double a1 @ st0, void* a2)

{
    void* var_ac = nullptr;
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
            int32_t eax = *((eax_5 << 2) + &g_a970e0);

            if (eax)
            {
                eax(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    char eax_6 = *(a2 + 0x19a);
    *(a2 + 0x19b) = *(a2 + 0x199);
    *(a2 + 0x19c) = eax_6;
    memcpy(a2 + 0x2c8, a2 + 0x20, 0x18);
    memcpy(a2 + 0x29c, a2 + 0x70, 0x28);
    int16_t top;

    if (eax_6 && sub_4f16c0(a2 + 0x1a0))
    {
        sub_4f16e0(a2 + 0x1a0, a2);
        long double temp1_1 = 0.0;
        a1 - temp1_1;
        top = 1;

        if (!(*(&((a1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(a1, temp1_1) ? 1 : 0) << 0xa
                | (a1 == temp1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x40))
            *(a2 + 0x290) = 1;
    }

    if (!*(a2 + 0x199))
        *(a2 + 0x298) = 0;
    else
    {
        *(a2 + 0x298) += 1;

        if (sub_4f16c0(a2 + 0x1f0))
        {
            sub_4f16e0(a2 + 0x1f0, a2);
⋯            long double temp2_1 = 0.0;
            /* unimplemented  {fcomp st0, qword [&g_5333b0]} f- temp2_1 */ - temp2_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcomp st0, qword [&g_5333b0]} f< temp2_1 */ < temp2_1;
            bool c2_2 = FCMP_UO(/* bool c2_2 =
                is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333b0]}, temp2_1) */,
                temp2_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcomp st0, qword [&g_5333b0]} f== temp2_1 */ == temp2_1;
            /* unimplemented  {fcomp st0, qword [&g_5333b0]} */
            top += 1;

            if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb) + 1) & 0x40))
                *(a2 + 0x290) = 0;
        }
    }

    char eax_16;
    int32_t ecx_1;
    eax_16 = sub_4f16c0(a2 + 0x240);
    double var_a8;

    if (eax_16)
    {
        ecx_1 = sub_4f16e0(a2 + 0x240, a2);
🚫🚫🚫        var_a8 = /* var_a8 = unimplemented  {fistp qword [esp+0x34], st0} */;
        /* unimplemented  {fistp qword [esp+0x34], st0} */
        top += 1;
        *(a2 + 0x198) = var_a8;
    }

    if (*(a2 + 0x19d))
        *(a2 + 0x198) = 0;

    if (!*(a2 + 0x290))
    {
        *(a2 + 0x188) = 0;
        *(a2 + 0x190) = 0;
    }
    else
    {
        int32_t eax_18 = *(a2 + 0x140);
        *(a2 + 0x190) = 0x3f800000;
        *(a2 + 0x188) = eax_18;
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x188]} */
⋯    long double temp3 = *(a2 + 0x18c);
    /* unimplemented  {fcomp st0, dword [ebp+0x18c]} f- temp3 */ - temp3;
    bool c0_3 = /* bool c0_3 = unimplemented  {fcomp st0, dword [ebp+0x18c]} f< temp3 */ < temp3;
    bool c2_3 = FCMP_UO(/* bool c2_3 =
        is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x18c]}, temp3) */, temp3);
    bool c3_3 = /* bool c3_3 = unimplemented  {fcomp st0, dword [ebp+0x18c]} f== temp3 */ == temp3;
    /* unimplemented  {fcomp st0, dword [ebp+0x18c]} */
    int16_t top_2 = top;

    if (!(*(
        &((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x18c]} */
⋯        long double temp5_1 = *(a2 + 0x188);
        /* unimplemented  {fcomp st0, dword [ebp+0x188]} f- temp5_1 */ - temp5_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp st0, dword [ebp+0x188]} f< temp5_1 */ < temp5_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x188]}, temp5_1) */, temp5_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp st0, dword [ebp+0x188]} f== temp5_1 */ == temp5_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x188]} */
        int16_t top_10;

        if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x18c]} */
⋯            long double temp8_1 = *(a2 + 0x188);
            /* unimplemented  {fcomp st0, dword [ebp+0x188]} f- temp8_1 */ - temp8_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp st0, dword [ebp+0x188]} f< temp8_1 */ < temp8_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x188]}, temp8_1) */, temp8_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp st0, dword [ebp+0x188]} f== temp8_1 */ == temp8_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x188]} */
            top_10 = top_2;

            if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                | (top_10 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x140]} */
⋯                long double temp11_1 = 0f;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp11_1 */ - temp11_1;
                bool c0_8 = /* bool c0_8 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp11_1 */ < temp11_1;
                bool c2_8 = FCMP_UO(/* bool c2_8 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp11_1) */,
                    temp11_1);
                bool c3_8 = /* bool c3_8 =
                    unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp11_1 */ == temp11_1;
                /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x140]} */

                if (*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                        | ((top_10 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫                    /* unimplemented  {fchs } */

🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x144]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_5333bc]} */
🚫🚫🚫                /* unimplemented  {fdivp st1, st0} */
                /* unimplemented  {fdivp st1, st0} */
🚫🚫                /* unimplemented  {fsubr st0, dword [ebp+0x18c]} */
🚫🚫                *(a2 + 0x18c) = /* *(a2 + 0x18c) =
                    unimplemented  {fst dword [ebp+0x18c], st0} */;
⋯                long double temp16_1 = *(a2 + 0x188);
                /* unimplemented  {fcomp st0, dword [ebp+0x188]} f- temp16_1 */ - temp16_1;
                bool c0_9 = /* bool c0_9 =
                    unimplemented  {fcomp st0, dword [ebp+0x188]} f< temp16_1 */ < temp16_1;
                bool c2_9 = FCMP_UO(/* bool c2_9 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x188]}, temp16_1) */,
                    temp16_1);
                bool c3_9 = /* bool c3_9 =
                    unimplemented  {fcomp st0, dword [ebp+0x188]} f== temp16_1 */ == temp16_1;
                /* unimplemented  {fcomp st0, dword [ebp+0x188]} */

                if (*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
                        | (top_10 & 7) << 0xb) + 1) & 1)
                    *(a2 + 0x18c) = *(a2 + 0x188);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x140]} */
⋯            long double temp9_1 = 0f;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp9_1 */ - temp9_1;
            bool c0_5 = /* bool c0_5 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp9_1 */ < temp9_1;
            bool c2_5 = FCMP_UO(/* bool c2_5 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp9_1) */,
                temp9_1);
            bool c3_5 = /* bool c3_5 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp9_1 */ == temp9_1;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x140]} */

            if (*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                    | ((top_2 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫                /* unimplemented  {fchs } */

🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x144]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_5333bc]} */
🚫🚫🚫            /* unimplemented  {fdivp st1, st0} */
            /* unimplemented  {fdivp st1, st0} */
🚫🚫            /* unimplemented  {fadd dword [ebp+0x18c]} */
🚫🚫            *(a2 + 0x18c) = /* *(a2 + 0x18c) = unimplemented  {fst dword [ebp+0x18c], st0} */;
⋯            long double temp12_1 = *(a2 + 0x188);
            /* unimplemented  {fcomp st0, dword [ebp+0x188]} f- temp12_1 */ - temp12_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp st0, dword [ebp+0x188]} f< temp12_1 */ < temp12_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x188]}, temp12_1) */,
                temp12_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp st0, dword [ebp+0x188]} f== temp12_1 */ == temp12_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x188]} */
            top_10 = top_2;

            if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | (top_10 & 7) << 0xb) + 1) & 0x41))
            {
                ecx_1 = *(a2 + 0x188);
                *(a2 + 0x18c) = ecx_1;
            }
        }

🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x18c]} */
🚫🚫        /* unimplemented  {fmul st0, dword [&g_53367c]} */
        int32_t var_d8_7 = ecx_1;
🚫🚫🚫        float var_d8_8 = /* float var_d8_8 = unimplemented  {fstp dword [esp], st0} */;
        /* unimplemented  {fstp dword [esp], st0} */
        top_2 = top_10;
        sub_4b3790(a2 + 0x70, a2 + 0x110, var_d8_8);
        var_ac = 1;
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x108]} */
⋯    long double temp4 = 0f;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp4 */ - temp4;
    bool c0_10 = /* bool c0_10 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp4 */ < temp4;
    bool c2_10 = FCMP_UO(/* bool c2_10 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp4) */, temp4);
    bool c3_10 = /* bool c3_10 =
        unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp4 */ == temp4;
    /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
    bool c0_11;
    bool c2_11;
    bool c3_11;

    if (*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
        | (top_2 & 7) << 0xb) + 1) & 0x40)
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x10c]} */
⋯        long double temp7_1 = 0f;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp7_1 */ - temp7_1;
        c0_11 = /* c0_11 = unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp7_1 */ < temp7_1;
        c2_11 = FCMP_UO(/* c2_11 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp7_1) */, temp7_1);
        c3_11 = /* c3_11 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp7_1 */ == temp7_1;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
    }

    bool c0_12;
    bool c2_12;
    bool c3_12;

    if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
        | (top_2 & 7) << 0xb) + 1) & 0x40) || !(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa
        | (c3_11 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x138]} */
⋯        long double temp6_1 = *(a2 + 0x190);
        /* unimplemented  {fcomp st0, dword [ebp+0x190]} f- temp6_1 */ - temp6_1;
        c0_12 = /* c0_12 = unimplemented  {fcomp st0, dword [ebp+0x190]} f< temp6_1 */ < temp6_1;
        c2_12 = FCMP_UO(/* c2_12 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x190]}, temp6_1) */, temp6_1);
        c3_12 = /* c3_12 = unimplemented  {fcomp st0, dword [ebp+0x190]} f== temp6_1 */ == temp6_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x190]} */
    }

    if ((*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 0x40 && *(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa
            | (c3_11 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40) || *(&((c0_12 ? 1 : 0) << 8
            | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40)
        *(a2 + 0x138) = *(a2 + 0x190);
    else
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x138]} */
⋯        long double temp10_1 = *(a2 + 0x190);
        /* unimplemented  {fcomp st0, dword [ebp+0x190]} f- temp10_1 */ - temp10_1;
        bool c0_13 = /* bool c0_13 =
            unimplemented  {fcomp st0, dword [ebp+0x190]} f< temp10_1 */ < temp10_1;
        bool c2_13 = FCMP_UO(/* bool c2_13 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x190]}, temp10_1) */, temp10_1);
        bool c3_13 = /* bool c3_13 =
            unimplemented  {fcomp st0, dword [ebp+0x190]} f== temp10_1 */ == temp10_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x190]} */

        if (!(*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x138]} */
⋯            long double temp14_1 = *(a2 + 0x190);
            /* unimplemented  {fcomp st0, dword [ebp+0x190]} f- temp14_1 */ - temp14_1;
            bool c0_15 = /* bool c0_15 =
                unimplemented  {fcomp st0, dword [ebp+0x190]} f< temp14_1 */ < temp14_1;
            bool c2_15 = FCMP_UO(/* bool c2_15 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x190]}, temp14_1) */,
                temp14_1);
            bool c3_15 = /* bool c3_15 =
                unimplemented  {fcomp st0, dword [ebp+0x190]} f== temp14_1 */ == temp14_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x190]} */

            if (!(*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                | (top_2 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x144]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_5333bc]} */
🚫🚫                /* unimplemented  {fdivr st0, dword [ebp+0x194]} */
🚫🚫                /* unimplemented  {fdiv st0, dword [ebp+0x194]} */
🚫🚫                /* unimplemented  {fsubr st0, dword [ebp+0x138]} */
🚫🚫                *(a2 + 0x138) = /* *(a2 + 0x138) =
                    unimplemented  {fst dword [ebp+0x138], st0} */;
⋯                long double temp18_1 = *(a2 + 0x190);
                /* unimplemented  {fcomp st0, dword [ebp+0x190]} f- temp18_1 */ - temp18_1;
                bool c0_16 = /* bool c0_16 =
                    unimplemented  {fcomp st0, dword [ebp+0x190]} f< temp18_1 */ < temp18_1;
                bool c2_16 = FCMP_UO(/* bool c2_16 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x190]}, temp18_1) */,
                    temp18_1);
                bool c3_16 = /* bool c3_16 =
                    unimplemented  {fcomp st0, dword [ebp+0x190]} f== temp18_1 */ == temp18_1;
                /* unimplemented  {fcomp st0, dword [ebp+0x190]} */

                if (*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | (top_2 & 7) << 0xb) + 1) & 1)
                    *(a2 + 0x138) = *(a2 + 0x190);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x144]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_5333bc]} */
🚫🚫            /* unimplemented  {fdivr st0, dword [ebp+0x194]} */
🚫🚫            /* unimplemented  {fdiv st0, dword [ebp+0x194]} */
🚫🚫            /* unimplemented  {fadd dword [ebp+0x138]} */
🚫🚫            *(a2 + 0x138) = /* *(a2 + 0x138) = unimplemented  {fst dword [ebp+0x138], st0} */;
⋯            long double temp15_1 = *(a2 + 0x190);
            /* unimplemented  {fcomp st0, dword [ebp+0x190]} f- temp15_1 */ - temp15_1;
            bool c0_14 = /* bool c0_14 =
                unimplemented  {fcomp st0, dword [ebp+0x190]} f< temp15_1 */ < temp15_1;
            bool c2_14 = FCMP_UO(/* bool c2_14 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x190]}, temp15_1) */,
                temp15_1);
            bool c3_14 = /* bool c3_14 =
                unimplemented  {fcomp st0, dword [ebp+0x190]} f== temp15_1 */ == temp15_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x190]} */

            if (!(*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                    | (top_2 & 7) << 0xb) + 1) & 0x41))
                *(a2 + 0x138) = *(a2 + 0x190);
        }

        sub_446290(a2);
        var_ac = 1;
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x188]} */
⋯    long double temp13 = *(a2 + 0x18c);
    /* unimplemented  {fcomp st0, dword [ebp+0x18c]} f- temp13 */ - temp13;
    bool c0_17 = /* bool c0_17 =
        unimplemented  {fcomp st0, dword [ebp+0x18c]} f< temp13 */ < temp13;
    bool c2_17 = FCMP_UO(/* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x18c]}, temp13) */, temp13);
    bool c3_17 = /* bool c3_17 =
        unimplemented  {fcomp st0, dword [ebp+0x18c]} f== temp13 */ == temp13;
    /* unimplemented  {fcomp st0, dword [ebp+0x18c]} */
    bool c0_18;
    bool c2_18;
    bool c3_18;

    if (*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
        | (top_2 & 7) << 0xb) + 1) & 0x40)
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x190]} */
⋯        long double temp17_1 = *(a2 + 0x138);
        /* unimplemented  {fcomp st0, dword [ebp+0x138]} f- temp17_1 */ - temp17_1;
        c0_18 = /* c0_18 = unimplemented  {fcomp st0, dword [ebp+0x138]} f< temp17_1 */ < temp17_1;
        c2_18 = FCMP_UO(/* c2_18 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x138]}, temp17_1) */, temp17_1);
        c3_18 = /* c3_18 =
            unimplemented  {fcomp st0, dword [ebp+0x138]} f== temp17_1 */ == temp17_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x138]} */
    }

    if (!(*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
        | (top_2 & 7) << 0xb) + 1) & 0x40) || !(*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa
        | (c3_18 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40))
    {
        *(a2 + 0x19a) = 0;
        *(a2 + 0x199) = 0;
    }
    else
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x188]} */
⋯        long double temp19_1 = 0f;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp19_1 */ - temp19_1;
        bool c0_19 = /* bool c0_19 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp19_1 */ < temp19_1;
        bool c2_19 = FCMP_UO(/* bool c2_19 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp19_1) */,
            temp19_1);
        bool c3_19 = /* bool c3_19 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp19_1 */ == temp19_1;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
        bool c0_20;
        bool c2_20;
        bool c3_20;

        if (*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x190]} */
⋯            long double temp20_1 = 0f;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp20_1 */ - temp20_1;
            c0_20 = /* c0_20 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp20_1 */ < temp20_1;
            c2_20 = FCMP_UO(/* c2_20 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp20_1) */,
                temp20_1);
            c3_20 = /* c3_20 =
                unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp20_1 */ == temp20_1;
            /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
        }

        char eax_24;

        eax_24 = !(*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 0x40) || !(*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa
            | (c3_20 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40) ? 0 : 1;

        *(a2 + 0x19a) = eax_24;
        *(a2 + 0x199) = !eax_24;
    }

    if (var_ac)
    {
        int32_t esi_7 = *(*(*(**(a2 + 0x6c) + 0xc) + 0xc) + 0x7c);
        sub_4474e0(a2);
        void* var_b8;

        if (esi_7)
        {
            void* var_c4;
            WeaponType_RegisterType_2(&var_c4, a2, 1);
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2a4]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x29c]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2a0]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            var_b8 = /* var_b8 = unimplemented  {fstp dword [esp+0x30], st0} */;
            /* unimplemented  {fstp dword [esp+0x30], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2b0]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2a8]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2ac]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            float var_b4_1 = /* float var_b4_1 = unimplemented  {fstp dword [esp+0x34], st0} */;
            /* unimplemented  {fstp dword [esp+0x34], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2bc]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2b4]} */
            var_c4 = var_b8;
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2b8]} */
            float var_c0_1 = var_b4_1;
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            float var_b0_1 = /* float var_b0_1 = unimplemented  {fstp dword [esp+0x3c], st0} */;
            /* unimplemented  {fstp dword [esp+0x3c], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫            /* unimplemented  {fadd qword [ebx]} */
            float var_bc_1 = var_b0_1;
🚫🚫🚫            double var_88 = /* double var_88 = unimplemented  {fstp qword [esp+0x64], st0} */;
            /* unimplemented  {fstp qword [esp+0x64], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫            /* unimplemented  {fadd qword [ebp+0x2d0]} */
🚫🚫🚫            double var_80_1 = /* double var_80_1 = unimplemented  {fstp qword [esp+0x6c], st0} */;
            /* unimplemented  {fstp qword [esp+0x6c], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫            /* unimplemented  {fadd qword [ebp+0x2d8]} */
🚫🚫🚫            double var_78_1 = /* double var_78_1 = unimplemented  {fstp qword [esp+0x74], st0} */;
            /* unimplemented  {fstp qword [esp+0x74], st0} */
            WeaponType_RegisterType_2(&var_c4, a2, 2);
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x30]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2a4]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x29c]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2a0]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            var_b8 = /* var_b8 = unimplemented  {fstp dword [esp+0x1c], st0} */;
            /* unimplemented  {fstp dword [esp+0x1c], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2b0]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2a8]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2ac]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            float var_b4_2 = /* float var_b4_2 = unimplemented  {fstp dword [esp+0x20], st0} */;
            /* unimplemented  {fstp dword [esp+0x20], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2bc]} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2b4]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fmul st0, dword [ebp+0x2b8]} */
🚫🚫🚫            /* unimplemented  {faddp st1, st0} */
            /* unimplemented  {faddp st1, st0} */
🚫🚫🚫            float var_b0_2 = /* float var_b0_2 = unimplemented  {fstp dword [esp+0x24], st0} */;
            /* unimplemented  {fstp dword [esp+0x24], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫            /* unimplemented  {fadd qword [ebx]} */
            var_c4 = var_b8;
            float var_c0_2 = var_b4_2;
🚫🚫🚫            double var_a0 = /* double var_a0 = unimplemented  {fstp qword [esp+0x38], st0} */;
            /* unimplemented  {fstp qword [esp+0x38], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fadd qword [ebp+0x2d0]} */
            float var_bc_2 = var_b0_2;
🚫🚫🚫            double var_98_1 = /* double var_98_1 = unimplemented  {fstp qword [esp+0x4c], st0} */;
            /* unimplemented  {fstp qword [esp+0x4c], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫            /* unimplemented  {fadd qword [ebp+0x2d8]} */
            *(&var_a8 + 4) = a2;
🚫🚫🚫            double var_90_1 = /* double var_90_1 = unimplemented  {fstp qword [esp+0x60], st0} */;
            /* unimplemented  {fstp qword [esp+0x60], st0} */
            int32_t var_70;
            sub_4cc2a0(Level_StartMission_4(), &var_70, &var_88, &var_a0, 1, 0xff, &var_a8, 1);
            int32_t var_18;

            if (var_18 && var_70)
            {
                int32_t eax_31 = *(a2 + 0x140);
                *(a2 + 0x190) = 0x3f800000;
                *(a2 + 0x188) = eax_31;
                *(a2 + 0x19a) = 0;
                *(a2 + 0x199) = 0;
                *(a2 + 0x290) = 1;
            }
        }

        sub_4463b0(a2);
        void* eax_32 = *(a2 + 0xe8);

        if (eax_32)
        {
            void* var_b0_3 = a2;
            var_b8 = a2 + 0x20;
            void* var_b4_3 = a2 + 0x70;
            int32_t* i_1 = *(eax_32 + 8);

            if (*i_1 && i_1)
            {
                int32_t ecx_9 = g_afa7e0;

                do
                {
                    int32_t* edx_11 = *i_1;
                    void* eax_36;

                    if (!edx_11)
                        eax_36 = nullptr;
                    else
                    {
                        int32_t eax_33 = *edx_11;
                        int32_t eax_34 = -(eax_33);
                        eax_36 = (eax_34 - eax_34) & edx_11;
                    }

                    *((ecx_9 << 2) + &g_afa6e0) = eax_36;
                    g_afa7e0 = ecx_9 + 1;
                    uint32_t eax_38 = MagicObj_GetEventId();
                    int32_t edx_12 = 0;
                    edx_12 = i_1[7];
                    eax_32 = *(((eax_38 * 0x180 + edx_12) << 2) + &g_a96ae0);

                    if (eax_32)
                        eax_32(i_1, &var_b8);

                    ecx_9 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_9;
                    i_1 = *((ecx_9 << 2) + &g_afa6e0);
                } while (i_1);
            }
        }
    }

    if (*(a2 + 0x19a) && !*(a2 + 0x19c))
    {
        struct status_msg* eax_40 = sub_4e6b00(a2, a2 + 0x168);

        if (eax_40)
            sub_4e6c30(eax_40, a2 + 0x20);
    }

    if (*(a2 + 0x199) && !*(a2 + 0x19b))
    {
        struct status_msg* eax_42 = sub_4e6b00(a2, a2 + 0x158);

        if (eax_42)
            sub_4e6c30(eax_42, a2 + 0x20);
    }

    struct status_msg* result;

    if (*(a2 + 0x19a) || *(a2 + 0x199))
    {
        result = *(a2 + 0x2e0);

        if (result)
        {
            result = sub_4e6c00(result);
            *(a2 + 0x2e0) = 0;
        }
    }
    else
    {
        result = *(a2 + 0x2e0);

        if (!result)
        {
            result = sub_4e6b00(a2, a2 + 0x178);
            *(a2 + 0x2e0) = result;

            if (result)
                result = sub_4e6c30(result, a2 + 0x20);
        }
    }

    void* ebp_1 = *(a2 + 0xe8);

    if (!ebp_1)
        return result;

    int32_t edx_14 = 0;
    edx_14 = *(ebp_1 + 0x1c);
    return (*((edx_14 << 2) + &g_a970e0))(ebp_1);
}
