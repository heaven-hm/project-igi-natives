// Original IGI.EXE function: Elevator_Setup (VA 0x0043D280; static CFG gate PASS, CFG score 0.975).
#include "Elevator_Setup.h"
uint32_t Elevator_Setup(int32_t* a1)

{
    int32_t* flagP = a1;
    void* valA1 = Physics_CheckHullCollision(flagP[0x60]);
    int32_t v_18 = 0;
    int32_t v_20 = 0;
    a1 = 1;
    int32_t v_14 = 0;
    int32_t v_1c = flagP[0x61];
    uint32_t valA2 = Frames_GetUpdateCounter();

    if (flagP[0x191] != valA2)
    {
        uint32_t valA3 = Frames_GetUpdateCounter();
        int32_t* i = flagP[2];
        flagP[0x191] = valA3;

        if (*i && i)
        {
            int32_t tmpD1 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i;
                void* valA7;

                if (!srcS1)
                    valA7 = nullptr;
                else
                {
                    int32_t valA4 = *srcS1;
                    int32_t valA5 = -(valA4);
                    valA7 = (valA5 - valA5) & srcS1;
                }

                *((tmpD1 << 2) + &g_afa6e0) = valA7;
                int32_t tmpD2 = tmpD1 + 1;
                int32_t valA8 = 0;
                g_afa7e0 = tmpD2;
                valA8 = i[7];
                int32_t valA9 = *((valA8 << 2) + &g_a970e0);

                if (valA9)
                {
                    valA9(i);
                    tmpD2 = g_afa7e0;
                }

                i = *((tmpD2 << 2) + &g_afa6dc);
                tmpD1 = tmpD2 - 1;
                g_afa7e0 = tmpD1;
            } while (i);
        }

        float v_c_1 = Physics_ApplyImpulse(flagP[0x60], flagP[0x67]);
        int16_t top_1 = 0;
        int32_t i_1 = 0;
        int32_t* dstD1 = &flagP[0x71];

        do
        {
            if (Script_FormatString_6(dstD1))
            {
                Script_SpawnNewTask_7(dstD1, flagP);
🚫🚫🚫                char v_8_1 = /* char v_8_1 =
                    (unimplemented  {fistp qword [esp+0x30], fp0}).b */;
                /* unimplemented  {fistp qword [esp+0x30], fp0} */
                top_1 += 1;
                *(i_1 + flagP + 0x1b0) = v_8_1;
            }

            i_1 += 1;
            dstD1 = &dstD1[0x14];
        } while (i_1 < 0xa);

        if (Script_FormatString_6(&flagP[0x139]))
        {
            Script_SpawnNewTask_7(&flagP[0x139], flagP);
🚫🚫🚫            int32_t v_8_2 = /* int32_t v_8_2 =
                (unimplemented  {fistp qword [esp+0x30], fp0}).d */;
            /* unimplemented  {fistp qword [esp+0x30], fp0} */
            top_1 += 1;
            v_18 = v_8_2;
        }

        if (Script_FormatString_6(&flagP[0x14d]))
        {
            Script_SpawnNewTask_7(&flagP[0x14d], flagP);
🚫🚫🚫            int32_t v_8_3 = /* int32_t v_8_3 =
                (unimplemented  {fistp qword [esp+0x30], fp0}).d */;
            /* unimplemented  {fistp qword [esp+0x30], fp0} */
            top_1 += 1;
            v_20 = v_8_3;
        }

        if (Script_FormatString_6(&flagP[0x161]))
        {
            Script_SpawnNewTask_7(&flagP[0x161], flagP);
🚫🚫🚫            int32_t v_8_4 = /* int32_t v_8_4 =
                (unimplemented  {fistp qword [esp+0x30], fp0}).d */;
            /* unimplemented  {fistp qword [esp+0x30], fp0} */
            top_1 += 1;
            a1 = v_8_4;
        }

        if (v_18 && !flagP[0x175])
        {
            int32_t valA17 = flagP[0x67];

            if (valA17 < valA1 - 1)
                flagP[0x67] = valA17 + 1;
        }
        else if (!v_20 || *(flagP + 0x5d5))
        {
            for (int32_t i_2 = 0; i_2 < 0xa; i_2 += 1)
            {
                if (*(i_2 + flagP + 0x1b0))
                    flagP[0x67] = i_2;
            }
        }
        else
        {
            int32_t valA21 = flagP[0x67];

            if (valA21 > 0)
                flagP[0x67] = valA21 - 1;
        }

        flagP[0x175] = v_18;
        *(flagP + 0x5d5) = v_20;
        memcpy(&flagP[0x42], &flagP[8], 0x18);
        memcpy(&flagP[0x52], &flagP[0x1c], 0x28);

        if (a1)
        {
            Vehicle_CheckFlightDynamics_8(flagP);
            top_1 -= 1;
        }

        int32_t tmpD6 = flagP[0x68];
        int32_t valA24 = flagP[0x69];
        flagP[0x68] = 0;
        flagP[0x69] = 0;
        int32_t srcS7 = 1;
        flagP[0x6a] = tmpD6;
        flagP[0x6b] = valA24;
        int32_t v_20_1 = 1;

        if (valA1 > 1)
        {
🚫🚫            while (true)
            {
                Physics_ApplyImpulse(flagP[0x60], srcS7);
                /* unimplemented  {call Physics_ApplyImpulse} */
🚫🚫🚫🚫🚫                long double f2_1 = flagP[0x61];
                /* unimplemented  {fcom fp0, dword [flagP+0x184]} f- f2_1 */ - f2_1;
                bool c0_1 = /* bool c0_1 =
                    unimplemented  {fcom fp0, dword [flagP+0x184]} f< f2_1 */ < f2_1;
                bool c2_1 = FCMP_UO(/* bool c2_1 =
                    is_unordered.t(unimplemented  {fcom fp0, dword [flagP+0x184]}, f2_1) */,
                    f2_1);
                bool c3_1 = /* bool c3_1 =
                    unimplemented  {fcom fp0, dword [flagP+0x184]} f== f2_1 */ == f2_1;

                if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | ((top_1 - 1) & 7) << 0xb) + 1) & 0x41))
                {
                    int32_t v_20_3 = srcS7;
🚫🚫                    /* unimplemented  {fild fp0, dword [esp+0x10]} */
🚫🚫                    /* unimplemented  {fld fp0, fp1} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [flagP+0x184]} */
🚫🚫🚫🚫                    /* unimplemented  {fxch fp0, fp2} */
                    /* unimplemented  {fxch fp0, fp2} */
🚫🚫                    /* unimplemented  {fsub fp0, dword [esp+0x1c]} */
🚫🚫🚫                    /* unimplemented  {fdivp fp2, fp0} */
                    /* unimplemented  {fdivp fp2, fp0} */
🚫🚫🚫🚫                    /* unimplemented  {fxch fp0, fp1} */
                    /* unimplemented  {fxch fp0, fp1} */
🚫🚫🚫                    /* unimplemented  {fsubp fp1, fp0} */
                    /* unimplemented  {fsubp fp1, fp0} */
🚫🚫🚫                    *(flagP + 0x1a0) = /* *(flagP + 0x1a0) =
                        unimplemented  {fstp qword [flagP+0x1a0], fp0} */;
                    /* unimplemented  {fstp qword [flagP+0x1a0], fp0} */
                    break;
                }

🚫🚫🚫                float v_14_1 = /* float v_14_1 = unimplemented  {fstp dword [esp+0x1c], fp0} */;
                /* unimplemented  {fstp dword [esp+0x1c], fp0} */
                srcS7 += 1;

                if (srcS7 >= valA1)
                {
                    int32_t v_20_2 = srcS7;
                    break;
                }
            }
        }

        if (srcS7 == valA1)
        {
            void* v_10_1 = valA1 - 1;
🚫🚫            /* unimplemented  {fild fp0, dword [esp+0x1c]} */
🚫🚫🚫            *(flagP + 0x1a0) =
            /* unimplemented  {fstp qword [flagP+0x1a0], fp0} */
        }

🚫🚫        Physics_ApplyImpulse(flagP[0x60], flagP[0x67]);
        /* unimplemented  {call Physics_ApplyImpulse} */
🚫🚫🚫        float v_20_4 = /* float v_20_4 = unimplemented  {fstp dword [esp+0x14], fp0} */;
        /* unimplemented  {fstp dword [esp+0x14], fp0} */
🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x184]} */
⋯        long double f3_1 = v_20_4;
        /* unimplemented  {fcomp fp0, dword [esp+0x14]} f- f3_1 */ - f3_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, dword [esp+0x14]} f< f3_1 */ < f3_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x14]}, f3_1) */, f3_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, dword [esp+0x14]} f== f3_1 */ == f3_1;
        /* unimplemented  {fcomp fp0, dword [esp+0x14]} */
        char valA30;

        valA30 = *(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 0x40 ? 0 : 1;

        *(flagP + 0x5d6) = valA30;
        valA2 = flagP[0x18f];

        if (!valA30)
        {
            if (valA2)
            {
                valA2 = SoundSys_SetFrequency_7(valA2);
                flagP[0x18f] = 0;
            }
        }
        else if (!valA2)
        {
            valA2 = SoundSys_SetMasterVolume_7(Script_FormatString(), flagP + 0x619);
            flagP[0x18f] = valA2;

            if (valA2)
                valA2 = SoundSys_StopSoundSample_7(valA2, &flagP[8]);
        }

🚫🚫        /* unimplemented  {fld fp0, dword [esp+0x10]} */
⋯        long double f4_1 = v_c_1;
        /* unimplemented  {fcomp fp0, dword [esp+0x20]} f- f4_1 */ - f4_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp fp0, dword [esp+0x20]} f< f4_1 */ < f4_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0x20]}, f4_1) */, f4_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp fp0, dword [esp+0x20]} f== f4_1 */ == f4_1;
        /* unimplemented  {fcomp fp0, dword [esp+0x20]} */
        *(flagP + 0x5d7) = 0;
        valA2 = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (*(&valA2 + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
⋯            long double f6_1 = flagP[0x61];
            /* unimplemented  {fcomp fp0, dword [flagP+0x184]} f- f6_1 */ - f6_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcomp fp0, dword [flagP+0x184]} f< f6_1 */ < f6_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x184]}, f6_1) */, f6_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcomp fp0, dword [flagP+0x184]} f== f6_1 */ == f6_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x184]} */
            valA2 = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb;

            if (!(*(&valA2 + 1) & 0x40))
            {
                valA2 = SoundSys_SetMasterVolume_7(Script_FormatString(), flagP + 0x5d9);
                *(flagP + 0x5d7) = 1;

                if (valA2)
                    valA2 = SoundSys_StopSoundSample_7(valA2, &flagP[8]);
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x184]} */
⋯        long double f5_1 = v_20_4;
        /* unimplemented  {fcomp fp0, dword [esp+0xc]} f- f5_1 */ - f5_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcomp fp0, dword [esp+0xc]} f< f5_1 */ < f5_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0xc]}, f5_1) */, f5_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcomp fp0, dword [esp+0xc]} f== f5_1 */ == f5_1;
        /* unimplemented  {fcomp fp0, dword [esp+0xc]} */
        flagP[0x176] = 0;
        valA2 = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (*(&valA2 + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [esp+0x10]} */
⋯            long double f8_1 = flagP[0x61];
            /* unimplemented  {fcomp fp0, dword [flagP+0x184]} f- f8_1 */ - f8_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp fp0, dword [flagP+0x184]} f< f8_1 */ < f8_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0x184]}, f8_1) */, f8_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp fp0, dword [flagP+0x184]} f== f8_1 */ == f8_1;
            /* unimplemented  {fcomp fp0, dword [flagP+0x184]} */
            valA2 = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb;

            if (!(*(&valA2 + 1) & 0x40))
            {
                valA2 = SoundSys_SetMasterVolume_7(Script_FormatString(), flagP + 0x5f9);
                flagP[0x176] = 1;

                if (valA2)
                    valA2 = SoundSys_StopSoundSample_7(valA2, &flagP[8]);
            }
        }

🚫🚫        /* unimplemented  {fld fp0, dword [flagP+0x184]} */
⋯        long double f7_1 = v_20_4;
        /* unimplemented  {fcomp fp0, dword [esp+0xc]} f- f7_1 */ - f7_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcomp fp0, dword [esp+0xc]} f< f7_1 */ < f7_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcomp fp0, dword [esp+0xc]}, f7_1) */, f7_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcomp fp0, dword [esp+0xc]} f== f7_1 */ == f7_1;
        /* unimplemented  {fcomp fp0, dword [esp+0xc]} */
        valA2 = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (*(&valA2 + 1) & 0x40)
        {
            valA2 = *(flagP + 0x5d6);

            if (!valA2 && a1 == flagP[0x190])
            {
                int32_t valA36 = flagP[0x6f] + 1;
                flagP[0x190] = a1;
                flagP[0x6f] = valA36;
                return valA36;
            }
        }

        flagP[0x6f] = 0;
        flagP[0x190] = a1;
    }

    return valA2;
}
