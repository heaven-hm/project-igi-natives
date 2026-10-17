// Original IGI.EXE function: Heli_Setup (VA 0x004316D0; static CFG gate PASS, CFG score 0.963).
#include "Heli_Setup.h"
char* Heli_Setup(long double context , char* param_2)

{
    double* context_val = param_2;
    char data_val = Script_FormatString_6(&context_val[0xff]);
    int16_t idx;

    if (data_val)
    {
        Script_SpawnNewTask_7(&context_val[0xff], context_val);
        idx = 1;
    }

    if (data_val && !context)
        Vehicle_InitPlane_2(context_val);
    else if (!*(context_val + 0x74c))
    {
        struct status_msg* data_2 = SoundSys_SetMasterVolume_7(context_val, "helicopter_1");

        if (data_2)
            *(context_val + 0x74c) = QTask_LinkEventHandler_2(data_2);
    }

    int16_t data_3;
    data_3 = context_val[0xea];
    double* item_50;
    double item_28;

    if (data_3)
    {
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x9c]} */
🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0xa0]} */
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
            /* unimplemented  {fld fp0, dword [context_val+0xa0]} */
        }
        else
        {
🚫🚫            top_4 = idx - 1;
            /* unimplemented  {fld fp0, dword [context_val+0x9c]} */
        }

🚫🚫        /* unimplemented  {fld fp0, dword [context_val+0x98]} */
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
🚫🚫            /* unimplemented  {fld fp0, dword [context_val+0x9c]} */
🚫🚫            /* unimplemented  {fld fp0, dword [context_val+0xa0]} */
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
🚫🚫                /* unimplemented  {fld fp0, dword [context_val+0xa0]} */
            else
🚫🚫                /* unimplemented  {fld fp0, dword [context_val+0x9c]} */
        }
        else
🚫🚫            /* unimplemented  {fld fp0, dword [context_val+0x98]} */

🚫🚫🚫        param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x44], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x44], fp0} */
🚫🚫        Render_ComputeNormals(*(context_val + 0x6c));
        /* unimplemented  {call Render_ComputeNormals} */
        void* entity_1 = *(context_val + 0x1b4);
        int32_t data_5 = *(context_val + 0x754);
🚫🚫        /* unimplemented  {fmul fp0, dword [stack_ptr+0x48]} */
        void* source_1 = *(entity_1 + 0x2d4);
        int32_t i_3 = *(source_1 + 0x150);
🚫🚫🚫        param_2 = /* param_2 = unimplemented  {fstp dword [stack_ptr+0x44], fp0} */;
        /* unimplemented  {fstp dword [stack_ptr+0x44], fp0} */

        if (data_5 != 0xffffffff)
        {
            *(context_val + 0x754) = data_5 - 1;

            if (data_5 == 1)
                return QTask_FindType(context_val);
        }
        else
        {
            if (!i_3)
            {
🚫🚫                /* unimplemented  {fld fp0, dword [stack_ptr+0x44]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533700]} */
                uint32_t item_44_7 = 0;
                int32_t item_48_4 = 0x47c80000;
                int32_t item_4c_2 = 0;
                item_50 = 0xffffffff;
                void* item_68_1 = entity_1;
🚫🚫🚫                float item_68_2 = /* float item_68_2 = unimplemented  {fstp dword [stack_ptr], fp0} */;
                /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [stack_ptr+0x6c]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_5335ac]} */
                void* item_6c_1 = entity_1;
🚫🚫🚫                uint32_t item_6c_2 = /* uint32_t item_6c_2 =
                    unimplemented  {fstp dword [stack_ptr], fp0} */;
                /* unimplemented  {fstp dword [stack_ptr], fp0} */
🚫🚫                /* unimplemented  {fld fp0, dword [stack_ptr+0x70]} */
🚫🚫                /* unimplemented  {fmul fp0, dword [&g_533514[4]]} */
                void* item_70_1 = entity_1;
🚫🚫🚫                uint32_t item_70_2 = /* uint32_t item_70_2 =
                    unimplemented  {fstp dword [stack_ptr], fp0} */;
                /* unimplemented  {fstp dword [stack_ptr], fp0} */
                FX_SmokeEmit(&context_val[4], 1, 0, 0x3f800000, item_70_2, item_6c_2, item_68_2, 3, 1, nullptr,
                    "1009_01_1", "explo_03_l", item_50, item_4c_2, item_48_4, item_44_7);
            }
            else
            {
                QTask_DispatchEvent_2();

                if (i_3 > 0)
                {
                    int32_t* dest_1 = source_1 + 0x128;
                    int32_t i;

                    do
                    {
                        uint32_t data_7 = Sys_FreeMemory_14(Level_SetMission_5(), 0x1e);
                        int32_t temp_1 = *dest_1;
                        item_50 = context_val;
                        WeaponType_UpdateAnim(&item_28, item_50, temp_1);
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0x2c]} */
🚫🚫                        /* unimplemented  {fadd qword [context_val+0x20]} */
🚫🚫🚫                        item_28 = /* item_28 = unimplemented  {fstp qword [stack_ptr+0x44], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x44], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0x4c]} */
🚫🚫                        /* unimplemented  {fadd qword [context_val+0x28]} */
🚫🚫🚫                        double item_20_1 = /* double item_20_1 =
                            unimplemented  {fstp qword [stack_ptr+0x64], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x64], fp0} */
🚫🚫                        /* unimplemented  {fld fp0, qword [stack_ptr+0x6c]} */
🚫🚫                        /* unimplemented  {fadd qword [context_val+0x30]} */
🚫🚫🚫                        double item_18_1 = /* double item_18_1 =
                            unimplemented  {fstp qword [stack_ptr+0x7c], fp0} */;
                        /* unimplemented  {fstp qword [stack_ptr+0x7c], fp0} */
                        FX_SmokeEmit(&item_28, 1, data_7, 0x3f800000, 0x46400000, 0x45400000,
                            0x45400000, 3, 2, nullptr, "1009_01_1", "explo_03_l", 0xffffffff, 0,
                            0x47c80000, 0);
                        dest_1 = &dest_1[1];
                        i = i_3;
                        i_3 -= 1;
                    } while (i != 1);
                }
            }

            *(context_val + 0x754) = 0x1e;
        }
    }

    if (Script_FormatString_6(&context_val[0xeb]))
    {
        Script_SpawnNewTask_7(&context_val[0xeb], context_val);
🚫🚫🚫        char item_30_2 = /* char item_30_2 = (unimplemented  {fistp qword [stack_ptr+0x18], fp0}).b */;
        /* unimplemented  {fistp qword [stack_ptr+0x18], fp0} */
        int32_t* data_9 = Vehicle_UpdateRudder_2(context_val);

        if (data_9)
            Menu_HandleInput_17(data_9, item_30_2);
    }

    char* result = Script_FormatString_6(&context_val[0xf5]);

    if (result)
    {
        char* result_1 = *(context_val + 0x751);
        result = Script_SpawnNewTask_7(&context_val[0xf5], context_val);
🚫🚫🚫        char item_30_3 = /* char item_30_3 = (unimplemented  {fistp qword [stack_ptr+0x18], fp0}).b */;
        /* unimplemented  {fistp qword [stack_ptr+0x18], fp0} */
        result = item_30_3;
        *(context_val + 0x751) = result;

        if (result)
        {
            float item_44_13 = -1.57079637f;
            memcpy(&item_28, &context_val[0xe], 0x28);
            Sys_AllocateMemory_12(&item_28, &item_28, item_44_13);
            item_50 = 1;
            memcpy(&context_val[0x109], &context_val[4], 0x18);
            memcpy(&context_val[0x10c], &item_28, 0x28);
            context_val[0x117] = 0;
            result = Car_DetectionSweep(&context_val[0x118], &context_val[0x109], context_val, item_50);
        }

        result = *(context_val + 0x751);

        if (!result)
        {
            result = result_1;

            if (result)
            {
                FX_TrailUpdate_13(&context_val[0x118]);
                int32_t item_44_15 = 8;
                int32_t item_48_9 = 4;
                int32_t data_11 = AI_CombatTarget_22();
                item_50 = 4;
                result = FX_DebrisSpawn_13(&context_val[0x118], 1, item_50, data_11, item_48_9, item_44_15);
            }
        }
    }

    int32_t* i_2 = context_val[1];

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t temp_3 = g_afa7e0;

            do
            {
                int32_t* source_9 = *i_1;
                void* data_15;

                if (!source_9)
                    data_15 = nullptr;
                else
                {
                    int32_t data_12 = *source_9;
                    int32_t data_13 = -(data_12);
                    data_15 = (data_13 - data_13) & source_9;
                }

                *((temp_3 << 2) + &g_afa6e0) = data_15;
                int32_t temp_4 = temp_3 + 1;
                int32_t data_18 = 0;
                g_afa7e0 = temp_4;
                data_18 = i_1[7];
                result = *((data_18 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    temp_4 = g_afa7e0;
                }

                i_1 = *((temp_4 << 2) + &g_afa6dc);
                temp_3 = temp_4 - 1;
                g_afa7e0 = temp_3;
            } while (i_1);
        }
    }

    return result;
}
