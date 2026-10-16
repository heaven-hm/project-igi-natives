#include "SoundManager_Init_2.h"

int32_t SoundManager_Init_2(void* pThis, char* param)

{
    if (!param || !*param)
    {
        int32_t* i = *(pThis + 8);

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
                uint32_t eax_5 = Script_ParseEnumReal32_8();
                int32_t ecx_2 = 0;
                ecx_2 = i[7];
                int32_t eax_9 = *(((eax_5 * 0x180 + ecx_2) << 2) + &g_a96ae0);

                if (eax_9)
                    eax_9(i, 0);

                afa7e0_1 = g_afa7e0 - 1;
                g_afa7e0 = afa7e0_1;
                i = *((afa7e0_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    Script_Isexists(pThis + 0x6c, pThis);
    Script_Isexists(pThis + 0xbc, pThis);
    return 0;
}
