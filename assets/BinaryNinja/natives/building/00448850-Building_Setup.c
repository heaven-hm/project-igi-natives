// Original IGI.EXE function: Building_Setup (VA 0x00448850; static CFG gate PASS, CFG score 1.000).
#include "Building_Setup.h"
int32_t Building_Setup(void* context)

{
    DynObj_RegisterSymbol_9(*(context + 0x68), context);
    return (*((Render_ComputeNormals_15() << 2) + &g_a976e0))(context);
}
