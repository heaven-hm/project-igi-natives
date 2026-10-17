// Original IGI.EXE function: CutScene_Cleanup (VA 0x004F6520; static CFG gate PASS, CFG score 1.000).
#include "CutScene_Cleanup.h"
int32_t* CutScene_Cleanup(void* context)

{
    int32_t* data_val = *(context + 0x260);

    if (data_val)
    {
        QTask_FindType(data_val);
        *(context + 0x260) = 0;
    }

    int32_t* data_1 = *(context + 0x25c);

    if (data_1)
    {
        QTask_FindType(data_1);
        *(context + 0x25c) = 0;
    }

    int32_t* data_2 = *(context + 0x264);

    if (data_2)
    {
        QTask_FindType(data_2);
        *(context + 0x264) = 0;
    }

    int32_t* result = *(context + 0x268);

    if (result)
    {
        result = QTask_FindType(result);
        *(context + 0x268) = 0;
    }

    return result;
}
