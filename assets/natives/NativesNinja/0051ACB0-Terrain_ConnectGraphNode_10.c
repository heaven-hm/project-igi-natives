#include "0051ACB0-Terrain_ConnectGraphNode_10.h"
/* 0x0051acb0 Terrain_ConnectGraphNode_10 full linked: callers=1 callees=1 */
int32_t sub_51acb0(void* a1)

{
    void* edi = a1;
    int32_t i_1 = 0;
    int32_t i = *(edi + 0x1f8);

    if (i > 0)
    {
        int32_t* esi_1 = edi + 0x68;
        int32_t* var_10_1 = esi_1;

        do
        {
            sub_519bd0(*esi_1);
            void* ecx_1 = *esi_1;
🚫🚫            /* unimplemented  {fld st0, dword [ecx+0x58]} */
🚫🚫            /* unimplemented  {fadd dword [ecx+0x48]} */
🚫🚫            /* unimplemented  {fadd dword [ecx+0x38]} */
🚫🚫🚫🚫🚫            long double temp0_1 = 0f;
            /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp0_1 */ - temp0_1;
            bool c0_1 = /* bool c0_1 =
                unimplemented  {fcom st0, dword [&g_5333ec]} f< temp0_1 */ < temp0_1;
            bool c2_1 = FCMP_UO(/* bool c2_1 =
                is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp0_1) */,
                temp0_1);
            bool c3_1 = /* bool c3_1 =
                unimplemented  {fcom st0, dword [&g_5333ec]} f== temp0_1 */ == temp0_1;
            int16_t top;

            if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | ((top - 2) & 7) << 0xb) + 1) & 0x41)
            {
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
🚫🚫                /* unimplemented  {fld st0, dword [ecx+0x48]} */
⋯                long double temp1_1 = *(ecx_1 + 0x38);
                /* unimplemented  {fcomp st0, dword [ecx+0x38]} f- temp1_1 */ - temp1_1;
                bool c0_2 = /* bool c0_2 =
                    unimplemented  {fcomp st0, dword [ecx+0x38]} f< temp1_1 */ < temp1_1;
                bool c2_2 = FCMP_UO(/* bool c2_2 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [ecx+0x38]}, temp1_1) */,
                    temp1_1);
                bool c3_2 = /* bool c3_2 =
                    unimplemented  {fcomp st0, dword [ecx+0x38]} f== temp1_1 */ == temp1_1;
                /* unimplemented  {fcomp st0, dword [ecx+0x38]} */
                int32_t edx_1 = 0;
                int32_t var_c = 1;
                int32_t var_8_1 = 2;
                int32_t var_4_1 = 0;

                if (!(*(&((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                        | ((top - 1) & 7) << 0xb) + 1) & 0x41))
                    edx_1 = 1;

🚫🚫                /* unimplemented  {fld st0, dword [ecx+0x58]} */
⋯                long double temp2_1 = *((edx_1 << 4) + ecx_1 + 0x38);
                /* unimplemented  {fcomp st0, dword [eax+ecx+0x38]} f- temp2_1 */ - temp2_1;
                bool c0_3 = /* bool c0_3 =
                    unimplemented  {fcomp st0, dword [eax+ecx+0x38]} f< temp2_1 */ < temp2_1;
                bool c2_3 = FCMP_UO(/* bool c2_3 =
                    is_unordered.t(unimplemented  {fcomp st0, dword [eax+ecx+0x38]}, temp2_1) */,
                    temp2_1);
                bool c3_3 = /* bool c3_3 =
                    unimplemented  {fcomp st0, dword [eax+ecx+0x38]} f== temp2_1 */ == temp2_1;
                /* unimplemented  {fcomp st0, dword [eax+ecx+0x38]} */

                if (!(*(&((c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                        | ((top - 1) & 7) << 0xb) + 1) & 0x41))
                    edx_1 = 2;

                int32_t edi_1 = (&var_c)[edx_1];
                int32_t esi_2 = (&var_c)[edi_1];
🚫🚫                /* unimplemented  {fld st0, dword [eax+ecx+0x38]} */
🚫🚫                /* unimplemented  {fsub st0, dword [ebx+ecx+0x38]} */
🚫🚫                /* unimplemented  {fsub st0, dword [eax+ecx+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫                /* unimplemented  {fld st0, st0} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫🚫                *(ecx_1 + (edx_1 << 2) + 0x60) = /* *(ecx_1 + (edx_1 << 2) + 0x60) =
                    unimplemented  {fstp dword [ecx+edx*4+0x60], st0} */;
                /* unimplemented  {fstp dword [ecx+edx*4+0x60], st0} */
🚫🚫🚫🚫🚫                long double temp3_1 = 0f;
                /* unimplemented  {fcom st0, dword [&g_5333ec]} f- temp3_1 */ - temp3_1;
                bool c0_4 = /* bool c0_4 =
                    unimplemented  {fcom st0, dword [&g_5333ec]} f< temp3_1 */ < temp3_1;
                bool c2_4 = FCMP_UO(/* bool c2_4 =
                    is_unordered.t(unimplemented  {fcom st0, dword [&g_5333ec]}, temp3_1) */,
                    temp3_1);
                bool c3_4 = /* bool c3_4 =
                    unimplemented  {fcom st0, dword [&g_5333ec]} f== temp3_1 */ == temp3_1;

                if (!(*(&((c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                        | ((top - 2) & 7) << 0xb) + 1) & 0x40))
🚫🚫                    /* unimplemented  {fdivr st0, dword [&g_533504]} */

🚫🚫                /* unimplemented  {fld st0, dword [ecx+ebx*4+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [ecx+ebp*4+0x38]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫🚫                *(ecx_1 + (edi_1 << 2) + 0x60) = /* *(ecx_1 + (edi_1 << 2) + 0x60) =
                    unimplemented  {fstp dword [ecx+edi*4+0x60], st0} */;
                /* unimplemented  {fstp dword [ecx+edi*4+0x60], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [ecx+edx*4+0x38]} */
🚫🚫                /* unimplemented  {fadd dword [ecx+eax*4+0x38]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
                edi = a1;
🚫🚫🚫                *(ecx_1 + (esi_2 << 2) + 0x60) = /* *(ecx_1 + (esi_2 << 2) + 0x60) =
                    unimplemented  {fstp dword [ecx+esi*4+0x60], st0} */;
                /* unimplemented  {fstp dword [ecx+esi*4+0x60], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [ecx+eax*4+0x38]} */
🚫🚫                /* unimplemented  {fsub st0, dword [ecx+ebx*4+0x38]} */
                esi_1 = var_10_1;
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(ecx_1 + 0x6c) = /* *(ecx_1 + 0x6c) =
                    unimplemented  {fstp dword [ecx+0x6c], st0} */;
                /* unimplemented  {fstp dword [ecx+0x6c], st0} */
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
                top -= 1;
            }
            else
            {
🚫🚫                /* unimplemented  {fadd dword [&g_5333e0]} */
🚫🚫                /* unimplemented  {fsqrt } */
🚫🚫                /* unimplemented  {fld st0, st0} */
🚫🚫                /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫🚫                *(ecx_1 + 0x6c) = /* *(ecx_1 + 0x6c) =
                    unimplemented  {fstp dword [ecx+0x6c], st0} */;
                /* unimplemented  {fstp dword [ecx+0x6c], st0} */
🚫🚫                /* unimplemented  {fdivr st0, dword [&g_533504]} */
🚫🚫                /* unimplemented  {fld st0, dword [eax+0x4c]} */
🚫🚫                /* unimplemented  {fsub st0, dword [eax+0x54]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*esi_1 + 0x60) = /* *(*esi_1 + 0x60) =
                    unimplemented  {fstp dword [eax+0x60], st0} */;
                /* unimplemented  {fstp dword [eax+0x60], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [eax+0x50]} */
🚫🚫                /* unimplemented  {fsub st0, dword [eax+0x40]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*esi_1 + 0x64) = /* *(*esi_1 + 0x64) =
                    unimplemented  {fstp dword [eax+0x64], st0} */;
                /* unimplemented  {fstp dword [eax+0x64], st0} */
🚫🚫                /* unimplemented  {fld st0, dword [eax+0x3c]} */
🚫🚫                /* unimplemented  {fsub st0, dword [eax+0x44]} */
🚫🚫                /* unimplemented  {fmul st0, st1} */
🚫🚫                /* unimplemented  {fchs } */
🚫🚫🚫                *(*esi_1 + 0x68) = /* *(*esi_1 + 0x68) =
                    unimplemented  {fstp dword [eax+0x68], st0} */;
                /* unimplemented  {fstp dword [eax+0x68], st0} */
🚫🚫🚫                /* unimplemented  {fstp st0, st0} */
                /* unimplemented  {fstp st0, st0} */
                top -= 1;
            }

            void* eax_11 = *esi_1;
            esi_1 = &esi_1[1];
            var_10_1 = esi_1;
            *(eax_11 + 0x70) = *(eax_11 + 0x5c);
            i = i_1 + 1;
            i_1 = i;
        } while (i < *(edi + 0x1f8));
    }

    return i;
}
