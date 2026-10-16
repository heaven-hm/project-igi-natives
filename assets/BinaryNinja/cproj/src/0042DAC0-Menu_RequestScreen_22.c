#include "gi_platform.h"
#include "0042DAC0-Menu_RequestScreen_22.h"
int32_t Menu_RequestScreen_22()

{
    int32_t valA = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(Menu_LeaveMenus_23(), valA, Menu_LeaveMenus_22);
    int32_t valA2 = SoundSys_SetMasterVolume_18();
    return QTask_RemoveEventCallback(Menu_LeaveMenus_23(), valA2, sub_42dce0);
}
