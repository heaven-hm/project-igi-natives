#include "00416900-Level_SetMission_4.h"
/* 0x00416900 Level_SetMission_4 full linked: callers=1 callees=1 */
int32_t Level_SetMission_4(void* a1)

{
    int32_t kind;
    kind = g_57b1a2;
    QTask_HandleInput(a1, kind, 0);
    return g_57babc;
}
