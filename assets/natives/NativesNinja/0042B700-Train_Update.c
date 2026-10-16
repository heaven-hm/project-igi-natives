#include "0042B700-Train_Update.h"
/* 0x0042b700 Train_Update full linked: callers=0 callees=6 */
uint32_t Train_Update(int80_t a1 @ st0, void* a2)

{
    void* edi = a2;
    uint32_t result = Frames_GetUpdateCounter();

    if (*(edi + 0x888) != result)
    {
        *(edi + 0x888) = Frames_GetUpdateCounter();
        char eax_1 = sub_4f16c0(edi + 0x890);
        int16_t top;

        if (eax_1)
        {
            sub_4f16e0(edi + 0x890, edi);
            top = 1;
        }

        if (eax_1 && !a1)
        {
            int32_t* eax_7 = *(edi + 0x88c);

            if (eax_7)
            {
                QTask_FindType(eax_7);
                *(edi + 0x88c) = 0;
            }
        }
        else if (!*(edi + 0x88c))
        {
            char* eax_5 = "train_loop_1";

            if (!*(edi + 0x778))
                eax_5 = "train_loop_2";

            struct status_msg* eax_6 = sub_4e6b00(edi, eax_5);

            if (eax_6)
                *(edi + 0x88c) = eax_6;
        }

        void* ecx_1 = *(edi + 0x884);

        if (ecx_1)
        {
            void* eax_8 = *(edi + 0x14);
            int16_t top_1;

            if (*(eax_8 + 0x1c) != g_57bcb8)
            {
🚫🚫                top_1 = top - 1;
                /* unimplemented  {fld st0, dword [edi+0x720]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_5336d0]} */
                a2 = *(edi + 0x720);
            }
            else
            {
🚫🚫                top_1 = top - 1;
                /* unimplemented  {fld st0, dword [eax+0x720]} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_5336d0]} */
                a2 = *(eax_8 + 0x720);
            }

🚫🚫            /* unimplemented  {fld st0, dword [&g_5336cc]} */
⋯            /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
            bool c0_1 = /* bool c0_1 =
                unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                < /* bool c0_1 = unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
            bool c2_1 = FCMP_UO(/* bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, st1},
                unimplemented  {fcomp st0, st1}) */, /* bool c2_1 = is_unordered.t(
                unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
            bool c3_1 = /* bool c3_1 =
                unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                == /* bool c3_1 =
                unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
            /* unimplemented  {fcomp st0, st1} */
            int16_t top_5;

            if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | (top_1 & 7) << 0xb) + 1) & 0x41)
            {
🚫🚫                /* unimplemented  {fld st0, dword [&g_5333e0]} */
⋯                /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */
                    - /* unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1} */;
                bool c0_2 = /* bool c0_2 =
                    unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */
                    < /* bool c0_2 =
                    unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1} */;
                bool c2_2 = FCMP_UO(/* bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, st1},
                    unimplemented  {fcomp st0, st1}) */, /* bool c2_2 = is_unordered.t(
                    unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1}) */);
                bool c3_2 = /* bool c3_2 =
                    unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */
                    == /* bool c3_2 =
                    unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1} */;
                /* unimplemented  {fcomp st0, st1} */
                top_5 = top_1;

                if (*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_5 & 7) << 0xb) + 1) & 1)
                {
🚫🚫🚫                    /* unimplemented  {fstp st0, st0} */
                    /* unimplemented  {fstp st0, st0} */
🚫🚫                    /* unimplemented  {fld st0, dword [&g_5333e0]} */
                }
            }
            else
            {
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
🚫🚫                top_5 = top_1;
                /* unimplemented  {fld st0, dword [&g_5336cc]} */
            }

🚫🚫🚫            *(ecx_1 + 4) = /* *(ecx_1 + 4) = unimplemented  {fstp dword [ecx+0x4], st0} */;
            /* unimplemented  {fstp dword [ecx+0x4], st0} */
🚫🚫            /* unimplemented  {fld st0, dword [esp+0x14]} */
⋯            long double temp1_1 = 0.00100000005f;
            /* unimplemented  {fcomp st0, dword [&g_5336c0]} f- temp1_1 */ - temp1_1;
            bool c0_3 = /* bool c0_3 =
                unimplemented  {fcomp st0, dword [&g_5336c0]} f< temp1_1 */ < temp1_1;
            bool c2_3 = FCMP_UO(/* bool c2_3 =
                is_unordered.t(unimplemented  {fcomp st0, dword [&g_5336c0]}, temp1_1) */,
                temp1_1);
            bool c3_3 = /* bool c3_3 =
                unimplemented  {fcomp st0, dword [&g_5336c0]} f== temp1_1 */ == temp1_1;
            /* unimplemented  {fcomp st0, dword [&g_5336c0]} */
            a2 = 1;

            if (*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | ((top_5 + 1) & 7) << 0xb) + 1) & 0x41)
                a2 = nullptr;

🚫🚫            /* unimplemented  {fild st0, dword [esp+0x14]} */
🚫🚫🚫            *(*(edi + 0x884) + 8) = /* *(*(edi + 0x884) + 8) =
                unimplemented  {fstp dword [eax+0x8], st0} */;
            /* unimplemented  {fstp dword [eax+0x8], st0} */
        }

        int32_t* i = *(edi + 8);

        if (!*i || !i)
            result = g_afa7e0;
        else
        {
            result = g_afa7e0;

            do
            {
                int32_t* esi_2 = *i;
                void* ecx_5;

                if (!esi_2)
                    ecx_5 = nullptr;
                else
                {
                    int32_t ecx_2 = *esi_2;
                    int32_t ecx_3 = -(ecx_2);
                    ecx_5 = (ecx_3 - ecx_3) & esi_2;
                }

                *((result << 2) + &g_afa6e0) = ecx_5;
                int32_t eax_11 = result + 1;
                int32_t ecx_6 = 0;
                g_afa7e0 = eax_11;
                ecx_6 = i[7];
                int32_t ecx_7 = *((ecx_6 << 2) + &g_a970e0);

                if (ecx_7)
                {
                    ecx_7(i);
                    eax_11 = g_afa7e0;
                }

                i = *((eax_11 << 2) + &g_afa6dc);
                result = eax_11 - 1;
                g_afa7e0 = result;
            } while (i);
        }

        void* ecx_8 = *(edi + 0xe8);

        if (ecx_8 && !*(edi + 0x778))
        {
            int32_t* i_1 = *(ecx_8 + 8);

            if (*i_1 && i_1)
            {
                do
                {
                    int32_t* esi_3 = *i_1;
                    void* ecx_12;

                    if (!esi_3)
                        ecx_12 = nullptr;
                    else
                    {
                        int32_t ecx_9 = *esi_3;
                        int32_t ecx_10 = -(ecx_9);
                        ecx_12 = (ecx_10 - ecx_10) & esi_3;
                    }

                    *((result << 2) + &g_afa6e0) = ecx_12;
                    int32_t eax_12 = result + 1;
                    int32_t ecx_13 = 0;
                    g_afa7e0 = eax_12;
                    ecx_13 = i_1[7];
                    int32_t ecx_14 = *((ecx_13 << 2) + &g_a970e0);

                    if (ecx_14)
                    {
                        ecx_14(i_1);
                        eax_12 = g_afa7e0;
                    }

                    i_1 = *((eax_12 << 2) + &g_afa6dc);
                    result = eax_12 - 1;
                    g_afa7e0 = result;
                } while (i_1);
            }
        }
    }

    return result;
}
