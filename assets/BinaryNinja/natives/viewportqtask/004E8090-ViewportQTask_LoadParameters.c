// Original IGI.EXE function: ViewportQTask_LoadParameters (VA 0x004E8090; static CFG gate PASS, CFG score 1.000).
#include "ViewportQTask_LoadParameters.h"
int32_t ViewportQTask_LoadParameters(void* context)

{
    DynObj_CreateMagicObject_4(*(context + 0xc4));
    g_a5ec60 -= 1;
    Display_SwapBuffers_13(context + 0x54);
    return Terrain_UpdateWaterWaves_8(*(context + 0xac));
}
