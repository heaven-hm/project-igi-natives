// Original IGI.EXE function: Building_Setup (VA 0x00448850; static CFG gate PASS, CFG score 1.000).
#include "Building_Setup.h"
int32_t Building_Setup(void* a1)

{
    DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
    return (*((Render_ComputeNormals_15() << 2) + &g_a976e0))(a1);
}
