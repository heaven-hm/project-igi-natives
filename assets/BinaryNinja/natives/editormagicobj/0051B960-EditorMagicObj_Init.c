// Original IGI.EXE function: EditorMagicObj_Init (VA 0x0051B960; static CFG gate PASS, CFG score 1.000).
#include "EditorMagicObj_Init.h"
void* EditorMagicObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("EditorMagicObj", 0x140, MagicObj_GetTypeId(), 0);
    g_a8376c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_51b850);
    QTask_TriggerEvent(g_a8376c, 2, sub_51b940);
    int32_t data_3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_a8376c, data_3, sub_51ba60);
    int32_t data_4 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_a8376c, data_4, sub_51baa0);
    int32_t data_5 = DynObj_FindSymbol_6();
    int32_t item_8_2 = data_5;
    data_5 = g_a8376c;
    QTask_RemoveEventCallback(data_5, item_8_2, EditorMagicObj_LoadParameters);
    int32_t data_6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a8376c, data_6, 0);
    QTask_RemoveEventCallback(g_a8376c, 9, 0);
    QTask_RemoveEventCallback(g_a8376c, 0xa, 0);
    QTask_RemoveEventCallback(g_a8376c, 0xb, 0);
    return TaskType_Set("TASKTYPE_EDITORMAGICOBJ", *g_a8376c);
}
