#include "Terrain_ConnectGraphNode_3.h"
int32_t Terrain_ConnectGraphNode_3(long double a1 @ fp0) __location("fp0")

{
    int16_t x87control;
    return Terrain_SampleHeightmap_3(__checkTOS_withFB(a1), x87control, a1);
}
