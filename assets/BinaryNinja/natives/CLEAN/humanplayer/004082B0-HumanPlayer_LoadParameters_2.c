// IGI native provenance: HumanPlayer_LoadParameters_2 - 0x004082B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004082B0-HumanPlayer_LoadParameters_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_LoadParameters_2.h"
uint32_t HumanPlayer_LoadParameters_2()

{
    void* data_val;

    for (int32_t* i = &g_569470; i < 0x56e170; i = &i[0x9a])
    {
        if (i[1])
        {
            void* data_1 = i[-2];

            if (data_1)
            {
                Sys_ExecuteBytecode_2(data_1);
                i[-2] = 0;
            }

            data_val = *i;

            if (data_val)
            {
                data_val = Sys_ExecuteBytecode_2(data_val);
                *i = 0;
            }

            i[1] = 0;
        }
    }

    data_val = g_538518;
    QTask_InitContext(data_val);
    QTask_InitContext(g_538519);
    return QTask_InitContext(g_53851a);
}
