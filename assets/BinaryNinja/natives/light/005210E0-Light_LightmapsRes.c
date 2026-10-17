// IGI native provenance: Light_LightmapsRes - 0x005210E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005210E0-Light_LightmapsRes.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_LightmapsRes.h"
int32_t Light_LightmapsRes()

{
    char* item_4 = "lightmaps.res";
    char* item_8 = "lightmaps";
    Game_DataSymbolLoad(0xa83b54, "MISSION:%s/%s");
    return 0xa83b54;
}
