#include "00453550-PatrolPath_Init.h"
/* 0x00453550 PatrolPath_Init full linked: callers=1 callees=9 */
int32_t sub_453550()

{
    int32_t var_4 = 0;
    g_5bda70 = &g_5bda74;
    g_5bda78 = &g_5bda70;
    g_5bda74 = 0;
    int16_t eax_1 = TaskType_Register("PatrolPath", 0x34, QTask_OpenEvent_2(), 0);
    g_53e29c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_453630);
    QTask_TriggerEvent(g_53e29c, 2, sub_453650);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53e29c, eax_3, sub_453670);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53e29c, eax_4, sub_453680);
    g_5bda7c = 0;
    /* tailcall */
    return sub_453600();
}
