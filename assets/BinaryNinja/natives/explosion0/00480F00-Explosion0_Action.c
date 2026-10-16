#include "Explosion0_Action.h"
void* Explosion0_Action(void* a1)

{
    Render_SkinBones_2(a1 + 0xc0);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
}
