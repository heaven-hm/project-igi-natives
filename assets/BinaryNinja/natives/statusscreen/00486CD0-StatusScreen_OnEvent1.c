// Original IGI.EXE function: StatusScreen_OnEvent1 (VA 0x00486CD0; static CFG gate PASS, CFG score 1.000).
#include "StatusScreen_OnEvent1.h"

int32_t StatusScreen_OnEvent1(void* pThis)

{
    long double x87_r7_1 = *(pThis + 0x4e8) + 0.0666666701f;
    *(pThis + 0x4e8) = x87_r7_1;
    long double temp0 = 2f;
    x87_r7_1 - temp0;
    int32_t result_1;
    result_1 = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result_1 + 1) & 0x41))
        *(pThis + 0x4e8) = 0;

    int32_t* i = *(pThis + 8);

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
