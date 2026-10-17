// Original IGI.EXE function: Physics_UpdateForces_6 (VA 0x00507EC0; static CFG gate PASS, CFG score 1.000).
#include "Physics_UpdateForces_6.h"
int16_t* Physics_UpdateForces_6(int32_t* context, int32_t param_2)

{
    context[6] = context[7];
    int32_t data_1 = *context;

    if (data_1)
        data_1(context, param_2);

    int32_t temp_val = context[7];
    int32_t i = 0;
    context[5] = ~context[6] & temp_val;
    int16_t* result = &context[8];

    do
    {
        if (!(temp_val & 1 << (i & 0x1f)))
            *result = 0;
        else
            *result += 1;

        i += 1;
        result = &result[1];
    } while (i < 0x20);

    return result;
}
