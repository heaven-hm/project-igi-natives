// IGI native provenance: HumanPlayer_Setup - 0x00410840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410840-HumanPlayer_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_Setup.h"
int32_t HumanPlayer_Setup(void* context)

{
    int32_t* data_val = *(context + 0xde8);

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        *(context + 0xde8) = 0;
    }

    DynObj_TryingToRemoveUnrigi(g_56e210, context);
    Render_DrawSplineMesh_12(context);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    int32_t result = (*((AI_UpdateOrders_17() << 2) + &g_a976e0))(context);
    int32_t* source_1 = *(context + 0xdbc);

    if (!source_1)
        return result;

    return Qtask_UpdateList(source_1);
}
