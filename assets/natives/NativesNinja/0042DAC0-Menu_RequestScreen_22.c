#include "0042DAC0-Menu_RequestScreen_22.h"
/* 0x0042dac0 Menu_RequestScreen_22 full linked: callers=1 callees=6 */
int32_t Menu_RequestScreen_22()

{
    int32_t eax = sub_4ee0e0();
    QTask_RemoveEventCallback(Menu_LeaveMenus_23(), eax, Menu_LeaveMenus_22);
    int32_t eax_2 = sub_4ee0f0();
    return QTask_RemoveEventCallback(Menu_LeaveMenus_23(), eax_2, sub_42dce0);
}
