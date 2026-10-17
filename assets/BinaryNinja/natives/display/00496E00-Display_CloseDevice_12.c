// Original IGI.EXE function: Display_CloseDevice_12 (VA 0x00496E00; static CFG gate FAIL, CFG score 0.667).
#include "Display_CloseDevice_12.h"
int32_t Display_CloseDevice_12(int32_t context, int32_t param_2, int32_t param_3)

{
    memcpy(&g_5ca160, context, 0x28);
    memcpy(&g_5ca138, param_2, 0x18);
    memcpy(0x676ab8, param_3, 0x18);
}
