#include "gi_platform.h"
#include "00448850-Building_Setup.h"
int32_t Building_Setup(void* a1)

{
    DynObj_RegisterSymbol_9((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1);
    return ((int(*)())(uintptr_t)(*((Render_ComputeNormals_15() << 2) + &g_a976e0)))(a1);
}
