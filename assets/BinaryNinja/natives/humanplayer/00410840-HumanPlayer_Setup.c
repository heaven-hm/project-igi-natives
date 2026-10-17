// Original IGI.EXE function: HumanPlayer_Setup (VA 0x00410840; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_Setup.h"
int32_t HumanPlayer_Setup(void* a1)

{
    int32_t* valA = *(a1 + 0xde8);

    if (valA)
    {
        Qtask_UpdateList(valA);
        *(a1 + 0xde8) = 0;
    }

    DynObj_TryingToRemoveUnrigi(g_56e210, a1);
    Render_DrawSplineMesh_12(a1);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    int32_t result = (*((AI_UpdateOrders_17() << 2) + &g_a976e0))(a1);
    int32_t* srcS1 = *(a1 + 0xdbc);

    if (!srcS1)
        return result;

    return Qtask_UpdateList(srcS1);
}
