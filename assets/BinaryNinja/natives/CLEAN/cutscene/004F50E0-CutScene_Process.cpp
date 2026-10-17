// IGI native provenance: CutScene_Process - 0x004F50E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F50E0-CutScene_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CutScene_Process.h"
int32_t* CutScene_Process(void* context)

{
    if (Script_EvaluateCondition_4(context) >= 0)
    {
        int32_t data_1 = Script_SpawnNewTask_6();
        int32_t entity_1 = 0;
        entity_1 = *(context + 0x1c);
        int32_t data_5 = *(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0);

        if (data_5)
            data_5(context);
    }

    Script_CallNativeHandler_6(context + 0x7c);
    Script_CallNativeHandler_6(context + 0xcc);
    Script_CallNativeHandler_6(context + 0x11c);
    Script_CallNativeHandler_6(context + 0x16c);
    Script_CallNativeHandler_6(context + 0x1bc);
    int32_t* data_8 = *(context + 0x25c);

    if (data_8)
    {
        QTask_FindType(data_8);
        *(context + 0x25c) = 0;
    }

    int32_t* data_9 = *(context + 0x264);

    if (data_9)
    {
        QTask_FindType(data_9);
        *(context + 0x264) = 0;
    }

    int32_t* data_10 = *(context + 0x268);

    if (data_10)
    {
        QTask_FindType(data_10);
        *(context + 0x268) = 0;
    }

    int32_t* result = *(context + 0x260);

    if (result)
    {
        result = QTask_FindType(result);
        *(context + 0x260) = 0;
    }

    return result;
}
