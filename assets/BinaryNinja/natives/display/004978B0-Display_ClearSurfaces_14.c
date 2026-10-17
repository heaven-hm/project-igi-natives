// Original IGI.EXE function: Display_ClearSurfaces_14 (VA 0x004978B0; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_14.h"
int32_t** Display_ClearSurfaces_14(int32_t context, int32_t* param_2)

{
    int32_t entity_val = g_bcabe4;
    int32_t data_val = context * 3;
    int32_t** result = entity_val + (data_val << 2);
    *param_2 = *(entity_val + (data_val << 2));
    *result = param_2;
    return result;
}
