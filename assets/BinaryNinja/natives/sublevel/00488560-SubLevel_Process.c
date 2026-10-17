// Original IGI.EXE function: SubLevel_Process (VA 0x00488560; static CFG gate PASS, CFG score 1.000).
#include "SubLevel_Process.h"

void* SubLevel_Process(void* pThis, int32_t param)

{
    void* result = pThis;

    if (*(result + 0x72))
    {
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t afa7e0_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_3;

                if (!edx_1)
                    eax_3 = nullptr;
                else
                {
                    int32_t eax = *edx_1;
                    int32_t eax_1 = -(eax);
                    eax_3 = (eax_1 - eax_1) & edx_1;
                }

                *((afa7e0_1 << 2) + &g_afa6e0) = eax_3;
                g_afa7e0 = afa7e0_1 + 1;
                uint32_t eax_5 = AI_CheckHearing_25();
                int32_t ecx_2 = 0;
                ecx_2 = i[7];
                result = *(((eax_5 * 0x180 + ecx_2) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, param);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
