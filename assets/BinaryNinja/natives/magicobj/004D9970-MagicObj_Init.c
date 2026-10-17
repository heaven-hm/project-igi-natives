// Original IGI.EXE function: MagicObj_Init (VA 0x004D9970; static CFG gate PASS, CFG score 1.000).
#include "MagicObj_Init.h"

void* MagicObj_Init(void* pThis)

{
    void* result_1 = pThis;
    int32_t* i = *(result_1 + 8);

    if (*i && i)
    {
        int32_t afa7e0_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_3;

            if (!esi_1)
                eax_3 = nullptr;
            else
            {
                int32_t eax = *esi_1;
                int32_t eax_1 = -(eax);
                eax_3 = (eax_1 - eax_1) & esi_1;
            }

            *((afa7e0_1 << 2) + &g_afa6e0) = eax_3;
            int32_t afa7e0_2 = afa7e0_1 + 1;
            int32_t eax_4 = 0;
            g_afa7e0 = afa7e0_2;
            eax_4 = i[7];
            result_1 = *((eax_4 << 2) + &g_a970e0);

            if (result_1)
            {
                result_1 = result_1(i);
                afa7e0_2 = g_afa7e0;
            }

            i = *((afa7e0_2 << 2) + &g_afa6dc);
            afa7e0_1 = afa7e0_2 - 1;
            g_afa7e0 = afa7e0_1;
        } while (i);
    }

    return result_1;
}
