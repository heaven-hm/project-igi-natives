// Original IGI.EXE function: BulletHole_Init (VA 0x0047CF70; static CFG gate PASS, CFG score 1.000).
#include "BulletHole_Init.h"
int32_t BulletHole_Init()

{
    int32_t valA = QTask_UnableToAllocateEvent(0);
    g_540904 = valA;
    int32_t valA2 = QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), valA, sub_47d380);
    valA2 = g_540904;
    QTask_RemoveEventCallback(SoundSys_EvaluateTrigger_2(), valA2, BulletHole_LoadParameters);
    int32_t v_4 = 0;
    g_5c1138 = TaskType_Register("BulletHole", 0xe148, QTask_OpenEvent_2(), 0);
    int32_t valA6 = DynObj_FindSymbol_6();
    QTask_RemoveEventCallback(g_5c1138, valA6, BulletHole_Setup);
    QTask_TriggerEvent(g_5c1138, 2, sub_47d320);
    int32_t valA7 = Render_TransformVertices_2();
    int32_t v_8_3 = valA7;
    valA7 = g_5c1138;
    QTask_TriggerEvent(valA7, v_8_3, sub_5188c0);
    int32_t valA8 = QObj_OnEvent();
    QTask_RemoveEventCallback(g_5c1138, valA8, sub_47d060);
    Sys_FreeMemory_2(&g_5c1108, 4, 0x64, 4);
    return Sys_FreeMemory_2(&g_5c1120, 0x40, 0x64, 4);
}
