#include "0042FE40-Menu_PlayMusic_23.h"
/* 0x0042fe40 Menu_PlayMusic_23 full linked: callers=1 callees=6 */
int32_t Menu_PlayMusic_23()

{
    int32_t eax = sub_4ee0e0();
    QTask_RemoveEventCallback(Vehicle_CheckFlightDynamics(), eax, sub_42fe80);
    int32_t eax_2 = sub_4ee0f0();
    return QTask_RemoveEventCallback(Vehicle_CheckFlightDynamics(), eax_2, sub_42fef0);
}
