// IGI native provenance: Menu_RequestScreen_22 - 0x0042DAC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042DAC0-Menu_RequestScreen_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_22.h"
int32_t Menu_RequestScreen_22()

{
    int32_t data_val = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(Menu_LeaveMenus_23(), data_val, Menu_LeaveMenus_22);
    int32_t data_2 = SoundSys_SetMasterVolume_18();
    return QTask_RemoveEventCallback(Menu_LeaveMenus_23(), data_2, sub_42dce0);
}
