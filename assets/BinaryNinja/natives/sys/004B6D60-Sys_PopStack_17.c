// IGI native provenance: Sys_PopStack_17 - 0x004B6D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6D60-Sys_PopStack_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_17.h"
int32_t* Sys_PopStack_17(void* context, int32_t param_2)

{
    if (param_2)
    {
        int32_t data_val = 0;
        data_val = *(context + 0x14);
        int32_t* result = *(context + 8) + data_val * 0x24 + 4;
        *result |= 0x10000;
        return result;
    }

    int32_t data_2 = 0;
    data_2 = *(context + 0x14);
    int32_t temp_val = data_2 * 9;
    int32_t data_3 = *(context + 8);
    *(data_3 + (temp_val << 2) + 4) &= 0xfffeffff;
    return data_3 + (temp_val << 2) + 4;
}
