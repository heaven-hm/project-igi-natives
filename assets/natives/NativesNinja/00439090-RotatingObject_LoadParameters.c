#include "00439090-RotatingObject_LoadParameters.h"
/* 0x00439090 RotatingObject_LoadParameters full linked: callers=0 callees=4 */
void* RotatingObject_LoadParameters(int80_t a1 @ st0, float a2)

{
    float ebp = a2;
    char eax;
    int32_t ecx;
    eax = sub_4f16c0(ebp + 0x1ac);
    int16_t top;

    if (eax)
    {
        ecx = sub_4f16e0(ebp + 0x1ac, ebp);
        top = 1;
        int16_t eax_2;
        eax_2 = a1;

        if (!eax_2 || *(ebp + 0x1a8))
        {
        label_4390cd:
            *(ebp + 0x13c) = 0;
            *(ebp + 0x140) = 0;
            *(ebp + 0x144) = 0;
        }
    }
    else if (*(ebp + 0x1a8))
        goto label_4390cd;

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x148]} */
⋯    long double temp0 = *(ebp + 0x13c);
    /* unimplemented  {fcomp st0, dword [ebp+0x13c]} f- temp0 */ - temp0;
    bool c0 = /* bool c0 = unimplemented  {fcomp st0, dword [ebp+0x13c]} f< temp0 */ < temp0;
    bool c2 = FCMP_UO(/* bool c2 =
        is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x13c]}, temp0) */, temp0);
    bool c3 = /* bool c3 = unimplemented  {fcomp st0, dword [ebp+0x13c]} f== temp0 */ == temp0;
    /* unimplemented  {fcomp st0, dword [ebp+0x13c]} */

    if (!(*(&((c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top & 7) << 0xb) + 1)
        & 0x40))
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x148]} */
⋯        long double temp2_1 = *(ebp + 0x13c);
        /* unimplemented  {fcomp st0, dword [ebp+0x13c]} f- temp2_1 */ - temp2_1;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcomp st0, dword [ebp+0x13c]} f< temp2_1 */ < temp2_1;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x13c]}, temp2_1) */, temp2_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, dword [ebp+0x13c]} f== temp2_1 */ == temp2_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x13c]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x148]} */
⋯            long double temp5_1 = *(ebp + 0x13c);
            /* unimplemented  {fcomp st0, dword [ebp+0x13c]} f- temp5_1 */ - temp5_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp st0, dword [ebp+0x13c]} f< temp5_1 */ < temp5_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x13c]}, temp5_1) */, temp5_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp st0, dword [ebp+0x13c]} f== temp5_1 */ == temp5_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x13c]} */

            if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x12c]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫                /* unimplemented  {fsubr st0, dword [ebp+0x148]} */
🚫🚫                *(ebp + 0x148) = /* *(ebp i+ 0x148) =
                    unimplemented  {fst dword [ebp+0x148], st0} */;
⋯                long double temp11_1 = *(ebp + 0x13c);
                /* unimplemented  {fcomp st0, dword [ebp+0x13c]} f- temp11_1 */ - temp11_1;
                bool c0_4 = /* bool c0_4 =
                    unimplemented  {fcomp st0, dword [ebp+0x13c]} f< temp11_1 */ < temp11_1;
                bool c2_4 = FCMP_UO(/* bool c2_4 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x13c]}, temp11_1) */,
                    temp11_1);
                bool c3_4 = /* bool c3_4 =
                    unimplemented  {fcomp st0, dword [ebp+0x13c]} f== temp11_1 */ == temp11_1;
                /* unimplemented  {fcomp st0, dword [ebp+0x13c]} */

                if (*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb) + 1) & 1)
                {
                    ecx = *(ebp + 0x13c);
                    *(ebp + 0x148) = ecx;
                }
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x12c]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫            /* unimplemented  {fadd dword [ebp+0x148]} */
🚫🚫            *(ebp + 0x148) = /* *(ebp i+ 0x148) = unimplemented  {fst dword [ebp+0x148], st0} */;
⋯            long double temp6_1 = *(ebp + 0x13c);
            /* unimplemented  {fcomp st0, dword [ebp+0x13c]} f- temp6_1 */ - temp6_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcomp st0, dword [ebp+0x13c]} f< temp6_1 */ < temp6_1;
            bool c2_2 = FCMP_UO(/* bool c2_2 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x13c]}, temp6_1) */, temp6_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcomp st0, dword [ebp+0x13c]} f== temp6_1 */ == temp6_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x13c]} */

            if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb) + 1) & 0x41))
                *(ebp + 0x148) = *(ebp + 0x13c);
        }
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x14c]} */
⋯    long double temp1 = *(ebp + 0x140);
    /* unimplemented  {fcomp st0, dword [ebp+0x140]} f- temp1 */ - temp1;
    bool c0_5 = /* bool c0_5 = unimplemented  {fcomp st0, dword [ebp+0x140]} f< temp1 */ < temp1;
    bool c2_5 = FCMP_UO(/* bool c2_5 =
        is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x140]}, temp1) */, temp1);
    bool c3_5 = /* bool c3_5 = unimplemented  {fcomp st0, dword [ebp+0x140]} f== temp1 */ == temp1;
    /* unimplemented  {fcomp st0, dword [ebp+0x140]} */

    if (!(*(
        &((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe | (top & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x14c]} */
⋯        long double temp4_1 = *(ebp + 0x140);
        /* unimplemented  {fcomp st0, dword [ebp+0x140]} f- temp4_1 */ - temp4_1;
        bool c0_6 = /* bool c0_6 =
            unimplemented  {fcomp st0, dword [ebp+0x140]} f< temp4_1 */ < temp4_1;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x140]}, temp4_1) */, temp4_1);
        bool c3_6 = /* bool c3_6 =
            unimplemented  {fcomp st0, dword [ebp+0x140]} f== temp4_1 */ == temp4_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x140]} */

        if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x14c]} */
⋯            long double temp9_1 = *(ebp + 0x140);
            /* unimplemented  {fcomp st0, dword [ebp+0x140]} f- temp9_1 */ - temp9_1;
            bool c0_8 = /* bool c0_8 =
                unimplemented  {fcomp st0, dword [ebp+0x140]} f< temp9_1 */ < temp9_1;
            bool c2_8 = FCMP_UO(/* bool c2_8 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x140]}, temp9_1) */, temp9_1);
            bool c3_8 = /* bool c3_8 =
                unimplemented  {fcomp st0, dword [ebp+0x140]} f== temp9_1 */ == temp9_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x140]} */

            if (!(*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x130]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫                /* unimplemented  {fsubr st0, dword [ebp+0x14c]} */
🚫🚫                *(ebp + 0x14c) = /* *(ebp i+ 0x14c) =
                    unimplemented  {fst dword [ebp+0x14c], st0} */;
⋯                long double temp16_1 = *(ebp + 0x140);
                /* unimplemented  {fcomp st0, dword [ebp+0x140]} f- temp16_1 */ - temp16_1;
                bool c0_9 = /* bool c0_9 =
                    unimplemented  {fcomp st0, dword [ebp+0x140]} f< temp16_1 */ < temp16_1;
                bool c2_9 = FCMP_UO(/* bool c2_9 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x140]}, temp16_1) */,
                    temp16_1);
                bool c3_9 = /* bool c3_9 =
                    unimplemented  {fcomp st0, dword [ebp+0x140]} f== temp16_1 */ == temp16_1;
                /* unimplemented  {fcomp st0, dword [ebp+0x140]} */

                if (*(&((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb) + 1) & 1)
                    *(ebp + 0x14c) = *(ebp + 0x140);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x130]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫            /* unimplemented  {fadd dword [ebp+0x14c]} */
🚫🚫            *(ebp + 0x14c) = /* *(ebp i+ 0x14c) = unimplemented  {fst dword [ebp+0x14c], st0} */;
⋯            long double temp10_1 = *(ebp + 0x140);
            /* unimplemented  {fcomp st0, dword [ebp+0x140]} f- temp10_1 */ - temp10_1;
            bool c0_7 = /* bool c0_7 =
                unimplemented  {fcomp st0, dword [ebp+0x140]} f< temp10_1 */ < temp10_1;
            bool c2_7 = FCMP_UO(/* bool c2_7 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x140]}, temp10_1) */,
                temp10_1);
            bool c3_7 = /* bool c3_7 =
                unimplemented  {fcomp st0, dword [ebp+0x140]} f== temp10_1 */ == temp10_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x140]} */

            if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb) + 1) & 0x41))
                *(ebp + 0x14c) = *(ebp + 0x140);
        }
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x150]} */
⋯    long double temp3 = *(ebp + 0x144);
    /* unimplemented  {fcomp st0, dword [ebp+0x144]} f- temp3 */ - temp3;
    bool c0_10 = /* bool c0_10 = unimplemented  {fcomp st0, dword [ebp+0x144]} f< temp3 */ < temp3;
    bool c2_10 = FCMP_UO(/* bool c2_10 =
        is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x144]}, temp3) */, temp3);
    bool c3_10 = /* bool c3_10 =
        unimplemented  {fcomp st0, dword [ebp+0x144]} f== temp3 */ == temp3;
    /* unimplemented  {fcomp st0, dword [ebp+0x144]} */

    if (!(*(
        &((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe | (top & 7) << 0xb)
        + 1) & 0x40))
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x150]} */
⋯        long double temp8_1 = *(ebp + 0x144);
        /* unimplemented  {fcomp st0, dword [ebp+0x144]} f- temp8_1 */ - temp8_1;
        bool c0_11 = /* bool c0_11 =
            unimplemented  {fcomp st0, dword [ebp+0x144]} f< temp8_1 */ < temp8_1;
        bool c2_11 = FCMP_UO(/* bool c2_11 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x144]}, temp8_1) */, temp8_1);
        bool c3_11 = /* bool c3_11 =
            unimplemented  {fcomp st0, dword [ebp+0x144]} f== temp8_1 */ == temp8_1;
        /* unimplemented  {fcomp st0, dword [ebp+0x144]} */

        if (!(*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x150]} */
⋯            long double temp14_1 = *(ebp + 0x144);
            /* unimplemented  {fcomp st0, dword [ebp+0x144]} f- temp14_1 */ - temp14_1;
            bool c0_13 = /* bool c0_13 =
                unimplemented  {fcomp st0, dword [ebp+0x144]} f< temp14_1 */ < temp14_1;
            bool c2_13 = FCMP_UO(/* bool c2_13 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x144]}, temp14_1) */,
                temp14_1);
            bool c3_13 = /* bool c3_13 =
                unimplemented  {fcomp st0, dword [ebp+0x144]} f== temp14_1 */ == temp14_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x144]} */

            if (!(*(&((c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 0x41))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ebp+0x134]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫                /* unimplemented  {fsubr st0, dword [ebp+0x150]} */
🚫🚫                *(ebp + 0x150) = /* *(ebp i+ 0x150) =
                    unimplemented  {fst dword [ebp+0x150], st0} */;
⋯                long double temp19_1 = *(ebp + 0x144);
                /* unimplemented  {fcomp st0, dword [ebp+0x144]} f- temp19_1 */ - temp19_1;
                bool c0_14 = /* bool c0_14 =
                    unimplemented  {fcomp st0, dword [ebp+0x144]} f< temp19_1 */ < temp19_1;
                bool c2_14 = FCMP_UO(/* bool c2_14 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x144]}, temp19_1) */,
                    temp19_1);
                bool c3_14 = /* bool c3_14 =
                    unimplemented  {fcomp st0, dword [ebp+0x144]} f== temp19_1 */ == temp19_1;
                /* unimplemented  {fcomp st0, dword [ebp+0x144]} */

                if (*(&((c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb) + 1) & 1)
                    *(ebp + 0x150) = *(ebp + 0x144);
            }
        }
        else
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x134]} */
🚫🚫            /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫            /* unimplemented  {fadd dword [ebp+0x150]} */
🚫🚫            *(ebp + 0x150) = /* *(ebp i+ 0x150) = unimplemented  {fst dword [ebp+0x150], st0} */;
⋯            long double temp15_1 = *(ebp + 0x144);
            /* unimplemented  {fcomp st0, dword [ebp+0x144]} f- temp15_1 */ - temp15_1;
            bool c0_12 = /* bool c0_12 =
                unimplemented  {fcomp st0, dword [ebp+0x144]} f< temp15_1 */ < temp15_1;
            bool c2_12 = FCMP_UO(/* bool c2_12 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x144]}, temp15_1) */,
                temp15_1);
            bool c3_12 = /* bool c3_12 =
                unimplemented  {fcomp st0, dword [ebp+0x144]} f== temp15_1 */ == temp15_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x144]} */

            if (!(*(&((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 0x41))
            {
                ecx = *(ebp + 0x144);
                *(ebp + 0x150) = ecx;
            }
        }
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x148]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫    /* unimplemented  {fadd dword [ebp+0x154]} */
🚫🚫    a2 = /* a2 = unimplemented  {fst dword [esp+0x68], st0} */;
🚫🚫🚫    *(ebp + 0x154) = /* *(ebp i+ 0x154) = unimplemented  {fstp dword [ebp+0x154], st0} */;
    /* unimplemented  {fstp dword [ebp+0x154], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x14c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫    /* unimplemented  {fadd dword [ebp+0x158]} */
🚫🚫    *(ebp + 0x158) = /* *(ebp i+ 0x158) = unimplemented  {fst dword [ebp+0x158], st0} */;
🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x150]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_533678]} */
🚫🚫    /* unimplemented  {fadd dword [ebp+0x15c]} */
🚫🚫    char var_58 = /* char var_58 = (unimplemented  {fst dword [esp+0xc], st0}).b */;
🚫🚫🚫    *(ebp + 0x15c) = /* *(ebp i+ 0x15c) = unimplemented  {fstp dword [ebp+0x15c], st0} */;
    /* unimplemented  {fstp dword [ebp+0x15c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x68]} */
⋯    long double temp7 = 360f;
    /* unimplemented  {fcomp st0, dword [&g_533818]} f- temp7 */ - temp7;
    bool c0_15 = /* bool c0_15 =
        unimplemented  {fcomp st0, dword [&g_533818]} f< temp7 */ < temp7;
    bool c2_15 = FCMP_UO(/* bool c2_15 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_533818]}, temp7) */, temp7);
    bool c3_15 = /* bool c3_15 =
        unimplemented  {fcomp st0, dword [&g_533818]} f== temp7 */ == temp7;
    /* unimplemented  {fcomp st0, dword [&g_533818]} */
    int16_t top_28 = top - 1;

    if (!(*(&((c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
        | (top_28 & 7) << 0xb) + 1) & 1))
    {
        bool c0_16;
        bool c2_16;
        bool c3_16;

        do
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x154]} */
🚫🚫            /* unimplemented  {fsub st0, dword [&g_533818]} */
🚫🚫            *(ebp + 0x154) = /* *(ebp i+ 0x154) = unimplemented  {fst dword [ebp+0x154], st0} */;
⋯            long double temp13_1 = 360f;
            /* unimplemented  {fcomp st0, dword [&g_533818]} f- temp13_1 */ - temp13_1;
            c0_16 = /* c0_16 =
                unimplemented  {fcomp st0, dword [&g_533818]} f< temp13_1 */ < temp13_1;
            c2_16 = FCMP_UO(/* c2_16 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_533818]}, temp13_1) */,
                temp13_1);
            c3_16 = /* c3_16 =
                unimplemented  {fcomp st0, dword [&g_533818]} f== temp13_1 */ == temp13_1;
            /* unimplemented  {fcomp st0, dword [&g_533818]} */
        } while (!(*(&((c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe
            | (top_28 & 7) << 0xb) + 1) & 1));
    }

⋯    long double temp12 = 360f;
    /* unimplemented  {fcomp st0, dword [&g_533818]} f- temp12 */ - temp12;
    bool c0_17 = /* bool c0_17 =
        unimplemented  {fcomp st0, dword [&g_533818]} f< temp12 */ < temp12;
    bool c2_17 = FCMP_UO(/* bool c2_17 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_533818]}, temp12) */, temp12);
    bool c3_17 = /* bool c3_17 =
        unimplemented  {fcomp st0, dword [&g_533818]} f== temp12 */ == temp12;
    /* unimplemented  {fcomp st0, dword [&g_533818]} */
    int16_t top_31 = top_28 + 1;

    if (!(*(&((c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
        | (top_31 & 7) << 0xb) + 1) & 1))
    {
        bool c0_18;
        bool c2_18;
        bool c3_18;

        do
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x158]} */
🚫🚫            /* unimplemented  {fsub st0, dword [&g_533818]} */
🚫🚫            *(ebp + 0x158) = /* *(ebp i+ 0x158) = unimplemented  {fst dword [ebp+0x158], st0} */;
⋯            long double temp18_1 = 360f;
            /* unimplemented  {fcomp st0, dword [&g_533818]} f- temp18_1 */ - temp18_1;
            c0_18 = /* c0_18 =
                unimplemented  {fcomp st0, dword [&g_533818]} f< temp18_1 */ < temp18_1;
            c2_18 = FCMP_UO(/* c2_18 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_533818]}, temp18_1) */,
                temp18_1);
            c3_18 = /* c3_18 =
                unimplemented  {fcomp st0, dword [&g_533818]} f== temp18_1 */ == temp18_1;
            /* unimplemented  {fcomp st0, dword [&g_533818]} */
        } while (!(*(&((c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa | (c3_18 ? 1 : 0) << 0xe
            | (top_31 & 7) << 0xb) + 1) & 1));
    }

🚫🚫    /* unimplemented  {fld st0, dword [esp+0xc]} */
⋯    long double temp17 = 360f;
    /* unimplemented  {fcomp st0, dword [&g_533818]} f- temp17 */ - temp17;
    bool c0_19 = /* bool c0_19 =
        unimplemented  {fcomp st0, dword [&g_533818]} f< temp17 */ < temp17;
    bool c2_19 = FCMP_UO(/* bool c2_19 =
        is_unordered.t(unimplemented  {fcomp st0, dword [&g_533818]}, temp17) */, temp17);
    bool c3_19 = /* bool c3_19 =
        unimplemented  {fcomp st0, dword [&g_533818]} f== temp17 */ == temp17;
    /* unimplemented  {fcomp st0, dword [&g_533818]} */

    if (!(*(&((c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
        | (top_31 & 7) << 0xb) + 1) & 1))
    {
        bool c0_20;
        bool c2_20;
        bool c3_20;

        do
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebp+0x15c]} */
🚫🚫            /* unimplemented  {fsub st0, dword [&g_533818]} */
🚫🚫            *(ebp + 0x15c) = /* *(ebp i+ 0x15c) = unimplemented  {fst dword [ebp+0x15c], st0} */;
⋯            long double temp20_1 = 360f;
            /* unimplemented  {fcomp st0, dword [&g_533818]} f- temp20_1 */ - temp20_1;
            c0_20 = /* c0_20 =
                unimplemented  {fcomp st0, dword [&g_533818]} f< temp20_1 */ < temp20_1;
            c2_20 = FCMP_UO(/* c2_20 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_533818]}, temp20_1) */,
                temp20_1);
            c3_20 = /* c3_20 =
                unimplemented  {fcomp st0, dword [&g_533818]} f== temp20_1 */ == temp20_1;
            /* unimplemented  {fcomp st0, dword [&g_533818]} */
        } while (!(*(&((c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe
            | (top_31 & 7) << 0xb) + 1) & 1));
    }

🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x15c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_53367c]} */
    int32_t var_6c_2 = ecx;
🚫🚫🚫    float var_6c_3 = /* float var_6c_3 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x158]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_53367c]} */
    int32_t var_70 = ecx;
🚫🚫🚫    float var_70_1 = /* float var_70_1 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [ebp+0x154]} */
🚫🚫    /* unimplemented  {fmul st0, dword [&g_53367c]} */
    int32_t var_74 = ecx;
🚫🚫🚫    float var_74_1 = /* float var_74_1 = unimplemented  {fstp dword [esp], st0} */;
    /* unimplemented  {fstp dword [esp], st0} */
    float var_50;
    sub_4b38e0(&var_50, var_74_1, var_70_1, var_6c_3);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x164]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x168]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x160]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_28 = /* float var_28 = unimplemented  {fstp dword [esp+0x40], st0} */;
    /* unimplemented  {fstp dword [esp+0x40], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x164]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x168]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x160]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_24 = /* float var_24 = unimplemented  {fstp dword [esp+0x44], st0} */;
    /* unimplemented  {fstp dword [esp+0x44], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x164]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x168]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x160]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_20 = /* float var_20 = unimplemented  {fstp dword [esp+0x48], st0} */;
    /* unimplemented  {fstp dword [esp+0x48], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x30]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x174]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x16c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x170]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_1c = /* float var_1c = unimplemented  {fstp dword [esp+0x4c], st0} */;
    /* unimplemented  {fstp dword [esp+0x4c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x174]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x16c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x170]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_18 = /* float var_18 = unimplemented  {fstp dword [esp+0x50], st0} */;
    /* unimplemented  {fstp dword [esp+0x50], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x174]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x16c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x170]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_14 = /* float var_14 = unimplemented  {fstp dword [esp+0x54], st0} */;
    /* unimplemented  {fstp dword [esp+0x54], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x17c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x30]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x180]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x178]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
    int32_t var_2c;
    int32_t var_4 = *(ebp + 0x184) + var_2c + 1;
    void* result = *(ebp + 0x1a4);
🚫🚫🚫    float var_10 = /* float var_10 = unimplemented  {fstp dword [esp+0x58], st0} */;
    /* unimplemented  {fstp dword [esp+0x58], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x17c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x180]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x1c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x178]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_c = /* float var_c = unimplemented  {fstp dword [esp+0x5c], st0} */;
    /* unimplemented  {fstp dword [esp+0x5c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x17c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x180]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x20]} */
🚫🚫    /* unimplemented  {fmul st0, dword [ebp+0x178]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_8 = /* float var_8 = unimplemented  {fstp dword [esp+0x60], st0} */;
    /* unimplemented  {fstp dword [esp+0x60], st0} */
    memcpy(ebp + 0x70, &var_28, 0x28);

    if (result)
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x150]} */
🚫🚫        /* unimplemented  {fdiv st0, dword [ebp+0x128]} */
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x148]} */
🚫🚫        /* unimplemented  {fdiv st0, dword [ebp+0x120]} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x14c]} */
🚫🚫        /* unimplemented  {fdiv st0, dword [ebp+0x124]} */
🚫🚫🚫        /* unimplemented  {faddp st1, st0} */
        /* unimplemented  {faddp st1, st0} */
🚫🚫🚫        *(result + 4) = /* *(result + 4) = unimplemented  {fstp dword [eax+0x4], st0} */;
        /* unimplemented  {fstp dword [eax+0x4], st0} */
        void* ebp_1 = *(ebp + 0x1a4);
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x4]} */
⋯        long double temp21_1 = 0f;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} f- temp21_1 */ - temp21_1;
        bool c0_21 = /* bool c0_21 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f< temp21_1 */ < temp21_1;
        bool c2_21 = FCMP_UO(/* bool c2_21 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333ec]}, temp21_1) */,
            temp21_1);
        bool c3_21 = /* bool c3_21 =
            unimplemented  {fcomp st0, dword [&g_5333ec]} f== temp21_1 */ == temp21_1;
        /* unimplemented  {fcomp st0, dword [&g_5333ec]} */
        int16_t top_66;
        result = (c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
            | ((top_66 + 2) & 7) << 0xb;

        if (*(&result + 1) & 1)
        {
            *(ebp_1 + 4) = 0;
            return result;
        }

🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x4]} */
⋯        long double temp22_1 = 1f;
        /* unimplemented  {fcomp st0, dword [&g_5333e0]} f- temp22_1 */ - temp22_1;
        bool c0_22 = /* bool c0_22 =
            unimplemented  {fcomp st0, dword [&g_5333e0]} f< temp22_1 */ < temp22_1;
        bool c2_22 = FCMP_UO(/* bool c2_22 =
            is_unordered.t(unimplemented  {fcomp st0, dword [&g_5333e0]}, temp22_1) */,
            temp22_1);
        bool c3_22 = /* bool c3_22 =
            unimplemented  {fcomp st0, dword [&g_5333e0]} f== temp22_1 */ == temp22_1;
        /* unimplemented  {fcomp st0, dword [&g_5333e0]} */
        result = (c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
            | ((top_66 + 2) & 7) << 0xb;

        if (!(*(&result + 1) & 0x41))
            *(ebp_1 + 4) = 0x3f800000;
    }

    return result;
}
