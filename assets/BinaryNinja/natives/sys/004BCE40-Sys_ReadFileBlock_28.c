// Original IGI.EXE function: Sys_ReadFileBlock_28 (VA 0x004BCE40; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ReadFileBlock_28.h"
int32_t Sys_ReadFileBlock_28(void* context, int32_t param_2, int32_t param_3)

{
    int32_t dest_val = param_2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t dest_1 = *(context + 0x28);
    int32_t data_1 = *(context + 0x1c) - 1;
    *(context + 0x1c) = data_1;
    *(dest_1 + (data_1 << 2)) = param_3;
    int32_t entity_3 = *(context + 0x24);
    uint32_t context_2 = ((~i + 3) & 0xfffffffc) >> 2;
    int32_t dest_3 = *(context + 0x18) - context_2;
    *(context + 0x18) = dest_3;
    int32_t dest_4 = param_2;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool flag_1_1 = 0 != *dest_4;
        dest_4 += 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    int32_t entity_4 = ~i_1;
    int32_t source_2;
    int32_t dest_7;
    dest_7 = memcpy(entity_3 + (dest_3 << 2), dest_4 - entity_4, entity_4 & 0xfffffffc);
    memcpy(dest_7, source_2, entity_4 & 3);
    int32_t entity_8 = *(context + 0x24);
    int32_t result = *(context + 0x18) - 1;
    *(context + 0x18) = result;
    *(entity_8 + (result << 2)) = context_2;
    return result;
}
