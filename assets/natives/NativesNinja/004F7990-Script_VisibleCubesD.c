#include "004F7990-Script_VisibleCubesD.h"
/* 0x004f7990 Script_VisibleCubesD full linked: callers=1 callees=6 */
int32_t sub_4f7990(void* a1)

{
    void* edi = a1;
    int32_t var_7bc = 7;
    long double x87_r7_1 = *(edi + 0x2c7c) * 7f;
    g_a76c88 = 0;
    void* esi = edi + 0x68;
    float var_7b4 = x87_r7_1;
    int16_t top = 0;
    bool cond:1_1;

    do
    {
        int32_t var_7c0_1 = 7;
        bool cond:0_1;

        do
        {
            int32_t i_4 = 7;
            int32_t i;

            do
            {
🚫🚫                sub_4f7cc0(edi, esi, var_7b4);
                top -= 3;
                /* unimplemented  {call sub_4f7cc0} */
                sub_4f7df0(edi, esi);
                esi += 0x20;
                i = i_4;
                i_4 -= 1;
            } while (i != 1);
            cond:0_1 = var_7c0_1 != 1;
            var_7c0_1 -= 1;
        } while (cond:0_1);
        cond:1_1 = var_7bc != 1;
        var_7bc -= 1;
    } while (cond:1_1);

    if (!*(edi + 0x2cb4))
    {
        int32_t* i_5 = nullptr;
        void* ecx_1 = edi + 0x128;
        int32_t var_7c0_2 = 0;
        bool cond:3_1;

        do
        {
            var_7b4 = 0f;
            int32_t __saved_edi;
            int32_t* edx_1 = &(&__saved_edi)[i_5 * 2 + 0x6a];
            double* eax_8 = &(&__saved_edi)[i_5 * 6 + 0xd0];
            int32_t* var_7bc_1 = ecx_1 - 0xa4;
            void* var_7b8_1 = ecx_1;
            bool cond:2_1;

            do
            {
                int32_t* esi_2 = var_7bc_1;
                int32_t ecx_2 = 0;

                while (!*esi_2)
                {
                    ecx_2 += 1;
                    esi_2 = &esi_2[8];

                    if (ecx_2 >= 7)
                        break;
                }

                if (ecx_2 != 7)
                {
                    i_5 += 1;
                    memcpy(&eax_8[-2], var_7b8_1, 0x18);
🚫🚫                    /* unimplemented  {fld st0, qword [eax]} */
🚫🚫                    /* unimplemented  {fadd qword [&g_534b88]} */
🚫🚫🚫                    *eax_8 = /* *eax_8 = unimplemented  {fstp qword [eax], st0} */;
                    /* unimplemented  {fstp qword [eax], st0} */
                    edi = a1;
                    (&var_7b4)[i_5] = var_7c0_2;
                    void var_6f0;
                    *(&var_6f0 + (i_5 << 2)) = var_7b4;
                    *edx_1 = 0;
                    edx_1[1] = 0xc1190000;
                    eax_8 = &eax_8[3];
                    edx_1 = &edx_1[2];
                }

                var_7b8_1 += 0xe0;
                cond:2_1 = var_7b4 + 1 < 7;
                var_7b4 += 1;
                var_7bc_1 = &var_7bc_1[0x38];
            } while (cond:2_1);
            ecx_1 = var_7b8_1;
            cond:3_1 = var_7c0_2 + 1 < 7;
            var_7c0_2 += 1;
        } while (cond:3_1);
        int32_t* i_1 = i_5;

        if (i_5 > 0)
        {
            void var_4a0;
            double* var_7c0_3 = &var_4a0;
            void var_628;
            double* edi_2 = &var_628;
            int32_t* var_7bc_2 = a1 + 0x2d18;

            do
            {
                int32_t* i_3 = 0x13;

                if (i_1 <= 0x13)
                    i_3 = i_1;

                sub_4cb9f0(g_a44344, var_7bc_2, var_7c0_3, i_3, edi_2, 0xff, nullptr,
                    0xffffffff);
                i_1 -= 0x13;
                edi_2 = &edi_2[0x13];
                var_7c0_3 = &var_7c0_3[0x39];
                var_7bc_2 = &var_7bc_2[0x214];
            } while (i_1 > 0);

            edi = a1;
        }

        int32_t edx_5 = 0;

        if (i_5 > 0)
        {
            double* var_7b8_2 = edi + 0x2d30;

            do
            {
                if (var_7b8_2[8])
                {
                    int32_t i_6 = 7;
                    int32_t var_7b0[0x30];
                    int32_t var_6ec[0x31];
                    int32_t* ecx_17 = (var_7b0[edx_5] * 7 + var_6ec[edx_5]) * 0xe0 + edi + 0x84;
                    int32_t i_2;

                    do
                    {
🚫🚫                        /* unimplemented  {fld st0, dword [edi+0x2c7c]} */
🚫🚫                        /* unimplemented  {fmul st0, dword [&g_533504]} */
🚫🚫                        /* unimplemented  {fsubr st0, qword [ecx-0xc]} */
⋯                        long double temp3_1 = *var_7b8_2;
                        /* unimplemented  {fcomp st0, qword [eax]} f- temp3_1 */ - temp3_1;
                        bool c0_1 = /* bool c0_1 =
                            unimplemented  {fcomp st0, qword [eax]} f< temp3_1 */ < temp3_1;
                        bool c2_1 = FCMP_UO(/* bool c2_1 =
                            is_unordered.t(unimplemented  {fcomp st0, qword [eax]}, temp3_1) */,
                            temp3_1);
                        bool c3_1 = /* bool c3_1 =
                            unimplemented  {fcomp st0, qword [eax]} f== temp3_1 */ == temp3_1;
                        /* unimplemented  {fcomp st0, qword [eax]} */

                        if (*(&((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                                | (top & 7) << 0xb) + 1) & 1)
                            *ecx_17 = 0;

                        ecx_17 = &ecx_17[8];
                        i_2 = i_6;
                        i_6 -= 1;
                    } while (i_2 != 1);
                }

                edx_5 += 1;
                var_7b8_2 = &var_7b8_2[0xe];
            } while (edx_5 < i_5);
        }

        *(edi + 0x2d10) = sub_4f7c20(edi);
        *(edi + 0x4288) = i_5;
    }

    int32_t var_7d4_3 = g_a76c88;
    return sub_4e7bd0("Visible Cubes: %d\n");
}
