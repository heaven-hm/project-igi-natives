#include "StatusScreen_Init_C11.h"
extern uint16_t TaskType_Register(const char *name, int size, void *ops, int flags);
extern void QTask_Subscribe(int type, int event, void *fn);
extern void Script_RegisterNamespace(const char *ns, const char *path); /* 0x4b12f0 */
extern void *Status_Alloc(void);    /* 0x4017c0 */
extern void *StatusScreen_OnLoad(void);    /* sub_4869b0 */
extern void *StatusScreen_OnEvent1(void);  /* sub_486cd0 */
extern void *StatusScreen_OnEvent2(void);  /* sub_486d70 */
extern void *StatusScreen_OnEvent3(void);  /* sub_486f30 */
/* Registers the HUD status-message task type + its script namespace. */
void StatusScreen_Init(void)
{
    g_StatusScreenType = TaskType_Register("StatusScreen", 0x4f0, 0, 0);
    g_MsgPool = 0x4017c0(0x181);
    QTask_Subscribe(g_StatusScreenType, 0, StatusScreen_OnLoad);
    QTask_Subscribe(g_StatusScreenType, 1, StatusScreen_OnEvent1);
    QTask_Subscribe(g_StatusScreenType, 2, StatusScreen_OnEvent2);
    QTask_Subscribe(g_StatusScreenType, 0x4e7530(), StatusScreen_OnEvent3);
    Script_RegisterNamespace("STATUSSCREEN:", "LOCAL:screens/game/status/");
}
