// Original IGI.EXE function: QTask_RemoveEventCallback (VA 0x00401400; static CFG gate PASS, CFG score 1.000).
#include "QTask_RemoveEventCallback.h"
int32_t QTask_RemoveEventCallback(int16_t context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val = g_567c6c + 1;
    g_536148 += 1;
    uint32_t source_3 = param_2 * 0x180;
    g_567c6c = entity_val;
    uint32_t data_4 = context + source_3;
    *((data_4 << 2) + &g_a96ae0) = param_3;
    *(data_4 + 0x54ff34) = entity_val == 1;
    int32_t context_val = 0;

    for (int16_t* i = &g_af5ee8; i < 0xafa6e8; )
    {
        if (*(i + 0x1d) && *i == context && !*(source_3 + context_val + 0x54ff34))
            QTask_RemoveEventCallback(context_val, param_2, param_3);

        i = &i[0x18];
        context_val += 1;
    }

    QTask_DeleteTask();
    int32_t result = g_567c6c - 1;
    g_567c6c = result;
    return result;
}
