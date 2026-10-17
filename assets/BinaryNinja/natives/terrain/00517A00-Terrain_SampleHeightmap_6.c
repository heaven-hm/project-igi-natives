// Original IGI.EXE function: Terrain_SampleHeightmap_6 (VA 0x00517A00; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_6.h"
int32_t* Terrain_SampleHeightmap_6(char* context)

{
    if (Terrain_ConnectGraphNode_6(context) == 0x464f524d)
        return Terrain_CalculateNormals_6(context, 1, 0);

    return 0;
}
