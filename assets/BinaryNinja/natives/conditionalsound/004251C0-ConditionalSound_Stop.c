// Original IGI.EXE function: ConditionalSound_Stop (VA 0x004251C0; static CFG gate PASS, CFG score 1.000).
#include "ConditionalSound_Stop.h"
int32_t* ConditionalSound_Stop(void* context)

{
    int32_t* result = *(context + 0x120);

    if (result)
    {
        int32_t* data_val = *result;

        if (data_val)
            QTask_FindType(data_val);

        result = Qtask_UpdateList(*(context + 0x120));
        *(context + 0x120) = 0;
        *(context + 0xb2) = 0;
    }

    return result;
}
