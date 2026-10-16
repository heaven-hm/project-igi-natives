#include "Building_Setup.h"
int32_t Building_Setup(void* a1)

{
    DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
    return (*((Render_ComputeNormals_15() << 2) + &g_a976e0))(a1);
}
