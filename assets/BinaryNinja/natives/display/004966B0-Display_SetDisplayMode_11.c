// Original IGI.EXE function: Display_SetDisplayMode_11 (VA 0x004966B0; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode_11.h"
int32_t* Display_SetDisplayMode_11(int32_t* context, int32_t** param_2)

{
    int32_t* result = context;
    void* entity_val = *result;

    if (entity_val)
        *(entity_val + 4) = result[1];

    int32_t* entity_1 = result[1];

    if (entity_1)
        *entity_1 = *result;

    if (*param_2 == result)
    {
        result = *result;
        *param_2 = result;
    }

    return result;
}
