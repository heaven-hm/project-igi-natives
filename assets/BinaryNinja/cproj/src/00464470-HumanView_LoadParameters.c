#include "gi_platform.h"
#include "00464470-HumanView_LoadParameters.h"
int32_t HumanView_LoadParameters(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0xd9));

    if (!result)
        return result;

    (*(int32_t*)(uintptr_t)(a1 + 0xd9)) = 0;
    Render_DrawSplineMesh_12(a1);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
}
