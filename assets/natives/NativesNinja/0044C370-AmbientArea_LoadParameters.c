#include "0044C370-AmbientArea_LoadParameters.h"
/* 0x0044c370 AmbientArea_LoadParameters full linked: callers=0 callees=17 */
int32_t sub_44c370(int80_t a1 @ st0, void* a2)

{
    int32_t ebx_1 = Level_LoadLevel_6() + 0x60;
    char var_29 = 0;
    char eax_1;
    int32_t ecx;
    eax_1 = sub_4f16c0(a2 + 0x1bc);
    int16_t top;

    if (eax_1)
    {
        ecx = sub_4f16e0(a2 + 0x1bc, a2);
        top = 1;
    }

    if (eax_1 && !a1)
        goto label_44c4cf;

🚫🚫    /* unimplemented  {fld st0, qword [ebx+0x28]} */
🚫🚫    /* unimplemented  {fsub st0, qword [esi+0x20]} */
🚫🚫    /* unimplemented  {fld st0, qword [ebx+0x30]} */
🚫🚫    /* unimplemented  {fsub st0, qword [esi+0x28]} */
🚫🚫    /* unimplemented  {fld st0, qword [ebx+0x38]} */
🚫🚫    /* unimplemented  {fsub st0, qword [esi+0x30]} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x68]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x5c]} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, st4} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    double var_20_1 = /* double var_20_1 = unimplemented  {fstp qword [esp+0x18], st0} */;
    /* unimplemented  {fstp qword [esp+0x18], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x6c]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x60]} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x54]} */
🚫🚫    /* unimplemented  {fmul st0, st4} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    double var_18_1 = /* double var_18_1 = unimplemented  {fstp qword [esp+0x20], st0} */;
    /* unimplemented  {fstp qword [esp+0x20], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x70]} */
🚫🚫    /* unimplemented  {fmul st0, st1} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x64]} */
🚫🚫    /* unimplemented  {fmul st0, st3} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esi+0x58]} */
🚫🚫    /* unimplemented  {fmul st0, st4} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    /* unimplemented  {fstp st3, st0} */
    /* unimplemented  {fstp st3, st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫🚫    /* unimplemented  {fstp st0, st0} */
    /* unimplemented  {fstp st0, st0} */
🚫🚫    /* unimplemented  {fld st0, qword [esi+0x38]} */
🚫🚫    /* unimplemented  {fmul st0, qword [&g_5338b0]} */
⋯    long double temp1_1 = var_20_1;
    /* unimplemented  {fcomp st0, qword [esp+0x18]} f- temp1_1 */ - temp1_1;
    bool c0_1 = /* bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x18]} f< temp1_1 */ < temp1_1;
    bool c2_1 = FCMP_UO(/* bool c2_1 =
        is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp1_1) */, temp1_1);
    bool c3_1 = /* bool c3_1 =
        unimplemented  {fcomp st0, qword [esp+0x18]} f== temp1_1 */ == temp1_1;
    /* unimplemented  {fcomp st0, qword [esp+0x18]} */
    int16_t top_25 = top - 1;
    int16_t top_33;

    if (!(*(
        &((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top_25 & 7) << 0xb)
        + 1) & 1))
    {
🚫🚫🚫    label_44c4cd:
        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
        top = top_25 + 1;
🚫🚫    label_44c4cf:
        /* unimplemented  {fld st0, qword [esi+0x78]} */
🚫🚫        /* unimplemented  {fsub st0, qword [&g_5338e0]} */
🚫🚫🚫🚫🚫        long double temp3_1 = 0.0;
        /* unimplemented  {fcom st0, qword [&g_5333b0]} f- temp3_1 */ - temp3_1;
        bool c0_9 = /* bool c0_9 =
            unimplemented  {fcom st0, qword [&g_5333b0]} f< temp3_1 */ < temp3_1;
        bool c2_9 = FCMP_UO(/* bool c2_9 =
            is_unordered.t(unimplemented  {fcom st0, qword [&g_5333b0]}, temp3_1) */, temp3_1);
        bool c3_9 = /* bool c3_9 =
            unimplemented  {fcom st0, qword [&g_5333b0]} f== temp3_1 */ == temp3_1;
🚫🚫        *(a2 + 0x78) = /* *(a2 + 0x78) = unimplemented  {fst qword [esi+0x78], st0} */;
        bool c1_1 = /* bool c1_1 = unknown  {fst qword [esi+0x78], st0} */;

        if (!(*(&((c0_9 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_9 ? 1 : 0) << 0xa
            | (c3_9 ? 1 : 0) << 0xe | ((top - 1) & 7) << 0xb) + 1) & 1))
        {
⋯            long double temp5_1 = 1.0;
            /* unimplemented  {fcomp st0, qword [&g_5333f8]} f- temp5_1 */ - temp5_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp st0, qword [&g_5333f8]} f< temp5_1 */ < temp5_1;
            bool c2_10 = FCMP_UO(/* bool c2_10 =
                is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333f8]}, temp5_1) */,
                temp5_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp st0, qword [&g_5333f8]} f== temp5_1 */ == temp5_1;
            /* unimplemented  {fcomp st0, qword [&g_5333f8]} */
            top_33 = top;

            if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                | (top_33 & 7) << 0xb) + 1) & 0x41))
            {
                *(a2 + 0x78) = 0;
                *(a2 + 0x7c) = 0x3ff00000;
            }
        }
        else
        {
            *(a2 + 0x78) = 0;
            *(a2 + 0x7c) = 0;
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
            top_33 = top;
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld st0, qword [esi+0x38]} */
🚫🚫        /* unimplemented  {fmul st0, qword [&g_533498]} */
⋯        long double temp2_1 = var_20_1;
        /* unimplemented  {fcomp st0, qword [esp+0x18]} f- temp2_1 */ - temp2_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp st0, qword [esp+0x18]} f< temp2_1 */ < temp2_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x18]}, temp2_1) */, temp2_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp st0, qword [esp+0x18]} f== temp2_1 */ == temp2_1;
        /* unimplemented  {fcomp st0, qword [esp+0x18]} */

        if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 0x41)
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld st0, qword [esi+0x40]} */
🚫🚫        /* unimplemented  {fmul st0, qword [&g_5338b0]} */
⋯        long double temp4_1 = var_18_1;
        /* unimplemented  {fcomp st0, qword [esp+0x20]} f- temp4_1 */ - temp4_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp st0, qword [esp+0x20]} f< temp4_1 */ < temp4_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x20]}, temp4_1) */, temp4_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp st0, qword [esp+0x20]} f== temp4_1 */ == temp4_1;
        /* unimplemented  {fcomp st0, qword [esp+0x20]} */

        if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 1))
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld st0, qword [esi+0x40]} */
🚫🚫        /* unimplemented  {fmul st0, qword [&g_533498]} */
⋯        long double temp6_1 = var_18_1;
        /* unimplemented  {fcomp st0, qword [esp+0x20]} f- temp6_1 */ - temp6_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp st0, qword [esp+0x20]} f< temp6_1 */ < temp6_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x20]}, temp6_1) */, temp6_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp st0, qword [esp+0x20]} f== temp6_1 */ == temp6_1;
        /* unimplemented  {fcomp st0, qword [esp+0x20]} */

        if (*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 0x41)
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld st0, qword [esi+0x48]} */
🚫🚫        /* unimplemented  {fmul st0, qword [&g_5338b0]} */
🚫🚫        /* unimplemented  {fld st0, st1} */
⋯        /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
            - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_5 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */, /* bool c2_5 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_5 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */;
        /* unimplemented  {fcompp } */
        /* unimplemented  {fcompp } */

        if (*(&((c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 0x41)
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld st0, qword [esi+0x48]} */
🚫🚫        /* unimplemented  {fmul st0, qword [&g_533498]} */
🚫🚫🚫🚫        /* unimplemented  {fxch st0, st1} */
        /* unimplemented  {fxch st0, st1} */
⋯        /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
            - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
        bool c0_6 = /* bool c0_6 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_6 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */;
        bool c2_6 = FCMP_UO(/* bool c2_6 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */, /* bool c2_6 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
        bool c3_6 = /* bool c3_6 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_6 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */;
        /* unimplemented  {fcompp } */
        /* unimplemented  {fcompp } */
        top = top_25 + 1;

        if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 1))
            goto label_44c4cf;

🚫🚫        /* unimplemented  {fld st0, qword [esi+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5338e0]} */
        var_29 = 1;
🚫🚫🚫🚫🚫        long double temp8_1 = 0.0;
        /* unimplemented  {fcom st0, qword [&g_5333b0]} f- temp8_1 */ - temp8_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcom st0, qword [&g_5333b0]} f< temp8_1 */ < temp8_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcom st0, qword [&g_5333b0]}, temp8_1) */, temp8_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcom st0, qword [&g_5333b0]} f== temp8_1 */ == temp8_1;
🚫🚫        *(a2 + 0x78) = /* *(a2 + 0x78) = unimplemented  {fst qword [esi+0x78], st0} */;
        bool c1 = /* bool c1 = unknown  {fst qword [esi+0x78], st0} */;

        if (!(*(&((c0_7 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2_7 ? 1 : 0) << 0xa
            | (c3_7 ? 1 : 0) << 0xe | ((top - 1) & 7) << 0xb) + 1) & 1))
        {
⋯            long double temp9_1 = 1.0;
            /* unimplemented  {fcomp st0, qword [&g_5333f8]} f- temp9_1 */ - temp9_1;
            bool c0_8 = /* bool c0_8 =
                unimplemented  {fcomp st0, qword [&g_5333f8]} f< temp9_1 */ < temp9_1;
            bool c2_8 = FCMP_UO(/* bool c2_8 =
                is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333f8]}, temp9_1) */,
                temp9_1);
            bool c3_8 = /* bool c3_8 =
                unimplemented  {fcomp st0, qword [&g_5333f8]} f== temp9_1 */ == temp9_1;
            /* unimplemented  {fcomp st0, qword [&g_5333f8]} */
            top_33 = top;

            if (!(*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                | (top_33 & 7) << 0xb) + 1) & 0x41))
            {
                *(a2 + 0x78) = 0;
                *(a2 + 0x7c) = 0x3ff00000;
            }
        }
        else
        {
            *(a2 + 0x78) = 0;
            *(a2 + 0x7c) = 0;
🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
            top_33 = top;
        }
    }

🚫🚫    /* unimplemented  {fld st0, qword [esi+0x78]} */
⋯    long double temp7 = 0.0;
    /* unimplemented  {fcomp st0, qword [&g_5333b0]} f- temp7 */ - temp7;
    bool c0_11 = /* bool c0_11 =
        unimplemented  {fcomp st0, qword [&g_5333b0]} f< temp7 */ < temp7;
    bool c2_11 = FCMP_UO(/* bool c2_11 =
        is_unordered.t(unimplemented  {fcomp st0, qword [&g_5333b0]}, temp7) */, temp7);
    bool c3_11 = /* bool c3_11 =
        unimplemented  {fcomp st0, qword [&g_5333b0]} f== temp7 */ == temp7;
    /* unimplemented  {fcomp st0, qword [&g_5333b0]} */

    if (*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
        | (top_33 & 7) << 0xb) + 1) & 0x40)
    {
🚫🚫    label_44c62b:
        sub_4b4770(Level_SetMission_5());
        /* unimplemented  {call sub_4b4770} */
🚫🚫        /* unimplemented  {fmul st0, qword [esi+0x88]} */
        int32_t* eax_17 = *(a2 + 0x1b8);
🚫🚫        /* unimplemented  {fadd qword [esi+0x80]} */
🚫🚫        /* unimplemented  {fmul st0, qword [&g_533488]} */
🚫🚫🚫        int32_t var_28_3 = /* int32_t var_28_3 =
            (unimplemented  {fistp qword [esp+0x10], st0}).d */;
        /* unimplemented  {fistp qword [esp+0x10], st0} */
        *(a2 + 0x90) = var_28_3;

        if (eax_17)
        {
            void* eax_18 = *eax_17;

            if (eax_18)
                sub_4e6c00(eax_18);

            Qtask_UpdateList(*(a2 + 0x1b8));
            *(a2 + 0x1b8) = 0;
        }
    }
    else
    {
        int32_t* eax_5 = *(a2 + 0x1b8);

        if (eax_5)
        {
            void* eax_6 = *eax_5;

            if (!eax_6)
                goto label_44c62b;

            ecx = var_29;

            if (ecx)
                ecx = sub_4e6c30(eax_6, ebx_1 + 0x28);

🚫🚫            /* unimplemented  {fld st0, qword [esi+0x78]} */
            int32_t var_3c_3 = ecx;
🚫🚫🚫            float var_3c_4 = /* float var_3c_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            sub_4e6c60(**(a2 + 0x1b8), 0xbf800000, var_3c_4);
        }
        else if (var_29)
        {
🚫🚫            sub_4b4770(Level_SetMission_5());
            /* unimplemented  {call sub_4b4770} */
🚫🚫            /* unimplemented  {fimul st0, dword [esi+0x1b4]} */
            int32_t* eax_10 = *(a2 + 0x1b8);
🚫🚫🚫            int32_t var_28_2 = /* int32_t var_28_2 =
                (unimplemented  {fistp qword [esp+0x10], st0}).d */;
            /* unimplemented  {fistp qword [esp+0x10], st0} */

            if (eax_10)
            {
                void* eax_11 = *eax_10;

                if (eax_11)
                    sub_4e6c00(eax_11);

                Qtask_UpdateList(*(a2 + 0x1b8));
                *(a2 + 0x1b8) = 0;
            }

            if (!*(a2 + 0x90))
            {
                struct status_msg* eax_14 = sub_4e6b00(a2, (var_28_2 << 5) + a2 + 0xb4);

                if (eax_14)
                {
                    sub_4e6c30(eax_14, ebx_1 + 0x28);
                    int32_t* eax_15 = QTask_LinkEventHandler_2(eax_14);
🚫🚫                    /* unimplemented  {fld st0, qword [esi+0x78]} */
                    *(a2 + 0x1b8) = eax_15;
🚫🚫🚫                    float var_3c_10 = /* float var_3c_10 =
                        unimplemented  {fstp dword [esp], st0} */;
                    /* unimplemented  {fstp dword [esp], st0} */
                    sub_4e6c60(*eax_15, 0xbf800000, var_3c_10);
                }
            }
        }
    }

    int32_t result = *(a2 + 0x90);

    if (result)
    {
        result -= 1;
        *(a2 + 0x90) = result;
    }

    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t edx_3 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_23;

            if (!esi_1)
                eax_23 = nullptr;
            else
            {
                int32_t eax_20 = *esi_1;
                int32_t eax_21 = -(eax_20);
                eax_23 = (eax_21 - eax_21) & esi_1;
            }

            *((edx_3 << 2) + &g_afa6e0) = eax_23;
            int32_t edx_4 = edx_3 + 1;
            int32_t eax_24 = 0;
            g_afa7e0 = edx_4;
            eax_24 = i[7];
            result = *((eax_24 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                edx_4 = g_afa7e0;
            }

            i = *((edx_4 << 2) + &g_afa6dc);
            edx_3 = edx_4 - 1;
            g_afa7e0 = edx_3;
        } while (i);
    }

    return result;
}
