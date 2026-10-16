#include "00470BC0-Binocular_Action.h"
/* 0x00470bc0 Binocular_Action full linked: callers=0 callees=3 */
int32_t* sub_470bc0(void* a1, int32_t a2)

{
    int32_t* result = *(a1 + 0x1b0);

    if (result)
    {
        sub_472630(**(a1 + 0x1c0), a1 + 0x150);
        result = sub_472650(**(a1 + 0x1c0), a1 + 0x168);
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t ecx_3 = g_afa7e0;

            do
            {
                int32_t* edx_3 = *i;
                void* eax_5;

                if (!edx_3)
                    eax_5 = nullptr;
                else
                {
                    int32_t eax_2 = *edx_3;
                    int32_t eax_3 = -(eax_2);
                    eax_5 = (eax_3 - eax_3) & edx_3;
                }

                *((ecx_3 << 2) + &g_afa6e0) = eax_5;
                g_afa7e0 = ecx_3 + 1;
                uint32_t eax_7 = sub_487190();
                int32_t ecx_5 = 0;
                ecx_5 = i[7];
                result = *(((eax_7 * 0x180 + ecx_5) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, a2);

                ecx_3 = g_afa7e0 - 1;
                g_afa7e0 = ecx_3;
                i = *((ecx_3 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
