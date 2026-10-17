// IGI native provenance: FX_DebrisSpawn_13 - 0x004896C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004896C0-FX_DebrisSpawn_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_13.h"
char* FX_DebrisSpawn_13(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    *context = param_2;
    context[4] = param_3;
    context[5] = param_4;
    context[3] = g_5c8b08;
    int32_t data_4 = (g_5c8b08 + 1) & 0x80000003;

    if (data_4 < 0)
        data_4 = ((data_4 - 1) | 0xfffffffc) + 1;

    g_5c8b08 = data_4;
    int32_t data_8;
    int32_t temp_2;
    temp_2 = HIGHD(param_5);
    data_8 = LOWD(param_5);
    context[7] = 0;
    context[0xa] = 0;
    context[1] = (data_8 + (temp_2 & 3)) >> 2;
    int32_t data_12;
    int32_t temp_4;
    temp_4 = HIGHD(param_6);
    data_12 = LOWD(param_6);
    context[2] = (data_12 + (temp_4 & 3)) >> 2;
    context[6] = &context[7];
    context[8] = &context[6];
    context[0xb] = &context[9];
    context[9] = &context[0xa];
    char* result = context + 0x5a;
    int32_t i_1 = 0xc0;
    int32_t i;

    do
    {
        *result = 0;
        result = &result[0x30];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
