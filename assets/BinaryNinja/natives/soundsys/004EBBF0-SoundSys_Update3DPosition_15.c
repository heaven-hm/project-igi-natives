// Original IGI.EXE function: SoundSys_Update3DPosition_15 (VA 0x004EBBF0; static CFG gate FAIL, CFG score 0.750).
#include "SoundSys_Update3DPosition_15.h"
int32_t SoundSys_Update3DPosition_15(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    memcpy(context + 0x20, param_2, 0x28);
    memcpy(context + 0x48, param_3, 0x18);
    Display_CloseDevice_12(param_2, param_3, &item_18);
    return param_3;
}
