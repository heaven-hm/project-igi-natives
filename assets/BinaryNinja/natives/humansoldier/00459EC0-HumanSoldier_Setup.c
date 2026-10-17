// IGI native provenance: HumanSoldier_Setup - 0x00459EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459EC0-HumanSoldier_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanSoldier_Setup.h"
int32_t HumanSoldier_Setup(void* context)

{
    if (*(context + 0xd01))
    {
        Render_DrawSplineMesh_12(context);
        DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    }

    return (*((AI_UpdateOrders_17() << 2) + &g_a976e0))(context);
}
