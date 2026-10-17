// Original IGI.EXE function: QTask_InitContext_2 (VA 0x00401E30; static CFG gate PASS, CFG score 1.000).
#include "QTask_InitContext_2.h"
void* QTask_InitContext_2(void* context, int32_t param_2, int32_t param_3)

{
    void* result = context;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            result = QTask_ProcessQueue_2(i, param_2, param_3);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
