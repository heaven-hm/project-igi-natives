// Original IGI.EXE function: BoneMagicObj_OnEvent (VA 0x005317B0; static CFG gate PASS, CFG score 1.000).
#include "BoneMagicObj_OnEvent.h"
void* BoneMagicObj_OnEvent(void* context)

{
    Render_DrawSplineMesh_12(context);
    return DynObj_RegisterSymbol_9(g_a44344, context);
}
