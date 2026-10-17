// IGI native provenance: DynObj_FindSymbol_5 - 0x004C4820 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C4820-DynObj_FindSymbol_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_FindSymbol_5.h"
uint32_t DynObj_FindSymbol_5()

{
    QTask_LinkEventHandler_3(0x8000000);
    QTask_CloseEvent_2(g_547f42);
    int32_t data_1 = g_a4433c;
    int32_t i = 0;
    g_547f42 = 0x181;

    if (data_1 > 0)
    {
        int32_t* source_1 = &g_b97e24;

        do
        {
            void* data_2 = *source_1;

            if (data_2)
            {
                Sys_ExecuteBytecode_2(data_2);
                *source_1 = 0;
            }

            i += 1;
            source_1 = &source_1[0xa];
        } while (i < g_a4433c);
    }

    QTask_InitContext(g_547f3c);
    QTask_InitContext(g_547f3d);
    QTask_InitContext(g_547f3e);
    QTask_InitContext(g_547f3f);
    return QTask_InitContext(g_547f40);
}
