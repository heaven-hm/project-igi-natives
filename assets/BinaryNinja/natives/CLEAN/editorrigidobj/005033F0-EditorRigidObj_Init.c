// IGI native provenance: EditorRigidObj_Init - 0x005033F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005033F0-EditorRigidObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditorRigidObj_Init.h"
int32_t EditorRigidObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("EditorRigidObj", 0x20, QTask_OpenEvent_2(), 0);
    g_54e634 = data_1;
    QTask_RemoveEventCallback(data_1, 4, 0);
    QTask_RemoveEventCallback(g_54e634, 9, 0);
    QTask_RemoveEventCallback(g_54e634, 0xa, 0);
    QTask_RemoveEventCallback(g_54e634, 0xb, 0);
    int32_t data_3 = Render_DrawSplineMesh_4();
    int32_t item_8 = data_3;
    data_3 = g_54e634;
    QTask_RemoveEventCallback(data_3, item_8, 0);
    QTask_RemoveEventCallback(g_54e634, 7, 0);
    int32_t data_4 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_54e634, data_4, 0);
    int32_t data_5 = DynObj_UpdateDynTree_12();
    int32_t item_8_2 = data_5;
    data_5 = g_54e634;
    QTask_RemoveEventCallback(data_5, item_8_2, 0);
    return QTask_RemoveEventCallback(g_54e634, 8, 0);
}
