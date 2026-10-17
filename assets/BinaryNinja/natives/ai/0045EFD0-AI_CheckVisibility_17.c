// Original IGI.EXE function: AI_CheckVisibility_17 (VA 0x0045EFD0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_17.h"
int32_t* AI_CheckVisibility_17(void* context)

{
    int32_t* data_val = *(context + 0x768);

    if (data_val)
        Qtask_UpdateList(data_val);

    int32_t* data_1 = *(context + 0x7b0);

    if (data_1)
        Qtask_UpdateList(data_1);

    int32_t* data_2 = *(context + 0x7b4);

    if (data_2)
        Qtask_UpdateList(data_2);

    int32_t* data_3 = *(context + 0x838);

    if (data_3)
        Qtask_UpdateList(data_3);

    int32_t* result = *(context + 0x83c);

    if (result)
        result = Qtask_UpdateList(result);

    int32_t* source_1 = *(context + 0x840);

    if (!source_1)
        return result;

    return Qtask_UpdateList(source_1);
}
