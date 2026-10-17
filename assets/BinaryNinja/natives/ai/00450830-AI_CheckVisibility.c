// IGI native provenance: AI_CheckVisibility - 0x00450830 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00450830-AI_CheckVisibility.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckVisibility.h"
int32_t* AI_CheckVisibility()

{
    DynObj_CreateMagicObject_4(g_58a9d4);
    QTask_CloseEvent_2(g_53c920);
    char data_val = g_53c922;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_53c923;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    data_val = g_53c924;

    if (data_val != 0xff)
        QTask_InitContext(data_val);

    for (int32_t* i = &g_57d844; i < 0x57e1c4; i = &i[0x4c])
    {
        if (i[-1])
            Qtask_UpdateList(*i);
    }

    AIEVENT_CREATE_2();
    AIAction_Patrol_3();
    int32_t* result;

    for (int32_t* i_1 = &g_58a9f4; i_1 < &g_58aa18; i_1 = &i_1[1])
    {
        result = *i_1;

        if (result)
            result = Qvm_Cleanup(result);
    }

    return result;
}
