// Original IGI.EXE function: PatrolPath_Init (VA 0x00453550; static CFG gate FAIL, CFG score 0.750).
#include "PatrolPath_Init.h"
int32_t PatrolPath_Init()

{
    int32_t v_4 = 0;
    g_5bda70 = &g_5bda74;
    g_5bda78 = &g_5bda70;
    g_5bda74 = 0;
    int16_t valA1 = TaskType_Register("PatrolPath", 0x34, QTask_OpenEvent_2(), 0);
    g_53e29c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_453630);
    QTask_TriggerEvent(g_53e29c, 2, sub_453650);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53e29c, valA3, sub_453670);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53e29c, valA4, sub_453680);
    g_5bda7c = 0;
    /* tailcall */
    return PatrolPath_Update();
}
