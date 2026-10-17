// IGI native provenance: AI_CheckVisibility_27 - 0x0046A330 - CFG score 96.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046A330-AI_CheckVisibility_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckVisibility_27.h"
int32_t AI_CheckVisibility_27(void* context)

{
    AI_CombatTarget_29();
    char item_109 = 0;
    int16_t idx;

    if (!Physics_ApplyImpulse_4(AI_CheckVisibility_28()))
    {
        int32_t dest_1 = 0;
        int32_t item_108_1 = 0;

        if (AI_AlertAllies_28() & 0x10)
        {
            if (*(context + 0x80))
            {
                dest_1 = 1;
                *(context + 0x80) = 0;
            }
            else
            {
                void* data_3 = AI_CombatTarget_28();
                item_109 = 1;
                *(context + 0x88) = *(data_3 + 0x24);
                *(context + 0x8c) = *(data_3 + 0x28);
                *(context + 0x80) = 0xd;
            }
        }

        if (AI_AlertAllies_28() & 0x20)
        {
            if (*(context + 0x84))
            {
                item_108_1 = 1;
                *(context + 0x84) = 0;
            }
            else
                *(context + 0x84) = 0xd;
        }

        int32_t entity_2 = *g_c28f8c;
        int16_t data_6;

        if (!(0x100 & entity_2))
        {
            if (dest_1)
                goto label_46a3f0;

            data_6 = g_5bdda0;
        }
        else if (!(*(context + 0xa8) & 0x100) || dest_1)
        {
        label_46a3f0:
            data_6 = g_5bdda0;

            if (data_6 < 3)
            {
                int32_t item_128_1 = entity_2;
                g_5bdda0 = data_6 + 1;
                int16_t top_1 = 0xffff;
                long double fp0_1;
                bool c1_1;
                bool c2_1;
                fp0_1 = __fptan(*(((data_6 + 1) << 2) + &g_53f750));

                if (!c2_1)
                    top_1 = 0xfffe;

🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫                float item_128_2 = /* float item_128_2 = unimplemented  {fstp dword [stack_ptr], fp0} */;
                /* unimplemented  {fstp dword [stack_ptr], fp0} */
                idx = top_1 + 2;
                mapcomp_05(context, item_128_2);
                AI_TakeCover_24(*(context + 0x9c));
                data_6 = g_5bdda0;
            }
        }
        else
            data_6 = g_5bdda0;

        if (((0x200 & *g_c28f8c && !(*(context + 0xa8) & 0x200)) || item_108_1) && data_6)
        {
            int32_t item_128_3 = 0x200;
            g_5bdda0 = data_6 - 1;
🚫🚫            int16_t top_3 = idx - 1;
            /* unimplemented  {fld fp0, dword [temp_val*4+0x53f750]} */
🚫🚫🚫🚫            long double fp0_2;
            bool c1_2;
            bool c2_2;
            fp0_2 = __fptan(/* fp0_2, c1_2, c2_2 = __fptan(unimplemented  {fptan }) */);
            /* unimplemented  {fptan } */

            if (!c2_2)
            {
                top_3 -= 1;
                /* unimplemented  {fptan } */
            }

🚫🚫🚫            /* unimplemented  {fstp fp0, fp0} */
            /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫            float item_128_4 = /* float item_128_4 = unimplemented  {fstp dword [stack_ptr], fp0} */;
            /* unimplemented  {fstp dword [stack_ptr], fp0} */
            idx = top_3 + 2;
            mapcomp_05(context, item_128_4);
            AI_TakeCover_24(*(context + 0x9c));
        }
    }

    int32_t data_9 = *(context + 0x80);

    if (data_9 > 0)
        *(context + 0x80) = data_9 - 1;

    int32_t data_11 = *(context + 0x84);

    if (data_11 > 0)
        *(context + 0x84) = data_11 - 1;

    if (!item_109)
    {
        void** data_51 = *(context + 0x90);

        if (data_51)
        {
            void* data_52 = *data_51;

            if (!data_52)
                AI_CheckSector_26(context);
            else
                AI_UpdateOrders_26(context, data_52);
        }
    }
    else
    {
        float entity_4 = *(context + 0x88);
        float temp_3 = *(context + 0x8c);
        float* data_14 = SoundSys_PlaySoundSample_12(AI_CheckVisibility_29());
🚫🚫        /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
⋯        long double f0_1 = *data_14;
        /* unimplemented  {fcomp fp0, dword [entity_val]} f- f0_1 */ - f0_1;
        bool c0_1 = /* bool c0_1 = unimplemented  {fcomp fp0, dword [entity_val]} f< f0_1 */ < f0_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [entity_val]}, f0_1) */, f0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [entity_val]} f== f0_1 */ == f0_1;
        /* unimplemented  {fcomp fp0, dword [entity_val]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [stack_ptr+0x10]} */
⋯            long double f1_1 = data_14[1];
            /* unimplemented  {fcomp fp0, dword [entity_val+0x4]} f- f1_1 */ - f1_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcomp fp0, dword [entity_val+0x4]} f< f1_1 */ < f1_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [entity_val+0x4]}, f1_1) */, f1_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcomp fp0, dword [entity_val+0x4]} f== f1_1 */ == f1_1;
            /* unimplemented  {fcomp fp0, dword [entity_val+0x4]} */

            if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 1))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [entity_val+0x8]} */
🚫🚫                /* unimplemented  {fadd dword [entity_val]} */
⋯                long double f2_1 = entity_4;
                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f- f2_1 */ - f2_1;
                bool c0_3 = /* bool c0_3 =
                    unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f< f2_1 */ < f2_1;
                bool c2_5 = FCMP_UO(/* bool c2_5 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x14]}, f2_1) */,
                    f2_1);
                bool c3_3 = /* bool c3_3 =
                    unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} f== f2_1 */ == f2_1;
                /* unimplemented  {fcomp fp0, dword [stack_ptr+0x14]} */

                if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (idx & 7) << 0xb) + 1) & 0x41))
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [entity_val+0xc]} */
🚫🚫                    /* unimplemented  {fadd dword [entity_val+0x4]} */
⋯                    long double f3_1 = temp_3;
                    /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f- f3_1 */ - f3_1;
                    bool c0_4 = /* bool c0_4 =
                        unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f< f3_1 */ < f3_1;
                    bool c2_6 = FCMP_UO(/* bool c2_6 =
                        is_unordered.t(unimplemented  {fcomp fp0, dword [stack_ptr+0x10]}, f3_1) */,
                        f3_1);
                    bool c3_4 = /* bool c3_4 =
                        unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} f== f3_1 */ == f3_1;
                    /* unimplemented  {fcomp fp0, dword [stack_ptr+0x10]} */

                    if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | (idx & 7) << 0xb) + 1) & 0x41))
                    {
                        int32_t data_17 = SoundSys_Update3DPosition_12(AI_CheckVisibility_29());
🚫🚫                        Display_ClearSurfaces_4();
                        /* unimplemented  {call Display_ClearSurfaces_4} */
🚫🚫🚫                        float item_100_1 = /* float item_100_1 =
                            unimplemented  {fstp dword [stack_ptr+0x28], fp0} */;
                        /* unimplemented  {fstp dword [stack_ptr+0x28], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
🚫🚫                        /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫                        double item_fc_1 = /* double item_fc_1 =
                            unimplemented  {fstp qword [stack_ptr+0x2c], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [data_val+0x4]} */
🚫🚫                        /* unimplemented  {fsubr fp0, qword [stack_ptr+0x2c]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [flagP+0x40]} */
🚫🚫🚫                        double item_fc_2 = /* double item_fc_2 =
                            unimplemented  {fstp qword [stack_ptr+0x2c], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [data_val+0x4]} */
🚫🚫                        /* unimplemented  {fdivr fp0, qword [stack_ptr+0x2c]} */
🚫🚫🚫                        double item_b8 = /* double item_b8 =
                            unimplemented  {fstp qword [stack_ptr+0x70], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x70], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [stack_ptr+0x14]} */
🚫🚫                        /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫                        double item_fc_3 = /* double item_fc_3 =
                            unimplemented  {fstp qword [stack_ptr+0x2c], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [data_val+0x8]} */
🚫🚫                        /* unimplemented  {fsubr fp0, qword [stack_ptr+0x2c]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [stack_ptr+0x28]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [flagP+0x40]} */
🚫🚫🚫                        /* unimplemented  {fmulp fp1, fp0} */
                        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫                        int32_t item_fc_4 = /* int32_t item_fc_4 =
                            (unimplemented  {fstp qword [stack_ptr+0x2c], fp0}).d */;
                        /* unimplemented  {fstp qword [stack_ptr+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [data_val+0x4]} */
🚫🚫                        /* unimplemented  {fdivr fp0, qword [stack_ptr+0x2c]} */
🚫🚫🚫                        double item_b0_1 = /* double item_b0_1 =
                            unimplemented  {fstp qword [stack_ptr+0x78], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x78], fp0} */
                        int32_t* item_104 = AI_CombatTarget_18();
                        int32_t** data_19 = Weapon_UpdateMuzzleFlash_4();
                        int32_t data_20 = Env_ActivateEntity_2();
                        int32_t item_100_2 = 0;
                        int32_t item_f4_1 = 0;
                        int32_t item_f0_1 = 0;
                        void* const item_108_2 = nullptr;
                        double item_a0;
                        memcpy(&item_a0, data_17 + 0x28, 0x18);
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x4]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [stack_ptr+0x78]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [stack_ptr+0x70]} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fadd dword [flagP+0x8]} */
🚫🚫🚫                        double item_ec = /* double item_ec =
                            unimplemented  {fstp qword [stack_ptr+0x3c], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x3c], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x10]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [stack_ptr+0x78]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0xc]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [stack_ptr+0x70]} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fadd dword [flagP+0x14]} */
🚫🚫🚫                        double item_e4_1 = /* double item_e4_1 =
                            unimplemented  {fstp qword [stack_ptr+0x48], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x48], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x1c]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [stack_ptr+0x7c]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x18]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [stack_ptr+0x74]} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fadd dword [flagP+0x20]} */
🚫🚫🚫                        double item_dc_1 = /* double item_dc_1 =
                            unimplemented  {fstp qword [stack_ptr+0x50], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x50], fp0} */
                        double item_d0;
                        memcpy(&item_d0, &item_ec, 0x18);
                        Sys_FreeMemory_11(&item_d0);
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0x5c]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [&g_533548]} */
🚫🚫                        item_d0 = /* item_d0 = unimplemented  {fst qword [stack_ptr+0x54], fp0} */;
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0x5c]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [&g_533548]} */
🚫🚫🚫                        double item_c8_1 = /* double item_c8_1 =
                            unimplemented  {fstp qword [stack_ptr+0x6c], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x6c], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0x74]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [&g_533548]} */
🚫🚫🚫                        double item_c0_1 = /* double item_c0_1 =
                            unimplemented  {fstp qword [stack_ptr+0x80], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x80], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0xa0]} */
🚫🚫                        /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫                        double item_88 = /* double item_88 =
                            unimplemented  {fstp qword [stack_ptr+0xb8], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0xb8], fp0} */
🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0xa8]} */
🚫🚫                        /* unimplemented  {fadd qword [stack_ptr+0x78]} */
🚫🚫🚫                        double item_80 = /* double item_80 =
                            unimplemented  {fstp qword [stack_ptr+0xc0], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0xc0], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0xb0]} */
🚫🚫                        /* unimplemented  {fadd qword [stack_ptr+0x80]} */
🚫🚫🚫                        double item_78_1 = /* double item_78_1 =
                            unimplemented  {fstp qword [stack_ptr+0xc8], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0xc8], fp0} */
                        void* item_70;
                        DynObj_FindSymbol_11(Level_StartMission_4(), &item_70, &item_a0, &item_88, 1, 0xff,
                            nullptr, 0xffffffff);
                        int32_t* data_22 = item_104;
                        int32_t item_110_2 = 0;
                        int32_t flagP2 = *data_22;
                        double item_68[0xa];
                        int16_t top_20;

                        if (flagP2 > 0)
                        {
                            void** item_114_2 = &data_22[2];
                            bool flag_3_1;

                            do
                            {
                                void* data_24 = *item_114_2;
                                memcpy(&item_ec, &item_68, 0x18);
                                item_108_2 = data_24;
                                void* data_25 = DynObj_UpdateDynTree_4(data_24);
                                item_dc_1 = *(data_25 + 0x10);
                                *(&item_dc_1 + 4) = *(data_25 + 0x14);
🚫🚫                                Sys_PushStack_11(DynObj_UpdateDynTree_4(item_108_2), &item_ec);
                                /* unimplemented  {call Sys_PushStack_11} */
🚫🚫                                /* unimplemented  {fld fp0, dword [context_val+0x70]} */
🚫🚫                                /* unimplemented  {fmul fp0, qword [&g_533a40]} */
⋯                                /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
                                    - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
                                bool c0_5 = /* bool c0_5 =
                                    unimplemented  {fcompp } f< unimplemented  {fcompp } */
                                    < /* bool c0_5 =
                                    unimplemented  {fcompp } f< unimplemented  {fcompp } */;
                                bool c2_7 = FCMP_UO(/* bool c2_7 = is_unordered.t(
                                    unimplemented  {fcompp }, unimplemented  {fcompp }) */,
                                    /* bool c2_7 = is_unordered.t(unimplemented  {fcompp },
                                    unimplemented  {fcompp }) */);
                                bool c3_5 = /* bool c3_5 =
                                    unimplemented  {fcompp } f== unimplemented  {fcompp } */
                                    == /* bool c3_5 =
                                    unimplemented  {fcompp } f== unimplemented  {fcompp } */;
                                /* unimplemented  {fcompp } */
                                /* unimplemented  {fcompp } */

                                if (!(*(&((c0_5 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa
                                    | (c3_5 ? 1 : 0) << 0xe | (top_20 & 7) << 0xb) + 1) & 0x41))
                                {
                                    item_100_2 = 1;
                                    break;
                                }

                                flag_3_1 = item_110_2 + 1 < flagP2;
                                item_110_2 += 1;
                                item_114_2 = &item_114_2[1];
                            } while (flag_3_1);
                        }

                        int32_t item_110_3 = 0;
                        int32_t* data_32 = *data_19;
                        item_104 = data_32;

                        if (data_32 > 0)
                        {
                            int32_t* item_114_3 = &data_19[2];
                            bool flag_4_1;

                            do
                            {
                                void* flagP3 = *item_114_3;
                                memcpy(&item_ec, &item_68, 0x18);
                                item_dc_1 = *(flagP3 + 0x30);
                                *(&item_dc_1 + 4) = *(flagP3 + 0x34);
🚫🚫                                Sys_PushStack_11(flagP3 + 0x20, &item_ec);
                                /* unimplemented  {call Sys_PushStack_11} */
🚫🚫                                /* unimplemented  {fld fp0, dword [context_val+0x70]} */
🚫🚫                                /* unimplemented  {fmul fp0, qword [&g_533a40]} */
⋯                                /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
                                    - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
                                bool c0_6 = /* bool c0_6 =
                                    unimplemented  {fcompp } f< unimplemented  {fcompp } */
                                    < /* bool c0_6 =
                                    unimplemented  {fcompp } f< unimplemented  {fcompp } */;
                                bool c2_8 = FCMP_UO(/* bool c2_8 = is_unordered.t(
                                    unimplemented  {fcompp }, unimplemented  {fcompp }) */,
                                    /* bool c2_8 = is_unordered.t(unimplemented  {fcompp },
                                    unimplemented  {fcompp }) */);
                                bool c3_6 = /* bool c3_6 =
                                    unimplemented  {fcompp } f== unimplemented  {fcompp } */
                                    == /* bool c3_6 =
                                    unimplemented  {fcompp } f== unimplemented  {fcompp } */;
                                /* unimplemented  {fcompp } */
                                /* unimplemented  {fcompp } */

                                if (!(*(&((c0_6 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa
                                    | (c3_6 ? 1 : 0) << 0xe | (top_20 & 7) << 0xb) + 1) & 0x41))
                                {
                                    *(flagP3 + 0x248) = 1;
                                    *(flagP3 + 0x23c) = 9;
                                    item_f4_1 = 1;
                                    break;
                                }

                                flag_4_1 = item_110_3 + 1 < item_104;
                                item_110_3 += 1;
                                item_114_3 = &item_114_3[1];
                            } while (flag_4_1);
                        }

                        int32_t item_110_4 = 0;
                        int32_t* data_38 = *data_20;
                        item_104 = data_38;

                        if (data_38 > 0)
                        {
                            int32_t* item_114_4 = data_20 + 8;
                            bool flag_5_1;

                            do
                            {
                                int32_t flagP4 = *item_114_4;
                                memcpy(&item_ec, &item_68, 0x18);
                                void* data_39 = DynObj_UpdateDynTree_4(flagP4);
                                item_dc_1 = *(data_39 + 0x10);
                                *(&item_dc_1 + 4) = *(data_39 + 0x14);
🚫🚫                                Sys_PushStack_11(DynObj_UpdateDynTree_4(flagP4), &item_ec);
                                /* unimplemented  {call Sys_PushStack_11} */
🚫🚫                                /* unimplemented  {fld fp0, dword [context_val+0x70]} */
🚫🚫                                /* unimplemented  {fmul fp0, qword [&g_533a40]} */
⋯                                /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
                                    - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
                                bool c0_7 = /* bool c0_7 =
                                    unimplemented  {fcompp } f< unimplemented  {fcompp } */
                                    < /* bool c0_7 =
                                    unimplemented  {fcompp } f< unimplemented  {fcompp } */;
                                bool c2_9 = FCMP_UO(/* bool c2_9 = is_unordered.t(
                                    unimplemented  {fcompp }, unimplemented  {fcompp }) */,
                                    /* bool c2_9 = is_unordered.t(unimplemented  {fcompp },
                                    unimplemented  {fcompp }) */);
                                bool c3_7 = /* bool c3_7 =
                                    unimplemented  {fcompp } f== unimplemented  {fcompp } */
                                    == /* bool c3_7 =
                                    unimplemented  {fcompp } f== unimplemented  {fcompp } */;
                                /* unimplemented  {fcompp } */
                                /* unimplemented  {fcompp } */

                                if (!(*(&((c0_7 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa
                                    | (c3_7 ? 1 : 0) << 0xe | (top_20 & 7) << 0xb) + 1) & 0x41))
                                {
                                    *(context + 0xa4) = flagP4;
                                    item_f0_1 = 1;
                                    break;
                                }

                                flag_5_1 = item_110_4 + 1 < item_104;
                                item_110_4 += 1;
                                item_114_4 = &item_114_4[1];
                            } while (flag_5_1);
                        }

                        int32_t item_18;

                        if (!item_18)
                            AI_CheckSector_26(context);
                        else
                        {
                            if (!item_f4_1 && !item_f0_1)
                            {
                                void* item_12c_9 = context;

                                if (AI_CheckHearing_27(&item_68))
                                    AI_AlertAllies_26(context, &item_68);
                            }

                            if (!item_100_2)
                            {
                                void* data_50 = item_70;

                                if (!data_50)
                                    AI_CheckSector_26(context);
                                else
                                    AI_FireWeapon_27(context, data_50);
                            }
                            else
                            {
                                AI_FireWeapon_27(context, item_108_2);
                                AI_UpdateOrders_26(context, item_108_2);
                            }
                        }
                    }
                }
            }
        }
    }

    int32_t result = *g_c28f8c;
    *(context + 0xa8) = result;
    return result;
}
