// Original IGI.EXE function: AIFunction_SetGunnerID (VA 0x0044E390; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetGunnerID.h"
int32_t AIFunction_SetGunnerID(int32_t context, float param_2 )

// Sig: void AIFunction_SetGunnerID(int gunnerId)
// Note: Assigns which mounted-gunner slot this AI mans. Param: gunnerId =
// gunner position id. Use in AI init for turret/mounted-gun NPCs.
{
    int32_t data_1 = Script_GetArg(param_2, 0);
    void* entity_val = g_5bda58;
    int32_t item_18 = 1;
    *(entity_val + 0x3ac8) = data_1;
    int32_t item_10 = 0;
    int32_t item_c = 0x3ff00000;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
