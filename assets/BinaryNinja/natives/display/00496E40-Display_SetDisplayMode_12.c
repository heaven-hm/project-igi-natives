// Original IGI.EXE function: Display_SetDisplayMode_12 (VA 0x00496E40; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode_12.h"
int32_t Display_SetDisplayMode_12(void* context)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* data_1 = *(context + 0x10);
    return (*(*data_1 + 0x48))(data_1);
}
