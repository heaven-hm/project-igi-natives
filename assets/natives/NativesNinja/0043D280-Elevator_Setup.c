#include "0043D280-Elevator_Setup.h"
/* 0x0043d280 Elevator_Setup full linked: callers=0 callees=27 */
uint32_t Elevator_Setup(int32_t* a1)

{
    int32_t* ebp = a1;
    void* eax_1 = sub_502130(ebp[0x60]);
    int32_t var_18 = 0;
    int32_t var_20 = 0;
    a1 = 1;
    int32_t var_14 = 0;
    int32_t var_1c = ebp[0x61];
    uint32_t eax_2 = Frames_GetUpdateCounter();

    if (ebp[0x191] != eax_2)
    {
        uint32_t eax_3 = Frames_GetUpdateCounter();
        int32_t* i = ebp[2];
        ebp[0x191] = eax_3;

        if (*i && i)
        {
            int32_t edx_1 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i;
                void* eax_7;

                if (!esi_1)
                    eax_7 = nullptr;
                else
                {
                    int32_t eax_4 = *esi_1;
                    int32_t eax_5 = -(eax_4);
                    eax_7 = (eax_5 - eax_5) & esi_1;
                }

                *((edx_1 << 2) + &g_afa6e0) = eax_7;
                int32_t edx_2 = edx_1 + 1;
                int32_t eax_8 = 0;
                g_afa7e0 = edx_2;
                eax_8 = i[7];
                int32_t eax_9 = *((eax_8 << 2) + &g_a970e0);

                if (eax_9)
                {
                    eax_9(i);
                    edx_2 = g_afa7e0;
                }

                i = *((edx_2 << 2) + &g_afa6dc);
                edx_1 = edx_2 - 1;
                g_afa7e0 = edx_1;
            } while (i);
        }

        float var_c_1 = sub_502180(ebp[0x60], ebp[0x67]);
        int16_t top_1 = 0;
        int32_t i_1 = 0;
        int32_t* edi_1 = &ebp[0x71];

        do
        {
            if (sub_4f16c0(edi_1))
            {
                sub_4f16e0(edi_1, ebp);
🚫🚫🚫                char var_8_1 = /* char var_8_1 =
                    (unimplemented  {fistp qword [esp+0x30], st0}).b */;
                /* unimplemented  {fistp qword [esp+0x30], st0} */
                top_1 += 1;
                *(i_1 + ebp + 0x1b0) = var_8_1;
            }

            i_1 += 1;
            edi_1 = &edi_1[0x14];
        } while (i_1 < 0xa);

        if (sub_4f16c0(&ebp[0x139]))
        {
            sub_4f16e0(&ebp[0x139], ebp);
🚫🚫🚫            int32_t var_8_2 = /* int32_t var_8_2 =
                (unimplemented  {fistp qword [esp+0x30], st0}).d */;
            /* unimplemented  {fistp qword [esp+0x30], st0} */
            top_1 += 1;
            var_18 = var_8_2;
        }

        if (sub_4f16c0(&ebp[0x14d]))
        {
            sub_4f16e0(&ebp[0x14d], ebp);
🚫🚫🚫            int32_t var_8_3 = /* int32_t var_8_3 =
                (unimplemented  {fistp qword [esp+0x30], st0}).d */;
            /* unimplemented  {fistp qword [esp+0x30], st0} */
            top_1 += 1;
            var_20 = var_8_3;
        }

        if (sub_4f16c0(&ebp[0x161]))
        {
            sub_4f16e0(&ebp[0x161], ebp);
🚫🚫🚫            int32_t var_8_4 = /* int32_t var_8_4 =
                (unimplemented  {fistp qword [esp+0x30], st0}).d */;
            /* unimplemented  {fistp qword [esp+0x30], st0} */
            top_1 += 1;
            a1 = var_8_4;
        }

        if (var_18 && !ebp[0x175])
        {
            int32_t eax_17 = ebp[0x67];

            if (eax_17 < eax_1 - 1)
                ebp[0x67] = eax_17 + 1;
        }
        else if (!var_20 || *(ebp + 0x5d5))
        {
            for (int32_t i_2 = 0; i_2 < 0xa; i_2 += 1)
            {
                if (*(i_2 + ebp + 0x1b0))
                    ebp[0x67] = i_2;
            }
        }
        else
        {
            int32_t eax_21 = ebp[0x67];

            if (eax_21 > 0)
                ebp[0x67] = eax_21 - 1;
        }

        ebp[0x175] = var_18;
        *(ebp + 0x5d5) = var_20;
        memcpy(&ebp[0x42], &ebp[8], 0x18);
        memcpy(&ebp[0x52], &ebp[0x1c], 0x28);

        if (a1)
        {
            Vehicle_CheckFlightDynamics_8(ebp);
            top_1 -= 1;
        }

        int32_t edx_6 = ebp[0x68];
        int32_t eax_24 = ebp[0x69];
        ebp[0x68] = 0;
        ebp[0x69] = 0;
        int32_t esi_7 = 1;
        ebp[0x6a] = edx_6;
        ebp[0x6b] = eax_24;
        int32_t var_20_1 = 1;

        if (eax_1 > 1)
        {
🚫🚫            while (true)
            {
                sub_502180(ebp[0x60], esi_7);
                /* unimplemented  {call sub_502180} */
🚫🚫🚫🚫🚫                long double temp2_1 = ebp[0x61];
                /* unimplemented  {fcom st0, dword [ebp+0x184]} f- temp2_1 */ - temp2_1;
                bool c0_1 = /* bool c0_1 =
                    unimplemented  {fcom st0, dword [ebp+0x184]} f< temp2_1 */ < temp2_1;
                bool c2_1 = FCMP_UO(/* bool c2_1 =
                    is_unordered.t(unimplemented  {fcom st0, dword [ebp+0x184]}, temp2_1) */,
                    temp2_1);
                bool c3_1 = /* bool c3_1 =
                    unimplemented  {fcom st0, dword [ebp+0x184]} f== temp2_1 */ == temp2_1;

                if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | ((top_1 - 1) & 7) << 0xb) + 1) & 0x41))
                {
                    int32_t var_20_3 = esi_7;
🚫🚫                    /* unimplemented  {fild st0, dword [esp+0x10]} */
🚫🚫                    /* unimplemented  {fld st0, st1} */
🚫🚫                    /* unimplemented  {fsub st0, dword [ebp+0x184]} */
🚫🚫🚫🚫                    /* unimplemented  {fxch st0, st2} */
                    /* unimplemented  {fxch st0, st2} */
🚫🚫                    /* unimplemented  {fsub st0, dword [esp+0x1c]} */
🚫🚫🚫                    /* unimplemented  {fdivp st2, st0} */
                    /* unimplemented  {fdivp st2, st0} */
🚫🚫🚫🚫                    /* unimplemented  {fxch st0, st1} */
                    /* unimplemented  {fxch st0, st1} */
🚫🚫🚫                    /* unimplemented  {fsubp st1, st0} */
                    /* unimplemented  {fsubp st1, st0} */
🚫🚫🚫                    *(ebp + 0x1a0) = /* *(ebp + 0x1a0) =
                        unimplemented  {fstp qword [ebp+0x1a0], st0} */;
                    /* unimplemented  {fstp qword [ebp+0x1a0], st0} */
                    break;
                }

🚫🚫🚫                float var_14_1 = /* float var_14_1 = unimplemented  {fstp dword [esp+0x1c], st0} */;
                /* unimplemented  {fstp dword [esp+0x1c], st0} */
                esi_7 += 1;

                if (esi_7 >= eax_1)
                {
                    int32_t var_20_2 = esi_7;
                    break;
                }
            }
        }

        if (esi_7 == eax_1)
        {
            void* var_10_1 = eax_1 - 1;
🚫🚫            /* unimplemented  {fild st0, dword [esp+0x1c]} */
🚫🚫🚫            *(ebp + 0x1a0) = /* *(ebp + 0x1a0) = unimplemented  {fstp qword [ebp+0x1a0], st0} */;
            /* unimplemented  {fstp qword [ebp+0x1a0], st0} */
        }

🚫🚫        sub_502180(ebp[0x60], ebp[0x67]);
        /* unimplemented  {call sub_502180} */
🚫🚫🚫        float var_20_4 = /* float var_20_4 = unimplemented  {fstp dword [esp+0x14], st0} */;
        /* unimplemented  {fstp dword [esp+0x14], st0} */
🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x184]} */
⋯        long double temp3_1 = var_20_4;
        /* unimplemented  {fcomp st0, dword [esp+0x14]} f- temp3_1 */ - temp3_1;
        bool c0_2 = /* bool c0_2 =
            unimplemented  {fcomp st0, dword [esp+0x14]} f< temp3_1 */ < temp3_1;
        bool c2_2 = FCMP_UO(/* bool c2_2 =
            is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x14]}, temp3_1) */, temp3_1);
        bool c3_2 = /* bool c3_2 =
            unimplemented  {fcomp st0, dword [esp+0x14]} f== temp3_1 */ == temp3_1;
        /* unimplemented  {fcomp st0, dword [esp+0x14]} */
        char eax_30;

        eax_30 = *(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb) + 1) & 0x40 ? 0 : 1;

        *(ebp + 0x5d6) = eax_30;
        eax_2 = ebp[0x18f];

        if (!eax_30)
        {
            if (eax_2)
            {
                eax_2 = sub_4e6c00(eax_2);
                ebp[0x18f] = 0;
            }
        }
        else if (!eax_2)
        {
            eax_2 = sub_4e6b00(sub_4f0ee0(), ebp + 0x619);
            ebp[0x18f] = eax_2;

            if (eax_2)
                eax_2 = sub_4e6c30(eax_2, &ebp[8]);
        }

🚫🚫        /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯        long double temp4_1 = var_c_1;
        /* unimplemented  {fcomp st0, dword [esp+0x20]} f- temp4_1 */ - temp4_1;
        bool c0_3 = /* bool c0_3 =
            unimplemented  {fcomp st0, dword [esp+0x20]} f< temp4_1 */ < temp4_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x20]}, temp4_1) */, temp4_1);
        bool c3_3 = /* bool c3_3 =
            unimplemented  {fcomp st0, dword [esp+0x20]} f== temp4_1 */ == temp4_1;
        /* unimplemented  {fcomp st0, dword [esp+0x20]} */
        *(ebp + 0x5d7) = 0;
        eax_2 = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (*(&eax_2 + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯            long double temp6_1 = ebp[0x61];
            /* unimplemented  {fcomp st0, dword [ebp+0x184]} f- temp6_1 */ - temp6_1;
            bool c0_4 = /* bool c0_4 =
                unimplemented  {fcomp st0, dword [ebp+0x184]} f< temp6_1 */ < temp6_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x184]}, temp6_1) */, temp6_1);
            bool c3_4 = /* bool c3_4 =
                unimplemented  {fcomp st0, dword [ebp+0x184]} f== temp6_1 */ == temp6_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x184]} */
            eax_2 = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb;

            if (!(*(&eax_2 + 1) & 0x40))
            {
                eax_2 = sub_4e6b00(sub_4f0ee0(), ebp + 0x5d9);
                *(ebp + 0x5d7) = 1;

                if (eax_2)
                    eax_2 = sub_4e6c30(eax_2, &ebp[8]);
            }
        }

🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x184]} */
⋯        long double temp5_1 = var_20_4;
        /* unimplemented  {fcomp st0, dword [esp+0xc]} f- temp5_1 */ - temp5_1;
        bool c0_5 = /* bool c0_5 =
            unimplemented  {fcomp st0, dword [esp+0xc]} f< temp5_1 */ < temp5_1;
        bool c2_5 = FCMP_UO(/* bool c2_5 =
            is_unordered.t(unimplemented  {fcomp st0, dword [esp+0xc]}, temp5_1) */, temp5_1);
        bool c3_5 = /* bool c3_5 =
            unimplemented  {fcomp st0, dword [esp+0xc]} f== temp5_1 */ == temp5_1;
        /* unimplemented  {fcomp st0, dword [esp+0xc]} */
        ebp[0x176] = 0;
        eax_2 = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (*(&eax_2 + 1) & 0x40)
        {
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯            long double temp8_1 = ebp[0x61];
            /* unimplemented  {fcomp st0, dword [ebp+0x184]} f- temp8_1 */ - temp8_1;
            bool c0_6 = /* bool c0_6 =
                unimplemented  {fcomp st0, dword [ebp+0x184]} f< temp8_1 */ < temp8_1;
            bool c2_6 = FCMP_UO(/* bool c2_6 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ebp+0x184]}, temp8_1) */, temp8_1);
            bool c3_6 = /* bool c3_6 =
                unimplemented  {fcomp st0, dword [ebp+0x184]} f== temp8_1 */ == temp8_1;
            /* unimplemented  {fcomp st0, dword [ebp+0x184]} */
            eax_2 = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb;

            if (!(*(&eax_2 + 1) & 0x40))
            {
                eax_2 = sub_4e6b00(sub_4f0ee0(), ebp + 0x5f9);
                ebp[0x176] = 1;

                if (eax_2)
                    eax_2 = sub_4e6c30(eax_2, &ebp[8]);
            }
        }

🚫🚫        /* unimplemented  {fld st0, dword [ebp+0x184]} */
⋯        long double temp7_1 = var_20_4;
        /* unimplemented  {fcomp st0, dword [esp+0xc]} f- temp7_1 */ - temp7_1;
        bool c0_7 = /* bool c0_7 =
            unimplemented  {fcomp st0, dword [esp+0xc]} f< temp7_1 */ < temp7_1;
        bool c2_7 = FCMP_UO(/* bool c2_7 =
            is_unordered.t(unimplemented  {fcomp st0, dword [esp+0xc]}, temp7_1) */, temp7_1);
        bool c3_7 = /* bool c3_7 =
            unimplemented  {fcomp st0, dword [esp+0xc]} f== temp7_1 */ == temp7_1;
        /* unimplemented  {fcomp st0, dword [esp+0xc]} */
        eax_2 = (c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
            | (top_1 & 7) << 0xb;

        if (*(&eax_2 + 1) & 0x40)
        {
            eax_2 = *(ebp + 0x5d6);

            if (!eax_2 && a1 == ebp[0x190])
            {
                int32_t eax_36 = ebp[0x6f] + 1;
                ebp[0x190] = a1;
                ebp[0x6f] = eax_36;
                return eax_36;
            }
        }

        ebp[0x6f] = 0;
        ebp[0x190] = a1;
    }

    return eax_2;
}
