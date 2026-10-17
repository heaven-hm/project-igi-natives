// IGI native provenance: Terrain_SampleHeightmap_6 - 0x00517A00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00517A00-Terrain_SampleHeightmap_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SampleHeightmap_6.h"
int32_t* Terrain_SampleHeightmap_6(char* context)

{
    if (Terrain_ConnectGraphNode_6(context) == 0x464f524d)
        return Terrain_CalculateNormals_6(context, 1, 0);

    return 0;
}
