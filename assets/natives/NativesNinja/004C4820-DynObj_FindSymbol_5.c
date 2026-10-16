#include "004C4820-DynObj_FindSymbol_5.h"
/* 0x004c4820 DynObj_FindSymbol_5 full linked: callers=1 callees=8 */
uint32_t sub_4c4820()

{
    QTask_LinkEventHandler_3(0x8000000);
    QTask_CloseEvent_2(g_547f42);
    int32_t eax_1 = g_a4433c;
    int32_t i = 0;
    g_547f42 = 0x181;

    if (eax_1 > 0)
    {
        int32_t* esi_1 = &g_b97e24;

        do
        {
            void* eax_2 = *esi_1;

            if (eax_2)
            {
                sub_4b0d10(eax_2);
                *esi_1 = 0;
            }

            i += 1;
            esi_1 = &esi_1[0xa];
        } while (i < g_a4433c);
    }

    QTask_InitContext(g_547f3c);
    QTask_InitContext(g_547f3d);
    QTask_InitContext(g_547f3e);
    QTask_InitContext(g_547f3f);
    return QTask_InitContext(g_547f40);
}
