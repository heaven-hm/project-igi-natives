// Original IGI.EXE function: EditorMagicObj_Init (VA 0x0051B960; static CFG gate PASS, CFG score 1.000).
#include "EditorMagicObj_Init.h"
void* EditorMagicObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("EditorMagicObj", 0x140, MagicObj_GetTypeId(), 0);
    g_a8376c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_51b850);
    QTask_TriggerEvent(g_a8376c, 2, sub_51b940);
    int32_t valA3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_a8376c, valA3, sub_51ba60);
    int32_t valA4 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_a8376c, valA4, sub_51baa0);
    int32_t valA5 = DynObj_FindSymbol_6();
    int32_t v_8_2 = valA5;
    valA5 = g_a8376c;
    QTask_RemoveEventCallback(valA5, v_8_2, EditorMagicObj_LoadParameters);
    int32_t valA6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a8376c, valA6, 0);
    QTask_RemoveEventCallback(g_a8376c, 9, 0);
    QTask_RemoveEventCallback(g_a8376c, 0xa, 0);
    QTask_RemoveEventCallback(g_a8376c, 0xb, 0);
    return TaskType_Set("TASKTYPE_EDITORMAGICOBJ", *g_a8376c);
}
