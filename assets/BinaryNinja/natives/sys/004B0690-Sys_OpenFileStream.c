// IGI native provenance: Sys_OpenFileStream - 0x004B0690 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0690-Sys_OpenFileStream.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream.h"
int32_t Sys_OpenFileStream(int32_t context, int32_t* param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    int32_t data_val = *param_2;

    if (data_val)
    {
        int32_t entity_1 = data_val * 5;
        void* entity_2 = context + (entity_1 << 2);

        if (*(context + (entity_1 << 2) - 8) == param_3 && *(entity_2 - 0xc) == param_4 - 1
            && *(entity_2 - 0x14) == param_6)
        {
            *(entity_2 - 4) += 1;
            int32_t result = *(entity_2 - 0xc) + 1;
            *(entity_2 - 0xc) = result;
            return result;
        }
    }

    int32_t* entity_4 = context + data_val * 0x14;
    entity_4[4] = 0;
    entity_4[3] = param_3;
    entity_4[2] = param_4;
    entity_4[1] = param_5;
    *entity_4 = param_6;

    if (g_93aad8 <= data_val + 1)
        g_93aad8 = data_val + 1;

    *param_2 = data_val + 1;
    return data_val + 1;
}
