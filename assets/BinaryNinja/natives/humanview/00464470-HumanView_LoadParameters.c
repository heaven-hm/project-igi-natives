#include "HumanView_LoadParameters.h"
int32_t HumanView_LoadParameters(void* a1)

{
    char result = *(a1 + 0xd9);

    if (!result)
        return result;

    *(a1 + 0xd9) = 0;
    Render_DrawSplineMesh_12(a1);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
}
