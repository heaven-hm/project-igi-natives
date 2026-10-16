#include "Terrain_UpdateWaterWaves_9.h"
uint32_t Terrain_UpdateWaterWaves_9()

{
    Script_SpawnNewTask_8(g_a80300);
    DynObj_CreateMagicObject_4(g_a80304);
    QTask_LinkEventHandler_3(0x40000000);
    return QTask_CloseEvent_2(g_a81014);
}
