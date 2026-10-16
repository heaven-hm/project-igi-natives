#include "gi_platform.h"
#include "0042FE40-Menu_PlayMusic_23.h"
int32_t Menu_PlayMusic_23()

{
    int32_t valA = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(Vehicle_CheckFlightDynamics(), valA, sub_42fe80);
    int32_t valA2 = SoundSys_SetMasterVolume_18();
    return QTask_RemoveEventCallback(Vehicle_CheckFlightDynamics(), valA2, sub_42fef0);
}
