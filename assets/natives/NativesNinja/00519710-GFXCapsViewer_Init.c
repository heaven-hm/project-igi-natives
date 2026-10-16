#include "00519710-GFXCapsViewer_Init.h"
/* 0x00519710 GFXCapsViewer_Init full linked: callers=1 callees=3 */
int32_t sub_519710()

{
    int32_t var_4 = 0;
    g_ba2028 = TaskType_Register("GFXCapsViewer", 0x20, 0x181, 0);
    int32_t eax_1 = sub_4f11f0();
    int32_t var_8 = eax_1;
    eax_1 = g_ba2028;
    return QTask_RemoveEventCallback(eax_1, var_8, sub_5196f0);
}
