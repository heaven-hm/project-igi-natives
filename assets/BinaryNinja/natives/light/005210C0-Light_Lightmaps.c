// IGI native provenance: Light_Lightmaps - 0x005210C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005210C0-Light_Lightmaps.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_Lightmaps.h"
int32_t Light_Lightmaps()

{
    char* item_4 = "lightmaps";
    Game_DataSymbolLoad(0xa83a20, "MISSION:%s");
    return 0xa83a20;
}
