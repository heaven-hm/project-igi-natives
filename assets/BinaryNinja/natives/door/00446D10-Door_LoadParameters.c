// Original IGI.EXE function: Door_LoadParameters (VA 0x00446D10; static CFG gate PASS, CFG score 0.986).
#include "Door_LoadParameters.h"
struct status_msg* Door_LoadParameters(long double context , void* param_2)

{
    void* item_ac = nullptr;
    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_val = *((data_5 << 2) + &g_a970e0);

            if (data_val)
            {
                data_val(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    char data_6 = *(param_2 + 0x19a);
    *(param_2 + 0x19b) = *(param_2 + 0x199);
    *(param_2 + 0x19c) = data_6;
    memcpy(param_2 + 0x2c8, param_2 + 0x20, 0x18);
    memcpy(param_2 + 0x29c, param_2 + 0x70, 0x28);
    int16_t idx;

    if (data_6 && Script_FormatString_6(param_2 + 0x1a0))
    {
        Script_SpawnNewTask_7(param_2 + 0x1a0, param_2);
        long double f1_1 = 0.0;
        context - f1_1;
        idx = 1;

        if (!(*(&((context < f1_1 ? 1 : 0) << 8 | (FCMP_UO(context, f1_1) ? 1 : 0) << 0xa
                | (context == f1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x40))
            *(param_2 + 0x290) = 1;
    }

    if (!*(param_2 + 0x199))
        *(param_2 + 0x298) = 0;
    else
    {
        *(param_2 + 0x298) += 1;

        if (Script_FormatString_6(param_2 + 0x1f0))
        {
            Script_SpawnNewTask_7(param_2 + 0x1f0, param_2);
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
                *(param_2 + 0x290) = 0;
        }
    }

    char data_16;
    int32_t entity_1;
    data_16 = Script_FormatString_6(param_2 + 0x240);
    double item_a8;

    if (data_16)
    {
        entity_1 = Script_SpawnNewTask_7(param_2 + 0x240, param_2);
🚫🚫🚫        item_a8 = /* item_a8 = unimplemented  {fistp qword [stack_ptr+0x34], fp0} */;
        /* unimplemented  {fistp qword [stack_ptr+0x34], fp0} */
        idx += 1;
        *(param_2 + 0x198) = item_a8;
    }

    if (*(param_2 + 0x19d))
        *(param_2 + 0x198) = 0;

    if (!*(param_2 + 0x290))
    {
        *(param_2 + 0x188) = 0;
        *(param_2 + 0x190) = 0;
    }
    else
    {
        int32_t data_18 = *(param_2 + 0x140);
        *(param_2 + 0x190) = 0x3f800000;
        *(param_2 + 0x188) = data_18;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x188]} */
⋯    long double f3 = *(param_2 + 0x18c);
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
⋯        long double f5_1 = *(param_2 + 0x188);
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
⋯            long double f8_1 = *(param_2 + 0x188);
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
⋯                long double f11_1 = 0.0f;
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
🚫🚫                *(param_2 + 0x18c) = /* *(param_2 + 0x18c) =
                    unimplemented  {fst dword [flagP+0x18c], fp0} */;
⋯                long double f16_1 = *(param_2 + 0x188);
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
                    *(param_2 + 0x18c) = *(param_2 + 0x188);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x140]} */
⋯            long double f9_1 = 0.0f;
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
🚫🚫            *(param_2 + 0x18c) =
⋯            long double f12_1 = *(param_2 + 0x188);
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
                entity_1 = *(param_2 + 0x188);
                *(param_2 + 0x18c) = entity_1;
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x18c]} */
🚫🚫        /* unimplemented  {fmul fp0, dword [&g_53367c]} */
        int32_t item_d8_7 = entity_1;
🚫🚫🚫        float item_d8_8 = /* float item_d8_8 = unimplemented  {fstp dword [stack_ptr], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr], fp0} */
        top_2 = top_10;
        Sys_OpenFileStream_12(param_2 + 0x70, param_2 + 0x110, item_d8_8);
        item_ac = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x108]} */
⋯    long double f4 = 0.0f;
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
⋯        long double f7_1 = 0.0f;
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
⋯        long double f6_1 = *(param_2 + 0x190);
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
        *(param_2 + 0x138) = *(param_2 + 0x190);
    else
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x138]} */
⋯        long double f10_1 = *(param_2 + 0x190);
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
⋯            long double f14_1 = *(param_2 + 0x190);
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
🚫🚫                *(param_2 + 0x138) = /* *(param_2 + 0x138) =
                    unimplemented  {fst dword [flagP+0x138], fp0} */;
⋯                long double f18_1 = *(param_2 + 0x190);
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
                    *(param_2 + 0x138) = *(param_2 + 0x190);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x144]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫            /* unimplemented  {fdivr fp0, dword [flagP+0x194]} */
🚫🚫            /* unimplemented  {fdiv fp0, dword [flagP+0x194]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x138]} */
🚫🚫            *(param_2 + 0x138) =
⋯            long double f15_1 = *(param_2 + 0x190);
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
                *(param_2 + 0x138) = *(param_2 + 0x190);
        }

        Env_ActivateEntity_7(param_2);
        item_ac = 1;
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x188]} */
⋯    long double f13 = *(param_2 + 0x18c);
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
⋯        long double f17_1 = *(param_2 + 0x138);
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
        *(param_2 + 0x19a) = 0;
        *(param_2 + 0x199) = 0;
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x188]} */
⋯        long double f19_1 = 0.0f;
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
⋯            long double f20_1 = 0.0f;
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

        char data_24;

        data_24 = !(*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
            | (top_2 & 7) << 0xb) + 1) & 0x40) || !(*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa
            | (c3_20 ? 1 : 0) << 0xe | (top_2 & 7) << 0xb) + 1) & 0x40) ? 0 : 1;

        *(param_2 + 0x19a) = data_24;
        *(param_2 + 0x199) = !data_24;
    }

    if (item_ac)
    {
        int32_t source_7 = *(*(*(**(param_2 + 0x6c) + 0xc) + 0xc) + 0x7c);
        Env_UpdateCameraLens_8(param_2);
        void* item_b8;

        if (source_7)
        {
            void* item_c4;
            WeaponType_RegisterType_2(&item_c4, param_2, 1);
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a4]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x29c]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a0]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            item_b8 = /* item_b8 = unimplemented  {fstp dword [stack_ptr+0x30], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x30], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b0]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a8]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2ac]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float item_b4_1 = /* float item_b4_1 = unimplemented  {fstp dword [stack_ptr+0x34], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x34], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2bc]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b4]} */
            item_c4 = item_b8;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b8]} */
            float item_c0_1 = item_b4_1;
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float item_b0_1 = /* float item_b0_1 = unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x3c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫            /* unimplemented  {fadd qword [context_val]} */
            float item_bc_1 = item_b0_1;
🚫🚫🚫            double item_88 = /* double item_88 = unimplemented  {fstp qword [stack_ptr+0x64], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x64], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x38]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d0]} */
🚫🚫🚫            double item_80_1 = /* double item_80_1 = unimplemented  {fstp qword [stack_ptr+0x6c], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x6c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x3c]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d8]} */
🚫🚫🚫            double item_78_1 = /* double item_78_1 = unimplemented  {fstp qword [stack_ptr+0x74], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x74], fp0} */
            WeaponType_RegisterType_2(&item_c4, param_2, 2);
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x30]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a4]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x29c]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a0]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            item_b8 = /* item_b8 = unimplemented  {fstp dword [stack_ptr+0x1c], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x1c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b0]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2a8]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2ac]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float item_b4_2 = /* float item_b4_2 = unimplemented  {fstp dword [stack_ptr+0x20], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x20], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2bc]} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b4]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [flagP+0x2b8]} */
🚫🚫🚫            /* unimplemented  {faddp fp1, fp0} */
            /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫            float item_b0_2 = /* float item_b0_2 = unimplemented  {fstp dword [stack_ptr+0x24], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr+0x24], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫            /* unimplemented  {fadd qword [context_val]} */
            item_c4 = item_b8;
            float item_c0_2 = item_b4_2;
🚫🚫🚫            double item_a0 = /* double item_a0 = unimplemented  {fstp qword [stack_ptr+0x38], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x38], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d0]} */
            float item_bc_2 = item_b0_2;
🚫🚫🚫            double item_98_1 = /* double item_98_1 = unimplemented  {fstp qword [stack_ptr+0x4c], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x4c], fp0} */
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫            /* unimplemented  {fadd qword [flagP+0x2d8]} */
            *(&item_a8 + 4) = param_2;
🚫🚫🚫            double item_90_1 = /* double item_90_1 = unimplemented  {fstp qword [stack_ptr+0x60], fp0} */;
            /* unimplemented  {fstp qword [stack_ptr+0x60], fp0} */
            int32_t item_70;
            DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_88, &item_a0, 1, 0xff, &item_a8, 1);
            int32_t item_18;

            if (item_18 && item_70)
            {
                int32_t data_31 = *(param_2 + 0x140);
                *(param_2 + 0x190) = 0x3f800000;
                *(param_2 + 0x188) = data_31;
                *(param_2 + 0x19a) = 0;
                *(param_2 + 0x199) = 0;
                *(param_2 + 0x290) = 1;
            }
        }

        Env_InitLadder_8(param_2);
        void* data_32 = *(param_2 + 0xe8);

        if (data_32)
        {
            void* item_b0_3 = param_2;
            item_b8 = param_2 + 0x20;
            void* item_b4_3 = param_2 + 0x70;
            int32_t* i_1 = *(data_32 + 8);

            if (*i_1 && i_1)
            {
                int32_t entity_9 = g_afa7e0;

                do
                {
                    int32_t* temp_11 = *i_1;
                    void* data_36;

                    if (!temp_11)
                        data_36 = nullptr;
                    else
                    {
                        int32_t data_33 = *temp_11;
                        int32_t data_34 = -(data_33);
                        data_36 = (data_34 - data_34) & temp_11;
                    }

                    *((entity_9 << 2) + &g_afa6e0) = data_36;
                    g_afa7e0 = entity_9 + 1;
                    uint32_t data_38 = MagicObj_GetEventId();
                    int32_t temp_12 = 0;
                    temp_12 = i_1[7];
                    data_32 = *(((data_38 * 0x180 + temp_12) << 2) + &g_a96ae0);

                    if (data_32)
                        data_32(i_1, &item_b8);

                    entity_9 = g_afa7e0 - 1;
                    g_afa7e0 = entity_9;
                    i_1 = *((entity_9 << 2) + &g_afa6e0);
                } while (i_1);
            }
        }
    }

    if (*(param_2 + 0x19a) && !*(param_2 + 0x19c))
    {
        struct status_msg* data_40 = SoundSys_SetMasterVolume_7(param_2, param_2 + 0x168);

        if (data_40)
            SoundSys_StopSoundSample_7(data_40, param_2 + 0x20);
    }

    if (*(param_2 + 0x199) && !*(param_2 + 0x19b))
    {
        struct status_msg* data_42 = SoundSys_SetMasterVolume_7(param_2, param_2 + 0x158);

        if (data_42)
            SoundSys_StopSoundSample_7(data_42, param_2 + 0x20);
    }

    struct status_msg* result;

    if (*(param_2 + 0x19a) || *(param_2 + 0x199))
    {
        result = *(param_2 + 0x2e0);

        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            *(param_2 + 0x2e0) = 0;
        }
    }
    else
    {
        result = *(param_2 + 0x2e0);

        if (!result)
        {
            result = SoundSys_SetMasterVolume_7(param_2, param_2 + 0x178);
            *(param_2 + 0x2e0) = result;

            if (result)
                result = SoundSys_StopSoundSample_7(result, param_2 + 0x20);
        }
    }

    void* flagP1 = *(param_2 + 0xe8);

    if (!flagP1)
        return result;

    int32_t temp_14 = 0;
    temp_14 = *(flagP1 + 0x1c);
    return (*((temp_14 << 2) + &g_a970e0))(flagP1);
}
