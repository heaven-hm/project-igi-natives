#include "Terrain_ConnectGraphNode_6.h"
int32_t Terrain_ConnectGraphNode_6(char* a1)

{
    int32_t objC = 0;
    int32_t tmpD = 0;
    *(&objC + 1) = *a1;
    tmpD = a1[2];
    objC = a1[1];
    int32_t tmpD1 = 0;
    tmpD1 = a1[3];
    return (objC << 8 | tmpD) << 8 | tmpD1;
}
