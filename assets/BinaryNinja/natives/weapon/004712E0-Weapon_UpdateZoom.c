// Original IGI.EXE function: Weapon_UpdateZoom (VA 0x004712E0; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_UpdateZoom.h"
void* Weapon_UpdateZoom(void* context, int32_t param_2, int32_t param_3)

{
    memset(context, 0, 0x14);
    *(context + 0x10) = param_2;
    *(context + 8) = param_3;
    return context;
}
