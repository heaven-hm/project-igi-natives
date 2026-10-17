// Original IGI.EXE function: HumanView_LoadParameters (VA 0x00464470; static CFG gate PASS, CFG score 1.000).
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
