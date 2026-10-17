// Original IGI.EXE function: GO_GfxDisp (VA 0x00403950; static CFG gate PASS, CFG score 0.917).
#include "GO_GfxDisp.h"
int32_t GO_GfxDisp(int32_t context, float param_2 )

// Sig: int GO_GfxDisp(int displayMode)
// Note: Sets display-mode selection for the current profile. Param: displayMode
// = mode index from the retail display list (see Display_GetActiveMode/display
// table). Use in config scripts. igi.exe registers it with argc=3 at its site;
// the extra args go unused by the setter itself.
{
    int32_t data_val = Script_GetArg(param_2, 0);
    int32_t temp_val = g_bc2380;
    int32_t item_2c = 1;
    float item_30 = param_2;
    *(temp_val * 0x564 + &g_bc1e30) = data_val;
    *(g_bc2380 * 0x564 + &g_bc1e34) = Script_GetArg(item_30, item_2c);
    int32_t data_2 = Script_GetArg(param_2, 2);
    int32_t temp_3 = g_bc2380;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    *(temp_3 * 0x564 + &g_bc1e38) = data_2;
    memcpy(context, &item_18, 0x18);
    return context;
}
