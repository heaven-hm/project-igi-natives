// IGI native provenance: AmbientArea_LoadParameters - 0x0044C370 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044C370-AmbientArea_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AmbientArea_LoadParameters.h"
int32_t AmbientArea_LoadParameters(long double context , void* param_2)

{
    int32_t context_1 = Level_LoadLevel_6() + 0x60;
    char item_29 = 0;
    char data_1;
    int32_t entity_val;
    data_1 = Script_FormatString_6(param_2 + 0x1bc);
    int16_t idx;

    if (data_1)
    {
        entity_val = Script_SpawnNewTask_7(param_2 + 0x1bc, param_2);
        idx = 1;
    }

    if (data_1 && !context)
        goto label_44c4cf;

🚫🚫    /* unimplemented  {fld fp0, qword [context_val+0x28]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [source_val+0x20]} */
🚫🚫    /* unimplemented  {fld fp0, qword [context_val+0x30]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [source_val+0x28]} */
🚫🚫    /* unimplemented  {fld fp0, qword [context_val+0x38]} */
🚫🚫    /* unimplemented  {fsub fp0, qword [source_val+0x30]} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x68]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x5c]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x50]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    double item_20_1 = /* double item_20_1 = unimplemented  {fstp qword [stack_ptr+0x18], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x18], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x6c]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x60]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x54]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    double item_18_1 = /* double item_18_1 = unimplemented  {fstp qword [stack_ptr+0x20], fp0} */;
    /* unimplemented  {fstp qword [stack_ptr+0x20], fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x70]} */
🚫🚫    /* unimplemented  {fmul fp0, fp1} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x64]} */
🚫🚫    /* unimplemented  {fmul fp0, fp3} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫    /* unimplemented  {fld fp0, dword [source_val+0x58]} */
🚫🚫    /* unimplemented  {fmul fp0, fp4} */
🚫🚫🚫    /* unimplemented  {faddp fp1, fp0} */
    /* unimplemented  {faddp fp1, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp3, fp0} */
    /* unimplemented  {fstp fp3, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x38]} */
🚫🚫    /* unimplemented  {fmul fp0, qword [&g_5338b0]} */
⋯    long double f1_1 = item_20_1;
    /* unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} f- f1_1 */ - f1_1;
    bool c0_1 = /* bool c0_1 = unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} f< f1_1 */ < f1_1;
    bool c2_1 = FCMP_UO(/* bool c2_1 =
        is_unordered.t(unimplemented  {fcomp fp0, qword [stack_ptr+0x18]}, f1_1) */, f1_1);
    bool c3_1 = /* bool c3_1 =
        unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} f== f1_1 */ == f1_1;
    /* unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} */
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
        /* unimplemented  {fld fp0, qword [source_val+0x78]} */
🚫🚫        /* unimplemented  {fsub fp0, qword [&g_5338e0]} */
🚫🚫🚫🚫🚫        long double f3_1 = 0.0;
        /* unimplemented  {fcom fp0, qword [&g_5333b0]} f- f3_1 */ - f3_1;
        bool c0_9 = /* bool c0_9 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f< f3_1 */ < f3_1;
        bool c2_9 = FCMP_UO(/* bool c2_9 =
            is_unordered.t(unimplemented  {fcom fp0, qword [&g_5333b0]}, f3_1) */, f3_1);
        bool c3_9 = /* bool c3_9 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f== f3_1 */ == f3_1;
🚫🚫        *(param_2 + 0x78) =
        bool c1_1 = /* bool c1_1 = unknown  {fst qword [source_val+0x78], fp0} */;

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
                *(param_2 + 0x78) = 0;
                *(param_2 + 0x7c) = 0x3ff00000;
            }
        }
        else
        {
            *(param_2 + 0x78) = 0;
            *(param_2 + 0x7c) = 0;
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            top_33 = idx;
        }
    }
    else
    {
🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x38]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533498]} */
⋯        long double f2_1 = item_20_1;
        /* unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} f- f2_1 */ - f2_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} f< f2_1 */ < f2_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [stack_ptr+0x18]}, f2_1) */, f2_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} f== f2_1 */ == f2_1;
        /* unimplemented  {fcomp fp0, qword [stack_ptr+0x18]} */

        if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 0x41)
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x40]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_5338b0]} */
⋯        long double f4_1 = item_18_1;
        /* unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} f- f4_1 */ - f4_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} f< f4_1 */ < f4_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [stack_ptr+0x20]}, f4_1) */, f4_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} f== f4_1 */ == f4_1;
        /* unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} */

        if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 1))
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x40]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533498]} */
⋯        long double f6_1 = item_18_1;
        /* unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} f- f6_1 */ - f6_1;
        bool c0_4 = /* bool c0_4 =
            unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} f< f6_1 */ < f6_1;
        bool c2_4 = FCMP_UO(/* bool c2_4 =
            is_unordered.t(unimplemented  {fcomp fp0, qword [stack_ptr+0x20]}, f6_1) */, f6_1);
        bool c3_4 = /* bool c3_4 =
            unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} f== f6_1 */ == f6_1;
        /* unimplemented  {fcomp fp0, qword [stack_ptr+0x20]} */

        if (*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | (top_25 & 7) << 0xb) + 1) & 0x41)
            goto label_44c4cd;

🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x48]} */
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

🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x48]} */
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

🚫🚫        /* unimplemented  {fld fp0, qword [source_val+0x78]} */
🚫🚫        /* unimplemented  {fadd qword [&g_5338e0]} */
        item_29 = 1;
🚫🚫🚫🚫🚫        long double f8_1 = 0.0;
        /* unimplemented  {fcom fp0, qword [&g_5333b0]} f- f8_1 */ - f8_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f< f8_1 */ < f8_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcom fp0, qword [&g_5333b0]}, f8_1) */, f8_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcom fp0, qword [&g_5333b0]} f== f8_1 */ == f8_1;
🚫🚫        *(param_2 + 0x78) =
        bool c1 = /* bool c1 = unknown  {fst qword [source_val+0x78], fp0} */;

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
                *(param_2 + 0x78) = 0;
                *(param_2 + 0x7c) = 0x3ff00000;
            }
        }
        else
        {
            *(param_2 + 0x78) = 0;
            *(param_2 + 0x7c) = 0;
🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
            top_33 = idx;
        }
    }

🚫🚫    /* unimplemented  {fld fp0, qword [source_val+0x78]} */
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
🚫🚫        /* unimplemented  {fmul fp0, qword [source_val+0x88]} */
        int32_t* data_17 = *(param_2 + 0x1b8);
🚫🚫        /* unimplemented  {fadd qword [source_val+0x80]} */
🚫🚫        /* unimplemented  {fmul fp0, qword [&g_533488]} */
🚫🚫🚫        int32_t item_28_3 = /* int32_t item_28_3 =
            (unimplemented  {fistp qword [stack_ptr+0x10], fp0}).d */;
        /* unimplemented  {fistp qword [stack_ptr+0x10], fp0} */
        *(param_2 + 0x90) = item_28_3;

        if (data_17)
        {
            void* data_18 = *data_17;

            if (data_18)
                SoundSys_SetFrequency_7(data_18);

            Qtask_UpdateList(*(param_2 + 0x1b8));
            *(param_2 + 0x1b8) = 0;
        }
    }
    else
    {
        int32_t* data_5 = *(param_2 + 0x1b8);

        if (data_5)
        {
            void* data_6 = *data_5;

            if (!data_6)
                goto label_44c62b;

            entity_val = item_29;

            if (entity_val)
                entity_val = SoundSys_StopSoundSample_7(data_6, context_1 + 0x28);

🚫🚫            /* unimplemented  {fld fp0, qword [source_val+0x78]} */
            int32_t item_3c_3 = entity_val;
🚫🚫🚫            float item_3c_4 = /* float item_3c_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            SoundSys_LoadSoundDef_7(**(param_2 + 0x1b8), 0xbf800000, item_3c_4);
        }
        else if (item_29)
        {
🚫🚫            Sys_AllocateMemory_14(Level_SetMission_5());
            /* unimplemented  {call Sys_AllocateMemory_14} */
🚫🚫            /* unimplemented  {fimul fp0, dword [source_val+0x1b4]} */
            int32_t* data_10 = *(param_2 + 0x1b8);
🚫🚫🚫            int32_t item_28_2 = /* int32_t item_28_2 =
                (unimplemented  {fistp qword [stack_ptr+0x10], fp0}).d */;
            /* unimplemented  {fistp qword [stack_ptr+0x10], fp0} */

            if (data_10)
            {
                void* data_11 = *data_10;

                if (data_11)
                    SoundSys_SetFrequency_7(data_11);

                Qtask_UpdateList(*(param_2 + 0x1b8));
                *(param_2 + 0x1b8) = 0;
            }

            if (!*(param_2 + 0x90))
            {
                struct status_msg* data_14 = SoundSys_SetMasterVolume_7(param_2, (item_28_2 << 5) + param_2 + 0xb4);

                if (data_14)
                {
                    SoundSys_StopSoundSample_7(data_14, context_1 + 0x28);
                    int32_t* data_15 = QTask_LinkEventHandler_2(data_14);
🚫🚫                    /* unimplemented  {fld fp0, qword [source_val+0x78]} */
                    *(param_2 + 0x1b8) = data_15;
🚫🚫🚫                    float item_3c_10 = /* float item_3c_10 =
                        unimplemented  {fstp dword [stack_ptr], fp0} */;
                    /* unimplemented  {fstp dword [stack_ptr], fp0} */
                    SoundSys_LoadSoundDef_7(*data_15, 0xbf800000, item_3c_10);
                }
            }
        }
    }

    int32_t result = *(param_2 + 0x90);

    if (result)
    {
        result -= 1;
        *(param_2 + 0x90) = result;
    }

    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_3 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_23;

            if (!source_1)
                data_23 = nullptr;
            else
            {
                int32_t data_20 = *source_1;
                int32_t data_21 = -(data_20);
                data_23 = (data_21 - data_21) & source_1;
            }

            *((temp_3 << 2) + &g_afa6e0) = data_23;
            int32_t temp_4 = temp_3 + 1;
            int32_t data_24 = 0;
            g_afa7e0 = temp_4;
            data_24 = i[7];
            result = *((data_24 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                temp_4 = g_afa7e0;
            }

            i = *((temp_4 << 2) + &g_afa6dc);
            temp_3 = temp_4 - 1;
            g_afa7e0 = temp_3;
        } while (i);
    }

    return result;
}
