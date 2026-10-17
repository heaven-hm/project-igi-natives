// Original IGI.EXE function: QTask_DeleteTask_2 (VA 0x00401BE0; static CFG gate PASS, CFG score 1.000).
#include "QTask_DeleteTask_2.h"
int32_t* QTask_DeleteTask_2(void* context, int16_t param_2)

{
    int32_t* result = *(context + 8);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[7] == param_2)
            return result;

        result = i;
    }

    return nullptr;
}
