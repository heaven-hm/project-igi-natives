// Original IGI.EXE function: Display_OpenDevice_6 (VA 0x00491EA0; static CFG gate PASS, CFG score 1.000).
#include "Display_OpenDevice_6.h"
int32_t Display_OpenDevice_6(int32_t context, int32_t param_2)

{
    int32_t item_c = context;
    int32_t result;
    int32_t* item_8 = &result;
    int32_t item_4 = param_2;
    int32_t entity_2 = *((g_542334 << 2) + &g_a94e84);
    result = 0;

    if (!entity_2)
        return 0;

    entity_2(&item_c);
    return result;
}
