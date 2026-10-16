#include "Weapon_CycleFireMode_8.h"
uint32_t Weapon_CycleFireMode_8()

{
    Sys_OpenFileStream_2(&g_5c1120);
    Sys_OpenFileStream_2(&g_5c1108);
    QTask_CloseEvent_2(g_5c1138);
    uint32_t result = QTask_InitContext(g_540904);
    g_540904 = 0xff;
    return result;
}
