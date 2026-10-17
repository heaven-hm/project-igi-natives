// IGI native provenance: Menu_PlayMusic_23 - 0x0042FE40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042FE40-Menu_PlayMusic_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_PlayMusic_23.h"
int32_t Menu_PlayMusic_23()

{
    int32_t data_val = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(Vehicle_CheckFlightDynamics(), data_val, sub_42fe80);
    int32_t data_2 = SoundSys_SetMasterVolume_18();
    return QTask_RemoveEventCallback(Vehicle_CheckFlightDynamics(), data_2, sub_42fef0);
}
