// Original IGI.EXE function: EditorRigidObj_Init (VA 0x005033F0; static CFG gate PASS, CFG score 1.000).
#include "EditorRigidObj_Init.h"
int32_t EditorRigidObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("EditorRigidObj", 0x20, QTask_OpenEvent_2(), 0);
    g_54e634 = valA1;
    QTask_RemoveEventCallback(valA1, 4, 0);
    QTask_RemoveEventCallback(g_54e634, 9, 0);
    QTask_RemoveEventCallback(g_54e634, 0xa, 0);
    QTask_RemoveEventCallback(g_54e634, 0xb, 0);
    int32_t valA3 = Render_DrawSplineMesh_4();
    int32_t v_8 = valA3;
    valA3 = g_54e634;
    QTask_RemoveEventCallback(valA3, v_8, 0);
    QTask_RemoveEventCallback(g_54e634, 7, 0);
    int32_t valA4 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_54e634, valA4, 0);
    int32_t valA5 = DynObj_UpdateDynTree_12();
    int32_t v_8_2 = valA5;
    valA5 = g_54e634;
    QTask_RemoveEventCallback(valA5, v_8_2, 0);
    return QTask_RemoveEventCallback(g_54e634, 8, 0);
}
