// IGI native provenance: RotatingObject_LoadParameters - 0x00439090 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00439090-RotatingObject_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RotatingObject_LoadParameters.h"
void* RotatingObject_LoadParameters(long double context , float param_2)

{
    float flagP = param_2;
    char data_val;
    int32_t entity_val;
    data_val = Script_FormatString_6(flagP + 0x1ac);
    int16_t idx;

    if (data_val)
    {
        entity_val = Script_SpawnNewTask_7(flagP + 0x1ac, flagP);
        idx = 1;
        int16_t data_2;
        data_2 = context;

        if (!data_2 || *(flagP + 0x1a8))
        {
        label_4390cd:
            *(flagP + 0x13c) = 0;
            *(flagP + 0x140) = 0;
            *(flagP + 0x144) = 0;
        }
    }
    else if (*(flagP + 0x1a8))
        goto label_4390cd;

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x148]} */
⋯    long double f0 = *(flagP + 0x13c);
    /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} f- f0 */ - f0;
    bool c0 = /* bool c0 = unimplemented  {fcomp fp0, dword [flagP+0x13c]} f< f0 */ < f0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x13c]}, f0) */, f0);
    bool c3 = /* bool c3 = unimplemented  {fcomp fp0, dword [flagP+0x13c]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} */

    if (!(*(&((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (idx & 7) << 0xb) + 1)
        & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x148]} */
⋯        long double f2_1 = *(flagP + 0x13c);
        /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} f- f2_1 */ - f2_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp fp0, dword [flagP+0x13c]} f< f2_1 */ < f2_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x13c]}, f2_1) */, f2_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [flagP+0x13c]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x148]} */
⋯            long double f5_1 = *(flagP + 0x13c);
            /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} f- f5_1 */ - f5_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp fp0, dword [flagP+0x13c]} f< f5_1 */ < f5_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x13c]}, f5_1) */, f5_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp fp0, dword [flagP+0x13c]} f== f5_1 */ == f5_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} */

            if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x12c]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫                /* unimplemented  {fsubr fp0, dword [flagP+0x148]} */
🚫🚫                *(flagP + 0x148) = /* *(flagP i+ 0x148) =
                    unimplemented  {fst dword [flagP+0x148], fp0} */;
⋯                long double f11_1 = *(flagP + 0x13c);
                /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} f- f11_1 */ - f11_1;
                bool c0_4 = /* bool c0_4 =
                    unimplemented  {fcomp fp0, dword [flagP+0x13c]} f< f11_1 */ < f11_1;
                bool c2_4 = FCMP_UO(/* bool c2_4 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x13c]}, f11_1) */,
                    f11_1);
                bool c3_4 = /* bool c3_4 =
                    unimplemented  {fcomp fp0, dword [flagP+0x13c]} f== f11_1 */ == f11_1;
                /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} */

                if (*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | (idx & 7) << 0xb) + 1) & 1)
                {
                    entity_val = *(flagP + 0x13c);
                    *(flagP + 0x148) = entity_val;
                }
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x12c]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x148]} */
🚫🚫            *(flagP + 0x148) =
⋯            long double f6_1 = *(flagP + 0x13c);
            /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} f- f6_1 */ - f6_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcomp fp0, dword [flagP+0x13c]} f< f6_1 */ < f6_1;
            bool c2_2 = FCMP_UO(/* bool c2_2 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x13c]}, f6_1) */, f6_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcomp fp0, dword [flagP+0x13c]} f== f6_1 */ == f6_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x13c]} */

            if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (idx & 7) << 0xb) + 1) & 0x41))
                *(flagP + 0x148) = *(flagP + 0x13c);
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x14c]} */
⋯    long double f1 = *(flagP + 0x140);
    /* unimplemented  {fcomp fp0, dword [flagP+0x140]} f- f1 */ - f1;
    bool c0_5 = /* bool c0_5 = unimplemented  {fcomp fp0, dword [flagP+0x140]} f< f1 */ < f1;
    bool c2_5 = FCMP_UO(/* bool c2_5 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x140]}, f1) */, f1);
    bool c3_5 = /* bool c3_5 = unimplemented  {fcomp fp0, dword [flagP+0x140]} f== f1 */ == f1;
    /* unimplemented  {fcomp fp0, dword [flagP+0x140]} */

    if (!(*(
        &((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (idx & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x14c]} */
⋯        long double f4_1 = *(flagP + 0x140);
        /* unimplemented  {fcomp fp0, dword [flagP+0x140]} f- f4_1 */ - f4_1;
        bool c0_6 = /* bool c0_6 =
            unimplemented  {fcomp fp0, dword [flagP+0x140]} f< f4_1 */ < f4_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x140]}, f4_1) */, f4_1);
        bool c3_6 = /* bool c3_6 =
            unimplemented  {fcomp fp0, dword [flagP+0x140]} f== f4_1 */ == f4_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x140]} */

        if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x14c]} */
⋯            long double f9_1 = *(flagP + 0x140);
            /* unimplemented  {fcomp fp0, dword [flagP+0x140]} f- f9_1 */ - f9_1;
            bool c0_8 = /* bool c0_8 =
                unimplemented  {fcomp fp0, dword [flagP+0x140]} f< f9_1 */ < f9_1;
            bool c2_8 = FCMP_UO(/* bool c2_8 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x140]}, f9_1) */, f9_1);
            bool c3_8 = /* bool c3_8 =
                unimplemented  {fcomp fp0, dword [flagP+0x140]} f== f9_1 */ == f9_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x140]} */

            if (!(*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x130]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫                /* unimplemented  {fsubr fp0, dword [flagP+0x14c]} */
🚫🚫                *(flagP + 0x14c) = /* *(flagP i+ 0x14c) =
                    unimplemented  {fst dword [flagP+0x14c], fp0} */;
⋯                long double f16_1 = *(flagP + 0x140);
                /* unimplemented  {fcomp fp0, dword [flagP+0x140]} f- f16_1 */ - f16_1;
                bool c0_9 = /* bool c0_9 =
                    unimplemented  {fcomp fp0, dword [flagP+0x140]} f< f16_1 */ < f16_1;
                bool c2_9 = FCMP_UO(/* bool c2_9 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x140]}, f16_1) */,
                    f16_1);
                bool c3_9 = /* bool c3_9 =
                    unimplemented  {fcomp fp0, dword [flagP+0x140]} f== f16_1 */ == f16_1;
                /* unimplemented  {fcomp fp0, dword [flagP+0x140]} */

                if (*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
                        | (idx & 7) << 0xb) + 1) & 1)
                    *(flagP + 0x14c) = *(flagP + 0x140);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x130]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x14c]} */
🚫🚫            *(flagP + 0x14c) =
⋯            long double f10_1 = *(flagP + 0x140);
            /* unimplemented  {fcomp fp0, dword [flagP+0x140]} f- f10_1 */ - f10_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp fp0, dword [flagP+0x140]} f< f10_1 */ < f10_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x140]}, f10_1) */,
                f10_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp fp0, dword [flagP+0x140]} f== f10_1 */ == f10_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x140]} */

            if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                    | (idx & 7) << 0xb) + 1) & 0x41))
                *(flagP + 0x14c) = *(flagP + 0x140);
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x150]} */
⋯    long double f3 = *(flagP + 0x144);
    /* unimplemented  {fcomp fp0, dword [flagP+0x144]} f- f3 */ - f3;
    bool c0_10 = /* bool c0_10 = unimplemented  {fcomp fp0, dword [flagP+0x144]} f< f3 */ < f3;
    bool c2_10 = FCMP_UO(/* bool c2_10 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x144]}, f3) */, f3);
    bool c3_10 = /* bool c3_10 =
        unimplemented  {fcomp fp0, dword [flagP+0x144]} f== f3 */ == f3;
    /* unimplemented  {fcomp fp0, dword [flagP+0x144]} */

    if (!(*(
        &((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe | (idx & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x150]} */
⋯        long double f8_1 = *(flagP + 0x144);
        /* unimplemented  {fcomp fp0, dword [flagP+0x144]} f- f8_1 */ - f8_1;
        bool c0_11 = /* bool c0_11 =
            unimplemented  {fcomp fp0, dword [flagP+0x144]} f< f8_1 */ < f8_1;
        bool c2_11 = FCMP_UO(/* bool c2_11 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x144]}, f8_1) */, f8_1);
        bool c3_11 = /* bool c3_11 =
            unimplemented  {fcomp fp0, dword [flagP+0x144]} f== f8_1 */ == f8_1;
        /* unimplemented  {fcomp fp0, dword [flagP+0x144]} */

        if (!(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x150]} */
⋯            long double f14_1 = *(flagP + 0x144);
            /* unimplemented  {fcomp fp0, dword [flagP+0x144]} f- f14_1 */ - f14_1;
            bool c0_13 = /* bool c0_13 =
                unimplemented  {fcomp fp0, dword [flagP+0x144]} f< f14_1 */ < f14_1;
            bool c2_13 = FCMP_UO(/* bool c2_13 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x144]}, f14_1) */,
                f14_1);
            bool c3_13 = /* bool c3_13 =
                unimplemented  {fcomp fp0, dword [flagP+0x144]} f== f14_1 */ == f14_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x144]} */

            if (!(*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [flagP+0x134]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫                /* unimplemented  {fsubr fp0, dword [flagP+0x150]} */
🚫🚫                *(flagP + 0x150) = /* *(flagP i+ 0x150) =
                    unimplemented  {fst dword [flagP+0x150], fp0} */;
⋯                long double f19_1 = *(flagP + 0x144);
                /* unimplemented  {fcomp fp0, dword [flagP+0x144]} f- f19_1 */ - f19_1;
                bool c0_14 = /* bool c0_14 =
                    unimplemented  {fcomp fp0, dword [flagP+0x144]} f< f19_1 */ < f19_1;
                bool c2_14 = FCMP_UO(/* bool c2_14 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x144]}, f19_1) */,
                    f19_1);
                bool c3_14 = /* bool c3_14 =
                    unimplemented  {fcomp fp0, dword [flagP+0x144]} f== f19_1 */ == f19_1;
                /* unimplemented  {fcomp fp0, dword [flagP+0x144]} */

                if (*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                        | (idx & 7) << 0xb) + 1) & 1)
                    *(flagP + 0x150) = *(flagP + 0x144);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x134]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫            /* unimplemented  {fadd dword [flagP+0x150]} */
🚫🚫            *(flagP + 0x150) =
⋯            long double f15_1 = *(flagP + 0x144);
            /* unimplemented  {fcomp fp0, dword [flagP+0x144]} f- f15_1 */ - f15_1;
            bool c0_12 = /* bool c0_12 =
                unimplemented  {fcomp fp0, dword [flagP+0x144]} f< f15_1 */ < f15_1;
            bool c2_12 = FCMP_UO(/* bool c2_12 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x144]}, f15_1) */,
                f15_1);
            bool c3_12 = /* bool c3_12 =
                unimplemented  {fcomp fp0, dword [flagP+0x144]} f== f15_1 */ == f15_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x144]} */

            if (!(*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 0x41))
            {
                entity_val = *(flagP + 0x144);
                *(flagP + 0x150) = entity_val;
            }
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x148]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫    /* unimplemented  {fadd dword [flagP+0x154]} */
🚫🚫    param_2 = /* param_2 = unimplemented  {fst dword [stack_ptr+0x68], fp0} */;
🚫🚫🚫    *(flagP + 0x154) =
    /* unimplemented  {fstp dword [flagP+0x154], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x14c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫    /* unimplemented  {fadd dword [flagP+0x158]} */
🚫🚫    *(flagP + 0x158) =
🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x150]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_533678]} */
🚫🚫    /* unimplemented  {fadd dword [flagP+0x15c]} */
🚫🚫    char item_58 = /* char item_58 = (unimplemented  {fst dword [stack_ptr+0xc], fp0}).b */;
🚫🚫🚫    *(flagP + 0x15c) =
    /* unimplemented  {fstp dword [flagP+0x15c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x68]} */
⋯    long double f7 = 360.0f;
    /* unimplemented  {fcomp fp0, dword [&g_533818]} f- f7 */ - f7;
    bool c0_15 = /* bool c0_15 =
        unimplemented  {fcomp fp0, dword [&g_533818]} f< f7 */ < f7;
    bool c2_15 = FCMP_UO(/* bool c2_15 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533818]}, f7) */, f7);
    bool c3_15 = /* bool c3_15 =
        unimplemented  {fcomp fp0, dword [&g_533818]} f== f7 */ == f7;
    /* unimplemented  {fcomp fp0, dword [&g_533818]} */
    int16_t top_28 = idx - 1;

    if (!(*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
        | (top_28 & 7) << 0xb) + 1) & 1))
    {
        bool c0_16;
        bool c2_16;
        bool c3_16;

        do
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x154]} */
🚫🚫            /* unimplemented  {fsub fp0, dword [&g_533818]} */
🚫🚫            *(flagP + 0x154) =
⋯            long double f13_1 = 360.0f;
            /* unimplemented  {fcomp fp0, dword [&g_533818]} f- f13_1 */ - f13_1;
            c0_16 = /* c0_16 =
                unimplemented  {fcomp fp0, dword [&g_533818]} f< f13_1 */ < f13_1;
            c2_16 = FCMP_UO(/* c2_16 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533818]}, f13_1) */,
                f13_1);
            c3_16 = /* c3_16 =
                unimplemented  {fcomp fp0, dword [&g_533818]} f== f13_1 */ == f13_1;
            /* unimplemented  {fcomp fp0, dword [&g_533818]} */
        } while (!(*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
            | (top_28 & 7) << 0xb) + 1) & 1));
    }

⋯    long double f12 = 360.0f;
    /* unimplemented  {fcomp fp0, dword [&g_533818]} f- f12 */ - f12;
    bool c0_17 = /* bool c0_17 =
        unimplemented  {fcomp fp0, dword [&g_533818]} f< f12 */ < f12;
    bool c2_17 = FCMP_UO(/* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533818]}, f12) */, f12);
    bool c3_17 = /* bool c3_17 =
        unimplemented  {fcomp fp0, dword [&g_533818]} f== f12 */ == f12;
    /* unimplemented  {fcomp fp0, dword [&g_533818]} */
    int16_t top_31 = top_28 + 1;

    if (!(*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
        | (top_31 & 7) << 0xb) + 1) & 1))
    {
        bool c0_18;
        bool c2_18;
        bool c3_18;

        do
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x158]} */
🚫🚫            /* unimplemented  {fsub fp0, dword [&g_533818]} */
🚫🚫            *(flagP + 0x158) =
⋯            long double f18_1 = 360.0f;
            /* unimplemented  {fcomp fp0, dword [&g_533818]} f- f18_1 */ - f18_1;
            c0_18 = /* c0_18 =
                unimplemented  {fcomp fp0, dword [&g_533818]} f< f18_1 */ < f18_1;
            c2_18 = FCMP_UO(/* c2_18 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533818]}, f18_1) */,
                f18_1);
            c3_18 = /* c3_18 =
                unimplemented  {fcomp fp0, dword [&g_533818]} f== f18_1 */ == f18_1;
            /* unimplemented  {fcomp fp0, dword [&g_533818]} */
        } while (!(*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa | (c3_18 ? 1 : 0) << 0xe
            | (top_31 & 7) << 0xb) + 1) & 1));
    }

🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0xc]} */
⋯    long double f17 = 360.0f;
    /* unimplemented  {fcomp fp0, dword [&g_533818]} f- f17 */ - f17;
    bool c0_19 = /* bool c0_19 =
        unimplemented  {fcomp fp0, dword [&g_533818]} f< f17 */ < f17;
    bool c2_19 = FCMP_UO(/* bool c2_19 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533818]}, f17) */, f17);
    bool c3_19 = /* bool c3_19 =
        unimplemented  {fcomp fp0, dword [&g_533818]} f== f17 */ == f17;
    /* unimplemented  {fcomp fp0, dword [&g_533818]} */

    if (!(*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
        | (top_31 & 7) << 0xb) + 1) & 1))
    {
        bool c0_20;
        bool c2_20;
        bool c3_20;

        do
        {
🚫🚫            /* unimplemented  {fld fp0, dword [flagP+0x15c]} */
🚫🚫            /* unimplemented  {fsub fp0, dword [&g_533818]} */
🚫🚫            *(flagP + 0x15c) =
⋯            long double f20_1 = 360.0f;
            /* unimplemented  {fcomp fp0, dword [&g_533818]} f- f20_1 */ - f20_1;
            c0_20 = /* c0_20 =
                unimplemented  {fcomp fp0, dword [&g_533818]} f< f20_1 */ < f20_1;
            c2_20 = FCMP_UO(/* c2_20 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [&g_533818]}, f20_1) */,
                f20_1);
            c3_20 = /* c3_20 =
                unimplemented  {fcomp fp0, dword [&g_533818]} f== f20_1 */ == f20_1;
            /* unimplemented  {fcomp fp0, dword [&g_533818]} */
        } while (!(*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
            | (top_31 & 7) << 0xb) + 1) & 1));
    }

🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x15c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
    int32_t item_6c_2 = entity_val;
🚫🚫🚫    float item_6c_3 = /* float item_6c_3 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x158]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
    int32_t item_70 = entity_val;
🚫🚫🚫    float item_70_1 = /* float item_70_1 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [flagP+0x154]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [&g_53367c]} */
    int32_t item_74 = entity_val;
🚫🚫🚫    float item_74_1 = /* float item_74_1 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    float item_50;
    Sys_ReadFileBlock_12(&item_50, item_74_1, item_70_1, item_6c_3);
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x164]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x40]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x168]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x160]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_28 = /* float item_28 = unimplemented  {fstp dword [stack_ptr+0x40], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x40], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x164]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x168]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x160]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_24 = /* float item_24 = unimplemented  {fstp dword [stack_ptr+0x44], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x44], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x164]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x168]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x160]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_20 = /* float item_20 = unimplemented  {fstp dword [stack_ptr+0x48], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x48], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x30]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x174]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x16c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x170]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_1c = /* float item_1c = unimplemented  {fstp dword [stack_ptr+0x4c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x4c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x174]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x16c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x170]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_18 = /* float item_18 = unimplemented  {fstp dword [stack_ptr+0x50], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x50], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x174]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x16c]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x170]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_14 = /* float item_14 = unimplemented  {fstp dword [stack_ptr+0x54], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x54], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x24]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x17c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x30]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x180]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x178]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
    int32_t item_2c;
    int32_t item_4 = *(flagP + 0x184) + item_2c + 1;
    void* result = *(flagP + 0x1a4);
🚫🚫🚫    float item_10 = /* float item_10 = unimplemented  {fstp dword [stack_ptr+0x58], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x58], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x17c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x34]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x180]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x1c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x178]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_c = /* float item_c = unimplemented  {fstp dword [stack_ptr+0x5c], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x5c], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x2c]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x17c]} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x180]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x20]} */
🚫🚫    /* unimplemented  {fmul fp0, dword [flagP+0x178]} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    float item_8 = /* float item_8 = unimplemented  {fstp dword [stack_ptr+0x60], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr+0x60], fp0} */
    memcpy(flagP + 0x70, &item_28, 0x28);

    if (result)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x150]} */
🚫🚫        /* unimplemented  {fdiv fp0, dword [flagP+0x128]} */
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x148]} */
🚫🚫        /* unimplemented  {fdiv fp0, dword [flagP+0x120]} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x14c]} */
🚫🚫        /* unimplemented  {fdiv fp0, dword [flagP+0x124]} */
🚫🚫🚫        /* unimplemented  {faddp fp1, fp0} */
        /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫        *(result + 4) =
        /* unimplemented  {fstp dword [data_val+0x4], fp0} */
        void* flagP1 = *(flagP + 0x1a4);
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x4]} */
⋯        long double f21_1 = 0.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} f- f21_1 */ - f21_1;
        bool c0_21 = /* bool c0_21 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f< f21_1 */ < f21_1;
        bool c2_21 = FCMP_UO(/* bool c2_21 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333ec]}, f21_1) */,
            f21_1);
        bool c3_21 = /* bool c3_21 =
            unimplemented  {fcomp fp0, dword [&g_5333ec]} f== f21_1 */ == f21_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333ec]} */
        int16_t top_66;
        result = (c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
            | ((top_66 + 2) & 7) << 0xb;

        if (*(&result + 1) & 1)
        {
            *(flagP1 + 4) = 0;
            return result;
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x4]} */
⋯        long double f22_1 = 1.0f;
        /* unimplemented  {fcomp fp0, dword [&g_5333e0]} f- f22_1 */ - f22_1;
        bool c0_22 = /* bool c0_22 =
            unimplemented  {fcomp fp0, dword [&g_5333e0]} f< f22_1 */ < f22_1;
        bool c2_22 = FCMP_UO(/* bool c2_22 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [&g_5333e0]}, f22_1) */,
            f22_1);
        bool c3_22 = /* bool c3_22 =
            unimplemented  {fcomp fp0, dword [&g_5333e0]} f== f22_1 */ == f22_1;
        /* unimplemented  {fcomp fp0, dword [&g_5333e0]} */
        result = (c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
            | ((top_66 + 2) & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
            *(flagP1 + 4) = 0x3f800000;
    }

    return result;
}
