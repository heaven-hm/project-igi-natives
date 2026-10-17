// Original IGI.EXE function: Script_ExecuteLevelScript_31 (VA 0x004FE610; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_31.h"
double* Script_ExecuteLevelScript_31(void* context, double* param_2)

{
    int32_t i = 0;
    double* result = *(context + 0xf0);

    if (result > 0)
    {
        do
        {
            i += 1;
            result = *(*(context + 0x6c) + (i << 2) - 4);
            *result = *result + *param_2;
            result[1] = param_2[1] + result[1];
            result[2] = result[2] + param_2[2];
        } while (i < *(context + 0xf0));
    }

    return result;
}
