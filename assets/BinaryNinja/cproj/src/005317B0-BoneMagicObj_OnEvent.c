#include "gi_platform.h"
#include "005317B0-BoneMagicObj_OnEvent.h"
void* BoneMagicObj_OnEvent(void* a1)

{
    Render_DrawSplineMesh_12(a1);
    return DynObj_RegisterSymbol_9(g_a44344, a1);
}
