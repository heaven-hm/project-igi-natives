#include "SoundSys_InitController.h"

void* SoundSys_InitController(void* pThis, int32_t param)

{
    void* result = pThis;
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
            uint32_t eax_5 = SoundSys_StopSoundSample_5();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_5 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param);

            afa7e0_1 = g_afa7e0 - 1;
            g_afa7e0 = afa7e0_1;
            i = *((afa7e0_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
