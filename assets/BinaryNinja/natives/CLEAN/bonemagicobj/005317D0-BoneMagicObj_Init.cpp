// IGI native provenance: BoneMagicObj_Init - 0x005317D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005317D0-BoneMagicObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BoneMagicObj_Init.h"
void* BoneMagicObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("BoneMagicObj", 0x130, Render_DrawRigidMesh_12(), 0);
    g_54f848 = data_1;
    QTask_RemoveEventCallback(data_1, 4, 0);
    int32_t data_2 = DynObj_FindSymbol_6();
    int32_t item_8 = data_2;
    data_2 = g_54f848;
    QTask_RemoveEventCallback(data_2, item_8, sub_5316f0);
    QTask_TriggerEvent(g_54f848, 1, BoneMagicObj_LoadParameters);
    QTask_RemoveEventCallback(g_54f848, 0, BoneMagicObj_Setup);
    int32_t data_3 = MagicObj_GetEventId();
    int32_t item_8_1 = data_3;
    data_3 = g_54f848;
    QTask_RemoveEventCallback(data_3, item_8_1, BoneMagicObj_Process);
    QTask_RemoveEventCallback(g_54f848, 0xc, sub_531ca0);
    int32_t data_4 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_54f848, data_4, BoneMagicObj_Update);
    int32_t data_5 = DynObj_RegisterSymbol_6();
    int32_t item_8_3 = data_5;
    data_5 = g_54f848;
    QTask_RemoveEventCallback(data_5, item_8_3, sub_427f80);
    QTask_TriggerEvent(g_54f848, 2, BoneMagicObj_OnEvent);
    return TaskType_Set("TASKTYPE_BONEMAGICOBJ", *g_54f848);
}
