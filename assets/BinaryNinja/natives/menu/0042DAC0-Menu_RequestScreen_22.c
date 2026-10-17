// Original IGI.EXE function: Menu_RequestScreen_22 (VA 0x0042DAC0; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_22.h"
int32_t Menu_RequestScreen_22()

{
    int32_t data_val = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(Menu_LeaveMenus_23(), data_val, Menu_LeaveMenus_22);
    int32_t data_2 = SoundSys_SetMasterVolume_18();
    return QTask_RemoveEventCallback(Menu_LeaveMenus_23(), data_2, sub_42dce0);
}
