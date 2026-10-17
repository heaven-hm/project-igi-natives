// Original IGI.EXE function: Weapon_UpdateZoom_6 (VA 0x0047B170; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateZoom_6.h"
int32_t* Weapon_UpdateZoom_6(int32_t* context, int32_t param_2)

{
    if (!context[0x25])
        return QTask_FindType(context);

    context[0x1a] = param_2;
    return context;
}
