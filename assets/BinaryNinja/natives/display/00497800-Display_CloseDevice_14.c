// Original IGI.EXE function: Display_CloseDevice_14 (VA 0x00497800; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_14.h"
int32_t Display_CloseDevice_14(int32_t context)

{
    int32_t result = g_6e5b98;
    int32_t entity_val = result + context;
    int32_t temp_1 = g_6e5ba0;
    g_6e5b98 = entity_val;

    if (entity_val - 0x684118 > temp_1)
        g_6e5ba0 = entity_val - 0x684118;

    return result;
}
