// IGI native provenance: FlatSky_Action - 0x0051EC30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051EC30-FlatSky_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FlatSky_Action.h"
int32_t FlatSky_Action(void* context)

{
    int32_t result = *(context + 0x44);

    if (result)
    {
        result = Struct_Clear36(context + 0x20);
        *(context + 0x44) = 0;
    }

    return result;
}
