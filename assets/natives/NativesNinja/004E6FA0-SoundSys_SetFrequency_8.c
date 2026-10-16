#include "004E6FA0-SoundSys_SetFrequency_8.h"
/* 0x004e6fa0 SoundSys_SetFrequency_8 full linked: callers=3 callees=1 */
void* sub_4e6fa0(void* a1)

{
    void* i = g_a5e5f4;

    if (i)
    {
        int32_t edx_1 = *(a1 + 4);

        do
        {
            if (*(i + 0x10) == edx_1 && *(i + 0x14) == *(a1 + 8))
            {
                void* eax = *(i + 0x1c);

                if (eax)
                    return sub_4966e0(eax, edx_1, a1, eax);

                eax = 1;
                return eax;
            }

            i = *(i + 4);
        } while (i);
    }

    i = 0;
    return i;
}
