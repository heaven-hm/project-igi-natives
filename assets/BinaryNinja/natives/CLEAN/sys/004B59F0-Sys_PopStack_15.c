// IGI native provenance: Sys_PopStack_15 - 0x004B59F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B59F0-Sys_PopStack_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_15.h"
int32_t* Sys_PopStack_15(char* context, int32_t param_2, int32_t* param_3, int32_t param_4, int32_t param_5, int32_t* param_6)

{
    int32_t data_10 = g_943e28;
    int32_t* result = *(g_943e24 + (data_10 << 2)) * g_943e30 + g_943e20;
    *(g_943e34 + result) = data_10;
    g_943e28 += 1;
    Sys_ResolveSymbol_15(&result[0xe], context);
    char i = result[0xe];

    if (i)
    {
        char* data_3 = &result[0xe];

        do
        {
            char entity_3 = 0x2f;

            if (i != 0x5c)
                entity_3 = *data_3;

            *data_3 = entity_3;
            i = data_3[1];
            data_3 = &data_3[1];
        } while (i);
    }

    int32_t* result_1 = param_3;

    if (!result_1)
        result_1 = result;

    result[0xd] = result_1;
    result[0xa] = param_4;
    result[9] = param_5;
    result[0xc] = 1;
    result[0xb] = 0;
    result[0x8e] = param_2;
    result[8] = Sys_CheckHeap_15(&result[0xe]);
    result[1] = 0;
    *result = 0;
    result[3] = 0;
    result[2] = 0;
    result[5] = &result[6];
    result[7] = &result[5];
    result[6] = 0;
    Camera_SetFieldOfView_33(&g_943e38, result);
    result[4] = result;

    if (!param_6)
    {
        result[0x8f] = 0;
        result[0x90] = 0;
        return result;
    }

    result[0x8f] = *param_6;
    result[0x90] = param_6[1];
    return result;
}
