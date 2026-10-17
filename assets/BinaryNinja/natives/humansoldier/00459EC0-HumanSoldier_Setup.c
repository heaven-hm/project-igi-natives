// Original IGI.EXE function: HumanSoldier_Setup (VA 0x00459EC0; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldier_Setup.h"
int32_t HumanSoldier_Setup(void* a1)

{
    if (*(a1 + 0xd01))
    {
        Render_DrawSplineMesh_12(a1);
        DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    }

    return (*((AI_UpdateOrders_17() << 2) + &g_a976e0))(a1);
}
