#include "AI_FireWeapon_17.h"
int32_t AI_FireWeapon_17(float a1)

{
    char result = *(a1 + 0xd8);

    if (!result)
        return result;

    *(a1 + 0xd8) = 0;
    Render_DrawBoneMesh_7(a1 + 0x78, a1 + 0x68);
    int32_t v_1c_1 = Render_DrawSplineMesh_10(a1 + 0x68, 0);
    return FX_SmokeEmit_15(a1);
}
