// Original IGI.EXE function: HumanSoldier_Setup (VA 0x00459EC0; static CFG gate PASS, CFG score 1.000).
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
