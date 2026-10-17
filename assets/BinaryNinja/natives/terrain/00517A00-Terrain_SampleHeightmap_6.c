// Original IGI.EXE function: Terrain_SampleHeightmap_6 (VA 0x00517A00; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_6.h"
int32_t* Terrain_SampleHeightmap_6(char* a1)

{
    if (Terrain_ConnectGraphNode_6(a1) == 0x464f524d)
        return Terrain_CalculateNormals_6(a1, 1, 0);

    return 0;
}
