#include "gi_platform.h"
#include "0044C370-AmbientArea_LoadParameters.h"
int32_t AmbientArea_LoadParameters(int80_t a1 , void* a2)

{
    int32_t ctxB1 = Level_LoadLevel_6() + 0x60;
    char v_29 = 0;
    char valA1;
    int32_t objC;
    valA1 = Script_FormatString_6(a2 + 0x1bc);
    int16_t idx;

    if (valA1)
    {
        objC = Script_SpawnNewTask_7(a2 + 0x1bc, a2);
        idx = 1;
    }

    if (valA1 && !a1)
        goto label_44c4cf;

🚫🚫    /* unimplemented  {fld fp0, qword [ctxB+0x28]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [srcS+0x20]} */
🚫🚫    /* unimplemented  {fld fp0, qword [ctxB+0x30]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [srcS+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, qword [ctxB+0x38]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [srcS+0x30]} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    double v_20_1 = /* double v_20_1 = unimplemented  {fstp qword [esp+0x18], fp0} */;
    /* unimplemented  {fstp qword [esp+0x18], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    double v_18_1 = /* double v_18_1 = unimplemented  {fstp qword [esp+0x20], fp0} */;
    /* unimplemented  {fstp qword [esp+0x20], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [srcS+0x58]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp3, fp0} */
    /* unimplemented  {fstp fp3, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, qword [&g_5338b0]} */
⋯    long double f1_1 = v_20_1;
    /* unimplemented  {fcomp fp0, qword [esp+0x18]} f- f1_1 */ - f1_1;
    bool c0_1 = /* bool c0_1 = unimplemented  {fcomp fp0, qword [esp+0x18]} f< f1_1 */ < f1_1;
    bool c2_1 = FCMP_UO(/* bool c2_1 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x18]}, f1_1) */, f1_1);
    bool c3_1 = /* bool c3_1 =
        unimplemented  {fcomp fp0, qword [esp+0x18]} f== f1_1 */ == f1_1;
    /* unimplemented  {fcomp fp0, qword [esp+0x18]} */
    int16_t top_25 = idx - 1;
    int16_t top_33;

    if (!(*(
        &((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top_25 & 7) << 0xb)
        + 1) & 1))
    {
🚫🚫🚫    label_44c4cd:
        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */
        idx = top_25 + 1;
🚫🚫    label_44c4cf:
        /* unimplemented  {fld fp0, qword [srcS+0x78]} */
🚫🚫        /* unimplemented  {fsub fp0, qword [&g_5338e0]} */
🚫🚫🚫🚫🚫        long double f3_1 = 0.0;
        /* unimplemented  {fcom fp0, qword [&g_5333b0]} f- f3_1 */ - f3_1;
        bool c0_9 = /* bool c0_9 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f< f3_1 */ < f3_1;
        bool c2_9 = FCMP_UO(/* bool c2_9 =
            is_unordered.t(unimplemented  {fcom fp0, qword [&g_5333b0]}, f3_1) */, f3_1);
        bool c3_9 = /* bool c3_9 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f== f3_1 */ == f3_1;
🚫🚫        (*(int32_t*)(uintptr_t)(a2 + 0x78)) =
        bool c1_1 = /* bool c1_1 = unknown  {fst qword [srcS+0x78], fp0} */;

        if (!(*(&((c0_9 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_9 ? 1 : 0) << 0xa
            | (c3_9 ? 1 : 0) << 0xe | ((idx - 1) & 7) << 0xb) + 1) & 1))
        {
⋯            long double f5_1 = 1.0;
            /* unimplemented  {fcomp fp0, qword [&g_5333f8]} f- f5_1 */ - f5_1;
            bool c0_10 = /* bool c0_10 =
                unimplemented  {fcomp fp0, qword [&g_5333f8]} f< f5_1 */ < f5_1;
            bool c2_10 = FCMP_UO(/* bool c2_10 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333f8]}, f5_1) */,
                f5_1);
            bool c3_10 = /* bool c3_10 =
                unimplemented  {fcomp fp0, qword [&g_5333f8]} f== f5_1 */ == f5_1;
            /* unimplemented  {fcomp fp0, qword [&g_5333f8]} */
            top_33 = idx;

            if (!(*(&((c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
                | (top_33 & 7) << 0xb) + 1) & 0x41))
            {
                (*(int32_t*)(uintptr_t)(a2 + 0x78)) = 0;
                (*(int32_t*)(uintptr_t)(a2 + 0x7c)) = 0x3ff00000;
            }
        }
        else
        {
            (*(int32_t*)(uintptr_t)(a2 + 0x78)) = 0;
            (*(int32_t*)(uintptr_t)(a2 + 0x7c)) = 0;
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            top_33 = idx;
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x38]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533498]} */
⋯        long double f2_1 = v_20_1;
        /* unimplemented  {fcomp fp0, qword [esp+0x18]} f- f2_1 */ - f2_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, qword [esp+0x18]} f< f2_1 */ < f2_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x18]}, f2_1) */, f2_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, qword [esp+0x18]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, qword [esp+0x18]} */

        if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 0x41)
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x40]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_5338b0]} */
⋯        long double f4_1 = v_18_1;
        /* unimplemented  {fcomp fp0, qword [esp+0x20]} f- f4_1 */ - f4_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp fp0, qword [esp+0x20]} f< f4_1 */ < f4_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x20]}, f4_1) */, f4_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp fp0, qword [esp+0x20]} f== f4_1 */ == f4_1;
        /* unimplemented  {fcomp fp0, qword [esp+0x20]} */

        if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 1))
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x40]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533498]} */
⋯        long double f6_1 = v_18_1;
        /* unimplemented  {fcomp fp0, qword [esp+0x20]} f- f6_1 */ - f6_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp fp0, qword [esp+0x20]} f< f6_1 */ < f6_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [esp+0x20]}, f6_1) */, f6_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp fp0, qword [esp+0x20]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, qword [esp+0x20]} */

        if (*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 0x41)
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x48]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_5338b0]} */
🚫🚫        /* unimplemented  {fld fp0, fp1} */
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

🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x48]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533498]} */
🚫🚫🚫🚫        /* unimplemented  {fxch fp0, fp1} */
        /* unimplemented  {fxch fp0, fp1} */
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
        idx = top_25 + 1;

        if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 1))
            goto label_44c4cf;

🚫🚫        /* unimplemented  {fld fp0, qword [srcS+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5338e0]} */
        v_29 = 1;
🚫🚫🚫🚫🚫        long double f8_1 = 0.0;
        /* unimplemented  {fcom fp0, qword [&g_5333b0]} f- f8_1 */ - f8_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f< f8_1 */ < f8_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcom fp0, qword [&g_5333b0]}, f8_1) */, f8_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f== f8_1 */ == f8_1;
🚫🚫        (*(int32_t*)(uintptr_t)(a2 + 0x78)) =
        bool c1 = /* bool c1 = unknown  {fst qword [srcS+0x78], fp0} */;

        if (!(*(&((c0_7 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2_7 ? 1 : 0) << 0xa
            | (c3_7 ? 1 : 0) << 0xe | ((idx - 1) & 7) << 0xb) + 1) & 1))
        {
⋯            long double f9_1 = 1.0;
            /* unimplemented  {fcomp fp0, qword [&g_5333f8]} f- f9_1 */ - f9_1;
            bool c0_8 = /* bool c0_8 =
                unimplemented  {fcomp fp0, qword [&g_5333f8]} f< f9_1 */ < f9_1;
            bool c2_8 = FCMP_UO(/* bool c2_8 =
                is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333f8]}, f9_1) */,
                f9_1);
            bool c3_8 = /* bool c3_8 =
                unimplemented  {fcomp fp0, qword [&g_5333f8]} f== f9_1 */ == f9_1;
            /* unimplemented  {fcomp fp0, qword [&g_5333f8]} */
            top_33 = idx;

            if (!(*(&((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe
                | (top_33 & 7) << 0xb) + 1) & 0x41))
            {
                (*(int32_t*)(uintptr_t)(a2 + 0x78)) = 0;
                (*(int32_t*)(uintptr_t)(a2 + 0x7c)) = 0x3ff00000;
            }
        }
        else
        {
            (*(int32_t*)(uintptr_t)(a2 + 0x78)) = 0;
            (*(int32_t*)(uintptr_t)(a2 + 0x7c)) = 0;
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            top_33 = idx;
        }
    }

🚫🚫    /* unimplemented  {fld fp0, qword [srcS+0x78]} */
⋯    long double f7 = 0.0;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} f- f7 */ - f7;
    bool c0_11 = /* bool c0_11 =
        unimplemented  {fcomp fp0, qword [&g_5333b0]} f< f7 */ < f7;
    bool c2_11 = FCMP_UO(/* bool c2_11 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [&g_5333b0]}, f7) */, f7);
    bool c3_11 = /* bool c3_11 =
        unimplemented  {fcomp fp0, qword [&g_5333b0]} f== f7 */ == f7;
    /* unimplemented  {fcomp fp0, qword [&g_5333b0]} */

    if (*(&((c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
        | (top_33 & 7) << 0xb) + 1) & 0x40)
    {
🚫🚫    label_44c62b:
        Sys_AllocateMemory_14(Level_SetMission_5());
        /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫        /* unimplemented  {fmul fp0, qword [srcS+0x88]} */
        int32_t* valA17 = (*(int32_t*)(uintptr_t)(a2 + 0x1b8));
🚫🚫        /* unimplemented  {fadd qword [srcS+0x80]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533488]} */
🚫🚫🚫        int32_t v_28_3 = /* int32_t v_28_3 =
            (unimplemented  {fistp qword [esp+0x10], fp0}).d */;
        /* unimplemented  {fistp qword [esp+0x10], fp0} */
        (*(int32_t*)(uintptr_t)(a2 + 0x90)) = v_28_3;

        if (valA17)
        {
            void* valA18 = *valA17;

            if (valA18)
                SoundSys_SetFrequency_7(valA18);

            Qtask_UpdateList((*(int32_t*)(uintptr_t)(a2 + 0x1b8)));
            (*(int32_t*)(uintptr_t)(a2 + 0x1b8)) = 0;
        }
    }
    else
    {
        int32_t* valA5 = (*(int32_t*)(uintptr_t)(a2 + 0x1b8));

        if (valA5)
        {
            void* valA6 = *valA5;

            if (!valA6)
                goto label_44c62b;

            objC = v_29;

            if (objC)
                objC = SoundSys_StopSoundSample_7(valA6, ctxB1 + 0x28);

🚫🚫            /* unimplemented  {fld fp0, qword [srcS+0x78]} */
            int32_t v_3c_3 = objC;
🚫🚫🚫            float v_3c_4 = /* float v_3c_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            SoundSys_LoadSoundDef_7(*(*(int32_t*)(uintptr_t)(a2 + 0x1b8)), 0xbf800000, v_3c_4);
        }
        else if (v_29)
        {
🚫🚫            Sys_AllocateMemory_14(Level_SetMission_5());
            /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫            /* unimplemented  {fimul fp0, dword [srcS+0x1b4]} */
            int32_t* valA10 = (*(int32_t*)(uintptr_t)(a2 + 0x1b8));
🚫🚫🚫            int32_t v_28_2 = /* int32_t v_28_2 =
                (unimplemented  {fistp qword [esp+0x10], fp0}).d */;
            /* unimplemented  {fistp qword [esp+0x10], fp0} */

            if (valA10)
            {
                void* valA11 = *valA10;

                if (valA11)
                    SoundSys_SetFrequency_7(valA11);

                Qtask_UpdateList((*(int32_t*)(uintptr_t)(a2 + 0x1b8)));
                (*(int32_t*)(uintptr_t)(a2 + 0x1b8)) = 0;
            }

            if (!(*(int32_t*)(uintptr_t)(a2 + 0x90)))
            {
                struct status_msg* valA14 = SoundSys_SetMasterVolume_7(a2, (v_28_2 << 5) + a2 + 0xb4);

                if (valA14)
                {
                    SoundSys_StopSoundSample_7(valA14, ctxB1 + 0x28);
                    int32_t* valA15 = QTask_LinkEventHandler_2(valA14);
🚫🚫                    /* unimplemented  {fld fp0, qword [srcS+0x78]} */
                    (*(int32_t*)(uintptr_t)(a2 + 0x1b8)) = valA15;
🚫🚫🚫                    float v_3c_10 = /* float v_3c_10 =
                        unimplemented  {fstp dword [esp], fp0} */;
                    /* unimplemented  {fstp dword [esp], fp0} */
                    SoundSys_LoadSoundDef_7(*valA15, 0xbf800000, v_3c_10);
                }
            }
        }
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a2 + 0x90));

    if (result)
    {
        result -= 1;
        (*(int32_t*)(uintptr_t)(a2 + 0x90)) = result;
    }

    int32_t* i = (*(int32_t*)(uintptr_t)(a2 + 8));

    if (*i && i)
    {
        int32_t tmpD3 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA23;

            if (!srcS1)
                valA23 = nullptr;
            else
            {
                int32_t valA20 = *srcS1;
                int32_t valA21 = -(valA20);
                valA23 = (valA21 - valA21) & srcS1;
            }

            *((tmpD3 << 2) + &g_afa6e0) = valA23;
            int32_t tmpD4 = tmpD3 + 1;
            int32_t valA24 = 0;
            g_afa7e0 = tmpD4;
            valA24 = i[7];
            result = *((valA24 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD4 = g_afa7e0;
            }

            i = *((tmpD4 << 2) + &g_afa6dc);
            tmpD3 = tmpD4 - 1;
            g_afa7e0 = tmpD3;
        } while (i);
    }

    return result;
}
