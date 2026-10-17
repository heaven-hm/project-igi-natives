// IGI native provenance: Sys_OpenFileStream_7 - 0x004B1E90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1E90-Sys_OpenFileStream_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_7.h"
char* Sys_OpenFileStream_7(char* context, int32_t param_2, int32_t param_3)

{
    int32_t dest_val = param_3;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_val = ~i;
    char* entity_1 = entity_val - 1;

    if (entity_val != 1)
    {
        while (entity_1[param_3] != 0x2e)
        {
            char* f1_1 = entity_1;
            entity_1 -= 1;

            if (f1_1 == 1)
                break;
        }
    }

    char* result = &entity_1[param_3];

    if (!context)
        return result;

    Camera_ApplyLineFilter_5(context, result, param_2 - 1);
    context[param_2 - 1] = 0;
    return result;
}
