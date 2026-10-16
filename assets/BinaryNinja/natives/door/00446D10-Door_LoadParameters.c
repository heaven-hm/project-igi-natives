#include "Door_LoadParameters.h"
struct status_msg* Door_LoadParameters(long double a1 @ fp0, void* a2)

{
    void* v_ac = nullptr;
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA4;

            if (!srcS1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *srcS1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA = *((valA5 << 2) + &g_a970e0);

            if (valA)
            {
                valA(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    char valA6 = *(a2 + 0x19a);
    *(a2 + 0x19b) = *(a2 + 0x199);
    *(a2 + 0x19c) = valA6;
    memcpy(a2 + 0x2c8, a2 + 0x20, 0x18);
    memcpy(a2 + 0x29c, a2 + 0x70, 0x28);
    int16_t idx;

    if (valA6 && Script_FormatString_6(a2 + 0x1a0))
    {
        Script_SpawnNewTask_7(a2 + 0x1a0, a2);
        long double f1_1 = 0.0;
        a1 - f1_1;
        idx = 1;

        if (!(*(&((a1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f1_1) ? 1 : 0) << 0xa
                | (a1 == f1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x40))
            *(a2 + 0x290) = 1;
    }

    if (!*(a2 + 0x199))
        *(a2 + 0x298) = 0;
    else
    {
        *(a2 + 0x298) += 1;

        if (Script_FormatString_6(a2 + 0x1f0))
        {
            Script_SpawnNewTask_7(a2 + 0x1f0, a2);
⋯            long double f2_1 = 0.0;
            /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f2_1 */ - f2_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f2_1 */ < f2_1;
            bool c2_2 = FCMP_UO(/* bool c2_2 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f2_1) */,
                f2_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f2_1 */ == f2_1;
            /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */
            idx += 1;

            if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (idx & 7) << 0xb) + 1) & 0x40))
                *(a2 + 0x290) = 0;
        }
    }

    char valA16;
    int32_t objC1;
    valA16 = Script_FormatString_6(a2 + 0x240);
    double v_a8;

    if (valA16)
    {
        objC1 = Script_SpawnNewTask_7(a2 + 0x240, a2);
🚫🚫🚫        v_a8 = /* v_a8 = unimplemented  {fistp qword [esp+0x34], fp0} */;
        /* unimplemented  {fistp qword [esp+0x34], fp0} */
        idx += 1;
        *(a2 + 0x198) = v_a8;
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
        int32_t valA18 = *(a2 + 0x140);
        *(a2 + 0x190) = 0x3f800000;
        *(a2 + 0x188) = valA18;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x188]} */
⋯    long double f3 = *(a2 + 0x18c);
    /* unimplemented  {fcomp fp0, dword [flagP+0x18c]} f- f3 */ - f3;
    bool c0_3 = /* bool c0_3 = unimplemented  {fcomp fp0, dword [flagP+0x18c]} f< f3 */ < f3;
    bool c2_3 = FCMP_UO(/* bool c2_3 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x18c]}, f3) */, f3);
    bool c3_3 = /* bool c3_3 = unimplemented  {fcomp fp0, dword [flagP+0x18c]} f== f3 */ == f3;
    /* unimplemented  {fcomp fp0, dword [flagP+0x18c]} */
    int16_t top_2 = idx;

    if (!(*(
        &((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x18c]} */
⋯        long double f5_1 = *(a2 + 0x188);
        /* unimplemented  {fcomp fp0, dword [flagP+0x188]} f- f5_1 */ - f5_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp fp0, dword [flagP+0x188]} f< f5_1 */ < f5_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x188]}, f5_1) */, f5_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp fp0, dword [flagP+0x188]} f== f5_1 */ == f5_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x188]} */
        int16_t top_10;

        if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x18c]} */
⋯            long double f8_1 = *(a2 + 0x188);
            /* unimplemented  {fcomp fp0, dword [flagP+0x188]} f- f8_1 */ - f8_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp fp0, dword [flagP+0x188]} f< f8_1 */ < f8_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x188]}, f8_1) */, f8_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp fp0, dword [flagP+0x188]} f== f8_1 */ == f8_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x188]} */
            top_10 = top_2;

            if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                | (top_10 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x140]} */
⋯                long double f11_1 = 0f;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f11_1 */ - f11_1;
                bool c0_8 = /* bool c0_8 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f11_1 */ < f11_1;
                bool c2_8 = FCMP_UO(/* bool c2_8 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f11_1) */,
                    f11_1);
                bool c3_8 = /* bool c3_8 =
                    unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f11_1 */ == f11_1;
                /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x140]} */

                if (*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                        | ((top_10 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫                    /* unimplemented  {fchs } */

🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x144]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫🚫                /* unimplemented  {fdivp fp1, fp0} */
                /* unimplemented  {fdivp fp1, fp0} */
🚫🚫                /* unimplemented  {fsubr fp0, dword [flagP+0x18c]} */
🚫🚫                *(a2 + 0x18c) = /* *(a2 + 0x18c) =
                    unimplemented  {fst dword [flagP+0x18c], fp0} */;
⋯                long double f16_1 = *(a2 + 0x188);
                /* unimplemented  {fcomp fp0, dword [flagP+0x188]} f- f16_1 */ - f16_1;
                bool c0_9 = /* bool c0_9 =
                    unimplemented  {fcomp fp0, dword [flagP+0x188]} f< f16_1 */ < f16_1;
                bool c2_9 = FCMP_UO(/* bool c2_9 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x188]}, f16_1) */,
                    f16_1);
                bool c3_9 = /* bool c3_9 =
                    unimplemented  {fcomp fp0, dword [flagP+0x188]} f== f16_1 */ == f16_1;
                /* unimplemented  {fcomp fp0, dword [flagP+0x188]} */

                if (*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
                        | (top_10 & 7) << 0xb) + 1) & 1)
                    *(a2 + 0x18c) = *(a2 + 0x188);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x140]} */
⋯            long double f9_1 = 0f;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f9_1 */ - f9_1;
            bool c0_5 = /* bool c0_5 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f9_1 */ < f9_1;
            bool c2_5 = FCMP_UO(/* bool c2_5 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f9_1) */,
                f9_1);
            bool c3_5 = /* bool c3_5 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f9_1 */ == f9_1;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x140]} */

            if (*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                    | ((top_2 - 1) & 7) << 0xb) + 1) & 1)
🚫🚫                /* unimplemented  {fchs } */

🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x144]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫🚫            /* unimplemented  {fdivp fp1, fp0} */
            /* unimplemented  {fdivp fp1, fp0} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x18c]} */
🚫🚫            *(a2 + 0x18c) =
⋯            long double f12_1 = *(a2 + 0x188);
            /* unimplemented  {fcomp fp0, dword [flagP+0x188]} f- f12_1 */ - f12_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp fp0, dword [flagP+0x188]} f< f12_1 */ < f12_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x188]}, f12_1) */,
                f12_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp fp0, dword [flagP+0x188]} f== f12_1 */ == f12_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x188]} */
            top_10 = top_2;

            if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | (top_10 & 7) << 0xb) + 1) & 0x41))
            {
                objC1 = *(a2 + 0x188);
                *(a2 + 0x18c) = objC1;
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x18c]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_53367c]} */
        int32_t v_d8_7 = objC1;
🚫🚫🚫        float v_d8_8 = /* float v_d8_8 = unimplemented  {fstp dword [esp], fp0} */;
        /* unimplemented  {fstp dword [esp], fp0} */
        top_2 = top_10;
        Sys_OpenFileStream_12(a2 + 0x70, a2 + 0x110, v_d8_8);
        v_ac = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x108]} */
⋯    long double f4 = 0f;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f4 */ - f4;
    bool c0_10 = /* bool c0_10 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f4 */ < f4;
    bool c2_10 = FCMP_UO(/* bool c2_10 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f4) */, f4);
    bool c3_10 = /* bool c3_10 =
        unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f4 */ == f4;
    /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    bool c0_11;
    bool c2_11;
    bool c3_11;

    if (*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
        | (top_2 & 7) << 0xb) + 1) & 0x40)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x10c]} */
⋯        long double f7_1 = 0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f7_1 */ - f7_1;
        c0_11 = /* c0_11 = unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f7_1 */ < f7_1;
        c2_11 = FCMP_UO(/* c2_11 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f7_1) */, f7_1);
        c3_11 = /* c3_11 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f7_1 */ == f7_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
    }

    bool c0_12;
    bool c2_12;
    bool c3_12;

    if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
        | (top_2 & 7) << 0xb) + 1) & 0x40) || !(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa
        | (c3_11 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x138]} */
⋯        long double f6_1 = *(a2 + 0x190);
        /* unimplemented  {fcomp fp0, dword [flagP+0x190]} f- f6_1 */ - f6_1;
        c0_12 = /* c0_12 = unimplemented  {fcomp fp0, dword [flagP+0x190]} f< f6_1 */ < f6_1;
        c2_12 = FCMP_UO(/* c2_12 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x190]}, f6_1) */, f6_1);
        c3_12 = /* c3_12 = unimplemented  {fcomp fp0, dword [flagP+0x190]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x190]} */
    }

    if ((*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 0x40 && *(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa
            | (c3_11 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40) || *(&((c0_12 ? 1 : 0) << 8
            | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40)
        *(a2 + 0x138) = *(a2 + 0x190);
    else
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x138]} */
⋯        long double f10_1 = *(a2 + 0x190);
        /* unimplemented  {fcomp fp0, dword [flagP+0x190]} f- f10_1 */ - f10_1;
        bool c0_13 = /* bool c0_13 =
            unimplemented  {fcomp fp0, dword [flagP+0x190]} f< f10_1 */ < f10_1;
        bool c2_13 = FCMP_UO(/* bool c2_13 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x190]}, f10_1) */, f10_1);
        bool c3_13 = /* bool c3_13 =
            unimplemented  {fcomp fp0, dword [flagP+0x190]} f== f10_1 */ == f10_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x190]} */

        if (!(*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x138]} */
⋯            long double f14_1 = *(a2 + 0x190);
            /* unimplemented  {fcomp fp0, dword [flagP+0x190]} f- f14_1 */ - f14_1;
            bool c0_15 = /* bool c0_15 =
                unimplemented  {fcomp fp0, dword [flagP+0x190]} f< f14_1 */ < f14_1;
            bool c2_15 = FCMP_UO(/* bool c2_15 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x190]}, f14_1) */,
                f14_1);
            bool c3_15 = /* bool c3_15 =
                unimplemented  {fcomp fp0, dword [flagP+0x190]} f== f14_1 */ == f14_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x190]} */

            if (!(*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
                | (top_2 & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x144]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫                /* unimplemented  {fdivr fp0, dword [flagP+0x194]} */
🚫🚫                /* unimplemented  {fdiv fp0, dword [flagP+0x194]} */
🚫🚫                /* unimplemented  {fsubr fp0, dword [flagP+0x138]} */
🚫🚫                *(a2 + 0x138) = /* *(a2 + 0x138) =
                    unimplemented  {fst dword [flagP+0x138], fp0} */;
⋯                long double f18_1 = *(a2 + 0x190);
                /* unimplemented  {fcomp fp0, dword [flagP+0x190]} f- f18_1 */ - f18_1;
                bool c0_16 = /* bool c0_16 =
                    unimplemented  {fcomp fp0, dword [flagP+0x190]} f< f18_1 */ < f18_1;
                bool c2_16 = FCMP_UO(/* bool c2_16 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x190]}, f18_1) */,
                    f18_1);
                bool c3_16 = /* bool c3_16 =
                    unimplemented  {fcomp fp0, dword [flagP+0x190]} f== f18_1 */ == f18_1;
                /* unimplemented  {fcomp fp0, dword [flagP+0x190]} */

                if (*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
                        | (top_2 & 7) << 0xb) + 1) & 1)
                    *(a2 + 0x138) = *(a2 + 0x190);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x144]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫            /* unimplemented  {fdivr fp0, dword [flagP+0x194]} */
🚫🚫            /* unimplemented  {fdiv fp0, dword [flagP+0x194]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x138]} */
🚫🚫            *(a2 + 0x138) =
⋯            long double f15_1 = *(a2 + 0x190);
            /* unimplemented  {fcomp fp0, dword [flagP+0x190]} f- f15_1 */ - f15_1;
            bool c0_14 = /* bool c0_14 =
                unimplemented  {fcomp fp0, dword [flagP+0x190]} f< f15_1 */ < f15_1;
            bool c2_14 = FCMP_UO(/* bool c2_14 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x190]}, f15_1) */,
                f15_1);
            bool c3_14 = /* bool c3_14 =
                unimplemented  {fcomp fp0, dword [flagP+0x190]} f== f15_1 */ == f15_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x190]} */

            if (!(*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                    | (top_2 & 7) << 0xb) + 1) & 0x41))
                *(a2 + 0x138) = *(a2 + 0x190);
        }

        Env_ActivateEntity_7(a2);
        v_ac = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x188]} */
⋯    long double f13 = *(a2 + 0x18c);
    /* unimplemented  {fcomp fp0, dword [flagP+0x18c]} f- f13 */ - f13;
    bool c0_17 = /* bool c0_17 =
        unimplemented  {fcomp fp0, dword [flagP+0x18c]} f< f13 */ < f13;
    bool c2_17 = FCMP_UO(/* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x18c]}, f13) */, f13);
    bool c3_17 = /* bool c3_17 =
        unimplemented  {fcomp fp0, dword [flagP+0x18c]} f== f13 */ == f13;
    /* unimplemented  {fcomp fp0, dword [flagP+0x18c]} */
    bool c0_18;
    bool c2_18;
    bool c3_18;

    if (*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
        | (top_2 & 7) << 0xb) + 1) & 0x40)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x190]} */
⋯        long double f17_1 = *(a2 + 0x138);
        /* unimplemented  {fcomp fp0, dword [flagP+0x138]} f- f17_1 */ - f17_1;
        c0_18 = /* c0_18 = unimplemented  {fcomp fp0, dword [flagP+0x138]} f< f17_1 */ < f17_1;
        c2_18 = FCMP_UO(/* c2_18 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x138]}, f17_1) */, f17_1);
        c3_18 = /* c3_18 =
            unimplemented  {fcomp fp0, dword [flagP+0x138]} f== f17_1 */ == f17_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x138]} */
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
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x188]} */
⋯        long double f19_1 = 0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f19_1 */ - f19_1;
        bool c0_19 = /* bool c0_19 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f19_1 */ < f19_1;
        bool c2_19 = FCMP_UO(/* bool c2_19 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f19_1) */,
            f19_1);
        bool c3_19 = /* bool c3_19 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f19_1 */ == f19_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        bool c0_20;
        bool c2_20;
        bool c3_20;

        if (*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x190]} */
⋯            long double f20_1 = 0f;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f20_1 */ - f20_1;
            c0_20 = /* c0_20 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f20_1 */ < f20_1;
            c2_20 = FCMP_UO(/* c2_20 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f20_1) */,
                f20_1);
            c3_20 = /* c3_20 =
                unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f20_1 */ == f20_1;
            /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        }

        char valA24;

        valA24 = !(*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 0x40) || !(*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa
            | (c3_20 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40) ? 0 : 1;

        *(a2 + 0x19a) = valA24;
        *(a2 + 0x199) = !valA24;
    }

    if (v_ac)
    {
        int32_t srcS7 = *(*(*(**(a2 + 0x6c) + 0xc) + 0xc) + 0x7c);
        Env_UpdateCameraLens_8(a2);
        void* v_b8;

        if (srcS7)
        {
            void* v_c4;
            WeaponType_RegisterType_2(&v_c4, a2, 1);
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a4]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x1c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x29c]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a0]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            v_b8 = /* v_b8 = unimplemented  {fstp dword [esp+0x30], fp0} */;
            /* unimplemented  {fstp dword [esp+0x30], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b0]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a8]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2ac]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float v_b4_1 = /* float v_b4_1 = unimplemented  {fstp dword [esp+0x34], fp0} */;
            /* unimplemented  {fstp dword [esp+0x34], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2bc]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b4]} */
            v_c4 = v_b8;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b8]} */
            float v_c0_1 = v_b4_1;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float v_b0_1 = /* float v_b0_1 = unimplemented  {fstp dword [esp+0x3c], fp0} */;
            /* unimplemented  {fstp dword [esp+0x3c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫            /* unimplemented  {fadd qword [ctxB]} */
            float v_bc_1 = v_b0_1;
🚫🚫🚫            double v_88 = /* double v_88 = unimplemented  {fstp qword [esp+0x64], fp0} */;
            /* unimplemented  {fstp qword [esp+0x64], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x38]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d0]} */
🚫🚫🚫            double v_80_1 = /* double v_80_1 = unimplemented  {fstp qword [esp+0x6c], fp0} */;
            /* unimplemented  {fstp qword [esp+0x6c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x3c]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d8]} */
🚫🚫🚫            double v_78_1 = /* double v_78_1 = unimplemented  {fstp qword [esp+0x74], fp0} */;
            /* unimplemented  {fstp qword [esp+0x74], fp0} */
            WeaponType_RegisterType_2(&v_c4, a2, 2);
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x30]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a4]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x29c]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a0]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            v_b8 = /* v_b8 = unimplemented  {fstp dword [esp+0x1c], fp0} */;
            /* unimplemented  {fstp dword [esp+0x1c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b0]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a8]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2ac]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float v_b4_2 = /* float v_b4_2 = unimplemented  {fstp dword [esp+0x20], fp0} */;
            /* unimplemented  {fstp dword [esp+0x20], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2bc]} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b4]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b8]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float v_b0_2 = /* float v_b0_2 = unimplemented  {fstp dword [esp+0x24], fp0} */;
            /* unimplemented  {fstp dword [esp+0x24], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x1c]} */
🚫🚫            /* unimplemented  {fadd qword [ctxB]} */
            v_c4 = v_b8;
            float v_c0_2 = v_b4_2;
🚫🚫🚫            double v_a0 = /* double v_a0 = unimplemented  {fstp qword [esp+0x38], fp0} */;
            /* unimplemented  {fstp qword [esp+0x38], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x24]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d0]} */
            float v_bc_2 = v_b0_2;
🚫🚫🚫            double v_98_1 = /* double v_98_1 = unimplemented  {fstp qword [esp+0x4c], fp0} */;
            /* unimplemented  {fstp qword [esp+0x4c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x34]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d8]} */
            *(&v_a8 + 4) = a2;
🚫🚫🚫            double v_90_1 = /* double v_90_1 = unimplemented  {fstp qword [esp+0x60], fp0} */;
            /* unimplemented  {fstp qword [esp+0x60], fp0} */
            int32_t v_70;
            DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_88, &v_a0, 1, 0xff, &v_a8, 1);
            int32_t v_18;

            if (v_18 && v_70)
            {
                int32_t valA31 = *(a2 + 0x140);
                *(a2 + 0x190) = 0x3f800000;
                *(a2 + 0x188) = valA31;
                *(a2 + 0x19a) = 0;
                *(a2 + 0x199) = 0;
                *(a2 + 0x290) = 1;
            }
        }

        Env_InitLadder_8(a2);
        void* valA32 = *(a2 + 0xe8);

        if (valA32)
        {
            void* v_b0_3 = a2;
            v_b8 = a2 + 0x20;
            void* v_b4_3 = a2 + 0x70;
            int32_t* i_1 = *(valA32 + 8);

            if (*i_1 && i_1)
            {
                int32_t objC9 = g_afa7e0;

                do
                {
                    int32_t* tmpD11 = *i_1;
                    void* valA36;

                    if (!tmpD11)
                        valA36 = nullptr;
                    else
                    {
                        int32_t valA33 = *tmpD11;
                        int32_t valA34 = -(valA33);
                        valA36 = (valA34 - valA34) & tmpD11;
                    }

                    *((objC9 << 2) + &g_afa6e0) = valA36;
                    g_afa7e0 = objC9 + 1;
                    uint32_t valA38 = MagicObj_GetEventId();
                    int32_t tmpD12 = 0;
                    tmpD12 = i_1[7];
                    valA32 = *(((valA38 * 0x180 + tmpD12) << 2) + &g_a96ae0);

                    if (valA32)
                        valA32(i_1, &v_b8);

                    objC9 = g_afa7e0 - 1;
                    g_afa7e0 = objC9;
                    i_1 = *((objC9 << 2) + &g_afa6e0);
                } while (i_1);
            }
        }
    }

    if (*(a2 + 0x19a) && !*(a2 + 0x19c))
    {
        struct status_msg* valA40 = SoundSys_SetMasterVolume_7(a2, a2 + 0x168);

        if (valA40)
            SoundSys_StopSoundSample_7(valA40, a2 + 0x20);
    }

    if (*(a2 + 0x199) && !*(a2 + 0x19b))
    {
        struct status_msg* valA42 = SoundSys_SetMasterVolume_7(a2, a2 + 0x158);

        if (valA42)
            SoundSys_StopSoundSample_7(valA42, a2 + 0x20);
    }

    struct status_msg* result;

    if (*(a2 + 0x19a) || *(a2 + 0x199))
    {
        result = *(a2 + 0x2e0);

        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            *(a2 + 0x2e0) = 0;
        }
    }
    else
    {
        result = *(a2 + 0x2e0);

        if (!result)
        {
            result = SoundSys_SetMasterVolume_7(a2, a2 + 0x178);
            *(a2 + 0x2e0) = result;

            if (result)
                result = SoundSys_StopSoundSample_7(result, a2 + 0x20);
        }
    }

    void* flagP1 = *(a2 + 0xe8);

    if (!flagP1)
        return result;

    int32_t tmpD14 = 0;
    tmpD14 = *(flagP1 + 0x1c);
    return (*((tmpD14 << 2) + &g_a970e0))(flagP1);
}
