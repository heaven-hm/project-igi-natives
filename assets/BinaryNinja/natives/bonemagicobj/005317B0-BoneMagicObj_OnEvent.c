// Original IGI.EXE function: BoneMagicObj_OnEvent (VA 0x005317B0; static CFG gate PASS, CFG score 1.000).
#include "BoneMagicObj_OnEvent.h"
void* BoneMagicObj_OnEvent(void* a1)

{
    Render_DrawSplineMesh_12(a1);
    return DynObj_RegisterSymbol_9(g_a44344, a1);
}
