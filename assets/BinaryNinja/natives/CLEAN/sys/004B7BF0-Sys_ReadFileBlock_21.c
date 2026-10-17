// IGI native provenance: Sys_ReadFileBlock_21 - 0x004B7BF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7BF0-Sys_ReadFileBlock_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_21.h"
int32_t Sys_ReadFileBlock_21(void* context)

{
    int32_t result = 0;
    int32_t i_2 = *(context + 6);

    if (i_2 > 0)
    {
        int16_t* temp_val = *(context + 0xc);
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            int32_t result_1 = *temp_val;

            if (result_1 > result)
                result = result_1;

            temp_val = &temp_val[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
