#include "Terrain_SampleHeightmap_6.h"
int32_t* Terrain_SampleHeightmap_6(char* a1)

{
    if (Terrain_ConnectGraphNode_6(a1) == 0x464f524d)
        return Terrain_CalculateNormals_6(a1, 1, 0);

    return 0;
}
