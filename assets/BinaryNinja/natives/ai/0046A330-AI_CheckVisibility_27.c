// Original IGI.EXE function: AI_CheckVisibility_27 (VA 0x0046A330; static CFG gate PASS, CFG score 0.962).
#include "AI_CheckVisibility_27.h"
int32_t AI_CheckVisibility_27(void* a1)

{
    AI_CombatTarget_29();
    char v_109 = 0;
    int16_t idx;

    if (!Physics_ApplyImpulse_4(AI_CheckVisibility_28()))
    {
        int32_t dstD1 = 0;
        int32_t v_108_1 = 0;

        if (AI_AlertAllies_28() & 0x10)
        {
            if (*(a1 + 0x80))
            {
                dstD1 = 1;
                *(a1 + 0x80) = 0;
            }
            else
            {
                void* valA3 = AI_CombatTarget_28();
                v_109 = 1;
                *(a1 + 0x88) = *(valA3 + 0x24);
                *(a1 + 0x8c) = *(valA3 + 0x28);
                *(a1 + 0x80) = 0xd;
            }
        }

        if (AI_AlertAllies_28() & 0x20)
        {
            if (*(a1 + 0x84))
            {
                v_108_1 = 1;
                *(a1 + 0x84) = 0;
            }
            else
                *(a1 + 0x84) = 0xd;
        }

        int32_t objC2 = *g_c28f8c;
        int16_t valA6;

        if (!(0x100 & objC2))
        {
            if (dstD1)
                goto label_46a3f0;

            valA6 = g_5bdda0;
        }
        else if (!(*(a1 + 0xa8) & 0x100) || dstD1)
        {
        label_46a3f0:
            valA6 = g_5bdda0;

            if (valA6 < 3)
            {
                int32_t v_128_1 = objC2;
                g_5bdda0 = valA6 + 1;
                int16_t top_1 = 0xffff;
                long double fp0_1;
                bool c1_1;
                bool c2_1;
                fp0_1 = __fptan(*(((valA6 + 1) << 2) + &g_53f750));

                if (!c2_1)
                    top_1 = 0xfffe;

🚫🚫🚫                /* unimplemented  {fstp fp0, fp0} */
                /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫                float v_128_2 = /* float v_128_2 = unimplemented  {fstp dword [esp], fp0} */;
                /* unimplemented  {fstp dword [esp], fp0} */
                idx = top_1 + 2;
                mapcomp_05(a1, v_128_2);
                AI_TakeCover_24(*(a1 + 0x9c));
                valA6 = g_5bdda0;
            }
        }
        else
            valA6 = g_5bdda0;

        if (((0x200 & *g_c28f8c && !(*(a1 + 0xa8) & 0x200)) || v_108_1) && valA6)
        {
            int32_t v_128_3 = 0x200;
            g_5bdda0 = valA6 - 1;
🚫🚫            int16_t top_3 = idx - 1;
            /* unimplemented  {fld fp0, dword [tmpD*4+0x53f750]} */
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
🚫🚫🚫            float v_128_4 = /* float v_128_4 = unimplemented  {fstp dword [esp], fp0} */;
            /* unimplemented  {fstp dword [esp], fp0} */
            idx = top_3 + 2;
            mapcomp_05(a1, v_128_4);
            AI_TakeCover_24(*(a1 + 0x9c));
        }
    }

    int32_t valA9 = *(a1 + 0x80);

    if (valA9 > 0)
        *(a1 + 0x80) = valA9 - 1;

    int32_t valA11 = *(a1 + 0x84);

    if (valA11 > 0)
        *(a1 + 0x84) = valA11 - 1;

    if (!v_109)
    {
        void** valA51 = *(a1 + 0x90);

        if (valA51)
        {
            void* valA52 = *valA51;

            if (!valA52)
                AI_CheckSector_26(a1);
            else
                AI_UpdateOrders_26(a1, valA52);
        }
    }
    else
    {
        float objC4 = *(a1 + 0x88);
        float tmpD3 = *(a1 + 0x8c);
        float* valA14 = SoundSys_PlaySoundSample_12(AI_CheckVisibility_29());
🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x18]} */
⋯        long double f0_1 = *valA14;
        /* unimplemented  {fcomp fp0, dword [objC]} f- f0_1 */ - f0_1;
        bool c0_1 = /* bool c0_1 = unimplemented  {fcomp fp0, dword [objC]} f< f0_1 */ < f0_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [objC]}, f0_1) */, f0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp fp0, dword [objC]} f== f0_1 */ == f0_1;
        /* unimplemented  {fcomp fp0, dword [objC]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
⋯            long double f1_1 = valA14[1];
            /* unimplemented  {fcomp fp0, dword [objC+0x4]} f- f1_1 */ - f1_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcomp fp0, dword [objC+0x4]} f< f1_1 */ < f1_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [objC+0x4]}, f1_1) */, f1_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcomp fp0, dword [objC+0x4]} f== f1_1 */ == f1_1;
            /* unimplemented  {fcomp fp0, dword [objC+0x4]} */

            if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (idx & 7) << 0xb) + 1) & 1))
            {
🚫🚫                /* unimplemented  {fld fp0, dword [objC+0x8]} */
🚫🚫                /* unimplemented  {fadd dword [objC]} */
⋯                long double f2_1 = objC4;
                /* unimplemented  {fcomp fp0, dword [esp+0x14]} f- f2_1 */ - f2_1;
                bool c0_3 = /* bool c0_3 =
                    unimplemented  {fcomp fp0, dword [esp+0x14]} f< f2_1 */ < f2_1;
                bool c2_5 = FCMP_UO(/* bool c2_5 =
                    is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x14]}, f2_1) */,
                    f2_1);
                bool c3_3 = /* bool c3_3 =
                    unimplemented  {fcomp fp0, dword [esp+0x14]} f== f2_1 */ == f2_1;
                /* unimplemented  {fcomp fp0, dword [esp+0x14]} */

                if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (idx & 7) << 0xb) + 1) & 0x41))
                {
🚫🚫                    /* unimplemented  {fld fp0, dword [objC+0xc]} */
🚫🚫                    /* unimplemented  {fadd dword [objC+0x4]} */
⋯                    long double f3_1 = tmpD3;
                    /* unimplemented  {fcomp fp0, dword [esp+0x10]} f- f3_1 */ - f3_1;
                    bool c0_4 = /* bool c0_4 =
                        unimplemented  {fcomp fp0, dword [esp+0x10]} f< f3_1 */ < f3_1;
                    bool c2_6 = FCMP_UO(/* bool c2_6 =
                        is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x10]}, f3_1) */,
                        f3_1);
                    bool c3_4 = /* bool c3_4 =
                        unimplemented  {fcomp fp0, dword [esp+0x10]} f== f3_1 */ == f3_1;
                    /* unimplemented  {fcomp fp0, dword [esp+0x10]} */

                    if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | (idx & 7) << 0xb) + 1) & 0x41))
                    {
                        int32_t valA17 = SoundSys_Update3DPosition_12(AI_CheckVisibility_29());
🚫🚫                        Display_ClearSurfaces_4();
                        /* unimplemented  {call Display_ClearSurfaces_4} */
🚫🚫🚫                        float v_100_1 = /* float v_100_1 =
                            unimplemented  {fstp dword [esp+0x28], fp0} */;
                        /* unimplemented  {fstp dword [esp+0x28], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x18]} */
🚫🚫                        /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫                        double v_fc_1 = /* double v_fc_1 =
                            unimplemented  {fstp qword [esp+0x2c], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [valA+0x4]} */
🚫🚫                        /* unimplemented  {fsubr fp0, qword [esp+0x2c]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [flagP+0x40]} */
🚫🚫🚫                        double v_fc_2 = /* double v_fc_2 =
                            unimplemented  {fstp qword [esp+0x2c], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [valA+0x4]} */
🚫🚫                        /* unimplemented  {fdivr fp0, qword [esp+0x2c]} */
🚫🚫🚫                        double v_b8 = /* double v_b8 =
                            unimplemented  {fstp qword [esp+0x70], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x70], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x14]} */
🚫🚫                        /* unimplemented  {fadd fp0, fp0} */
🚫🚫🚫                        double v_fc_3 = /* double v_fc_3 =
                            unimplemented  {fstp qword [esp+0x2c], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [valA+0x8]} */
🚫🚫                        /* unimplemented  {fsubr fp0, qword [esp+0x2c]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [esp+0x28]} */
🚫🚫                        /* unimplemented  {fmul fp0, dword [flagP+0x40]} */
🚫🚫🚫                        /* unimplemented  {fmulp fp1, fp0} */
                        /* unimplemented  {fmulp fp1, fp0} */
🚫🚫🚫                        int32_t v_fc_4 = /* int32_t v_fc_4 =
                            (unimplemented  {fstp qword [esp+0x2c], fp0}).d */;
                        /* unimplemented  {fstp qword [esp+0x2c], fp0} */
🚫🚫                        /* unimplemented  {fild fp0, dword [valA+0x4]} */
🚫🚫                        /* unimplemented  {fdivr fp0, qword [esp+0x2c]} */
🚫🚫🚫                        double v_b0_1 = /* double v_b0_1 =
                            unimplemented  {fstp qword [esp+0x78], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x78], fp0} */
                        int32_t* v_104 = AI_CombatTarget_18();
                        int32_t** valA19 = Weapon_UpdateMuzzleFlash_4();
                        int32_t valA20 = Env_ActivateEntity_2();
                        int32_t v_100_2 = 0;
                        int32_t v_f4_1 = 0;
                        int32_t v_f0_1 = 0;
                        void* const v_108_2 = nullptr;
                        double v_a0;
                        memcpy(&v_a0, valA17 + 0x28, 0x18);
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x4]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [esp+0x78]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [esp+0x70]} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fadd dword [flagP+0x8]} */
🚫🚫🚫                        double v_ec = /* double v_ec =
                            unimplemented  {fstp qword [esp+0x3c], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x3c], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x10]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [esp+0x78]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0xc]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [esp+0x70]} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fadd dword [flagP+0x14]} */
🚫🚫🚫                        double v_e4_1 = /* double v_e4_1 =
                            unimplemented  {fstp qword [esp+0x48], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x48], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x1c]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [esp+0x7c]} */
🚫🚫                        /* unimplemented  {fld fp0, dword [flagP+0x18]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [esp+0x74]} */
🚫🚫🚫                        /* unimplemented  {faddp fp1, fp0} */
                        /* unimplemented  {faddp fp1, fp0} */
🚫🚫                        /* unimplemented  {fadd dword [flagP+0x20]} */
🚫🚫🚫                        double v_dc_1 = /* double v_dc_1 =
                            unimplemented  {fstp qword [esp+0x50], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x50], fp0} */
                        double v_d0;
                        memcpy(&v_d0, &v_ec, 0x18);
                        Sys_FreeMemory_11(&v_d0);
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0x5c]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [&g_533548]} */
🚫🚫                        v_d0 = /* v_d0 = unimplemented  {fst qword [esp+0x54], fp0} */;
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0x5c]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [&g_533548]} */
🚫🚫🚫                        double v_c8_1 = /* double v_c8_1 =
                            unimplemented  {fstp qword [esp+0x6c], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x6c], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0x74]} */
🚫🚫                        /* unimplemented  {fmul fp0, qword [&g_533548]} */
🚫🚫🚫                        double v_c0_1 = /* double v_c0_1 =
                            unimplemented  {fstp qword [esp+0x80], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x80], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0xa0]} */
🚫🚫                        /* unimplemented  {fadd fp0, fp1} */
🚫🚫🚫                        double v_88 = /* double v_88 =
                            unimplemented  {fstp qword [esp+0xb8], fp0} */;
                        /* unimplemented  {fstp qword [esp+0xb8], fp0} */
🚫🚫🚫                        /* unimplemented  {fstp fp0, fp0} */
                        /* unimplemented  {fstp fp0, fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0xa8]} */
🚫🚫                        /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫                        double v_80 = /* double v_80 =
                            unimplemented  {fstp qword [esp+0xc0], fp0} */;
                        /* unimplemented  {fstp qword [esp+0xc0], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0xb0]} */
🚫🚫                        /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫                        double v_78_1 = /* double v_78_1 =
                            unimplemented  {fstp qword [esp+0xc8], fp0} */;
                        /* unimplemented  {fstp qword [esp+0xc8], fp0} */
                        void* v_70;
                        DynObj_FindSymbol_11(Level_StartMission_4(), &v_70, &v_a0, &v_88, 1, 0xff,
                            nullptr, 0xffffffff);
                        int32_t* valA22 = v_104;
                        int32_t v_110_2 = 0;
                        int32_t flagP2 = *valA22;
                        double v_68[0xa];
                        int16_t top_20;

                        if (flagP2 > 0)
                        {
                            void** v_114_2 = &valA22[2];
                            bool cond_3_1;

                            do
                            {
                                void* valA24 = *v_114_2;
                                memcpy(&v_ec, &v_68, 0x18);
                                v_108_2 = valA24;
                                void* valA25 = DynObj_UpdateDynTree_4(valA24);
                                v_dc_1 = *(valA25 + 0x10);
                                *(&v_dc_1 + 4) = *(valA25 + 0x14);
🚫🚫                                Sys_PushStack_11(DynObj_UpdateDynTree_4(v_108_2), &v_ec);
                                /* unimplemented  {call Sys_PushStack_11} */
🚫🚫                                /* unimplemented  {fld fp0, dword [ctxB+0x70]} */
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
                                    v_100_2 = 1;
                                    break;
                                }

                                cond_3_1 = v_110_2 + 1 < flagP2;
                                v_110_2 += 1;
                                v_114_2 = &v_114_2[1];
                            } while (cond_3_1);
                        }

                        int32_t v_110_3 = 0;
                        int32_t* valA32 = *valA19;
                        v_104 = valA32;

                        if (valA32 > 0)
                        {
                            int32_t* v_114_3 = &valA19[2];
                            bool cond_4_1;

                            do
                            {
                                void* flagP3 = *v_114_3;
                                memcpy(&v_ec, &v_68, 0x18);
                                v_dc_1 = *(flagP3 + 0x30);
                                *(&v_dc_1 + 4) = *(flagP3 + 0x34);
🚫🚫                                Sys_PushStack_11(flagP3 + 0x20, &v_ec);
                                /* unimplemented  {call Sys_PushStack_11} */
🚫🚫                                /* unimplemented  {fld fp0, dword [ctxB+0x70]} */
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
                                    v_f4_1 = 1;
                                    break;
                                }

                                cond_4_1 = v_110_3 + 1 < v_104;
                                v_110_3 += 1;
                                v_114_3 = &v_114_3[1];
                            } while (cond_4_1);
                        }

                        int32_t v_110_4 = 0;
                        int32_t* valA38 = *valA20;
                        v_104 = valA38;

                        if (valA38 > 0)
                        {
                            int32_t* v_114_4 = valA20 + 8;
                            bool cond_5_1;

                            do
                            {
                                int32_t flagP4 = *v_114_4;
                                memcpy(&v_ec, &v_68, 0x18);
                                void* valA39 = DynObj_UpdateDynTree_4(flagP4);
                                v_dc_1 = *(valA39 + 0x10);
                                *(&v_dc_1 + 4) = *(valA39 + 0x14);
🚫🚫                                Sys_PushStack_11(DynObj_UpdateDynTree_4(flagP4), &v_ec);
                                /* unimplemented  {call Sys_PushStack_11} */
🚫🚫                                /* unimplemented  {fld fp0, dword [ctxB+0x70]} */
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
                                    *(a1 + 0xa4) = flagP4;
                                    v_f0_1 = 1;
                                    break;
                                }

                                cond_5_1 = v_110_4 + 1 < v_104;
                                v_110_4 += 1;
                                v_114_4 = &v_114_4[1];
                            } while (cond_5_1);
                        }

                        int32_t v_18;

                        if (!v_18)
                            AI_CheckSector_26(a1);
                        else
                        {
                            if (!v_f4_1 && !v_f0_1)
                            {
                                void* v_12c_9 = a1;

                                if (AI_CheckHearing_27(&v_68))
                                    AI_AlertAllies_26(a1, &v_68);
                            }

                            if (!v_100_2)
                            {
                                void* valA50 = v_70;

                                if (!valA50)
                                    AI_CheckSector_26(a1);
                                else
                                    AI_FireWeapon_27(a1, valA50);
                            }
                            else
                            {
                                AI_FireWeapon_27(a1, v_108_2);
                                AI_UpdateOrders_26(a1, v_108_2);
                            }
                        }
                    }
                }
            }
        }
    }

    int32_t result = *g_c28f8c;
    *(a1 + 0xa8) = result;
    return result;
}
