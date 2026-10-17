// Original IGI.EXE function: Sys_CloseFileStream_20 (VA 0x004B75C0; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_20.h"
int32_t* Sys_CloseFileStream_20(void* context, void* param_2)

{
    Sys_PopStack_17(param_2, 1);
    int32_t* result = Sys_DispatchOpcode_20(*(context + 0x10), *(context + 0x14), param_2);
    int32_t i = 0;
    int32_t entity_1 = 0;

    if (*(context + 0x14) <= 0)
        return result;

    int32_t context_val;
    int32_t item_10 = context_val;

    do
    {
        int32_t j = 0;

        if (*(context + 0x10) > 0)
        {
            char* temp_4 = (entity_1 << 4) + context + 0x24;

            do
            {
                char context_1 = *temp_4;
                temp_4 = &temp_4[0x10];
                *(entity_1 + result + 0x10) = context_1;
                entity_1 += 1;
                j += 1;
            } while (j < *(context + 0x10));
        }

        i += 1;
    } while (i < *(context + 0x14));

    return result;
}
