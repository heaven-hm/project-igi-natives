#include "0046A330-AI_CheckVisibility_27.h"
/* 0x0046a330 AI_CheckVisibility_27 full linked: callers=1 callees=44 */
int32_t sub_46a330(void* a1)

{
    sub_46c060();
    char var_109 = 0;
    int16_t top;

    if (!sub_505a30(sub_46b050()))
    {
        int32_t edi_1 = 0;
        int32_t var_108_1 = 0;

        if (sub_46b500() & 0x10)
        {
            if (*(a1 + 0x80))
            {
                edi_1 = 1;
                *(a1 + 0x80) = 0;
            }
            else
            {
                void* eax_3 = sub_46b040();
                var_109 = 1;
                *(a1 + 0x88) = *(eax_3 + 0x24);
                *(a1 + 0x8c) = *(eax_3 + 0x28);
                *(a1 + 0x80) = 0xd;
            }
        }

        if (sub_46b500() & 0x20)
        {
            if (*(a1 + 0x84))
            {
                var_108_1 = 1;
                *(a1 + 0x84) = 0;
            }
            else
                *(a1 + 0x84) = 0xd;
        }

        int32_t ecx_2 = *g_c28f8c;
        int16_t eax_6;

        if (!(0x100 & ecx_2))
        {
            if (edi_1)
                goto label_46a3f0;

            eax_6 = g_5bdda0;
        }
        else if (!(*(a1 + 0xa8) & 0x100) || edi_1)
        {
        label_46a3f0:
            eax_6 = g_5bdda0;

            if (eax_6 < 3)
            {
                int32_t var_128_1 = ecx_2;
                g_5bdda0 = eax_6 + 1;
                int16_t top_1 = 0xffff;
                long double st0_1;
                bool c1_1;
                bool c2_1;
                st0_1 = __fptan(*(((eax_6 + 1) << 2) + &g_53f750));

                if (!c2_1)
                    top_1 = 0xfffe;

🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
🚫🚫🚫                float var_128_2 = /* float var_128_2 = unimplemented  {fstp dword [esp], st0} */;
                /* unimplemented  {fstp dword [esp], st0} */
                top = top_1 + 2;
                sub_469fe0(a1, var_128_2);
                sub_4663b0(*(a1 + 0x9c));
                eax_6 = g_5bdda0;
            }
        }
        else
            eax_6 = g_5bdda0;

        if (((0x200 & *g_c28f8c && !(*(a1 + 0xa8) & 0x200)) || var_108_1) && eax_6)
        {
            int32_t var_128_3 = 0x200;
            g_5bdda0 = eax_6 - 1;
🚫🚫            int16_t top_3 = top - 1;
            /* unimplemented  {fld st0, dword [edx*4+0x53f750]} */
🚫🚫🚫🚫            long double st0_2;
            bool c1_2;
            bool c2_2;
            st0_2 = __fptan(/* st0_2, c1_2, c2_2 = __fptan(unimplemented  {fptan }) */);
            /* unimplemented  {fptan } */

            if (!c2_2)
            {
                top_3 -= 1;
                /* unimplemented  {fptan } */
            }

🚫🚫🚫            /* unimplemented  {fstp st0, st0} */
            /* unimplemented  {fstp st0, st0} */
🚫🚫🚫            float var_128_4 = /* float var_128_4 = unimplemented  {fstp dword [esp], st0} */;
            /* unimplemented  {fstp dword [esp], st0} */
            top = top_3 + 2;
            sub_469fe0(a1, var_128_4);
            sub_4663b0(*(a1 + 0x9c));
        }
    }

    int32_t eax_9 = *(a1 + 0x80);

    if (eax_9 > 0)
        *(a1 + 0x80) = eax_9 - 1;

    int32_t eax_11 = *(a1 + 0x84);

    if (eax_11 > 0)
        *(a1 + 0x84) = eax_11 - 1;

    if (!var_109)
    {
        void** eax_51 = *(a1 + 0x90);

        if (eax_51)
        {
            void* eax_52 = *eax_51;

            if (!eax_52)
                sub_46a0a0(a1);
            else
                sub_469cc0(a1, eax_52);
        }
    }
    else
    {
        float ecx_4 = *(a1 + 0x88);
        float edx_3 = *(a1 + 0x8c);
        float* eax_14 = sub_4e8200(sub_46c070());
🚫🚫        /* unimplemented  {fld st0, dword [esp+0x18]} */
⋯        long double temp0_1 = *eax_14;
        /* unimplemented  {fcomp st0, dword [ecx]} f- temp0_1 */ - temp0_1;
        bool c0_1 = /* bool c0_1 = unimplemented  {fcomp st0, dword [ecx]} f< temp0_1 */ < temp0_1;
        bool c2_3 = FCMP_UO(/* bool c2_3 =
            is_unordered.t(unimplemented  {fcomp st0, dword [ecx]}, temp0_1) */, temp0_1);
        bool c3_1 = /* bool c3_1 =
            unimplemented  {fcomp st0, dword [ecx]} f== temp0_1 */ == temp0_1;
        /* unimplemented  {fcomp st0, dword [ecx]} */

        if (!(*(&((c0_1 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
            | (top & 7) << 0xb) + 1) & 1))
        {
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x10]} */
⋯            long double temp1_1 = eax_14[1];
            /* unimplemented  {fcomp st0, dword [ecx+0x4]} f- temp1_1 */ - temp1_1;
            bool c0_2 = /* bool c0_2 =
                unimplemented  {fcomp st0, dword [ecx+0x4]} f< temp1_1 */ < temp1_1;
            bool c2_4 = FCMP_UO(/* bool c2_4 =
                is_unordered.t(unimplemented  {fcomp st0, dword [ecx+0x4]}, temp1_1) */, temp1_1);
            bool c3_2 = /* bool c3_2 =
                unimplemented  {fcomp st0, dword [ecx+0x4]} f== temp1_1 */ == temp1_1;
            /* unimplemented  {fcomp st0, dword [ecx+0x4]} */

            if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | (top & 7) << 0xb) + 1) & 1))
            {
🚫🚫                /* unimplemented  {fld st0, dword [ecx+0x8]} */
🚫🚫                /* unimplemented  {fadd dword [ecx]} */
⋯                long double temp2_1 = ecx_4;
                /* unimplemented  {fcomp st0, dword [esp+0x14]} f- temp2_1 */ - temp2_1;
                bool c0_3 = /* bool c0_3 =
                    unimplemented  {fcomp st0, dword [esp+0x14]} f< temp2_1 */ < temp2_1;
                bool c2_5 = FCMP_UO(/* bool c2_5 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x14]}, temp2_1) */,
                    temp2_1);
                bool c3_3 = /* bool c3_3 =
                    unimplemented  {fcomp st0, dword [esp+0x14]} f== temp2_1 */ == temp2_1;
                /* unimplemented  {fcomp st0, dword [esp+0x14]} */

                if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb) + 1) & 0x41))
                {
🚫🚫                    /* unimplemented  {fld st0, dword [ecx+0xc]} */
🚫🚫                    /* unimplemented  {fadd dword [ecx+0x4]} */
⋯                    long double temp3_1 = edx_3;
                    /* unimplemented  {fcomp st0, dword [esp+0x10]} f- temp3_1 */ - temp3_1;
                    bool c0_4 = /* bool c0_4 =
                        unimplemented  {fcomp st0, dword [esp+0x10]} f< temp3_1 */ < temp3_1;
                    bool c2_6 = FCMP_UO(/* bool c2_6 =
                        is_unordered.t(unimplemented  {fcomp st0, dword [esp+0x10]}, temp3_1) */,
                        temp3_1);
                    bool c3_4 = /* bool c3_4 =
                        unimplemented  {fcomp st0, dword [esp+0x10]} f== temp3_1 */ == temp3_1;
                    /* unimplemented  {fcomp st0, dword [esp+0x10]} */

                    if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb) + 1) & 0x41))
                    {
                        int32_t eax_17 = sub_4e8210(sub_46c070());
🚫🚫                        sub_491d40();
                        /* unimplemented  {call sub_491d40} */
🚫🚫🚫                        float var_100_1 = /* float var_100_1 =
                            unimplemented  {fstp dword [esp+0x28], st0} */;
                        /* unimplemented  {fstp dword [esp+0x28], st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x18]} */
🚫🚫                        /* unimplemented  {fadd st0, st0} */
🚫🚫🚫                        double var_fc_1 = /* double var_fc_1 =
                            unimplemented  {fstp qword [esp+0x2c], st0} */;
                        /* unimplemented  {fstp qword [esp+0x2c], st0} */
🚫🚫                        /* unimplemented  {fild st0, dword [eax+0x4]} */
🚫🚫                        /* unimplemented  {fsubr st0, qword [esp+0x2c]} */
🚫🚫                        /* unimplemented  {fmul st0, dword [ebp+0x40]} */
🚫🚫🚫                        double var_fc_2 = /* double var_fc_2 =
                            unimplemented  {fstp qword [esp+0x2c], st0} */;
                        /* unimplemented  {fstp qword [esp+0x2c], st0} */
🚫🚫                        /* unimplemented  {fild st0, dword [eax+0x4]} */
🚫🚫                        /* unimplemented  {fdivr st0, qword [esp+0x2c]} */
🚫🚫🚫                        double var_b8 = /* double var_b8 =
                            unimplemented  {fstp qword [esp+0x70], st0} */;
                        /* unimplemented  {fstp qword [esp+0x70], st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x14]} */
🚫🚫                        /* unimplemented  {fadd st0, st0} */
🚫🚫🚫                        double var_fc_3 = /* double var_fc_3 =
                            unimplemented  {fstp qword [esp+0x2c], st0} */;
                        /* unimplemented  {fstp qword [esp+0x2c], st0} */
🚫🚫                        /* unimplemented  {fild st0, dword [eax+0x8]} */
🚫🚫                        /* unimplemented  {fsubr st0, qword [esp+0x2c]} */
🚫🚫                        /* unimplemented  {fld st0, dword [esp+0x28]} */
🚫🚫                        /* unimplemented  {fmul st0, dword [ebp+0x40]} */
🚫🚫🚫                        /* unimplemented  {fmulp st1, st0} */
                        /* unimplemented  {fmulp st1, st0} */
🚫🚫🚫                        int32_t var_fc_4 = /* int32_t var_fc_4 =
                            (unimplemented  {fstp qword [esp+0x2c], st0}).d */;
                        /* unimplemented  {fstp qword [esp+0x2c], st0} */
🚫🚫                        /* unimplemented  {fild st0, dword [eax+0x4]} */
🚫🚫                        /* unimplemented  {fdivr st0, qword [esp+0x2c]} */
🚫🚫🚫                        double var_b0_1 = /* double var_b0_1 =
                            unimplemented  {fstp qword [esp+0x78], st0} */;
                        /* unimplemented  {fstp qword [esp+0x78], st0} */
                        int32_t* var_104 = sub_460c60();
                        int32_t** eax_19 = sub_476030();
                        int32_t eax_20 = sub_443660();
                        int32_t var_100_2 = 0;
                        int32_t var_f4_1 = 0;
                        int32_t var_f0_1 = 0;
                        void* const var_108_2 = nullptr;
                        double var_a0;
                        memcpy(&var_a0, eax_17 + 0x28, 0x18);
🚫🚫                        /* unimplemented  {fld st0, dword [ebp+0x4]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [esp+0x78]} */
🚫🚫                        /* unimplemented  {fld st0, dword [ebp]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [esp+0x70]} */
🚫🚫🚫                        /* unimplemented  {faddp st1, st0} */
                        /* unimplemented  {faddp st1, st0} */
🚫🚫                        /* unimplemented  {fadd dword [ebp+0x8]} */
🚫🚫🚫                        double var_ec = /* double var_ec =
                            unimplemented  {fstp qword [esp+0x3c], st0} */;
                        /* unimplemented  {fstp qword [esp+0x3c], st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [ebp+0x10]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [esp+0x78]} */
🚫🚫                        /* unimplemented  {fld st0, dword [ebp+0xc]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [esp+0x70]} */
🚫🚫🚫                        /* unimplemented  {faddp st1, st0} */
                        /* unimplemented  {faddp st1, st0} */
🚫🚫                        /* unimplemented  {fadd dword [ebp+0x14]} */
🚫🚫🚫                        double var_e4_1 = /* double var_e4_1 =
                            unimplemented  {fstp qword [esp+0x48], st0} */;
                        /* unimplemented  {fstp qword [esp+0x48], st0} */
🚫🚫                        /* unimplemented  {fld st0, dword [ebp+0x1c]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [esp+0x7c]} */
🚫🚫                        /* unimplemented  {fld st0, dword [ebp+0x18]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [esp+0x74]} */
🚫🚫🚫                        /* unimplemented  {faddp st1, st0} */
                        /* unimplemented  {faddp st1, st0} */
🚫🚫                        /* unimplemented  {fadd dword [ebp+0x20]} */
🚫🚫🚫                        double var_dc_1 = /* double var_dc_1 =
                            unimplemented  {fstp qword [esp+0x50], st0} */;
                        /* unimplemented  {fstp qword [esp+0x50], st0} */
                        double var_d0;
                        memcpy(&var_d0, &var_ec, 0x18);
                        sub_4b3100(&var_d0);
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0x5c]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [&g_533548]} */
🚫🚫                        var_d0 = /* var_d0 = unimplemented  {fst qword [esp+0x54], st0} */;
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0x5c]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [&g_533548]} */
🚫🚫🚫                        double var_c8_1 = /* double var_c8_1 =
                            unimplemented  {fstp qword [esp+0x6c], st0} */;
                        /* unimplemented  {fstp qword [esp+0x6c], st0} */
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0x74]} */
🚫🚫                        /* unimplemented  {fmul st0, qword [&g_533548]} */
🚫🚫🚫                        double var_c0_1 = /* double var_c0_1 =
                            unimplemented  {fstp qword [esp+0x80], st0} */;
                        /* unimplemented  {fstp qword [esp+0x80], st0} */
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0xa0]} */
🚫🚫                        /* unimplemented  {fadd st0, st1} */
🚫🚫🚫                        double var_88 = /* double var_88 =
                            unimplemented  {fstp qword [esp+0xb8], st0} */;
                        /* unimplemented  {fstp qword [esp+0xb8], st0} */
🚫🚫🚫                        /* unimplemented  {fstp st0, st0} */
                        /* unimplemented  {fstp st0, st0} */
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0xa8]} */
🚫🚫                        /* unimplemented  {fadd qword [esp+0x78]} */
🚫🚫🚫                        double var_80 = /* double var_80 =
                            unimplemented  {fstp qword [esp+0xc0], st0} */;
                        /* unimplemented  {fstp qword [esp+0xc0], st0} */
🚫🚫                        /* unimplemented  {fld st0, qword [esp+0xb0]} */
🚫🚫                        /* unimplemented  {fadd qword [esp+0x80]} */
🚫🚫🚫                        double var_78_1 = /* double var_78_1 =
                            unimplemented  {fstp qword [esp+0xc8], st0} */;
                        /* unimplemented  {fstp qword [esp+0xc8], st0} */
                        void* var_70;
                        sub_4cc2a0(Level_StartMission_4(), &var_70, &var_a0, &var_88, 1, 0xff,
                            nullptr, 0xffffffff);
                        int32_t* eax_22 = var_104;
                        int32_t var_110_2 = 0;
                        int32_t ebp_2 = *eax_22;
                        double var_68[0xa];
                        int16_t top_20;

                        if (ebp_2 > 0)
                        {
                            void** var_114_2 = &eax_22[2];
                            bool cond:3_1;

                            do
                            {
                                void* eax_24 = *var_114_2;
                                memcpy(&var_ec, &var_68, 0x18);
                                var_108_2 = eax_24;
                                void* eax_25 = sub_4c3440(eax_24);
                                var_dc_1 = *(eax_25 + 0x10);
                                *(&var_dc_1 + 4) = *(eax_25 + 0x14);
🚫🚫                                sub_4b32f0(sub_4c3440(var_108_2), &var_ec);
                                /* unimplemented  {call sub_4b32f0} */
🚫🚫                                /* unimplemented  {fld st0, dword [ebx+0x70]} */
🚫🚫                                /* unimplemented  {fmul st0, qword [&g_533a40]} */
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
                                    var_100_2 = 1;
                                    break;
                                }

                                cond:3_1 = var_110_2 + 1 < ebp_2;
                                var_110_2 += 1;
                                var_114_2 = &var_114_2[1];
                            } while (cond:3_1);
                        }

                        int32_t var_110_3 = 0;
                        int32_t* eax_32 = *eax_19;
                        var_104 = eax_32;

                        if (eax_32 > 0)
                        {
                            int32_t* var_114_3 = &eax_19[2];
                            bool cond:4_1;

                            do
                            {
                                void* ebp_3 = *var_114_3;
                                memcpy(&var_ec, &var_68, 0x18);
                                var_dc_1 = *(ebp_3 + 0x30);
                                *(&var_dc_1 + 4) = *(ebp_3 + 0x34);
🚫🚫                                sub_4b32f0(ebp_3 + 0x20, &var_ec);
                                /* unimplemented  {call sub_4b32f0} */
🚫🚫                                /* unimplemented  {fld st0, dword [ebx+0x70]} */
🚫🚫                                /* unimplemented  {fmul st0, qword [&g_533a40]} */
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
                                    *(ebp_3 + 0x248) = 1;
                                    *(ebp_3 + 0x23c) = 9;
                                    var_f4_1 = 1;
                                    break;
                                }

                                cond:4_1 = var_110_3 + 1 < var_104;
                                var_110_3 += 1;
                                var_114_3 = &var_114_3[1];
                            } while (cond:4_1);
                        }

                        int32_t var_110_4 = 0;
                        int32_t* eax_38 = *eax_20;
                        var_104 = eax_38;

                        if (eax_38 > 0)
                        {
                            int32_t* var_114_4 = eax_20 + 8;
                            bool cond:5_1;

                            do
                            {
                                int32_t ebp_4 = *var_114_4;
                                memcpy(&var_ec, &var_68, 0x18);
                                void* eax_39 = sub_4c3440(ebp_4);
                                var_dc_1 = *(eax_39 + 0x10);
                                *(&var_dc_1 + 4) = *(eax_39 + 0x14);
🚫🚫                                sub_4b32f0(sub_4c3440(ebp_4), &var_ec);
                                /* unimplemented  {call sub_4b32f0} */
🚫🚫                                /* unimplemented  {fld st0, dword [ebx+0x70]} */
🚫🚫                                /* unimplemented  {fmul st0, qword [&g_533a40]} */
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
                                    *(a1 + 0xa4) = ebp_4;
                                    var_f0_1 = 1;
                                    break;
                                }

                                cond:5_1 = var_110_4 + 1 < var_104;
                                var_110_4 += 1;
                                var_114_4 = &var_114_4[1];
                            } while (cond:5_1);
                        }

                        int32_t var_18;

                        if (!var_18)
                            sub_46a0a0(a1);
                        else
                        {
                            if (!var_f4_1 && !var_f0_1)
                            {
                                void* var_12c_9 = a1;

                                if (sub_46a970(&var_68))
                                    sub_469d00(a1, &var_68);
                            }

                            if (!var_100_2)
                            {
                                void* eax_50 = var_70;

                                if (!eax_50)
                                    sub_46a0a0(a1);
                                else
                                    sub_46a9f0(a1, eax_50);
                            }
                            else
                            {
                                sub_46a9f0(a1, var_108_2);
                                sub_469cc0(a1, var_108_2);
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
