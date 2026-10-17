// Original IGI.EXE function: DynObj_FindSymbol_5 (VA 0x004C4820; static CFG gate PASS, CFG score 1.000).
#include "DynObj_FindSymbol_5.h"
uint32_t DynObj_FindSymbol_5()

{
    QTask_LinkEventHandler_3(0x8000000);
    QTask_CloseEvent_2(g_547f42);
    int32_t valA1 = g_a4433c;
    int32_t i = 0;
    g_547f42 = 0x181;

    if (valA1 > 0)
    {
        int32_t* srcS1 = &g_b97e24;

        do
        {
            void* valA2 = *srcS1;

            if (valA2)
            {
                Sys_ExecuteBytecode_2(valA2);
                *srcS1 = 0;
            }

            i += 1;
            srcS1 = &srcS1[0xa];
        } while (i < g_a4433c);
    }

    QTask_InitContext(g_547f3c);
    QTask_InitContext(g_547f3d);
    QTask_InitContext(g_547f3e);
    QTask_InitContext(g_547f3f);
    return QTask_InitContext(g_547f40);
}
