#include "gi_platform.h"
#include "00459EC0-HumanSoldier_Setup.h"
int32_t HumanSoldier_Setup(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0xd01)))
    {
        Render_DrawSplineMesh_12(a1);
        DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    }

    return ((int(*)())(uintptr_t)(*((AI_UpdateOrders_17() << 2) + &g_a976e0)))(a1);
}
