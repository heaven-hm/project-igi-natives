// Original IGI.EXE function: AI_FireWeapon_17 (VA 0x0045F240; static CFG gate PASS, CFG score 1.000).
#include "AI_FireWeapon_17.h"
int32_t AI_FireWeapon_17(float context)

{
    char result = *(context + 0xd8);

    if (!result)
        return result;

    *(context + 0xd8) = 0;
    Render_DrawBoneMesh_7(context + 0x78, context + 0x68);
    int32_t item_1c_1 = Render_DrawSplineMesh_10(context + 0x68, 0);
    return FX_SmokeEmit_15(context);
}
