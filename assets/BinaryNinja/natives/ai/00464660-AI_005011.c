#include "AI_005011.h"
int32_t AI_005011(int32_t* a1)

{
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    a1[0x36] = 1;
    *(a1 + 0xd9) = 1;
    int32_t* valA = DynObj_Missing("005_01_1");
    int32_t v_2c = Level_StartMission_4();
    Render_DrawBoneMesh_12(a1, 5, valA);
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &v_18, a1[0x28], 2);
    int32_t result = Render_SetupLighting_9(&a1[0x1a], 0, 2, 0);
    a1[0x35] = 0;
    return result;
}
