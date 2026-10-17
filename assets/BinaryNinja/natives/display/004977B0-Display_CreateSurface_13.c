// Original IGI.EXE function: Display_CreateSurface_13 (VA 0x004977B0; static CFG gate PASS, CFG score 0.917).
#include "Display_CreateSurface_13.h"
int32_t** Display_CreateSurface_13(int32_t context, int32_t param_2)

{
    int32_t* data_val = Display_CloseDevice_14(0x24);
    memcpy(data_val, context, 0x24);
    data_val[1] = Display_SetGammaRamp_4();
    return Display_ClearSurfaces_14(param_2, data_val);
}
