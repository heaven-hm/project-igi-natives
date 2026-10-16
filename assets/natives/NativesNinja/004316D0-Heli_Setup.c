#include "004316D0-Heli_Setup.h"
/* 0x004316d0 Heli_Setup full linked: callers=0 callees=27 */
char* Heli_Setup(int80_t a1 @ st0, char* a2)

{
    double* ebx = a2;
    char eax = sub_4f16c0(&ebx[0xff]);
    int16_t top;

    if (eax)
    {
        sub_4f16e0(&ebx[0xff], ebx);
        top = 1;
    }

    if (eax && !a1)
        Vehicle_InitPlane_2(ebx);
    else if (!*(ebx + 0x74c))
    {
        struct status_msg* eax_2 = sub_4e6b00(ebx, "helicopter_1");

        if (eax_2)
            *(ebx + 0x74c) = QTask_LinkEventHandler_2(eax_2);
    }

    int16_t eax_3;
    eax_3 = ebx[0xea];
    double* var_50;
    double var_28;

    if (eax_3)
    {
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x9c]} */
🚫🚫        /* unimplemented  {fld st0, dword [ebx+0xa0]} */
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
            | (top & 7) << 0xb) + 1) & 1))
        {
🚫🚫            top_4 = top - 1;
            /* unimplemented  {fld st0, dword [ebx+0xa0]} */
        }
        else
        {
🚫🚫            top_4 = top - 1;
            /* unimplemented  {fld st0, dword [ebx+0x9c]} */
        }

🚫🚫        /* unimplemented  {fld st0, dword [ebx+0x98]} */
⋯        /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
            - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */ < /* bool c0_2 =
            unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */,
            /* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
            == /* bool c3_2 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
        /* unimplemented  {fcomp st0, st1} */
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */

        if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_4 & 7) << 0xb) + 1) & 0x41)
        {
🚫🚫            /* unimplemented  {fld st0, dword [ebx+0x9c]} */
🚫🚫            /* unimplemented  {fld st0, dword [ebx+0xa0]} */
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
🚫🚫                /* unimplemented  {fld st0, dword [ebx+0xa0]} */
            else
🚫🚫                /* unimplemented  {fld st0, dword [ebx+0x9c]} */
        }
        else
🚫🚫            /* unimplemented  {fld st0, dword [ebx+0x98]} */

🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x44], st0} */;
        /* unimplemented  {fstp dword [esp+0x44], st0} */
🚫🚫        sub_4d0950(*(ebx + 0x6c));
        /* unimplemented  {call sub_4d0950} */
        void* ecx_1 = *(ebx + 0x1b4);
        int32_t eax_5 = *(ebx + 0x754);
🚫🚫        /* unimplemented  {fmul st0, dword [esp+0x48]} */
        void* esi_1 = *(ecx_1 + 0x2d4);
        int32_t i_3 = *(esi_1 + 0x150);
🚫🚫🚫        a2 = /* a2 = unimplemented  {fstp dword [esp+0x44], st0} */;
        /* unimplemented  {fstp dword [esp+0x44], st0} */

        if (eax_5 != 0xffffffff)
        {
            *(ebx + 0x754) = eax_5 - 1;

            if (eax_5 == 1)
                return QTask_FindType(ebx);
        }
        else
        {
            if (!i_3)
            {
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x44]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533700]} */
                uint32_t var_44_7 = 0;
                int32_t var_48_4 = 0x47c80000;
                int32_t var_4c_2 = 0;
                var_50 = 0xffffffff;
                void* var_68_1 = ecx_1;
🚫🚫🚫                float var_68_2 = /* float var_68_2 = unimplemented  {fstp dword [esp], st0} */;
                /* unimplemented  {fstp dword [esp], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x6c]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_5335ac]} */
                void* var_6c_1 = ecx_1;
🚫🚫🚫                uint32_t var_6c_2 = /* uint32_t var_6c_2 =
                    unimplemented  {fstp dword [esp], st0} */;
                /* unimplemented  {fstp dword [esp], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [esp+0x70]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533514[4]]} */
                void* var_70_1 = ecx_1;
🚫🚫🚫                uint32_t var_70_2 = /* uint32_t var_70_2 =
                    unimplemented  {fstp dword [esp], st0} */;
                /* unimplemented  {fstp dword [esp], st0} */
                sub_480fe0(&ebx[4], 1, 0, 0x3f800000, var_70_2, var_6c_2, var_68_2, 3, 1, nullptr,
                    "1009_01_1", "explo_03_l", var_50, var_4c_2, var_48_4, var_44_7);
            }
            else
            {
                QTask_DispatchEvent_2();

                if (i_3 > 0)
                {
                    int32_t* edi_1 = esi_1 + 0x128;
                    int32_t i;

                    do
                    {
                        uint32_t eax_7 = sub_4b47c0(Level_SetMission_5(), 0x1e);
                        int32_t edx_1 = *edi_1;
                        var_50 = ebx;
                        WeaponType_UpdateAnim(&var_28, var_50, edx_1);
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0x2c]} */
🚫🚫                        /* unimplemented  {fadd qword [ebx+0x20]} */
🚫🚫🚫                        var_28 = /* var_28 = unimplemented  {fstp qword [esp+0x44], st0} */;
                        /* unimplemented  {fstp qword [esp+0x44], st0} */
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0x4c]} */
🚫🚫                        /* unimplemented  {fadd qword [ebx+0x28]} */
🚫🚫🚫                        double var_20_1 = /* double var_20_1 =
                            unimplemented  {fstp qword [esp+0x64], st0} */;
                        /* unimplemented  {fstp qword [esp+0x64], st0} */
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0x6c]} */
🚫🚫                        /* unimplemented  {fadd qword [ebx+0x30]} */
🚫🚫🚫                        double var_18_1 = /* double var_18_1 =
                            unimplemented  {fstp qword [esp+0x7c], st0} */;
                        /* unimplemented  {fstp qword [esp+0x7c], st0} */
                        sub_480fe0(&var_28, 1, eax_7, 0x3f800000, 0x46400000, 0x45400000,
                            0x45400000, 3, 2, nullptr, "1009_01_1", "explo_03_l", 0xffffffff, 0,
                            0x47c80000, 0);
                        edi_1 = &edi_1[1];
                        i = i_3;
                        i_3 -= 1;
                    } while (i != 1);
                }
            }

            *(ebx + 0x754) = 0x1e;
        }
    }

    if (sub_4f16c0(&ebx[0xeb]))
    {
        sub_4f16e0(&ebx[0xeb], ebx);
🚫🚫🚫        char var_30_2 = /* char var_30_2 = (unimplemented  {fistp qword [esp+0x18], st0}).b */;
        /* unimplemented  {fistp qword [esp+0x18], st0} */
        int32_t* eax_9 = Vehicle_UpdateRudder_2(ebx);

        if (eax_9)
            Menu_HandleInput_17(eax_9, var_30_2);
    }

    char* result = sub_4f16c0(&ebx[0xf5]);

    if (result)
    {
        char* result_1 = *(ebx + 0x751);
        result = sub_4f16e0(&ebx[0xf5], ebx);
🚫🚫🚫        char var_30_3 = /* char var_30_3 = (unimplemented  {fistp qword [esp+0x18], st0}).b */;
        /* unimplemented  {fistp qword [esp+0x18], st0} */
        result = var_30_3;
        *(ebx + 0x751) = result;

        if (result)
        {
            float var_44_13 = -1.57079637f;
            memcpy(&var_28, &ebx[0xe], 0x28);
            sub_4b34f0(&var_28, &var_28, var_44_13);
            var_50 = 1;
            memcpy(&ebx[0x109], &ebx[4], 0x18);
            memcpy(&ebx[0x10c], &var_28, 0x28);
            ebx[0x117] = 0;
            result = sub_489750(&ebx[0x118], &ebx[0x109], ebx, var_50);
        }

        result = *(ebx + 0x751);

        if (!result)
        {
            result = result_1;

            if (result)
            {
                sub_489b90(&ebx[0x118]);
                int32_t var_44_15 = 8;
                int32_t var_48_9 = 4;
                int32_t eax_11 = sub_464250();
                var_50 = 4;
                result = sub_4896c0(&ebx[0x118], 1, var_50, eax_11, var_48_9, var_44_15);
            }
        }
    }

    int32_t* i_2 = ebx[1];

    if (*i_2)
    {
        int32_t* i_1 = i_2;

        if (i_1)
        {
            int32_t edx_3 = g_afa7e0;

            do
            {
                int32_t* esi_9 = *i_1;
                void* eax_15;

                if (!esi_9)
                    eax_15 = nullptr;
                else
                {
                    int32_t eax_12 = *esi_9;
                    int32_t eax_13 = -(eax_12);
                    eax_15 = (eax_13 - eax_13) & esi_9;
                }

                *((edx_3 << 2) + &g_afa6e0) = eax_15;
                int32_t edx_4 = edx_3 + 1;
                int32_t eax_18 = 0;
                g_afa7e0 = edx_4;
                eax_18 = i_1[7];
                result = *((eax_18 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i_1);
                    edx_4 = g_afa7e0;
                }

                i_1 = *((edx_4 << 2) + &g_afa6dc);
                edx_3 = edx_4 - 1;
                g_afa7e0 = edx_3;
            } while (i_1);
        }
    }

    return result;
}
