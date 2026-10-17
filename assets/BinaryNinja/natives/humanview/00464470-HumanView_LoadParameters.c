// IGI native provenance: HumanView_LoadParameters - 0x00464470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00464470-HumanView_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanView_LoadParameters.h"
int32_t HumanView_LoadParameters(void* context)

{
    char result = *(context + 0xd9);

    if (!result)
        return result;

    *(context + 0xd9) = 0;
    Render_DrawSplineMesh_12(context);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
}
