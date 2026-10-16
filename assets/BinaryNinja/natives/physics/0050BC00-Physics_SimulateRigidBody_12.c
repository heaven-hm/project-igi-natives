#include "Physics_SimulateRigidBody_12.h"
int32_t __stdcall Physics_SimulateRigidBody_12(int32_t a1)

{
    if (*(a1 + 0xc) <= 0x10)
    {
        int32_t objC1 = *(a1 + 4);

        if (objC1 & 0x40)
        {
            int32_t valA1 = 0;

            if (*(a1 + 0x10) && *(a1 + 0x14) && *(a1 + 0x18) && !(objC1 & 0xffffffbe))
            {
                int32_t objC2 = g_a7cebc;
                g_a7cebc = objC2 + 1;
                memcpy(objC2 * 0x44 + &g_a7c140, a1, 0x20);
                int32_t objC4 = *(a1 + 0x1c);

                if (!objC4)
                    *(objC2 * 0x44 + 0xa7c160) = 0;
                else
                {
                    int32_t eflags_1;
                    int32_t valA2;
                    valA2 = __bsf_gprv_memv(objC4);
                    *(objC2 * 0x44 + 0xa7c160) = valA2;
                    int32_t eflags_2;
                    int32_t valA4;
                    valA4 = __bsr_gprv_memv(*(a1 + 0x1c));
                    valA1 = valA4 - *(objC2 * 0x44 + 0xa7c160) + 1;
                }

                *(objC2 * 0x44 + &g_a7c170) = valA1;
                int32_t eflags_3;
                int32_t valA7;
                valA7 = __bsf_gprv_memv(*(a1 + 0x10));
                *(objC2 * 0x44 + 0xa7c164) = valA7;
                int32_t eflags_4;
                int32_t valA9;
                valA9 = __bsf_gprv_memv(*(a1 + 0x14));
                *(objC2 * 0x44 + 0xa7c168) = valA9;
                int32_t eflags_5;
                int32_t valA11;
                valA11 = __bsf_gprv_memv(*(a1 + 0x18));
                *(objC2 * 0x44 + 0xa7c16c) = valA11;
                int32_t eflags_6;
                int32_t valA13;
                valA13 = __bsr_gprv_memv(*(a1 + 0x10));
                *(objC2 * 0x44 + 0xa7c174) = valA13;
                int32_t eflags_7;
                int32_t valA15;
                valA15 = __bsr_gprv_memv(*(a1 + 0x14));
                *(objC2 * 0x44 + 0xa7c178) = valA15;
                int32_t eflags_8;
                int32_t valA17;
                valA17 = __bsr_gprv_memv(*(a1 + 0x18));
                int32_t ctxB2 = *(objC2 * 0x44 + 0xa7c178);
                int32_t dstD2 = *(objC2 * 0x44 + 0xa7c174) + 1 - *(objC2 * 0x44 + 0xa7c164);
                int32_t valA19 = 1 - *(objC2 * 0x44 + 0xa7c168);
                *(objC2 * 0x44 + 0xa7c174) = dstD2;
                int32_t ctxB3 = ctxB2 + valA19;
                int32_t valA22 = valA17 - *(objC2 * 0x44 + 0xa7c16c) + 1;
                *(objC2 * 0x44 + 0xa7c17c) = valA22;
                *(objC2 * 0x44 + 0xa7c178) = ctxB3;
                *(objC2 * 0x44 + &g_a7c180) = valA22 + ctxB3 + dstD2;
            }
        }
    }

    return 1;
}
