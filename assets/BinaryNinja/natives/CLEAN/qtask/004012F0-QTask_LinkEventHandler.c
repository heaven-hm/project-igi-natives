// IGI native provenance: QTask_LinkEventHandler - 0x004012F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004012F0-QTask_LinkEventHandler.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "QTask_LinkEventHandler.h"
int32_t* QTask_LinkEventHandler(int32_t context, int16_t param_2)

{
    char context_val = 0;
    g_567c58 += 1;
    uint32_t dest_1 = param_2 * 0x30;

    if (!*(dest_1 + 0xaf5f04))
        goto label_401364;

    int32_t data_3 = *(dest_1 + 0xaf5ef4);
    int32_t* result;

    if (data_3 >= *(dest_1 + 0xaf5ef8))
    {
        context_val = 0;
    label_401364:
        Qhash_Init(1);
        result = Mem_Alloc(*(dest_1 + 0xaf5ee4), 4);
        Qhash_Reset();
    }
    else
    {
        context_val = 1;
        result = *(*(dest_1 + 0xaf5ef0) + (data_3 << 2)) * *(dest_1 + 0xaf5efc) + *(dest_1 + 0xaf5eec);
        *(*(dest_1 + 0xaf5f00) + result) = data_3;
        *(dest_1 + 0xaf5ef4) += 1;
    }

    result[1] = 0;
    *result = 0;
    result[5] = context;
    *(result + 0x1e) = context_val;
    result[7] = param_2;
    result[6] = 0;
    result[2] = &result[3];
    result[3] = 0;
    result[4] = &result[2];
    return result;
}
