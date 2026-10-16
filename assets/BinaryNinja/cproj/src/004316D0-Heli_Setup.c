#include "gi_platform.h"
#include "004316D0-Heli_Setup.h"
char* Heli_Setup(int80_t a1 , char* a2)

{
    double* ctxB = a2;
    char valA = Script_FormatString_6(&ctxB[0xff]);
    int16_t idx;

    if (valA)
    {
        Script_SpawnNewTask_7(&ctxB[0xff], ctxB);
        idx = 1;
    }

    if (valA && !a1)
        Vehicle_InitPlane_2(ctxB);
    else if (!(*(int32_t*)(uintptr_t)(ctxB + 0x74c)))
    {
        struct status_msg* valA2 = SoundSys_SetMasterVolume_7(ctxB, "helicopter_1");

        if (valA2)
            (*(int32_t*)(uintptr_t)(ctxB + 0x74c)) = QTask_LinkEventHandler_2(valA2);
    }

    int16_t valA3;
    valA3 = ctxB[0xea];
    double* v_50;
    double v_28;

    if (valA3)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x9c]} */
🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0xa0]} */
⋯        /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
            - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
        bool c0_1 = /* bool c0_1 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_1 =
            unimplemented  {fcompp } f< unimplemented  {fcompp } */;
        bool c2_1 = FCMP_UO(/* bool c2_1 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */, /* bool c2_1 =
            is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_1 =
            unimplemented  {fcompp } f== unimplemented  {fcompp } */;
        /* unimplemented  {fcompp } */
        /* unimplemented  {fcompp } */
        int16_t top_4;

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (idx & 7) << 0xb) + 1) & 1))
        {
🚫🚫            top_4 = idx - 1;
            /* unimplemented  {fld fp0, dword [ctxB+0xa0]} */
        }
        else
        {
🚫🚫            top_4 = idx - 1;
            /* unimplemented  {fld fp0, dword [ctxB+0x9c]} */
        }

🚫🚫        /* unimplemented  {fld fp0, dword [ctxB+0x98]} */
⋯        /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */
            - /* unimplemented  {fcomp fp0, fp1} f- unimplemented  {fcomp fp0, fp1} */;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */ < /* bool c0_2 =
            unimplemented  {fcomp fp0, fp1} f< unimplemented  {fcomp fp0, fp1} */;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */,
            /* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp fp0, fp1}, unimplemented  {fcomp fp0, fp1}) */);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */
            == /* bool c3_2 = unimplemented  {fcomp fp0, fp1} f== unimplemented  {fcomp fp0, fp1} */;
        /* unimplemented  {fcomp fp0, fp1} */
🚫🚫🚫        /* unimplemented  {fstp fp0, fp0} */
        /* unimplemented  {fstp fp0, fp0} */

        if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [ctxB+0x9c]} */
🚫🚫            /* unimplemented  {fld fp0, dword [ctxB+0xa0]} */
⋯            /* unimplemented  {fcompp } f- unimplemented  {fcompp } */
                - /* unimplemented  {fcompp } f- unimplemented  {fcompp } */;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcompp } f< unimplemented  {fcompp } */ < /* bool c0_3 =
                unimplemented  {fcompp } f< unimplemented  {fcompp } */;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */,
                /* bool c2_3 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp }) */);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcompp } f== unimplemented  {fcompp } */ == /* bool c3_3 =
                unimplemented  {fcompp } f== unimplemented  {fcompp } */;
            /* unimplemented  {fcompp } */
            /* unimplemented  {fcompp } */

            if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((top_4 + 1) & 7) << 0xb) + 1) & 1))
🚫🚫                /* unimplemented  {fld fp0, dword [ctxB+0xa0]} */
            else
🚫🚫                /* unimplemented  {fld fp0, dword [ctxB+0x9c]} */
        }
        else
🚫🚫            /* unimplemented  {fld fp0, dword [ctxB+0x98]} */

🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x44], fp0} */;
        /* unimplemented  {fstp dword [esp+0x44], fp0} */
🚫🚫        Render_ComputeNormals((*(int32_t*)(uintptr_t)(ctxB + 0x6c)));
        /* unimplemented  {call Render_ComputeNormals} */
        void* objC1 = (*(int32_t*)(uintptr_t)(ctxB + 0x1b4));
        int32_t valA5 = (*(int32_t*)(uintptr_t)(ctxB + 0x754));
🚫🚫        /* unimplemented  {fmul fp0, dword [esp+0x48]} */
        void* srcS1 = *(objC1 + 0x2d4);
        int32_t i_3 = *(srcS1 + 0x150);
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x44], fp0} */;
        /* unimplemented  {fstp dword [esp+0x44], fp0} */

        if (valA5 != 0xffffffff)
        {
            (*(int32_t*)(uintptr_t)(ctxB + 0x754)) = valA5 - 1;

            if (valA5 == 1)
                return QTask_FindType(ctxB);
        }
        else
        {
            if (!i_3)
            {
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x44]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533700]} */
                uint32_t v_44_7 = 0;
                int32_t v_48_4 = 0x47c80000;
                int32_t v_4c_2 = 0;
                v_50 = 0xffffffff;
                void* v_68_1 = objC1;
🚫🚫🚫                float v_68_2 = /* float v_68_2 = unimplemented  {fstp dword [esp], fp0} */;
                /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x6c]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5335ac]} */
                void* v_6c_1 = objC1;
🚫🚫🚫                uint32_t v_6c_2 = /* uint32_t v_6c_2 =
                    unimplemented  {fstp dword [esp], fp0} */;
                /* unimplemented  {fstp dword [esp], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [esp+0x70]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533514[4]]} */
                void* v_70_1 = objC1;
🚫🚫🚫                uint32_t v_70_2 = /* uint32_t v_70_2 =
                    unimplemented  {fstp dword [esp], fp0} */;
                /* unimplemented  {fstp dword [esp], fp0} */
                FX_SmokeEmit(&ctxB[4], 1, 0, 0x3f800000, v_70_2, v_6c_2, v_68_2, 3, 1, nullptr,
                    "1009_01_1", "explo_03_l", v_50, v_4c_2, v_48_4, v_44_7);
            }
            else
            {
                QTask_DispatchEvent_2();

                if (i_3 > 0)
                {
                    int32_t* dstD1 = srcS1 + 0x128;
                    int32_t i;

                    do
                    {
                        uint32_t valA7 = Sys_FreeMemory_14(Level_SetMission_5(), 0x1e);
                        int32_t tmpD1 = *dstD1;
                        v_50 = ctxB;
                        WeaponType_UpdateAnim(&v_28, v_50, tmpD1);
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0x2c]} */
🚫🚫                        /* unimplemented  {fadd qword [ctxB+0x20]} */
🚫🚫🚫                        v_28 = /* v_28 = unimplemented  {fstp qword [esp+0x44], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x44], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0x4c]} */
🚫🚫                        /* unimplemented  {fadd qword [ctxB+0x28]} */
🚫🚫🚫                        double v_20_1 = /* double v_20_1 =
                            unimplemented  {fstp qword [esp+0x64], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x64], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [esp+0x6c]} */
🚫🚫                        /* unimplemented  {fadd qword [ctxB+0x30]} */
🚫🚫🚫                        double v_18_1 = /* double v_18_1 =
                            unimplemented  {fstp qword [esp+0x7c], fp0} */;
                        /* unimplemented  {fstp qword [esp+0x7c], fp0} */
                        FX_SmokeEmit(&v_28, 1, valA7, 0x3f800000, 0x46400000, 0x45400000,
                            0x45400000, 3, 2, nullptr, "1009_01_1", "explo_03_l", 0xffffffff, 0,
                            0x47c80000, 0);
                        dstD1 = &dstD1[1];
                        i = i_3;
                        i_3 -= 1;
                    } while (i != 1);
                }
            }

            (*(int32_t*)(uintptr_t)(ctxB + 0x754)) = 0x1e;
        }
    }

    if (Script_FormatString_6(&ctxB[0xeb]))
    {
        Script_SpawnNewTask_7(&ctxB[0xeb], ctxB);
🚫🚫🚫        char v_30_2 = /* char v_30_2 = (unimplemented  {fistp qword [esp+0x18], fp0}).b */;
        /* unimplemented  {fistp qword [esp+0x18], fp0} */
        int32_t* valA9 = Vehicle_UpdateRudder_2(ctxB);

        if (valA9)
            Menu_HandleInput_17(valA9, v_30_2);
    }

    char* result = Script_FormatString_6(&ctxB[0xf5]);

    if (result)
    {
        char* result_1 = (*(int32_t*)(uintptr_t)(ctxB + 0x751));
        result = Script_SpawnNewTask_7(&ctxB[0xf5], ctxB);
🚫🚫🚫        char v_30_3 = /* char v_30_3 = (unimplemented  {fistp qword [esp+0x18], fp0}).b */;
        /* unimplemented  {fistp qword [esp+0x18], fp0} */
        result = v_30_3;
        (*(int32_t*)(uintptr_t)(ctxB + 0x751)) = result;

        if (result)
        {
            float v_44_13 = -1.57079637.0f;
            memcpy(&v_28, &ctxB[0xe], 0x28);
            Sys_AllocateMemory_12(&v_28, &v_28, v_44_13);
            v_50 = 1;
            memcpy(&ctxB[0x109], &ctxB[4], 0x18);
            memcpy(&ctxB[0x10c], &v_28, 0x28);
            ctxB[0x117] = 0;
            result = Car_DetectionSweep(&ctxB[0x118], &ctxB[0x109], ctxB, v_50);
        }

        result = (*(int32_t*)(uintptr_t)(ctxB + 0x751));

        if (!result)
        {
            result = result_1;

            if (result)
            {
                FX_TrailUpdate_13(&ctxB[0x118]);
                int32_t v_44_15 = 8;
                int32_t v_48_9 = 4;
                int32_t valA11 = AI_CombatTarget_22();
                v_50 = 4;
                result = FX_DebrisSpawn_13(&ctxB[0x118], 1, v_50, valA11, v_48_9, v_44_15);
            }
        }
    }

    int32_t* i_2 = ctxB[1];

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t tmpD3 = g_afa7e0;

            do
            {
                int32_t* srcS9 = *i_1;
                void* valA15;

                if (!srcS9)
                    valA15 = nullptr;
                else
                {
                    int32_t valA12 = *srcS9;
                    int32_t valA13 = -(valA12);
                    valA15 = (valA13 - valA13) & srcS9;
                }

                *((tmpD3 << 2) + &g_afa6e0) = valA15;
                int32_t tmpD4 = tmpD3 + 1;
                int32_t valA18 = 0;
                g_afa7e0 = tmpD4;
                valA18 = i_1[7];
                result = *((valA18 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    tmpD4 = g_afa7e0;
                }

                i_1 = *((tmpD4 << 2) + &g_afa6dc);
                tmpD3 = tmpD4 - 1;
                g_afa7e0 = tmpD3;
            } while (i_1);
        }
    }

    return result;
}
