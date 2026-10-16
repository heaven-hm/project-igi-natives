#include "ViewportQTask_LoadParameters.h"
int32_t ViewportQTask_LoadParameters(void* a1)

{
    DynObj_CreateMagicObject_4(*(a1 + 0xc4));
    g_a5ec60 -= 1;
    Display_SwapBuffers_13(a1 + 0x54);
    return Terrain_UpdateWaterWaves_8(*(a1 + 0xac));
}
