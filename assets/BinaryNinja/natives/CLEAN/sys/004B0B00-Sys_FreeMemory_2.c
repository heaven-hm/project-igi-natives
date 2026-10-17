// IGI native provenance: Sys_FreeMemory_2 - 0x004B0B00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0B00-Sys_FreeMemory_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_2.h"
int32_t Sys_FreeMemory_2(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    int32_t data_val = param_4;

    if (data_val < 4)
        data_val = 4;

    context[5] = param_2;
    int32_t dest_1 = (param_2 + data_val + 3) & ~(data_val - 1);
    void* data_1 = Mem_Alloc((dest_1 + 4) * param_3, data_val);
    *context = data_1;
    int32_t result = 0;
    context[1] = dest_1 * param_3 + data_1;
    context[3] = param_3;
    context[4] = dest_1;
    context[2] = 0;

    if (param_3 > 0)
    {
        do
        {
            *(context[1] + (result << 2)) = result;
            result += 1;
        } while (result < param_3);
    }

    return result;
}
