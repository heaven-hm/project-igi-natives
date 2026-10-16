#include "004082B0-HumanPlayer_LoadParameters_2.h"
/* 0x004082b0 HumanPlayer_LoadParameters_2 full linked: callers=1 callees=5 */
uint32_t HumanPlayer_LoadParameters_2()

{
    void* eax;

    for (int32_t* i = &g_569470; i < 0x56e170; i = &i[0x9a])
    {
        if (i[1])
        {
            void* eax_1 = i[-2];

            if (eax_1)
            {
                sub_4b0d10(eax_1);
                i[-2] = 0;
            }

            eax = *i;

            if (eax)
            {
                eax = sub_4b0d10(eax);
                *i = 0;
            }

            i[1] = 0;
        }
    }

    eax = g_538518;
    QTask_InitContext(eax);
    QTask_InitContext(g_538519);
    return QTask_InitContext(g_53851a);
}
