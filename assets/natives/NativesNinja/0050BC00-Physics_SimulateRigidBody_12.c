#include "0050BC00-Physics_SimulateRigidBody_12.h"
/* 0x0050bc00 Physics_SimulateRigidBody_12 full linked: callers=0 callees=1 */
int32_t __stdcall sub_50bc00(int32_t a1)

{
    if (*(a1 + 0xc) <= 0x10)
    {
        int32_t ecx_1 = *(a1 + 4);

        if (ecx_1 & 0x40)
        {
            int32_t eax_1 = 0;

            if (*(a1 + 0x10) && *(a1 + 0x14) && *(a1 + 0x18) && !(ecx_1 & 0xffffffbe))
            {
                int32_t ecx_2 = g_a7cebc;
                g_a7cebc = ecx_2 + 1;
                memcpy(ecx_2 * 0x44 + &g_a7c140, a1, 0x20);
                int32_t ecx_4 = *(a1 + 0x1c);

                if (!ecx_4)
                    *(ecx_2 * 0x44 + 0xa7c160) = 0;
                else
                {
                    int32_t eflags_1;
                    int32_t eax_2;
                    eax_2 = __bsf_gprv_memv(ecx_4);
                    *(ecx_2 * 0x44 + 0xa7c160) = eax_2;
                    int32_t eflags_2;
                    int32_t eax_4;
                    eax_4 = __bsr_gprv_memv(*(a1 + 0x1c));
                    eax_1 = eax_4 - *(ecx_2 * 0x44 + 0xa7c160) + 1;
                }

                *(ecx_2 * 0x44 + &g_a7c170) = eax_1;
                int32_t eflags_3;
                int32_t eax_7;
                eax_7 = __bsf_gprv_memv(*(a1 + 0x10));
                *(ecx_2 * 0x44 + 0xa7c164) = eax_7;
                int32_t eflags_4;
                int32_t eax_9;
                eax_9 = __bsf_gprv_memv(*(a1 + 0x14));
                *(ecx_2 * 0x44 + 0xa7c168) = eax_9;
                int32_t eflags_5;
                int32_t eax_11;
                eax_11 = __bsf_gprv_memv(*(a1 + 0x18));
                *(ecx_2 * 0x44 + 0xa7c16c) = eax_11;
                int32_t eflags_6;
                int32_t eax_13;
                eax_13 = __bsr_gprv_memv(*(a1 + 0x10));
                *(ecx_2 * 0x44 + 0xa7c174) = eax_13;
                int32_t eflags_7;
                int32_t eax_15;
                eax_15 = __bsr_gprv_memv(*(a1 + 0x14));
                *(ecx_2 * 0x44 + 0xa7c178) = eax_15;
                int32_t eflags_8;
                int32_t eax_17;
                eax_17 = __bsr_gprv_memv(*(a1 + 0x18));
                int32_t ebx_2 = *(ecx_2 * 0x44 + 0xa7c178);
                int32_t edi_2 = *(ecx_2 * 0x44 + 0xa7c174) + 1 - *(ecx_2 * 0x44 + 0xa7c164);
                int32_t eax_19 = 1 - *(ecx_2 * 0x44 + 0xa7c168);
                *(ecx_2 * 0x44 + 0xa7c174) = edi_2;
                int32_t ebx_3 = ebx_2 + eax_19;
                int32_t eax_22 = eax_17 - *(ecx_2 * 0x44 + 0xa7c16c) + 1;
                *(ecx_2 * 0x44 + 0xa7c17c) = eax_22;
                *(ecx_2 * 0x44 + 0xa7c178) = ebx_3;
                *(ecx_2 * 0x44 + &g_a7c180) = eax_22 + ebx_3 + edi_2;
            }
        }
    }

    return 1;
}
