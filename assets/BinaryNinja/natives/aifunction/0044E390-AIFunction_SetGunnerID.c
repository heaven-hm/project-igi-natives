// Original IGI.EXE function: AIFunction_SetGunnerID (VA 0x0044E390; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetGunnerID.h"
int32_t AIFunction_SetGunnerID(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetGunnerID(int gunnerId)
// Note: Assigns which mounted-gunner slot this AI mans. Param: gunnerId =
// gunner position id. Use in AI init for turret/mounted-gun NPCs.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    void* objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + 0x3ac8) = valA1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
